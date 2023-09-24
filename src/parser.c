#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 80
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_VERSION = 1,
  aux_sym_version_number_token1 = 2,
  anon_sym_DOT = 3,
  anon_sym_FROM = 4,
  anon_sym_EXPOSE = 5,
  anon_sym_ = 6,
  anon_sym_SLASH = 7,
  sym_port = 8,
  sym_protocol = 9,
  aux_sym_target_token1 = 10,
  aux_sym_target_header_token1 = 11,
  anon_sym_COLON = 12,
  anon_sym_PLUS = 13,
  aux_sym_local_ref_token1 = 14,
  aux_sym_classical_ref_token1 = 15,
  sym__whitespace = 16,
  sym_program = 17,
  sym_version = 18,
  sym_version_number = 19,
  sym_stmts = 20,
  sym_stmt = 21,
  sym_command_stmt = 22,
  sym_from_stmt = 23,
  sym_expose_stmt = 24,
  sym_port_protocol = 25,
  sym_targets = 26,
  sym_target_or_user_command = 27,
  sym_target = 28,
  sym_target_header = 29,
  sym_target_block = 30,
  sym_target_ref = 31,
  sym_local_ref = 32,
  sym_classical_ref = 33,
  sym__indent = 34,
  aux_sym_version_number_repeat1 = 35,
  aux_sym_stmts_repeat1 = 36,
  aux_sym_expose_stmt_repeat1 = 37,
  aux_sym_targets_repeat1 = 38,
  aux_sym_target_block_repeat1 = 39,
  aux_sym__indent_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_VERSION] = "VERSION",
  [aux_sym_version_number_token1] = "version_number_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_FROM] = "FROM",
  [anon_sym_EXPOSE] = "EXPOSE",
  [anon_sym_] = " ",
  [anon_sym_SLASH] = "/",
  [sym_port] = "port",
  [sym_protocol] = "protocol",
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
  [sym_expose_stmt] = "expose_stmt",
  [sym_port_protocol] = "port_protocol",
  [sym_targets] = "targets",
  [sym_target_or_user_command] = "target_or_user_command",
  [sym_target] = "target",
  [sym_target_header] = "target_header",
  [sym_target_block] = "target_block",
  [sym_target_ref] = "target_ref",
  [sym_local_ref] = "local_ref",
  [sym_classical_ref] = "classical_ref",
  [sym__indent] = "_indent",
  [aux_sym_version_number_repeat1] = "version_number_repeat1",
  [aux_sym_stmts_repeat1] = "stmts_repeat1",
  [aux_sym_expose_stmt_repeat1] = "expose_stmt_repeat1",
  [aux_sym_targets_repeat1] = "targets_repeat1",
  [aux_sym_target_block_repeat1] = "target_block_repeat1",
  [aux_sym__indent_repeat1] = "_indent_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [aux_sym_version_number_token1] = aux_sym_version_number_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_EXPOSE] = anon_sym_EXPOSE,
  [anon_sym_] = anon_sym_,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_port] = sym_port,
  [sym_protocol] = sym_protocol,
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
  [sym_expose_stmt] = sym_expose_stmt,
  [sym_port_protocol] = sym_port_protocol,
  [sym_targets] = sym_targets,
  [sym_target_or_user_command] = sym_target_or_user_command,
  [sym_target] = sym_target,
  [sym_target_header] = sym_target_header,
  [sym_target_block] = sym_target_block,
  [sym_target_ref] = sym_target_ref,
  [sym_local_ref] = sym_local_ref,
  [sym_classical_ref] = sym_classical_ref,
  [sym__indent] = sym__indent,
  [aux_sym_version_number_repeat1] = aux_sym_version_number_repeat1,
  [aux_sym_stmts_repeat1] = aux_sym_stmts_repeat1,
  [aux_sym_expose_stmt_repeat1] = aux_sym_expose_stmt_repeat1,
  [aux_sym_targets_repeat1] = aux_sym_targets_repeat1,
  [aux_sym_target_block_repeat1] = aux_sym_target_block_repeat1,
  [aux_sym__indent_repeat1] = aux_sym__indent_repeat1,
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
  [anon_sym_EXPOSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
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
  [sym_expose_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_port_protocol] = {
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
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_version_number_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stmts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_stmt_repeat1] = {
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 21,
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
  [38] = 6,
  [39] = 15,
  [40] = 16,
  [41] = 10,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 48,
  [49] = 19,
  [50] = 22,
  [51] = 47,
  [52] = 20,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 35,
  [61] = 34,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 29,
  [66] = 30,
  [67] = 67,
  [68] = 68,
  [69] = 37,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 28,
  [74] = 74,
  [75] = 75,
  [76] = 71,
  [77] = 72,
  [78] = 67,
  [79] = 75,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == 'E') ADVANCE(17);
      if (lookahead == 'F') ADVANCE(13);
      if (lookahead == 'V') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(1);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'I') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'M') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'N') ADVANCE(23);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 19:
      if (eof) ADVANCE(22);
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == 'E') ADVANCE(17);
      if (lookahead == 'F') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == 'E') ADVANCE(17);
      if (lookahead == 'F') ADVANCE(13);
      if (lookahead == 'V') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == 'E') ADVANCE(17);
      if (lookahead == 'F') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_version_number_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EXPOSE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(1);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_protocol);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_protocol);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '\t') ADVANCE(1);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_target_header_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_local_ref_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_classical_ref_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 40},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 40},
  [79] = {.lex_state = 21},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [aux_sym_version_number_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_EXPOSE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_protocol] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_local_ref_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(63),
    [sym_version] = STATE(2),
    [sym_stmts] = STATE(9),
    [sym_stmt] = STATE(5),
    [sym_command_stmt] = STATE(35),
    [sym_from_stmt] = STATE(34),
    [sym_expose_stmt] = STATE(34),
    [sym_targets] = STATE(62),
    [sym_target_or_user_command] = STATE(12),
    [sym_target] = STATE(56),
    [sym_target_header] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_VERSION] = ACTIONS(5),
    [anon_sym_FROM] = ACTIONS(7),
    [anon_sym_EXPOSE] = ACTIONS(9),
    [aux_sym_target_header_token1] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      anon_sym_FROM,
    ACTIONS(9), 1,
      anon_sym_EXPOSE,
    ACTIONS(11), 1,
      aux_sym_target_header_token1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_stmt,
    STATE(12), 1,
      sym_target_or_user_command,
    STATE(17), 1,
      sym_stmts,
    STATE(35), 1,
      sym_command_stmt,
    STATE(56), 1,
      sym_target,
    STATE(68), 1,
      sym_target_header,
    STATE(70), 1,
      sym_targets,
    STATE(34), 2,
      sym_from_stmt,
      sym_expose_stmt,
  [38] = 6,
    ACTIONS(17), 1,
      anon_sym_FROM,
    ACTIONS(20), 1,
      anon_sym_EXPOSE,
    STATE(35), 1,
      sym_command_stmt,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      aux_sym_target_header_token1,
    STATE(3), 2,
      sym_stmt,
      aux_sym_stmts_repeat1,
    STATE(34), 2,
      sym_from_stmt,
      sym_expose_stmt,
  [60] = 6,
    ACTIONS(7), 1,
      anon_sym_FROM,
    ACTIONS(9), 1,
      anon_sym_EXPOSE,
    STATE(35), 1,
      sym_command_stmt,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      aux_sym_target_header_token1,
    STATE(3), 2,
      sym_stmt,
      aux_sym_stmts_repeat1,
    STATE(34), 2,
      sym_from_stmt,
      sym_expose_stmt,
  [82] = 6,
    ACTIONS(7), 1,
      anon_sym_FROM,
    ACTIONS(9), 1,
      anon_sym_EXPOSE,
    STATE(35), 1,
      sym_command_stmt,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      aux_sym_target_header_token1,
    STATE(4), 2,
      sym_stmt,
      aux_sym_stmts_repeat1,
    STATE(34), 2,
      sym_from_stmt,
      sym_expose_stmt,
  [104] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_,
    STATE(6), 1,
      aux_sym_expose_stmt_repeat1,
    ACTIONS(29), 3,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [119] = 5,
    ACTIONS(34), 1,
      anon_sym_FROM,
    ACTIONS(36), 1,
      anon_sym_EXPOSE,
    STATE(48), 1,
      sym_stmt,
    STATE(60), 1,
      sym_command_stmt,
    STATE(61), 2,
      sym_from_stmt,
      sym_expose_stmt,
  [136] = 5,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      aux_sym_target_header_token1,
    STATE(56), 1,
      sym_target,
    STATE(68), 1,
      sym_target_header,
    STATE(8), 2,
      sym_target_or_user_command,
      aux_sym_targets_repeat1,
  [153] = 6,
    ACTIONS(11), 1,
      aux_sym_target_header_token1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_target_or_user_command,
    STATE(56), 1,
      sym_target,
    STATE(68), 1,
      sym_target_header,
    STATE(70), 1,
      sym_targets,
  [172] = 4,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_,
    STATE(6), 1,
      aux_sym_expose_stmt_repeat1,
    ACTIONS(45), 3,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [187] = 3,
    ACTIONS(51), 1,
      aux_sym_version_number_token1,
    STATE(14), 1,
      aux_sym_version_number_repeat1,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [200] = 5,
    ACTIONS(11), 1,
      aux_sym_target_header_token1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_target,
    STATE(68), 1,
      sym_target_header,
    STATE(18), 2,
      sym_target_or_user_command,
      aux_sym_targets_repeat1,
  [217] = 5,
    ACTIONS(34), 1,
      anon_sym_FROM,
    ACTIONS(36), 1,
      anon_sym_EXPOSE,
    STATE(59), 1,
      sym_stmt,
    STATE(60), 1,
      sym_command_stmt,
    STATE(61), 2,
      sym_from_stmt,
      sym_expose_stmt,
  [234] = 3,
    ACTIONS(57), 1,
      aux_sym_version_number_token1,
    STATE(14), 1,
      aux_sym_version_number_repeat1,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [247] = 3,
    ACTIONS(64), 1,
      anon_sym_SLASH,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_,
    ACTIONS(62), 3,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [260] = 4,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_expose_stmt_repeat1,
    ACTIONS(68), 3,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [275] = 6,
    ACTIONS(11), 1,
      aux_sym_target_header_token1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_target_or_user_command,
    STATE(56), 1,
      sym_target,
    STATE(68), 1,
      sym_target_header,
    STATE(74), 1,
      sym_targets,
  [294] = 5,
    ACTIONS(11), 1,
      aux_sym_target_header_token1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_target,
    STATE(68), 1,
      sym_target_header,
    STATE(8), 2,
      sym_target_or_user_command,
      aux_sym_targets_repeat1,
  [311] = 2,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_,
    ACTIONS(29), 3,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [321] = 2,
    ACTIONS(76), 1,
      anon_sym_COLON,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [331] = 4,
    ACTIONS(78), 1,
      anon_sym_PLUS,
    ACTIONS(80), 1,
      aux_sym_local_ref_token1,
    STATE(29), 1,
      sym_target_ref,
    STATE(30), 2,
      sym_local_ref,
      sym_classical_ref,
  [345] = 2,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      anon_sym_,
    ACTIONS(84), 3,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [355] = 4,
    ACTIONS(86), 1,
      anon_sym_PLUS,
    ACTIONS(88), 1,
      aux_sym_local_ref_token1,
    STATE(65), 1,
      sym_target_ref,
    STATE(66), 2,
      sym_local_ref,
      sym_classical_ref,
  [369] = 5,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      aux_sym_target_header_token1,
    ACTIONS(94), 1,
      sym__whitespace,
    STATE(7), 1,
      sym__indent,
    STATE(42), 1,
      sym_target_block,
  [385] = 2,
    ACTIONS(98), 1,
      anon_sym_DOT,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [395] = 3,
    ACTIONS(102), 1,
      sym__whitespace,
    STATE(26), 1,
      aux_sym__indent_repeat1,
    ACTIONS(100), 2,
      anon_sym_FROM,
      anon_sym_EXPOSE,
  [406] = 1,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [413] = 1,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [420] = 1,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [427] = 1,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [434] = 3,
    ACTIONS(115), 1,
      sym__whitespace,
    STATE(26), 1,
      aux_sym__indent_repeat1,
    ACTIONS(113), 2,
      anon_sym_FROM,
      anon_sym_EXPOSE,
  [445] = 4,
    ACTIONS(94), 1,
      sym__whitespace,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      aux_sym_target_header_token1,
    STATE(13), 1,
      sym__indent,
  [458] = 4,
    ACTIONS(94), 1,
      sym__whitespace,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      aux_sym_target_header_token1,
    STATE(13), 1,
      sym__indent,
  [471] = 1,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [478] = 1,
    ACTIONS(127), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [485] = 3,
    ACTIONS(131), 1,
      sym__whitespace,
    STATE(31), 1,
      aux_sym__indent_repeat1,
    ACTIONS(129), 2,
      anon_sym_FROM,
      anon_sym_EXPOSE,
  [496] = 1,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_EXPOSE,
      aux_sym_target_header_token1,
  [503] = 3,
    ACTIONS(29), 1,
      aux_sym_target_token1,
    ACTIONS(135), 1,
      anon_sym_,
    STATE(38), 1,
      aux_sym_expose_stmt_repeat1,
  [513] = 2,
    ACTIONS(138), 1,
      anon_sym_SLASH,
    ACTIONS(62), 2,
      anon_sym_,
      aux_sym_target_token1,
  [521] = 3,
    ACTIONS(68), 1,
      aux_sym_target_token1,
    ACTIONS(140), 1,
      anon_sym_,
    STATE(41), 1,
      aux_sym_expose_stmt_repeat1,
  [531] = 3,
    ACTIONS(45), 1,
      aux_sym_target_token1,
    ACTIONS(140), 1,
      anon_sym_,
    STATE(38), 1,
      aux_sym_expose_stmt_repeat1,
  [541] = 1,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      aux_sym_target_header_token1,
  [546] = 2,
    ACTIONS(144), 1,
      aux_sym_target_token1,
    STATE(43), 1,
      aux_sym_target_block_repeat1,
  [553] = 2,
    ACTIONS(147), 1,
      aux_sym_version_number_token1,
    STATE(11), 1,
      aux_sym_version_number_repeat1,
  [560] = 2,
    ACTIONS(149), 1,
      sym_port,
    STATE(40), 1,
      sym_port_protocol,
  [567] = 2,
    ACTIONS(151), 1,
      sym_port,
    STATE(16), 1,
      sym_port_protocol,
  [574] = 2,
    ACTIONS(151), 1,
      sym_port,
    STATE(19), 1,
      sym_port_protocol,
  [581] = 2,
    ACTIONS(153), 1,
      aux_sym_target_token1,
    STATE(53), 1,
      aux_sym_target_block_repeat1,
  [588] = 1,
    ACTIONS(29), 2,
      anon_sym_,
      aux_sym_target_token1,
  [593] = 1,
    ACTIONS(84), 2,
      anon_sym_,
      aux_sym_target_token1,
  [598] = 2,
    ACTIONS(149), 1,
      sym_port,
    STATE(49), 1,
      sym_port_protocol,
  [605] = 2,
    ACTIONS(74), 1,
      aux_sym_target_token1,
    ACTIONS(155), 1,
      anon_sym_COLON,
  [612] = 2,
    ACTIONS(157), 1,
      aux_sym_target_token1,
    STATE(43), 1,
      aux_sym_target_block_repeat1,
  [619] = 2,
    ACTIONS(159), 1,
      aux_sym_version_number_token1,
    STATE(27), 1,
      sym_version_number,
  [626] = 2,
    ACTIONS(94), 1,
      sym__whitespace,
    STATE(13), 1,
      sym__indent,
  [633] = 1,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      aux_sym_target_header_token1,
  [638] = 1,
    ACTIONS(163), 1,
      aux_sym_target_token1,
  [642] = 1,
    ACTIONS(165), 1,
      anon_sym_COLON,
  [646] = 1,
    ACTIONS(167), 1,
      aux_sym_target_token1,
  [650] = 1,
    ACTIONS(127), 1,
      aux_sym_target_token1,
  [654] = 1,
    ACTIONS(125), 1,
      aux_sym_target_token1,
  [658] = 1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
  [662] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [666] = 1,
    ACTIONS(171), 1,
      sym__whitespace,
  [670] = 1,
    ACTIONS(109), 1,
      aux_sym_target_token1,
  [674] = 1,
    ACTIONS(111), 1,
      aux_sym_target_token1,
  [678] = 1,
    ACTIONS(173), 1,
      aux_sym_classical_ref_token1,
  [682] = 1,
    ACTIONS(175), 1,
      aux_sym_target_token1,
  [686] = 1,
    ACTIONS(133), 1,
      aux_sym_target_token1,
  [690] = 1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
  [694] = 1,
    ACTIONS(177), 1,
      aux_sym_local_ref_token1,
  [698] = 1,
    ACTIONS(179), 1,
      sym_protocol,
  [702] = 1,
    ACTIONS(107), 1,
      aux_sym_target_token1,
  [706] = 1,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
  [710] = 1,
    ACTIONS(183), 1,
      sym__whitespace,
  [714] = 1,
    ACTIONS(185), 1,
      aux_sym_local_ref_token1,
  [718] = 1,
    ACTIONS(187), 1,
      sym_protocol,
  [722] = 1,
    ACTIONS(189), 1,
      aux_sym_classical_ref_token1,
  [726] = 1,
    ACTIONS(191), 1,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 153,
  [SMALL_STATE(10)] = 172,
  [SMALL_STATE(11)] = 187,
  [SMALL_STATE(12)] = 200,
  [SMALL_STATE(13)] = 217,
  [SMALL_STATE(14)] = 234,
  [SMALL_STATE(15)] = 247,
  [SMALL_STATE(16)] = 260,
  [SMALL_STATE(17)] = 275,
  [SMALL_STATE(18)] = 294,
  [SMALL_STATE(19)] = 311,
  [SMALL_STATE(20)] = 321,
  [SMALL_STATE(21)] = 331,
  [SMALL_STATE(22)] = 345,
  [SMALL_STATE(23)] = 355,
  [SMALL_STATE(24)] = 369,
  [SMALL_STATE(25)] = 385,
  [SMALL_STATE(26)] = 395,
  [SMALL_STATE(27)] = 406,
  [SMALL_STATE(28)] = 413,
  [SMALL_STATE(29)] = 420,
  [SMALL_STATE(30)] = 427,
  [SMALL_STATE(31)] = 434,
  [SMALL_STATE(32)] = 445,
  [SMALL_STATE(33)] = 458,
  [SMALL_STATE(34)] = 471,
  [SMALL_STATE(35)] = 478,
  [SMALL_STATE(36)] = 485,
  [SMALL_STATE(37)] = 496,
  [SMALL_STATE(38)] = 503,
  [SMALL_STATE(39)] = 513,
  [SMALL_STATE(40)] = 521,
  [SMALL_STATE(41)] = 531,
  [SMALL_STATE(42)] = 541,
  [SMALL_STATE(43)] = 546,
  [SMALL_STATE(44)] = 553,
  [SMALL_STATE(45)] = 560,
  [SMALL_STATE(46)] = 567,
  [SMALL_STATE(47)] = 574,
  [SMALL_STATE(48)] = 581,
  [SMALL_STATE(49)] = 588,
  [SMALL_STATE(50)] = 593,
  [SMALL_STATE(51)] = 598,
  [SMALL_STATE(52)] = 605,
  [SMALL_STATE(53)] = 612,
  [SMALL_STATE(54)] = 619,
  [SMALL_STATE(55)] = 626,
  [SMALL_STATE(56)] = 633,
  [SMALL_STATE(57)] = 638,
  [SMALL_STATE(58)] = 642,
  [SMALL_STATE(59)] = 646,
  [SMALL_STATE(60)] = 650,
  [SMALL_STATE(61)] = 654,
  [SMALL_STATE(62)] = 658,
  [SMALL_STATE(63)] = 662,
  [SMALL_STATE(64)] = 666,
  [SMALL_STATE(65)] = 670,
  [SMALL_STATE(66)] = 674,
  [SMALL_STATE(67)] = 678,
  [SMALL_STATE(68)] = 682,
  [SMALL_STATE(69)] = 686,
  [SMALL_STATE(70)] = 690,
  [SMALL_STATE(71)] = 694,
  [SMALL_STATE(72)] = 698,
  [SMALL_STATE(73)] = 702,
  [SMALL_STATE(74)] = 706,
  [SMALL_STATE(75)] = 710,
  [SMALL_STATE(76)] = 714,
  [SMALL_STATE(77)] = 718,
  [SMALL_STATE(78)] = 722,
  [SMALL_STATE(79)] = 726,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmts_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmts_repeat1, 2), SHIFT_REPEAT(75),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmts_repeat1, 2), SHIFT_REPEAT(46),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmts, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmts, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_stmt_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_stmt_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expose_stmt_repeat1, 2), SHIFT_REPEAT(47),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_targets_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_targets_repeat1, 2), SHIFT_REPEAT(58),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_stmt, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_stmt, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_number, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targets, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_number_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_number_repeat1, 2), SHIFT_REPEAT(14),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_protocol, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port_protocol, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_stmt, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_stmt, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targets, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_ref, 1, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_protocol, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port_protocol, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_number, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__indent_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__indent_repeat1, 2), SHIFT_REPEAT(26),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_ref, 3, .production_id = 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_stmt, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__indent, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_block, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_block, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_block, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_block, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_stmt, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__indent, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_ref, 2, .production_id = 4),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_stmt_repeat1, 2), SHIFT_REPEAT(51),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 3),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_block_repeat1, 2), SHIFT_REPEAT(55),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_or_user_command, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_header, 2, .production_id = 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_block_repeat1, 3),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
