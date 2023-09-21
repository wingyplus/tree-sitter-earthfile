#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum {
  aux_sym_program_token1 = 1,
  anon_sym_VERSION = 2,
  aux_sym_version_token1 = 3,
  anon_sym_0_DOT7 = 4,
  anon_sym_FROM = 5,
  anon_sym_PLUS = 6,
  aux_sym_local_ref_name_token1 = 7,
  aux_sym_local_ref_name_token2 = 8,
  aux_sym_image_name_token1 = 9,
  anon_sym_COLON = 10,
  sym_program = 11,
  sym_version = 12,
  sym_stmts = 13,
  sym_stmt = 14,
  sym_command_stmt = 15,
  sym_from_stmt = 16,
  sym_target_ref = 17,
  sym_local_ref = 18,
  sym_local_ref_name = 19,
  sym_classical_ref = 20,
  sym_image_name = 21,
  sym_image_tag = 22,
  aux_sym_program_repeat1 = 23,
  aux_sym_stmts_repeat1 = 24,
  aux_sym_local_ref_name_repeat1 = 25,
  aux_sym_image_name_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_program_token1] = "program_token1",
  [anon_sym_VERSION] = "VERSION",
  [aux_sym_version_token1] = "version_token1",
  [anon_sym_0_DOT7] = "0.7",
  [anon_sym_FROM] = "FROM",
  [anon_sym_PLUS] = "+",
  [aux_sym_local_ref_name_token1] = "local_ref_name_token1",
  [aux_sym_local_ref_name_token2] = "local_ref_name_token2",
  [aux_sym_image_name_token1] = "image_name_token1",
  [anon_sym_COLON] = ":",
  [sym_program] = "program",
  [sym_version] = "version",
  [sym_stmts] = "stmts",
  [sym_stmt] = "stmt",
  [sym_command_stmt] = "command_stmt",
  [sym_from_stmt] = "from_stmt",
  [sym_target_ref] = "target_ref",
  [sym_local_ref] = "local_ref",
  [sym_local_ref_name] = "local_ref_name",
  [sym_classical_ref] = "classical_ref",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_stmts_repeat1] = "stmts_repeat1",
  [aux_sym_local_ref_name_repeat1] = "local_ref_name_repeat1",
  [aux_sym_image_name_repeat1] = "image_name_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_program_token1] = aux_sym_program_token1,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [aux_sym_version_token1] = aux_sym_version_token1,
  [anon_sym_0_DOT7] = anon_sym_0_DOT7,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_local_ref_name_token1] = aux_sym_local_ref_name_token1,
  [aux_sym_local_ref_name_token2] = aux_sym_local_ref_name_token2,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_program] = sym_program,
  [sym_version] = sym_version,
  [sym_stmts] = sym_stmts,
  [sym_stmt] = sym_stmt,
  [sym_command_stmt] = sym_command_stmt,
  [sym_from_stmt] = sym_from_stmt,
  [sym_target_ref] = sym_target_ref,
  [sym_local_ref] = sym_local_ref,
  [sym_local_ref_name] = sym_local_ref_name,
  [sym_classical_ref] = sym_classical_ref,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_stmts_repeat1] = aux_sym_stmts_repeat1,
  [aux_sym_local_ref_name_repeat1] = aux_sym_local_ref_name_repeat1,
  [aux_sym_image_name_repeat1] = aux_sym_image_name_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_VERSION] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_version_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0_DOT7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_local_ref_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_local_ref_name_token2] = {
    .visible = false,
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
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_stmts] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_command_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_from_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_target_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_local_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_local_ref_name] = {
    .visible = true,
    .named = true,
  },
  [sym_classical_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_image_name] = {
    .visible = true,
    .named = true,
  },
  [sym_image_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stmts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_local_ref_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_tag = 2,
  field_target = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_tag] = "tag",
  [field_target] = "target",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_target, 1},
  [2] =
    {field_name, 0},
    {field_tag, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 9,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(12);
      if (lookahead == 'V') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(12);
      if (lookahead == 'V') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '0') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '7') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'I') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'M') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'S') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(12);
      if (lookahead == 'V') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_program_token1);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_program_token1);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_0_DOT7);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_local_ref_name_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_local_ref_name_token2);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 16},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_local_ref_name_token1] = ACTIONS(1),
    [aux_sym_local_ref_name_token2] = ACTIONS(1),
    [aux_sym_image_name_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(45),
    [sym_version] = STATE(32),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_program_token1] = ACTIONS(3),
    [anon_sym_VERSION] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      anon_sym_VERSION,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      aux_sym_program_token1,
    ACTIONS(11), 1,
      anon_sym_FROM,
    STATE(3), 1,
      aux_sym_program_repeat1,
    STATE(30), 1,
      sym_stmt,
    STATE(31), 1,
      sym_version,
    STATE(40), 1,
      sym_stmts,
    STATE(48), 1,
      sym_from_stmt,
    STATE(49), 1,
      sym_command_stmt,
  [31] = 9,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(16), 1,
      aux_sym_program_token1,
    ACTIONS(19), 1,
      anon_sym_VERSION,
    ACTIONS(21), 1,
      anon_sym_FROM,
    STATE(10), 1,
      aux_sym_program_repeat1,
    STATE(30), 1,
      sym_stmt,
    STATE(46), 1,
      sym_stmts,
    STATE(48), 1,
      sym_from_stmt,
    STATE(49), 1,
      sym_command_stmt,
  [59] = 8,
    ACTIONS(11), 1,
      anon_sym_FROM,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      aux_sym_program_token1,
    STATE(13), 1,
      aux_sym_program_repeat1,
    STATE(30), 1,
      sym_stmt,
    STATE(44), 1,
      sym_stmts,
    STATE(48), 1,
      sym_from_stmt,
    STATE(49), 1,
      sym_command_stmt,
  [84] = 8,
    ACTIONS(11), 1,
      anon_sym_FROM,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      aux_sym_program_token1,
    STATE(10), 1,
      aux_sym_program_repeat1,
    STATE(30), 1,
      sym_stmt,
    STATE(46), 1,
      sym_stmts,
    STATE(48), 1,
      sym_from_stmt,
    STATE(49), 1,
      sym_command_stmt,
  [109] = 6,
    ACTIONS(11), 1,
      anon_sym_FROM,
    ACTIONS(32), 1,
      aux_sym_program_token1,
    STATE(17), 1,
      aux_sym_program_repeat1,
    STATE(43), 1,
      sym_stmt,
    STATE(48), 1,
      sym_from_stmt,
    STATE(49), 1,
      sym_command_stmt,
  [128] = 6,
    ACTIONS(11), 1,
      anon_sym_FROM,
    ACTIONS(34), 1,
      aux_sym_program_token1,
    STATE(6), 1,
      aux_sym_program_repeat1,
    STATE(35), 1,
      sym_stmt,
    STATE(48), 1,
      sym_from_stmt,
    STATE(49), 1,
      sym_command_stmt,
  [147] = 5,
    ACTIONS(36), 1,
      anon_sym_PLUS,
    ACTIONS(38), 1,
      aux_sym_local_ref_name_token1,
    STATE(27), 1,
      sym_image_name,
    STATE(39), 1,
      sym_target_ref,
    STATE(38), 2,
      sym_local_ref,
      sym_classical_ref,
  [164] = 4,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      aux_sym_program_token1,
    STATE(9), 1,
      aux_sym_program_repeat1,
    ACTIONS(19), 2,
      anon_sym_VERSION,
      anon_sym_FROM,
  [178] = 4,
    ACTIONS(42), 1,
      aux_sym_program_token1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_program_repeat1,
    ACTIONS(19), 2,
      anon_sym_VERSION,
      anon_sym_FROM,
  [192] = 4,
    ACTIONS(48), 1,
      aux_sym_program_token1,
    ACTIONS(50), 1,
      aux_sym_image_name_token1,
    ACTIONS(53), 1,
      anon_sym_COLON,
    STATE(11), 1,
      aux_sym_image_name_repeat1,
  [205] = 4,
    ACTIONS(55), 1,
      aux_sym_program_token1,
    ACTIONS(57), 1,
      aux_sym_image_name_token1,
    ACTIONS(59), 1,
      anon_sym_COLON,
    STATE(11), 1,
      aux_sym_image_name_repeat1,
  [218] = 4,
    ACTIONS(19), 1,
      anon_sym_FROM,
    ACTIONS(42), 1,
      aux_sym_program_token1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_program_repeat1,
  [231] = 4,
    ACTIONS(64), 1,
      aux_sym_program_token1,
    ACTIONS(66), 1,
      aux_sym_image_name_token1,
    ACTIONS(68), 1,
      anon_sym_COLON,
    STATE(12), 1,
      aux_sym_image_name_repeat1,
  [244] = 3,
    ACTIONS(70), 1,
      aux_sym_program_token1,
    ACTIONS(72), 1,
      aux_sym_local_ref_name_token2,
    STATE(22), 1,
      aux_sym_local_ref_name_repeat1,
  [254] = 3,
    ACTIONS(74), 1,
      aux_sym_program_token1,
    ACTIONS(76), 1,
      aux_sym_local_ref_name_token2,
    STATE(20), 1,
      aux_sym_local_ref_name_repeat1,
  [264] = 3,
    ACTIONS(19), 1,
      anon_sym_FROM,
    ACTIONS(78), 1,
      aux_sym_program_token1,
    STATE(17), 1,
      aux_sym_program_repeat1,
  [274] = 3,
    ACTIONS(81), 1,
      aux_sym_program_token1,
    ACTIONS(83), 1,
      aux_sym_local_ref_name_token2,
    STATE(18), 1,
      aux_sym_local_ref_name_repeat1,
  [284] = 3,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      aux_sym_program_token1,
    STATE(9), 1,
      aux_sym_program_repeat1,
  [294] = 3,
    ACTIONS(90), 1,
      aux_sym_program_token1,
    ACTIONS(92), 1,
      aux_sym_local_ref_name_token2,
    STATE(18), 1,
      aux_sym_local_ref_name_repeat1,
  [304] = 3,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      aux_sym_program_token1,
    STATE(26), 1,
      aux_sym_program_repeat1,
  [314] = 3,
    ACTIONS(92), 1,
      aux_sym_local_ref_name_token2,
    ACTIONS(96), 1,
      aux_sym_program_token1,
    STATE(18), 1,
      aux_sym_local_ref_name_repeat1,
  [324] = 3,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      aux_sym_program_token1,
    STATE(25), 1,
      aux_sym_program_repeat1,
  [334] = 3,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      aux_sym_program_token1,
    STATE(19), 1,
      aux_sym_program_repeat1,
  [344] = 3,
    ACTIONS(88), 1,
      aux_sym_program_token1,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_program_repeat1,
  [354] = 3,
    ACTIONS(88), 1,
      aux_sym_program_token1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_program_repeat1,
  [364] = 3,
    ACTIONS(106), 1,
      aux_sym_program_token1,
    ACTIONS(108), 1,
      anon_sym_COLON,
    STATE(41), 1,
      sym_image_tag,
  [374] = 2,
    ACTIONS(110), 1,
      aux_sym_local_ref_name_token1,
    STATE(34), 1,
      sym_local_ref_name,
  [381] = 2,
    ACTIONS(112), 1,
      aux_sym_program_token1,
    STATE(33), 1,
      aux_sym_stmts_repeat1,
  [388] = 2,
    ACTIONS(115), 1,
      aux_sym_program_token1,
    STATE(29), 1,
      aux_sym_stmts_repeat1,
  [395] = 2,
    ACTIONS(118), 1,
      aux_sym_program_token1,
    STATE(4), 1,
      aux_sym_program_repeat1,
  [402] = 2,
    ACTIONS(120), 1,
      aux_sym_program_token1,
    STATE(5), 1,
      aux_sym_program_repeat1,
  [409] = 2,
    ACTIONS(122), 1,
      aux_sym_program_token1,
    STATE(33), 1,
      aux_sym_stmts_repeat1,
  [416] = 1,
    ACTIONS(125), 1,
      aux_sym_program_token1,
  [420] = 1,
    ACTIONS(127), 1,
      aux_sym_program_token1,
  [424] = 1,
    ACTIONS(129), 1,
      aux_sym_version_token1,
  [428] = 1,
    ACTIONS(131), 1,
      anon_sym_0_DOT7,
  [432] = 1,
    ACTIONS(133), 1,
      aux_sym_program_token1,
  [436] = 1,
    ACTIONS(135), 1,
      aux_sym_program_token1,
  [440] = 1,
    ACTIONS(137), 1,
      aux_sym_program_token1,
  [444] = 1,
    ACTIONS(139), 1,
      aux_sym_program_token1,
  [448] = 1,
    ACTIONS(141), 1,
      aux_sym_version_token1,
  [452] = 1,
    ACTIONS(143), 1,
      aux_sym_program_token1,
  [456] = 1,
    ACTIONS(145), 1,
      aux_sym_program_token1,
  [460] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [464] = 1,
    ACTIONS(149), 1,
      aux_sym_program_token1,
  [468] = 1,
    ACTIONS(151), 1,
      aux_sym_program_token1,
  [472] = 1,
    ACTIONS(153), 1,
      aux_sym_program_token1,
  [476] = 1,
    ACTIONS(155), 1,
      aux_sym_program_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 109,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 164,
  [SMALL_STATE(10)] = 178,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 205,
  [SMALL_STATE(13)] = 218,
  [SMALL_STATE(14)] = 231,
  [SMALL_STATE(15)] = 244,
  [SMALL_STATE(16)] = 254,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 274,
  [SMALL_STATE(19)] = 284,
  [SMALL_STATE(20)] = 294,
  [SMALL_STATE(21)] = 304,
  [SMALL_STATE(22)] = 314,
  [SMALL_STATE(23)] = 324,
  [SMALL_STATE(24)] = 334,
  [SMALL_STATE(25)] = 344,
  [SMALL_STATE(26)] = 354,
  [SMALL_STATE(27)] = 364,
  [SMALL_STATE(28)] = 374,
  [SMALL_STATE(29)] = 381,
  [SMALL_STATE(30)] = 388,
  [SMALL_STATE(31)] = 395,
  [SMALL_STATE(32)] = 402,
  [SMALL_STATE(33)] = 409,
  [SMALL_STATE(34)] = 416,
  [SMALL_STATE(35)] = 420,
  [SMALL_STATE(36)] = 424,
  [SMALL_STATE(37)] = 428,
  [SMALL_STATE(38)] = 432,
  [SMALL_STATE(39)] = 436,
  [SMALL_STATE(40)] = 440,
  [SMALL_STATE(41)] = 444,
  [SMALL_STATE(42)] = 448,
  [SMALL_STATE(43)] = 452,
  [SMALL_STATE(44)] = 456,
  [SMALL_STATE(45)] = 460,
  [SMALL_STATE(46)] = 464,
  [SMALL_STATE(47)] = 468,
  [SMALL_STATE(48)] = 472,
  [SMALL_STATE(49)] = 476,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_program, 2), REDUCE(aux_sym_program_repeat1, 2),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT(36),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), REDUCE(sym_program, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(11),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), REDUCE(sym_program, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_ref_name, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_local_ref_name_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_local_ref_name_repeat1, 2), SHIFT_REPEAT(18),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 6),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_ref_name, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_ref, 1, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_stmts, 2), SHIFT(7),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_stmts, 1), SHIFT(7),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmts_repeat1, 2), SHIFT_REPEAT(7),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_ref, 2, .production_id = 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmts_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_stmt, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_ref, 2, .production_id = 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmts_repeat1, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_stmt, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
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
