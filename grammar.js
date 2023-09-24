// eslint-disable arrow-parens
// eslint-disable camelcase
// eslint-disable-next-line spaced-comment
/// <reference types="tree-sitter-cli/dsl" />
// / @ts-check

// Command Statement.
//
// TODO:
// - [ ] FROM
// - [ ] RUN
// - [ ] COPY
// - [ ] ARG
// - [ ] SAVE ARTIFACT
// - [ ] SAVE IMAGE
// - [ ] BUILD
// - [ ] VERSION
// - [ ] PROJECT
// - [ ] GIT CLONE
// - [ ] FROM DOCKERFILE
// - [ ] WITH DOCKER
// - [ ] IF
// - [ ] FOR
// - [ ] WAIT
// - [ ] LET
// - [ ] SET
// - [ ] TRY
// - [ ] CACHE
// - [ ] LOCALLY
// - [ ] COMMAND
// - [ ] DO
// - [ ] IMPORT
// - [ ] CMD
// - [ ] LABEL
// - [ ] EXPOSE
// - [ ] ENV
// - [ ] ENTRYPOINT
// - [ ] VOLUME
// - [ ] USER
// - [ ] WORKDIR
// - [ ] HEALTHCHECK
// - [ ] HOST
// - [ ] PIPELINE
// - [ ] TRIGGER
// - [ ] SHELL
// - [ ] ADD
// - [ ] ONBUILD
// - [ ] STOPSIGNAL

const
  newline = /\r?\n/,
  whitespace = /[ \t]/,
  char = /[a-z]/,
  digit = /[0-9]/;

module.exports = grammar({
  name: 'earthfile',
  extras: (_$) => [newline, whitespace],
  rules: {
    program: ($) =>
      seq(
        optional($.version_statement),
        optional($.base_statements),
        optional($.targets),
      ),

    version_statement: ($) =>
      seq(
        'VERSION',
        field('version', alias(
          token.immediate(seq(digit, optional(seq('.', repeat1(digit))))),
          $.version_number),
        ),
      ),

    base_statements: ($) => repeat1($.statement),

    statement: ($) =>
      choice(
        $.from_statement,
      ),

    from_statement: ($) =>
      seq(
        'FROM',
        choice($.image_name, $.target_ref),
      ),

    image_name: (_$) =>
      seq(
        token.immediate(seq(char, repeat(choice(char, digit, '-')))),
        optional(
          seq(
            ':',
            token.immediate(seq(char, repeat(choice(char, digit, '-', '.')))),
          ),
        ),
      ),

    target_ref: ($) =>
      seq(
        '+',
        field('ref',
          alias(
            token.immediate(seq(char, repeat(choice(char, digit, '-')))),
            $.name,
          ),
        ),
      ),

    targets: ($) => repeat1($.target),

    target: ($) =>
      seq(
        field('header', $.target_header),
        field('block', $.target_block),
      ),

    target_header: ($) =>
      seq(
        field(
          'name',
          alias(
            token.immediate(seq(char, repeat(choice(char, digit, '-')))),
            $.name,
          ),
        ),
        ':',
        newline,
      ),

    target_block: ($) =>
      repeat1(
        seq(
          $._indent, $.statement,
        ),
      ),

    _indent: (_$) => seq(whitespace, repeat(whitespace)),
  },
});
