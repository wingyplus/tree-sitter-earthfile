#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 1
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_VERSION = 1,
  aux_sym_version_statement_token1 = 2,
  anon_sym_FROM = 3,
  aux_sym_image_name_token1 = 4,
  anon_sym_COLON = 5,
  aux_sym_image_name_token2 = 6,
  anon_sym_PLUS = 7,
  aux_sym_target_header_token1 = 8,
  aux_sym__indent_token1 = 9,
  sym_program = 10,
  sym_version_statement = 11,
  sym_base_statements = 12,
  sym_statement = 13,
  sym_from_statement = 14,
  sym_image_name = 15,
  sym_target_ref = 16,
  sym_targets = 17,
  sym_target = 18,
  sym_target_header = 19,
  sym_target_block = 20,
  sym__indent = 21,
  aux_sym_base_statements_repeat1 = 22,
  aux_sym_targets_repeat1 = 23,
  aux_sym_target_block_repeat1 = 24,
  aux_sym__indent_repeat1 = 25,
  alias_sym_name = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_VERSION] = "VERSION",
  [aux_sym_version_statement_token1] = "version_number",
  [anon_sym_FROM] = "FROM",
  [aux_sym_image_name_token1] = "image_name_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_image_name_token2] = "image_name_token2",
  [anon_sym_PLUS] = "+",
  [aux_sym_target_header_token1] = "target_header_token1",
  [aux_sym__indent_token1] = "_indent_token1",
  [sym_program] = "program",
  [sym_version_statement] = "version_statement",
  [sym_base_statements] = "base_statements",
  [sym_statement] = "statement",
  [sym_from_statement] = "from_statement",
  [sym_image_name] = "image_name",
  [sym_target_ref] = "target_ref",
  [sym_targets] = "targets",
  [sym_target] = "target",
  [sym_target_header] = "target_header",
  [sym_target_block] = "target_block",
  [sym__indent] = "_indent",
  [aux_sym_base_statements_repeat1] = "base_statements_repeat1",
  [aux_sym_targets_repeat1] = "targets_repeat1",
  [aux_sym_target_block_repeat1] = "target_block_repeat1",
  [aux_sym__indent_repeat1] = "_indent_repeat1",
  [alias_sym_name] = "name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [aux_sym_version_statement_token1] = aux_sym_version_statement_token1,
  [anon_sym_FROM] = anon_sym_FROM,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_image_name_token2] = aux_sym_image_name_token2,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_target_header_token1] = aux_sym_target_header_token1,
  [aux_sym__indent_token1] = aux_sym__indent_token1,
  [sym_program] = sym_program,
  [sym_version_statement] = sym_version_statement,
  [sym_base_statements] = sym_base_statements,
  [sym_statement] = sym_statement,
  [sym_from_statement] = sym_from_statement,
  [sym_image_name] = sym_image_name,
  [sym_target_ref] = sym_target_ref,
  [sym_targets] = sym_targets,
  [sym_target] = sym_target,
  [sym_target_header] = sym_target_header,
  [sym_target_block] = sym_target_block,
  [sym__indent] = sym__indent,
  [aux_sym_base_statements_repeat1] = aux_sym_base_statements_repeat1,
  [aux_sym_targets_repeat1] = aux_sym_targets_repeat1,
  [aux_sym_target_block_repeat1] = aux_sym_target_block_repeat1,
  [aux_sym__indent_repeat1] = aux_sym__indent_repeat1,
  [alias_sym_name] = alias_sym_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_VERSION] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_version_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_name_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_target_header_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__indent_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_version_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_base_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_from_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_image_name] = {
    .visible = true,
    .named = true,
  },
  [sym_target_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_targets] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_target_header] = {
    .visible = true,
    .named = true,
  },
  [sym_target_block] = {
    .visible = true,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_base_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_targets_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__indent_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_block = 1,
  field_header = 2,
  field_name = 3,
  field_ref = 4,
  field_version = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_block] = "block",
  [field_header] = "header",
  [field_name] = "name",
  [field_ref] = "ref",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_version, 1},
  [1] =
    {field_block, 1},
    {field_header, 0},
  [3] =
    {field_ref, 1},
  [4] =
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [1] = alias_sym_name,
  },
  [4] = {
    [0] = alias_sym_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 13,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 19,
  [28] = 16,
  [29] = 15,
  [30] = 20,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 35,
  [40] = 33,
  [41] = 41,
  [42] = 42,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'V') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'I') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'M') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'O') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'S') ADVANCE(4);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'V') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_target_header_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__indent_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [aux_sym_version_statement_token1] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [aux_sym_image_name_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_image_name_token2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_target_header_token1] = ACTIONS(3),
    [aux_sym__indent_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(37),
    [sym_version_statement] = STATE(2),
    [sym_base_statements] = STATE(4),
    [sym_statement] = STATE(6),
    [sym_from_statement] = STATE(19),
    [sym_targets] = STATE(36),
    [sym_target] = STATE(8),
    [sym_target_header] = STATE(14),
    [aux_sym_base_statements_repeat1] = STATE(6),
    [aux_sym_targets_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_VERSION] = ACTIONS(7),
    [anon_sym_FROM] = ACTIONS(9),
    [aux_sym_image_name_token1] = ACTIONS(11),
    [aux_sym_target_header_token1] = ACTIONS(3),
    [aux_sym__indent_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(9), 1,
      anon_sym_FROM,
    ACTIONS(11), 1,
      aux_sym_image_name_token1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_base_statements,
    STATE(14), 1,
      sym_target_header,
    STATE(19), 1,
      sym_from_statement,
    STATE(32), 1,
      sym_targets,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
    STATE(6), 2,
      sym_statement,
      aux_sym_base_statements_repeat1,
    STATE(8), 2,
      sym_target,
      aux_sym_targets_repeat1,
  [34] = 5,
    ACTIONS(17), 1,
      anon_sym_FROM,
    STATE(19), 1,
      sym_from_statement,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      aux_sym_image_name_token1,
    STATE(3), 2,
      sym_statement,
      aux_sym_base_statements_repeat1,
  [53] = 6,
    ACTIONS(11), 1,
      aux_sym_image_name_token1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_target_header,
    STATE(32), 1,
      sym_targets,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
    STATE(8), 2,
      sym_target,
      aux_sym_targets_repeat1,
  [74] = 6,
    ACTIONS(11), 1,
      aux_sym_image_name_token1,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_target_header,
    STATE(34), 1,
      sym_targets,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
    STATE(8), 2,
      sym_target,
      aux_sym_targets_repeat1,
  [95] = 5,
    ACTIONS(9), 1,
      anon_sym_FROM,
    STATE(19), 1,
      sym_from_statement,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      aux_sym_image_name_token1,
    STATE(3), 2,
      sym_statement,
      aux_sym_base_statements_repeat1,
  [114] = 5,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      aux_sym_image_name_token1,
    STATE(14), 1,
      sym_target_header,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
    STATE(7), 2,
      sym_target,
      aux_sym_targets_repeat1,
  [132] = 5,
    ACTIONS(11), 1,
      aux_sym_image_name_token1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_target_header,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
    STATE(7), 2,
      sym_target,
      aux_sym_targets_repeat1,
  [150] = 4,
    ACTIONS(31), 1,
      aux_sym_image_name_token1,
    ACTIONS(33), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
    STATE(28), 2,
      sym_image_name,
      sym_target_ref,
  [165] = 4,
    ACTIONS(35), 1,
      aux_sym_image_name_token1,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
    STATE(16), 2,
      sym_image_name,
      sym_target_ref,
  [180] = 5,
    ACTIONS(3), 1,
      aux_sym_target_header_token1,
    ACTIONS(41), 1,
      aux_sym__indent_token1,
    STATE(11), 1,
      aux_sym_target_block_repeat1,
    STATE(21), 1,
      sym__indent,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      aux_sym_image_name_token1,
  [197] = 5,
    ACTIONS(3), 1,
      aux_sym_target_header_token1,
    ACTIONS(46), 1,
      aux_sym__indent_token1,
    STATE(11), 1,
      aux_sym_target_block_repeat1,
    STATE(21), 1,
      sym__indent,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      aux_sym_image_name_token1,
  [214] = 3,
    ACTIONS(50), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_image_name_token1,
  [227] = 5,
    ACTIONS(3), 1,
      aux_sym_target_header_token1,
    ACTIONS(46), 1,
      aux_sym__indent_token1,
    STATE(12), 1,
      aux_sym_target_block_repeat1,
    STATE(21), 1,
      sym__indent,
    STATE(23), 1,
      sym_target_block,
  [243] = 2,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_image_name_token1,
  [253] = 2,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_image_name_token1,
  [263] = 2,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_image_name_token1,
  [273] = 3,
    ACTIONS(3), 1,
      aux_sym_target_header_token1,
    ACTIONS(58), 1,
      anon_sym_COLON,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      aux_sym_image_name_token1,
      aux_sym__indent_token1,
  [285] = 2,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_image_name_token1,
  [295] = 2,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_image_name_token1,
  [305] = 4,
    ACTIONS(64), 1,
      anon_sym_FROM,
    STATE(25), 1,
      sym_statement,
    STATE(27), 1,
      sym_from_statement,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
  [319] = 4,
    ACTIONS(3), 1,
      aux_sym_target_header_token1,
    ACTIONS(66), 1,
      anon_sym_FROM,
    ACTIONS(68), 1,
      aux_sym__indent_token1,
    STATE(24), 1,
      aux_sym__indent_repeat1,
  [332] = 2,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      aux_sym_image_name_token1,
  [341] = 4,
    ACTIONS(3), 1,
      aux_sym_target_header_token1,
    ACTIONS(72), 1,
      anon_sym_FROM,
    ACTIONS(74), 1,
      aux_sym__indent_token1,
    STATE(26), 1,
      aux_sym__indent_repeat1,
  [354] = 2,
    ACTIONS(3), 1,
      aux_sym_target_header_token1,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      aux_sym_image_name_token1,
      aux_sym__indent_token1,
  [363] = 4,
    ACTIONS(3), 1,
      aux_sym_target_header_token1,
    ACTIONS(76), 1,
      anon_sym_FROM,
    ACTIONS(78), 1,
      aux_sym__indent_token1,
    STATE(26), 1,
      aux_sym__indent_repeat1,
  [376] = 2,
    ACTIONS(3), 1,
      aux_sym_target_header_token1,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      aux_sym_image_name_token1,
      aux_sym__indent_token1,
  [385] = 2,
    ACTIONS(3), 1,
      aux_sym_target_header_token1,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      aux_sym_image_name_token1,
      aux_sym__indent_token1,
  [394] = 2,
    ACTIONS(3), 1,
      aux_sym_target_header_token1,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      aux_sym_image_name_token1,
      aux_sym__indent_token1,
  [403] = 2,
    ACTIONS(3), 1,
      aux_sym_target_header_token1,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      aux_sym_image_name_token1,
      aux_sym__indent_token1,
  [412] = 2,
    ACTIONS(81), 1,
      aux_sym_version_statement_token1,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
  [420] = 2,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
  [428] = 2,
    ACTIONS(83), 1,
      aux_sym_image_name_token2,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
  [436] = 2,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
  [444] = 2,
    ACTIONS(87), 1,
      aux_sym_image_name_token1,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
  [452] = 2,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
  [460] = 2,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
  [468] = 2,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
  [476] = 2,
    ACTIONS(93), 1,
      aux_sym_image_name_token1,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
  [484] = 2,
    ACTIONS(95), 1,
      aux_sym_image_name_token2,
    ACTIONS(3), 2,
      aux_sym_target_header_token1,
      aux_sym__indent_token1,
  [492] = 2,
    ACTIONS(3), 1,
      aux_sym__indent_token1,
    ACTIONS(97), 1,
      aux_sym_target_header_token1,
  [499] = 2,
    ACTIONS(3), 1,
      aux_sym_target_header_token1,
    ACTIONS(99), 1,
      aux_sym__indent_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 150,
  [SMALL_STATE(10)] = 165,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 197,
  [SMALL_STATE(13)] = 214,
  [SMALL_STATE(14)] = 227,
  [SMALL_STATE(15)] = 243,
  [SMALL_STATE(16)] = 253,
  [SMALL_STATE(17)] = 263,
  [SMALL_STATE(18)] = 273,
  [SMALL_STATE(19)] = 285,
  [SMALL_STATE(20)] = 295,
  [SMALL_STATE(21)] = 305,
  [SMALL_STATE(22)] = 319,
  [SMALL_STATE(23)] = 332,
  [SMALL_STATE(24)] = 341,
  [SMALL_STATE(25)] = 354,
  [SMALL_STATE(26)] = 363,
  [SMALL_STATE(27)] = 376,
  [SMALL_STATE(28)] = 385,
  [SMALL_STATE(29)] = 394,
  [SMALL_STATE(30)] = 403,
  [SMALL_STATE(31)] = 412,
  [SMALL_STATE(32)] = 420,
  [SMALL_STATE(33)] = 428,
  [SMALL_STATE(34)] = 436,
  [SMALL_STATE(35)] = 444,
  [SMALL_STATE(36)] = 452,
  [SMALL_STATE(37)] = 460,
  [SMALL_STATE(38)] = 468,
  [SMALL_STATE(39)] = 476,
  [SMALL_STATE(40)] = 484,
  [SMALL_STATE(41)] = 492,
  [SMALL_STATE(42)] = 499,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_statements_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_statements_repeat1, 2), SHIFT_REPEAT(10),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_statements, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_targets_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_targets_repeat1, 2), SHIFT_REPEAT(38),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targets, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_block_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_block_repeat1, 2), SHIFT_REPEAT(22),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_block, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_statement, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 2, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indent, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2, .production_id = 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indent, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__indent_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__indent_repeat1, 2), SHIFT_REPEAT(26),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [89] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_header, 3, .production_id = 4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_earthfile(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
