/// <reference types="tree-sitter-cli/dsl" />
/// @ts-check

const NL = /[ \t]*(?:\n|\r\n)/;
const WS = /[ \t]/;

module.exports = grammar({
  name: 'earthfile',
  conflicts: $ => [
    [$.program],
    [$.stmts],
  ],
  rules: {
    program: $ => seq(
      repeat(NL),
      optional($.version),
      repeat1(NL),
      optional(seq($.stmts, NL)),
      repeat(NL),
    ),

    version: _$ => prec.left(seq(alias('VERSION', 'VERSION'), WS, '0.7')),

    stmts: $ => seq(
      $.stmt,
      repeat(seq(NL, repeat(NL), $.stmt))
    ),

    // TODO: add more statements.
    stmt: $ => choice($.command_stmt),

    // TODO: add more statements.
    command_stmt: $ => choice($.from_stmt),

    //
    // Command Statement.
    //
    from_stmt: $ => prec.left(seq('FROM', WS, $.target_ref)),

    // TODO: relative ref
    // TODO: absolute ref
    // TODO: remote ref
    target_ref: $ => choice($.local_ref, $.classical_ref),

    local_ref: $ => seq('+', field('target', $.local_ref_name)),
    local_ref_name: _$=> seq(/[a-z]/, repeat(/[a-z0-9\-.]/)),

    // Borrow from https://github.com/camdencheek/tree-sitter-dockerfie.
    classical_ref: $ =>
      seq(
        field("name", $.image_name),
        field("tag", optional($.image_tag)),
      ),
    image_name: _$ => seq(/[a-z]/, repeat(/[a-z0-9\-]/)),
    image_tag: _$ =>
      seq(
        ':',
        repeat(/[a-z0-9\-.]/)
      ),
  }
})
