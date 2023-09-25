#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 1
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_VERSION = 1,
  aux_sym_version_statement_token1 = 2,
  anon_sym_FROM = 3,
  anon_sym_EXPOSE = 4,
  aux_sym_expose_statement_token1 = 5,
  aux_sym_expose_statement_token2 = 6,
  anon_sym_SLASH = 7,
  sym_port = 8,
  sym_protocol = 9,
  aux_sym_image_name_token1 = 10,
  anon_sym_COLON = 11,
  aux_sym_image_name_token2 = 12,
  anon_sym_PLUS = 13,
  sym_program = 14,
  sym_version_statement = 15,
  sym_base_statements = 16,
  sym_statement = 17,
  sym_from_statement = 18,
  sym_expose_statement = 19,
  sym_port_protocol = 20,
  sym_image_name = 21,
  sym_target_ref = 22,
  sym_targets = 23,
  sym_target = 24,
  sym_target_header = 25,
  sym_target_block = 26,
  sym__indent = 27,
  aux_sym_base_statements_repeat1 = 28,
  aux_sym_expose_statement_repeat1 = 29,
  aux_sym_targets_repeat1 = 30,
  aux_sym_target_block_repeat1 = 31,
  aux_sym__indent_repeat1 = 32,
  alias_sym_name = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_VERSION] = "VERSION",
  [aux_sym_version_statement_token1] = "version_number",
  [anon_sym_FROM] = "FROM",
  [anon_sym_EXPOSE] = "EXPOSE",
  [aux_sym_expose_statement_token1] = "expose_statement_token1",
  [aux_sym_expose_statement_token2] = "expose_statement_token2",
  [anon_sym_SLASH] = "/",
  [sym_port] = "port",
  [sym_protocol] = "protocol",
  [aux_sym_image_name_token1] = "image_name_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_image_name_token2] = "image_name_token2",
  [anon_sym_PLUS] = "+",
  [sym_program] = "program",
  [sym_version_statement] = "version_statement",
  [sym_base_statements] = "base_statements",
  [sym_statement] = "statement",
  [sym_from_statement] = "from_statement",
  [sym_expose_statement] = "expose_statement",
  [sym_port_protocol] = "port_protocol",
  [sym_image_name] = "image_name",
  [sym_target_ref] = "target_ref",
  [sym_targets] = "targets",
  [sym_target] = "target",
  [sym_target_header] = "target_header",
  [sym_target_block] = "target_block",
  [sym__indent] = "_indent",
  [aux_sym_base_statements_repeat1] = "base_statements_repeat1",
  [aux_sym_expose_statement_repeat1] = "expose_statement_repeat1",
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
  [anon_sym_EXPOSE] = anon_sym_EXPOSE,
  [aux_sym_expose_statement_token1] = aux_sym_expose_statement_token1,
  [aux_sym_expose_statement_token2] = aux_sym_expose_statement_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_port] = sym_port,
  [sym_protocol] = sym_protocol,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_image_name_token2] = aux_sym_image_name_token2,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_program] = sym_program,
  [sym_version_statement] = sym_version_statement,
  [sym_base_statements] = sym_base_statements,
  [sym_statement] = sym_statement,
  [sym_from_statement] = sym_from_statement,
  [sym_expose_statement] = sym_expose_statement,
  [sym_port_protocol] = sym_port_protocol,
  [sym_image_name] = sym_image_name,
  [sym_target_ref] = sym_target_ref,
  [sym_targets] = sym_targets,
  [sym_target] = sym_target,
  [sym_target_header] = sym_target_header,
  [sym_target_block] = sym_target_block,
  [sym__indent] = sym__indent,
  [aux_sym_base_statements_repeat1] = aux_sym_base_statements_repeat1,
  [aux_sym_expose_statement_repeat1] = aux_sym_expose_statement_repeat1,
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
  [anon_sym_EXPOSE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expose_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol] = {
    .visible = true,
    .named = true,
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
  [sym_expose_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_port_protocol] = {
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
  [aux_sym_expose_statement_repeat1] = {
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
  field_port = 4,
  field_protocol = 5,
  field_ref = 6,
  field_version = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_block] = "block",
  [field_header] = "header",
  [field_name] = "name",
  [field_port] = "port",
  [field_protocol] = "protocol",
  [field_ref] = "ref",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_version, 1},
  [1] =
    {field_port, 0},
  [2] =
    {field_block, 1},
    {field_header, 0},
  [4] =
    {field_ref, 1},
  [5] =
    {field_name, 0},
  [6] =
    {field_port, 0},
    {field_protocol, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [1] = alias_sym_name,
  },
  [5] = {
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
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 12,
  [21] = 21,
  [22] = 9,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 13,
  [29] = 29,
  [30] = 16,
  [31] = 17,
  [32] = 19,
  [33] = 11,
  [34] = 15,
  [35] = 35,
  [36] = 29,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 43,
  [47] = 47,
  [48] = 41,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 42,
  [53] = 53,
  [54] = 47,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(17);
      if (lookahead == 'F') ADVANCE(13);
      if (lookahead == 'V') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'I') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'M') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'P') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'S') ADVANCE(6);
      END_STATE();
    case 16:
      if (lookahead == 'S') ADVANCE(4);
      END_STATE();
    case 17:
      if (lookahead == 'X') ADVANCE(12);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(17);
      if (lookahead == 'F') ADVANCE(13);
      if (lookahead == 'V') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      if (lookahead == '.') ADVANCE(18);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_version_statement_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EXPOSE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_expose_statement_token1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_expose_statement_token2);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_protocol);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead == '.') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_protocol);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (lookahead == '.') ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [aux_sym_version_statement_token1] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_EXPOSE] = ACTIONS(1),
    [aux_sym_expose_statement_token1] = ACTIONS(3),
    [aux_sym_expose_statement_token2] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_port] = ACTIONS(1),
    [sym_protocol] = ACTIONS(1),
    [aux_sym_image_name_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_image_name_token2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(49),
    [sym_version_statement] = STATE(2),
    [sym_base_statements] = STATE(6),
    [sym_statement] = STATE(4),
    [sym_from_statement] = STATE(13),
    [sym_expose_statement] = STATE(13),
    [sym_targets] = STATE(53),
    [sym_target] = STATE(8),
    [sym_target_header] = STATE(23),
    [aux_sym_base_statements_repeat1] = STATE(4),
    [aux_sym_targets_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_VERSION] = ACTIONS(7),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_EXPOSE] = ACTIONS(11),
    [aux_sym_expose_statement_token1] = ACTIONS(3),
    [aux_sym_expose_statement_token2] = ACTIONS(3),
    [aux_sym_image_name_token1] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(9), 1,
      anon_sym_FROM,
    ACTIONS(11), 1,
      anon_sym_EXPOSE,
    ACTIONS(13), 1,
      aux_sym_image_name_token1,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_base_statements,
    STATE(23), 1,
      sym_target_header,
    STATE(38), 1,
      sym_targets,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    STATE(4), 2,
      sym_statement,
      aux_sym_base_statements_repeat1,
    STATE(8), 2,
      sym_target,
      aux_sym_targets_repeat1,
    STATE(13), 2,
      sym_from_statement,
      sym_expose_statement,
  [38] = 6,
    ACTIONS(19), 1,
      anon_sym_FROM,
    ACTIONS(22), 1,
      anon_sym_EXPOSE,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      aux_sym_image_name_token1,
    STATE(3), 2,
      sym_statement,
      aux_sym_base_statements_repeat1,
    STATE(13), 2,
      sym_from_statement,
      sym_expose_statement,
  [61] = 6,
    ACTIONS(9), 1,
      anon_sym_FROM,
    ACTIONS(11), 1,
      anon_sym_EXPOSE,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      aux_sym_image_name_token1,
    STATE(3), 2,
      sym_statement,
      aux_sym_base_statements_repeat1,
    STATE(13), 2,
      sym_from_statement,
      sym_expose_statement,
  [84] = 6,
    ACTIONS(13), 1,
      aux_sym_image_name_token1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_target_header,
    STATE(40), 1,
      sym_targets,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    STATE(8), 2,
      sym_target,
      aux_sym_targets_repeat1,
  [105] = 6,
    ACTIONS(13), 1,
      aux_sym_image_name_token1,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_target_header,
    STATE(38), 1,
      sym_targets,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    STATE(8), 2,
      sym_target,
      aux_sym_targets_repeat1,
  [126] = 5,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_image_name_token1,
    STATE(23), 1,
      sym_target_header,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    STATE(7), 2,
      sym_target,
      aux_sym_targets_repeat1,
  [144] = 5,
    ACTIONS(13), 1,
      aux_sym_image_name_token1,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_target_header,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    STATE(7), 2,
      sym_target,
      aux_sym_targets_repeat1,
  [162] = 3,
    ACTIONS(38), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    ACTIONS(36), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_image_name_token1,
  [176] = 5,
    ACTIONS(40), 1,
      anon_sym_FROM,
    ACTIONS(42), 1,
      anon_sym_EXPOSE,
    STATE(37), 1,
      sym_statement,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    STATE(28), 2,
      sym_from_statement,
      sym_expose_statement,
  [194] = 2,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_image_name_token1,
  [205] = 4,
    ACTIONS(46), 1,
      aux_sym_image_name_token1,
    ACTIONS(48), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    STATE(34), 2,
      sym_image_name,
      sym_target_ref,
  [220] = 2,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_image_name_token1,
  [231] = 2,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_image_name_token1,
  [242] = 2,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_image_name_token1,
  [253] = 2,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_image_name_token1,
  [264] = 2,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_image_name_token1,
  [275] = 5,
    ACTIONS(3), 1,
      aux_sym_expose_statement_token2,
    ACTIONS(62), 1,
      aux_sym_expose_statement_token1,
    STATE(10), 1,
      sym__indent,
    STATE(18), 1,
      aux_sym_target_block_repeat1,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      aux_sym_image_name_token1,
  [292] = 2,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_image_name_token1,
  [303] = 4,
    ACTIONS(67), 1,
      aux_sym_image_name_token1,
    ACTIONS(69), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    STATE(15), 2,
      sym_image_name,
      sym_target_ref,
  [318] = 5,
    ACTIONS(3), 1,
      aux_sym_expose_statement_token2,
    ACTIONS(73), 1,
      aux_sym_expose_statement_token1,
    STATE(10), 1,
      sym__indent,
    STATE(18), 1,
      aux_sym_target_block_repeat1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      aux_sym_image_name_token1,
  [335] = 3,
    ACTIONS(3), 1,
      aux_sym_expose_statement_token2,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      aux_sym_expose_statement_token1,
      aux_sym_image_name_token1,
  [347] = 5,
    ACTIONS(3), 1,
      aux_sym_expose_statement_token2,
    ACTIONS(73), 1,
      aux_sym_expose_statement_token1,
    STATE(10), 1,
      sym__indent,
    STATE(21), 1,
      aux_sym_target_block_repeat1,
    STATE(35), 1,
      sym_target_block,
  [363] = 4,
    ACTIONS(3), 1,
      aux_sym_expose_statement_token2,
    ACTIONS(79), 1,
      aux_sym_expose_statement_token1,
    STATE(24), 1,
      aux_sym__indent_repeat1,
    ACTIONS(77), 2,
      anon_sym_FROM,
      anon_sym_EXPOSE,
  [377] = 4,
    ACTIONS(3), 1,
      aux_sym_expose_statement_token2,
    ACTIONS(84), 1,
      aux_sym_expose_statement_token1,
    STATE(24), 1,
      aux_sym__indent_repeat1,
    ACTIONS(82), 2,
      anon_sym_FROM,
      anon_sym_EXPOSE,
  [391] = 4,
    ACTIONS(3), 1,
      aux_sym_expose_statement_token2,
    ACTIONS(88), 1,
      aux_sym_expose_statement_token1,
    STATE(25), 1,
      aux_sym__indent_repeat1,
    ACTIONS(86), 2,
      anon_sym_FROM,
      anon_sym_EXPOSE,
  [405] = 3,
    ACTIONS(90), 1,
      sym_port,
    STATE(57), 1,
      sym_port_protocol,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
  [416] = 2,
    ACTIONS(3), 1,
      aux_sym_expose_statement_token2,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      aux_sym_expose_statement_token1,
      aux_sym_image_name_token1,
  [425] = 3,
    ACTIONS(90), 1,
      sym_port,
    STATE(43), 1,
      sym_port_protocol,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
  [436] = 2,
    ACTIONS(3), 1,
      aux_sym_expose_statement_token2,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      aux_sym_expose_statement_token1,
      aux_sym_image_name_token1,
  [445] = 2,
    ACTIONS(3), 1,
      aux_sym_expose_statement_token2,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      aux_sym_expose_statement_token1,
      aux_sym_image_name_token1,
  [454] = 2,
    ACTIONS(3), 1,
      aux_sym_expose_statement_token2,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      aux_sym_expose_statement_token1,
      aux_sym_image_name_token1,
  [463] = 2,
    ACTIONS(3), 1,
      aux_sym_expose_statement_token2,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      aux_sym_expose_statement_token1,
      aux_sym_image_name_token1,
  [472] = 2,
    ACTIONS(3), 1,
      aux_sym_expose_statement_token2,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      aux_sym_expose_statement_token1,
      aux_sym_image_name_token1,
  [481] = 2,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      aux_sym_image_name_token1,
  [490] = 3,
    ACTIONS(90), 1,
      sym_port,
    STATE(46), 1,
      sym_port_protocol,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
  [501] = 2,
    ACTIONS(3), 1,
      aux_sym_expose_statement_token2,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      aux_sym_expose_statement_token1,
      aux_sym_image_name_token1,
  [510] = 2,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
  [518] = 2,
    ACTIONS(94), 1,
      aux_sym_version_statement_token1,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
  [526] = 2,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
  [534] = 3,
    ACTIONS(98), 1,
      aux_sym_expose_statement_token1,
    ACTIONS(100), 1,
      aux_sym_expose_statement_token2,
    STATE(44), 1,
      aux_sym_expose_statement_repeat1,
  [544] = 2,
    ACTIONS(102), 1,
      aux_sym_image_name_token2,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
  [552] = 3,
    ACTIONS(98), 1,
      aux_sym_expose_statement_token1,
    ACTIONS(104), 1,
      aux_sym_expose_statement_token2,
    STATE(48), 1,
      aux_sym_expose_statement_repeat1,
  [562] = 3,
    ACTIONS(106), 1,
      aux_sym_expose_statement_token1,
    ACTIONS(109), 1,
      aux_sym_expose_statement_token2,
    STATE(44), 1,
      aux_sym_expose_statement_repeat1,
  [572] = 2,
    ACTIONS(113), 1,
      anon_sym_SLASH,
    ACTIONS(111), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
  [580] = 3,
    ACTIONS(98), 1,
      aux_sym_expose_statement_token1,
    ACTIONS(115), 1,
      aux_sym_expose_statement_token2,
    STATE(41), 1,
      aux_sym_expose_statement_repeat1,
  [590] = 2,
    ACTIONS(117), 1,
      aux_sym_image_name_token1,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
  [598] = 3,
    ACTIONS(98), 1,
      aux_sym_expose_statement_token1,
    ACTIONS(119), 1,
      aux_sym_expose_statement_token2,
    STATE(44), 1,
      aux_sym_expose_statement_repeat1,
  [608] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
  [616] = 2,
    ACTIONS(123), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
  [624] = 2,
    ACTIONS(125), 1,
      sym_protocol,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
  [632] = 2,
    ACTIONS(127), 1,
      aux_sym_image_name_token2,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
  [640] = 2,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
  [648] = 2,
    ACTIONS(129), 1,
      aux_sym_image_name_token1,
    ACTIONS(3), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
  [656] = 2,
    ACTIONS(3), 1,
      aux_sym_expose_statement_token2,
    ACTIONS(131), 1,
      aux_sym_expose_statement_token1,
  [663] = 2,
    ACTIONS(3), 1,
      aux_sym_expose_statement_token1,
    ACTIONS(133), 1,
      aux_sym_expose_statement_token2,
  [670] = 1,
    ACTIONS(109), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
  [675] = 1,
    ACTIONS(135), 2,
      aux_sym_expose_statement_token1,
      aux_sym_expose_statement_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 61,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 105,
  [SMALL_STATE(7)] = 126,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 162,
  [SMALL_STATE(10)] = 176,
  [SMALL_STATE(11)] = 194,
  [SMALL_STATE(12)] = 205,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 231,
  [SMALL_STATE(15)] = 242,
  [SMALL_STATE(16)] = 253,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 275,
  [SMALL_STATE(19)] = 292,
  [SMALL_STATE(20)] = 303,
  [SMALL_STATE(21)] = 318,
  [SMALL_STATE(22)] = 335,
  [SMALL_STATE(23)] = 347,
  [SMALL_STATE(24)] = 363,
  [SMALL_STATE(25)] = 377,
  [SMALL_STATE(26)] = 391,
  [SMALL_STATE(27)] = 405,
  [SMALL_STATE(28)] = 416,
  [SMALL_STATE(29)] = 425,
  [SMALL_STATE(30)] = 436,
  [SMALL_STATE(31)] = 445,
  [SMALL_STATE(32)] = 454,
  [SMALL_STATE(33)] = 463,
  [SMALL_STATE(34)] = 472,
  [SMALL_STATE(35)] = 481,
  [SMALL_STATE(36)] = 490,
  [SMALL_STATE(37)] = 501,
  [SMALL_STATE(38)] = 510,
  [SMALL_STATE(39)] = 518,
  [SMALL_STATE(40)] = 526,
  [SMALL_STATE(41)] = 534,
  [SMALL_STATE(42)] = 544,
  [SMALL_STATE(43)] = 552,
  [SMALL_STATE(44)] = 562,
  [SMALL_STATE(45)] = 572,
  [SMALL_STATE(46)] = 580,
  [SMALL_STATE(47)] = 590,
  [SMALL_STATE(48)] = 598,
  [SMALL_STATE(49)] = 608,
  [SMALL_STATE(50)] = 616,
  [SMALL_STATE(51)] = 624,
  [SMALL_STATE(52)] = 632,
  [SMALL_STATE(53)] = 640,
  [SMALL_STATE(54)] = 648,
  [SMALL_STATE(55)] = 656,
  [SMALL_STATE(56)] = 663,
  [SMALL_STATE(57)] = 670,
  [SMALL_STATE(58)] = 675,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_statements_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_statements_repeat1, 2), SHIFT_REPEAT(20),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_statements_repeat1, 2), SHIFT_REPEAT(29),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_statements, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_targets_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_targets_repeat1, 2), SHIFT_REPEAT(50),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targets, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 4),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 2, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_statement, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_statement, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_block_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_block_repeat1, 2), SHIFT_REPEAT(26),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_statement, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_block, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__indent_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__indent_repeat1, 2), SHIFT_REPEAT(24),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indent, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indent, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expose_statement_repeat1, 2), SHIFT_REPEAT(27),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_statement_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_protocol, 1, .production_id = 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [121] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_header, 3, .production_id = 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_protocol, 3, .production_id = 6),
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
