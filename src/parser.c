#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_VERSION = 1,
  aux_sym_version_number_token1 = 2,
  anon_sym_DOT = 3,
  anon_sym_FROM = 4,
  aux_sym_target_token1 = 5,
  aux_sym_target_header_token1 = 6,
  anon_sym_COLON = 7,
  anon_sym_PLUS = 8,
  aux_sym_local_ref_token1 = 9,
  aux_sym_classical_ref_token1 = 10,
  sym__whitespace = 11,
  sym_program = 12,
  sym_version = 13,
  sym_version_number = 14,
  sym_stmts = 15,
  sym_stmt = 16,
  sym_command_stmt = 17,
  sym_from_stmt = 18,
  sym_targets = 19,
  sym_target_or_user_command = 20,
  sym_target = 21,
  sym_target_header = 22,
  sym_target_block = 23,
  sym_target_ref = 24,
  sym_local_ref = 25,
  sym_classical_ref = 26,
  aux_sym__indent = 27,
  aux_sym_version_number_repeat1 = 28,
  aux_sym_stmts_repeat1 = 29,
  aux_sym_targets_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_VERSION] = "VERSION",
  [aux_sym_version_number_token1] = "version_number_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_FROM] = "FROM",
  [aux_sym_target_token1] = "target_token1",
  [aux_sym_target_header_token1] = "name",
  [anon_sym_COLON] = ":",
  [anon_sym_PLUS] = "+",
  [aux_sym_local_ref_token1] = "name",
  [aux_sym_classical_ref_token1] = "tag",
  [sym__whitespace] = "_whitespace",
  [sym_program] = "program",
  [sym_version] = "version",
  [sym_version_number] = "version_number",
  [sym_stmts] = "stmts",
  [sym_stmt] = "stmt",
  [sym_command_stmt] = "command_stmt",
  [sym_from_stmt] = "from_stmt",
  [sym_targets] = "targets",
  [sym_target_or_user_command] = "target_or_user_command",
  [sym_target] = "target",
  [sym_target_header] = "target_header",
  [sym_target_block] = "target_block",
  [sym_target_ref] = "target_ref",
  [sym_local_ref] = "local_ref",
  [sym_classical_ref] = "classical_ref",
  [aux_sym__indent] = "_indent",
  [aux_sym_version_number_repeat1] = "version_number_repeat1",
  [aux_sym_stmts_repeat1] = "stmts_repeat1",
  [aux_sym_targets_repeat1] = "targets_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [aux_sym_version_number_token1] = aux_sym_version_number_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_FROM] = anon_sym_FROM,
  [aux_sym_target_token1] = aux_sym_target_token1,
  [aux_sym_target_header_token1] = aux_sym_target_header_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_local_ref_token1] = aux_sym_target_header_token1,
  [aux_sym_classical_ref_token1] = aux_sym_classical_ref_token1,
  [sym__whitespace] = sym__whitespace,
  [sym_program] = sym_program,
  [sym_version] = sym_version,
  [sym_version_number] = sym_version_number,
  [sym_stmts] = sym_stmts,
  [sym_stmt] = sym_stmt,
  [sym_command_stmt] = sym_command_stmt,
  [sym_from_stmt] = sym_from_stmt,
  [sym_targets] = sym_targets,
  [sym_target_or_user_command] = sym_target_or_user_command,
  [sym_target] = sym_target,
  [sym_target_header] = sym_target_header,
  [sym_target_block] = sym_target_block,
  [sym_target_ref] = sym_target_ref,
  [sym_local_ref] = sym_local_ref,
  [sym_classical_ref] = sym_classical_ref,
  [aux_sym__indent] = aux_sym__indent,
  [aux_sym_version_number_repeat1] = aux_sym_version_number_repeat1,
  [aux_sym_stmts_repeat1] = aux_sym_stmts_repeat1,
  [aux_sym_targets_repeat1] = aux_sym_targets_repeat1,
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
  [aux_sym_version_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_target_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_header_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_local_ref_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_classical_ref_token1] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_version_number] = {
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
  [sym_targets] = {
    .visible = true,
    .named = true,
  },
  [sym_target_or_user_command] = {
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
  [sym_target_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_local_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_classical_ref] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__indent] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_version_number_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stmts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_targets_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_name = 2,
  field_tag = 3,
  field_target = 4,
  field_version_number = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_tag] = "tag",
  [field_target] = "target",
  [field_version_number] = "version_number",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_version_number, 2},
  [2] =
    {field_body, 2},
  [3] =
    {field_target, 1},
  [4] =
    {field_name, 0},
    {field_tag, 2},
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
  [15] = 12,
  [16] = 16,
  [17] = 17,
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
  [28] = 18,
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
  [43] = 23,
  [44] = 20,
  [45] = 45,
  [46] = 24,
  [47] = 25,
  [48] = 26,
  [49] = 22,
  [50] = 50,
  [51] = 41,
  [52] = 33,
  [53] = 50,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'V') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
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
      if (eof) ADVANCE(14);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'V') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_version_number_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_target_header_token1);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_target_header_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_local_ref_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_classical_ref_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 13},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [aux_sym_version_number_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [aux_sym_target_header_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_local_ref_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(39),
    [sym_version] = STATE(2),
    [sym_stmts] = STATE(6),
    [sym_stmt] = STATE(3),
    [sym_command_stmt] = STATE(23),
    [sym_from_stmt] = STATE(20),
    [sym_targets] = STATE(35),
    [sym_target_or_user_command] = STATE(9),
    [sym_target] = STATE(30),
    [sym_target_header] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_VERSION] = ACTIONS(5),
    [anon_sym_FROM] = ACTIONS(7),
    [aux_sym_target_header_token1] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(7), 1,
      anon_sym_FROM,
    ACTIONS(9), 1,
      aux_sym_target_header_token1,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_stmt,
    STATE(9), 1,
      sym_target_or_user_command,
    STATE(11), 1,
      sym_stmts,
    STATE(20), 1,
      sym_from_stmt,
    STATE(23), 1,
      sym_command_stmt,
    STATE(30), 1,
      sym_target,
    STATE(36), 1,
      sym_target_header,
    STATE(45), 1,
      sym_targets,
  [34] = 5,
    ACTIONS(7), 1,
      anon_sym_FROM,
    STATE(20), 1,
      sym_from_stmt,
    STATE(23), 1,
      sym_command_stmt,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      aux_sym_target_header_token1,
    STATE(5), 2,
      sym_stmt,
      aux_sym_stmts_repeat1,
  [52] = 5,
    ACTIONS(17), 1,
      anon_sym_FROM,
    STATE(20), 1,
      sym_from_stmt,
    STATE(23), 1,
      sym_command_stmt,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      aux_sym_target_header_token1,
    STATE(4), 2,
      sym_stmt,
      aux_sym_stmts_repeat1,
  [70] = 5,
    ACTIONS(7), 1,
      anon_sym_FROM,
    STATE(20), 1,
      sym_from_stmt,
    STATE(23), 1,
      sym_command_stmt,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      aux_sym_target_header_token1,
    STATE(4), 2,
      sym_stmt,
      aux_sym_stmts_repeat1,
  [88] = 6,
    ACTIONS(9), 1,
      aux_sym_target_header_token1,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_target_or_user_command,
    STATE(30), 1,
      sym_target,
    STATE(36), 1,
      sym_target_header,
    STATE(45), 1,
      sym_targets,
  [107] = 6,
    ACTIONS(22), 1,
      anon_sym_FROM,
    ACTIONS(24), 1,
      sym__whitespace,
    STATE(19), 1,
      aux_sym__indent,
    STATE(37), 1,
      sym_stmt,
    STATE(43), 1,
      sym_command_stmt,
    STATE(44), 1,
      sym_from_stmt,
  [126] = 5,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      aux_sym_target_header_token1,
    STATE(30), 1,
      sym_target,
    STATE(36), 1,
      sym_target_header,
    STATE(8), 2,
      sym_target_or_user_command,
      aux_sym_targets_repeat1,
  [143] = 5,
    ACTIONS(9), 1,
      aux_sym_target_header_token1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_target,
    STATE(36), 1,
      sym_target_header,
    STATE(10), 2,
      sym_target_or_user_command,
      aux_sym_targets_repeat1,
  [160] = 5,
    ACTIONS(9), 1,
      aux_sym_target_header_token1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_target,
    STATE(36), 1,
      sym_target_header,
    STATE(8), 2,
      sym_target_or_user_command,
      aux_sym_targets_repeat1,
  [177] = 6,
    ACTIONS(9), 1,
      aux_sym_target_header_token1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_target_or_user_command,
    STATE(30), 1,
      sym_target,
    STATE(36), 1,
      sym_target_header,
    STATE(38), 1,
      sym_targets,
  [196] = 4,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      aux_sym_local_ref_token1,
    STATE(46), 1,
      sym_target_ref,
    STATE(47), 2,
      sym_local_ref,
      sym_classical_ref,
  [210] = 3,
    ACTIONS(43), 1,
      aux_sym_version_number_token1,
    STATE(13), 1,
      aux_sym_version_number_repeat1,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_target_header_token1,
  [222] = 3,
    ACTIONS(48), 1,
      aux_sym_version_number_token1,
    STATE(13), 1,
      aux_sym_version_number_repeat1,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_target_header_token1,
  [234] = 4,
    ACTIONS(50), 1,
      anon_sym_PLUS,
    ACTIONS(52), 1,
      aux_sym_local_ref_token1,
    STATE(24), 1,
      sym_target_ref,
    STATE(25), 2,
      sym_local_ref,
      sym_classical_ref,
  [248] = 5,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      aux_sym_target_header_token1,
    ACTIONS(58), 1,
      sym__whitespace,
    STATE(7), 1,
      aux_sym__indent,
    STATE(32), 1,
      sym_target_block,
  [264] = 2,
    ACTIONS(62), 1,
      anon_sym_DOT,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_target_header_token1,
  [273] = 2,
    ACTIONS(66), 1,
      anon_sym_COLON,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_target_header_token1,
  [282] = 3,
    ACTIONS(68), 1,
      anon_sym_FROM,
    ACTIONS(70), 1,
      sym__whitespace,
    STATE(19), 1,
      aux_sym__indent,
  [292] = 1,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_target_header_token1,
  [298] = 1,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_target_header_token1,
  [304] = 1,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_target_header_token1,
  [310] = 1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_target_header_token1,
  [316] = 1,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_target_header_token1,
  [322] = 1,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_target_header_token1,
  [328] = 1,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_FROM,
      aux_sym_target_header_token1,
  [334] = 2,
    ACTIONS(87), 1,
      aux_sym_version_number_token1,
    STATE(21), 1,
      sym_version_number,
  [341] = 2,
    ACTIONS(64), 1,
      aux_sym_target_token1,
    ACTIONS(89), 1,
      anon_sym_COLON,
  [348] = 1,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      aux_sym_target_header_token1,
  [353] = 1,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      aux_sym_target_header_token1,
  [358] = 2,
    ACTIONS(95), 1,
      aux_sym_version_number_token1,
    STATE(14), 1,
      aux_sym_version_number_repeat1,
  [365] = 1,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      aux_sym_target_header_token1,
  [370] = 1,
    ACTIONS(99), 1,
      aux_sym_classical_ref_token1,
  [374] = 1,
    ACTIONS(101), 1,
      aux_sym_target_token1,
  [378] = 1,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
  [382] = 1,
    ACTIONS(103), 1,
      aux_sym_target_token1,
  [386] = 1,
    ACTIONS(105), 1,
      aux_sym_target_token1,
  [390] = 1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
  [394] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
  [398] = 1,
    ACTIONS(111), 1,
      sym__whitespace,
  [402] = 1,
    ACTIONS(113), 1,
      aux_sym_local_ref_token1,
  [406] = 1,
    ACTIONS(115), 1,
      anon_sym_COLON,
  [410] = 1,
    ACTIONS(79), 1,
      aux_sym_target_token1,
  [414] = 1,
    ACTIONS(73), 1,
      aux_sym_target_token1,
  [418] = 1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
  [422] = 1,
    ACTIONS(81), 1,
      aux_sym_target_token1,
  [426] = 1,
    ACTIONS(83), 1,
      aux_sym_target_token1,
  [430] = 1,
    ACTIONS(85), 1,
      aux_sym_target_token1,
  [434] = 1,
    ACTIONS(77), 1,
      aux_sym_target_token1,
  [438] = 1,
    ACTIONS(117), 1,
      sym__whitespace,
  [442] = 1,
    ACTIONS(119), 1,
      aux_sym_local_ref_token1,
  [446] = 1,
    ACTIONS(121), 1,
      aux_sym_classical_ref_token1,
  [450] = 1,
    ACTIONS(123), 1,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 143,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 177,
  [SMALL_STATE(12)] = 196,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 222,
  [SMALL_STATE(15)] = 234,
  [SMALL_STATE(16)] = 248,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 273,
  [SMALL_STATE(19)] = 282,
  [SMALL_STATE(20)] = 292,
  [SMALL_STATE(21)] = 298,
  [SMALL_STATE(22)] = 304,
  [SMALL_STATE(23)] = 310,
  [SMALL_STATE(24)] = 316,
  [SMALL_STATE(25)] = 322,
  [SMALL_STATE(26)] = 328,
  [SMALL_STATE(27)] = 334,
  [SMALL_STATE(28)] = 341,
  [SMALL_STATE(29)] = 348,
  [SMALL_STATE(30)] = 353,
  [SMALL_STATE(31)] = 358,
  [SMALL_STATE(32)] = 365,
  [SMALL_STATE(33)] = 370,
  [SMALL_STATE(34)] = 374,
  [SMALL_STATE(35)] = 378,
  [SMALL_STATE(36)] = 382,
  [SMALL_STATE(37)] = 386,
  [SMALL_STATE(38)] = 390,
  [SMALL_STATE(39)] = 394,
  [SMALL_STATE(40)] = 398,
  [SMALL_STATE(41)] = 402,
  [SMALL_STATE(42)] = 406,
  [SMALL_STATE(43)] = 410,
  [SMALL_STATE(44)] = 414,
  [SMALL_STATE(45)] = 418,
  [SMALL_STATE(46)] = 422,
  [SMALL_STATE(47)] = 426,
  [SMALL_STATE(48)] = 430,
  [SMALL_STATE(49)] = 434,
  [SMALL_STATE(50)] = 438,
  [SMALL_STATE(51)] = 442,
  [SMALL_STATE(52)] = 446,
  [SMALL_STATE(53)] = 450,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmts, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmts_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmts_repeat1, 2), SHIFT_REPEAT(50),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmts, 2),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_targets_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_targets_repeat1, 2), SHIFT_REPEAT(42),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targets, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targets, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_number_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_number_repeat1, 2), SHIFT_REPEAT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_number, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_number, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_ref, 1, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__indent, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__indent, 2), SHIFT_REPEAT(19),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_stmt, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_ref, 3, .production_id = 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_stmt, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_ref, 2, .production_id = 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_block, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_or_user_command, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_header, 2, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
