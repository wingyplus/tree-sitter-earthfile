/// <reference types="tree-sitter-cli/dsl" />
/// @ts-check

const NL = /[ \t]*(?:\n|\r\n)/;

module.exports = grammar({
  name: 'earthfile',
  rules: {
    program: $ => seq(
      optional($.version),
      optional($.stmts),
      optional($.targets),
    ),

    version: $ => seq('VERSION', $._whitespace, field('version_number', $.version_number)),
    version_number: _$ => seq(/[0-9]/, optional(seq('.', repeat1(/[0-9]/)))),

    // Statements

    stmts: $ => seq(
      $.stmt,
      repeat($.stmt)
    ),

    // TODO: add more statements.
    stmt: $ => choice($.command_stmt),

    // TODO: add more statements.
    command_stmt: $ => choice($.from_stmt, $.expose_stmt),

    //
    // Command Statement.
    //
    // TODO:
    // - RUN
    // - COPY
    // - ARG
    // - SAVE ARTIFACT
    // - SAVE IMAGE
    // - BUILD
    // - VERSION
    // - PROJECT
    // - GIT CLONE
    // - FROM DOCKERFILE
    // - WITH DOCKER
    // - IF
    // - FOR
    // - WAIT
    // - LET
    // - SET
    // - TRY
    // - CACHE
    // - LOCALLY
    // - COMMAND
    // - DO
    // - IMPORT
    // - CMD
    // - LABEL
    // - EXPOSE
    // - ENV
    // - ENTRYPOINT
    // - VOLUME
    // - USER
    // - WORKDIR
    // - HEALTHCHECK
    // - HOST
    // - PIPELINE
    // - TRIGGER
    // - SHELL
    // - ADD
    // - ONBUILD
    // - STOPSIGNAL
    from_stmt: $ => seq('FROM', $._whitespace, $.target_ref),

    expose_stmt: $ => seq('EXPOSE', $.port_protocol, repeat(seq(' ', $.port_protocol))),

    port_protocol: $ => seq($.port, optional(seq('/', $.protocol))),

    port: _$ => /\d+/,
    protocol: _$ => /[a-z]+/,

    // Targets

    targets: $ => seq(
      $.target_or_user_command,
      repeat($.target_or_user_command)
    ),

    // TODO: user command.
    target_or_user_command: $ => $.target,

    target: $ =>
      seq(
        seq($.target_header, NL),
        field('body', optional($.target_block))
      ),
    target_header: $ =>
      seq(
        field('name', alias(/[a-z][a-zA-Z0-9\-.]*/, $.name)),
        ':'
      ),
    target_block: $ =>
      seq($._indent, $.stmt, repeat(seq(NL, $._indent, $.stmt)), NL),

    // TODO: relative ref
    // TODO: absolute ref
    // TODO: remote ref
    target_ref: $ => choice($.local_ref, $.classical_ref),

    local_ref: $ =>
      seq(
        '+',
        field('target', alias(/[a-z][a-z0-9\-]*/, $.name))
      ),

    // Borrow from https://github.com/camdencheek/tree-sitter-dockerfie.
    classical_ref: $ =>
      seq(
        field("name", alias(/[a-z][a-z0-9\-]*/, $.name)),
        optional(
          seq(
            ':',
            field("tag", alias(/[a-z0-9\-.]*/, $.tag))
          )
        ),
      ),

    _indent: $ => seq($._whitespace, repeat($._whitespace)),
    _whitespace: _$ => /[ \t]/,
  }
})
