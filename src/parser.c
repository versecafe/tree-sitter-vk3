#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym__command_or_entry = 2,
  anon_sym_EQ = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  sym_varname = 6,
  sym_number = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_string_token1 = 9,
  anon_sym_yes = 10,
  anon_sym_no = 11,
  sym_program = 12,
  sym_variable_assignment = 13,
  sym_object_assignment = 14,
  sym_key_value_pair = 15,
  sym_value = 16,
  sym_string = 17,
  sym_bool = 18,
  aux_sym_program_repeat1 = 19,
  aux_sym_object_assignment_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__command_or_entry] = "_command_or_entry",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_varname] = "varname",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [sym_program] = "program",
  [sym_variable_assignment] = "variable_assignment",
  [sym_object_assignment] = "object_assignment",
  [sym_key_value_pair] = "key_value_pair",
  [sym_value] = "value",
  [sym_string] = "string",
  [sym_bool] = "bool",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_object_assignment_repeat1] = "object_assignment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym__command_or_entry] = sym__command_or_entry,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_varname] = sym_varname,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [sym_program] = sym_program,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_object_assignment] = sym_object_assignment,
  [sym_key_value_pair] = sym_key_value_pair,
  [sym_value] = sym_value,
  [sym_string] = sym_string,
  [sym_bool] = sym_bool,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_object_assignment_repeat1] = aux_sym_object_assignment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__command_or_entry] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_varname] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_object_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_assignment_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [16] = 9,
  [17] = 10,
  [18] = 14,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 19,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      ADVANCE_MAP(
        '"', 16,
        '#', 5,
        '=', 7,
        '@', 6,
        'n', 11,
        'y', 10,
        '{', 8,
        '}', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 1:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == '}') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__command_or_entry);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_varname);
      if (lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_varname);
      if (lookahead == 'o') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_varname);
      if (lookahead == 's') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_varname);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_yes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_no);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__command_or_entry] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_varname] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(23),
    [sym_variable_assignment] = STATE(5),
    [sym_object_assignment] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym__command_or_entry] = ACTIONS(7),
    [sym_varname] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_varname,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_value,
    ACTIONS(19), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(9), 2,
      sym_string,
      sym_bool,
  [27] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_varname,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_value,
    ACTIONS(27), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(16), 2,
      sym_string,
      sym_bool,
  [51] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      sym_varname,
    ACTIONS(31), 2,
      sym_comment,
      sym__command_or_entry,
    STATE(4), 3,
      sym_variable_assignment,
      sym_object_assignment,
      aux_sym_program_repeat1,
  [67] = 4,
    ACTIONS(9), 1,
      sym_varname,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 2,
      sym_comment,
      sym__command_or_entry,
    STATE(4), 3,
      sym_variable_assignment,
      sym_object_assignment,
      aux_sym_program_repeat1,
  [83] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      sym_varname,
    STATE(6), 2,
      sym_key_value_pair,
      aux_sym_object_assignment_repeat1,
  [97] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      sym_varname,
    STATE(8), 2,
      sym_key_value_pair,
      aux_sym_object_assignment_repeat1,
  [111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_varname,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_key_value_pair,
      aux_sym_object_assignment_repeat1,
  [125] = 1,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym__command_or_entry,
      sym_varname,
  [132] = 1,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym__command_or_entry,
      sym_varname,
  [139] = 1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym__command_or_entry,
      sym_varname,
  [146] = 1,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym__command_or_entry,
      sym_varname,
  [153] = 1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym__command_or_entry,
      sym_varname,
  [160] = 1,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym__command_or_entry,
      sym_varname,
  [167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 2,
      anon_sym_RBRACE,
      sym_varname,
  [175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 2,
      anon_sym_RBRACE,
      sym_varname,
  [183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 2,
      anon_sym_RBRACE,
      sym_varname,
  [191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 2,
      anon_sym_RBRACE,
      sym_varname,
  [199] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(68), 1,
      aux_sym_string_token1,
  [206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_EQ,
  [213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
  [220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_EQ,
  [227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
  [241] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(80), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 67,
  [SMALL_STATE(6)] = 83,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 111,
  [SMALL_STATE(9)] = 125,
  [SMALL_STATE(10)] = 132,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 146,
  [SMALL_STATE(13)] = 153,
  [SMALL_STATE(14)] = 160,
  [SMALL_STATE(15)] = 167,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 183,
  [SMALL_STATE(18)] = 191,
  [SMALL_STATE(19)] = 199,
  [SMALL_STATE(20)] = 206,
  [SMALL_STATE(21)] = 213,
  [SMALL_STATE(22)] = 220,
  [SMALL_STATE(23)] = 227,
  [SMALL_STATE(24)] = 234,
  [SMALL_STATE(25)] = 241,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_assignment_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_assignment_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_assignment, 4, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_assignment, 5, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_vk3(void) {
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
