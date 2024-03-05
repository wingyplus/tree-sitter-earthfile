module.exports = grammar({
  name: "earthfile",

  externals: ($) => [$._indent, $._dedent],

  extras: ($) => [/\s+/, "\\\n"],

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.version_command,
          $.from_command,
          $.arg_command,
          $.target,
          $.comment
        )
      ),

    version_command: ($) =>
      seq(
        "VERSION",
        field("feature", repeat($.feature_flag)),
        field("version", $.version_major_minor),
        optional($.comment),
        "\n"
      ),

    arg_command: ($) =>
      seq(
        "ARG",
        optional(field("required", $.required)),
        optional(field("global", $.global)),
        field("name", $.identifier),
        optional(
          seq(
            token.immediate("="),
            choice(
              field("default_value", $._string),
              field("default_value_expr", $.expr)
            )
          )
        ),
        optional($.comment),
        "\n"
      ),

    from_command: ($) =>
      seq(
        "FROM",
        choice(
          $.image_spec,
          seq(
            repeat(
              choice(
                seq(
                  "--platform",
                  token.immediate(/[ =]/),
                  field("platform", $._string)
                ),
                $.allow_privileged
              )
            ),
            $.target_ref,
            repeat($.build_arg_flag)
          ),
          // optional($.comment),
          "\n"
        )
      ),

    run_command: ($) =>
      seq(
        "RUN",
        repeat(
          choice(
            seq(
              "--secret",
              token.immediate(/[ =]/),
              field("secret", $._string)
            ),
            seq("--mount", token.immediate(/[ =]/), field("mount", $._string)),
            $.push,
            $.no_cache,
            $.entrypoint,
            $.privileged,
            $.network_none,
            $.ssh
          )
        ),
        optional(" -- "),
        field("command", $.shell_fragment),
        // optional($.comment),
        "\n"
      ),

    anything_but_newline: ($) => /[^\\n]+/,

    target: ($) =>
      seq(
        field("name", $.identifier),
        ":",
        optional($.comment),
        "\n",
        optional(
          seq(
            $._indent,
            repeat(choice($.from_command, $.arg_command, $.run_command)),
            $._dedent
          )
        )
      ),

    version_major_minor: ($) => /[0-9]+\.[0-9]+/,
    feature_flag: ($) => /--[a-zA-Z0-9\-]+/,
    build_arg_flag: ($) =>
      seq(
        "--",
        field("name", $.option_identifier),
        token.immediate(/[ =]/),
        field("value", $._string)
      ),
    option: ($) =>
      seq(
        "--",
        field("name", $.option_identifier),
        optional(seq(token.immediate("="), field("value", $._string)))
      ),
    option_identifier: ($) => token.immediate(/[a-zA-Z0-9\-]+/),

    double_quoted_string: ($) =>
      seq(
        '"',
        repeat(
          choice(
            token.immediate(/[^"\n\\\$]+/),
            alias($.double_quoted_escape_sequence, $.escape_sequence),
            "\\",
            $._immediate_expansion
          )
        ),
        '"'
      ),

    // same as double_quoted_string but without $-expansions:
    single_quoted_string: ($) =>
      seq(
        "'",
        repeat(
          choice(
            token.immediate(/[^'\n\\]+/),
            alias($.single_quoted_escape_sequence, $.escape_sequence),
            "\\"
          )
        ),
        "'"
      ),

    unquoted_string: ($) =>
      repeat1(
        choice(
          token.immediate(/[^\s\n\"'\\\$]+/),
          token.immediate("\\ "),
          $._immediate_expansion
        )
      ),

    double_quoted_escape_sequence: ($) =>
      token.immediate(choice("\\\\", '\\"')),

    single_quoted_escape_sequence: ($) =>
      token.immediate(choice("\\\\", "\\'")),

    expansion: ($) => seq("$", $._expansion_body),

    // we have 2 rules b/c aliases don't work as expected on seq() directly
    _immediate_expansion: ($) => alias($._imm_expansion, $.expansion),
    _imm_expansion: ($) => seq(token.immediate("$"), $._expansion_body),

    _expansion_body: ($) =>
      choice(
        $.variable,
        seq(
          token.immediate("{"),
          alias(token.immediate(/[^\}]+/), $.variable),
          token.immediate("}")
        )
      ),

    variable: ($) => token.immediate(/[a-zA-Z_][a-zA-Z0-9_]*/),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_\-]*/,

    comment: ($) => /#.*/,

    required: ($) => "--required",
    global: ($) => "--global",
    allow_privileged: ($) => "--allow-privileged",
    push: ($) => "--push",
    no_cache: ($) => "--no-cache",
    entrypoint: ($) => "--entrypoint",
    privileged: ($) => "--privileged",
    network_none: ($) => "--network=none",
    ssh: ($) => "--ssh",

    expr: ($) => /\$\(.+\)/,

    target_ref: ($) => seq("+", field("name", $.identifier)),

    image_spec: ($) =>
      seq(
        field("name", $.image_name),
        field("tag", optional($.image_tag)),
        field("digest", optional($.image_digest))
      ),

    image_name: ($) =>
      seq(
        choice(/[^@:\s\$-]/, $.expansion),
        repeat(choice(token.immediate(/[^@:\s\$]+/), $._immediate_expansion))
      ),

    image_tag: ($) =>
      seq(
        token.immediate(":"),
        repeat1(choice(token.immediate(/[^@\s\$]+/), $._immediate_expansion))
      ),

    image_digest: ($) =>
      seq(
        token.immediate("@"),
        repeat1(
          choice(token.immediate(/[a-zA-Z0-9:]+/), $._immediate_expansion)
        )
      ),

    _string: ($) =>
      choice($.double_quoted_string, $.single_quoted_string, $.unquoted_string),

    shell_fragment: ($) =>
      repeat1(
        choice(
          // A shell fragment is broken into the same tokens as other
          // constructs because the lexer prefers the longer tokens
          // when it has a choice. The example below shows the tokenization
          // of the --mount parameter.
          //
          //   RUN --mount=foo=bar,baz=42 ls --all
          //       ^^     ^   ^   ^   ^
          //         ^^^^^ ^^^ ^^^ ^^^ ^^
          //       |--------param-------|
          //                              |--shell_command--|
          //
          /[,=-]/,
          /[^\\\[\n#\s,=-][^\\\n]*/,
          /\\[^\n,=-]/
        )
      ),
  },
});
