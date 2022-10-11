#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 2

enum {
  sym_identifier = 1,
  sym_number = 2,
  anon_sym_function = 3,
  anon_sym_class = 4,
  anon_sym_namespace = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_if = 8,
  anon_sym_elseif = 9,
  anon_sym_else = 10,
  anon_sym_or = 11,
  anon_sym_and = 12,
  anon_sym_not = 13,
  anon_sym_is = 14,
  anon_sym_bool = 15,
  anon_sym_int = 16,
  anon_sym_str = 17,
  anon_sym_float = 18,
  anon_sym_double = 19,
  anon_sym_complex = 20,
  anon_sym_tuple = 21,
  anon_sym_dict = 22,
  anon_sym_set = 23,
  anon_sym_bytes = 24,
  anon_sym_bytearray = 25,
  anon_sym_NoneType = 26,
  anon_sym_null = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  anon_sym_return = 30,
  anon_sym_SEMI = 31,
  anon_sym_DASH = 32,
  anon_sym_BANG = 33,
  anon_sym_STAR = 34,
  anon_sym_PLUS = 35,
  anon_sym_LBRACK = 36,
  anon_sym_RBRACK = 37,
  anon_sym_AMP = 38,
  sym_source_file = 39,
  sym__definition = 40,
  sym_function_definition = 41,
  sym_parameter_list = 42,
  sym_conditional_expression = 43,
  sym__type = 44,
  sym_block = 45,
  sym__statement = 46,
  sym_return_statement = 47,
  sym__expression = 48,
  sym_unary_expression = 49,
  sym_binary_expression = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_block_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_function] = "function",
  [anon_sym_class] = "class",
  [anon_sym_namespace] = "namespace",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_not] = "not",
  [anon_sym_is] = "is",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_str] = "str",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_complex] = "complex",
  [anon_sym_tuple] = "tuple",
  [anon_sym_dict] = "dict",
  [anon_sym_set] = "set",
  [anon_sym_bytes] = "bytes",
  [anon_sym_bytearray] = "bytearray",
  [anon_sym_NoneType] = "NoneType",
  [anon_sym_null] = "null",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AMP] = "&",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_conditional_expression] = "conditional_expression",
  [sym__type] = "_type",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_complex] = anon_sym_complex,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_dict] = anon_sym_dict,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_bytearray] = anon_sym_bytearray,
  [anon_sym_NoneType] = anon_sym_NoneType,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_conditional_expression] = sym_conditional_expression,
  [sym__type] = sym__type,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytearray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NoneType] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_name = 2,
  field_parameters = 3,
  field_return_type = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 10},
    {field_name, 7},
    {field_parameters, 8},
    {field_return_type, 9},
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
  [11] = 10,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 12,
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
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 25,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 26,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(119);
      if (lookahead == '&') ADVANCE(124);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == ';') ADVANCE(117);
      if (lookahead == 'N') ADVANCE(51);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '{') ADVANCE(114);
      if (lookahead == '}') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(119);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 3:
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(95);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 80:
      if (lookahead == 'x') ADVANCE(106);
      END_STATE();
    case 81:
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 82:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 83:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_if);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_complex);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_dict);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_bytearray);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_NoneType);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 83},
  [32] = {.lex_state = 83},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 83},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 83},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_complex] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_dict] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_bytearray] = ACTIONS(1),
    [anon_sym_NoneType] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym__definition] = STATE(13),
    [sym_function_definition] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(24), 1,
      sym__type,
    ACTIONS(7), 13,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_str,
      anon_sym_float,
      anon_sym_double,
      anon_sym_complex,
      anon_sym_tuple,
      anon_sym_dict,
      anon_sym_set,
      anon_sym_bytes,
      anon_sym_bytearray,
      anon_sym_NoneType,
      anon_sym_null,
  [19] = 2,
    STATE(27), 1,
      sym__type,
    ACTIONS(9), 13,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_str,
      anon_sym_float,
      anon_sym_double,
      anon_sym_complex,
      anon_sym_tuple,
      anon_sym_dict,
      anon_sym_set,
      anon_sym_bytes,
      anon_sym_bytearray,
      anon_sym_NoneType,
      anon_sym_null,
  [38] = 1,
    ACTIONS(11), 13,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_str,
      anon_sym_float,
      anon_sym_double,
      anon_sym_complex,
      anon_sym_tuple,
      anon_sym_dict,
      anon_sym_set,
      anon_sym_bytes,
      anon_sym_bytearray,
      anon_sym_NoneType,
      anon_sym_null,
  [54] = 6,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_BANG,
    STATE(20), 4,
      sym_conditional_expression,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [76] = 6,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number,
    STATE(21), 4,
      sym_conditional_expression,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [98] = 6,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym_number,
    STATE(22), 4,
      sym_conditional_expression,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [120] = 6,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    STATE(18), 4,
      sym_conditional_expression,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [142] = 6,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_number,
    STATE(17), 4,
      sym_conditional_expression,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [164] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      anon_sym_return,
    STATE(15), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [176] = 3,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(15), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [188] = 3,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(11), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [200] = 3,
    ACTIONS(5), 1,
      anon_sym_function,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(14), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [212] = 3,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_function,
    STATE(14), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [224] = 3,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      anon_sym_return,
    STATE(15), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [236] = 3,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(10), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [248] = 3,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(65), 1,
      anon_sym_PLUS,
  [258] = 1,
    ACTIONS(67), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
  [264] = 1,
    ACTIONS(69), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
  [270] = 2,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(71), 2,
      anon_sym_SEMI,
      anon_sym_PLUS,
  [278] = 1,
    ACTIONS(71), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
  [284] = 2,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(67), 2,
      anon_sym_SEMI,
      anon_sym_PLUS,
  [292] = 1,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_function,
  [297] = 2,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
  [304] = 1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_function,
  [309] = 1,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_function,
  [314] = 2,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
  [321] = 2,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_parameter_list,
  [328] = 1,
    ACTIONS(85), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [333] = 2,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_parameter_list,
  [340] = 1,
    ACTIONS(87), 1,
      sym_identifier,
  [344] = 1,
    ACTIONS(89), 1,
      sym_identifier,
  [348] = 1,
    ACTIONS(91), 1,
      anon_sym_or,
  [352] = 1,
    ACTIONS(93), 1,
      anon_sym_elseif,
  [356] = 1,
    ACTIONS(77), 1,
      sym_identifier,
  [360] = 1,
    ACTIONS(95), 1,
      anon_sym_else,
  [364] = 1,
    ACTIONS(97), 1,
      anon_sym_and,
  [368] = 1,
    ACTIONS(99), 1,
      anon_sym_not,
  [372] = 1,
    ACTIONS(101), 1,
      anon_sym_is,
  [376] = 1,
    ACTIONS(79), 1,
      sym_identifier,
  [380] = 1,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
  [384] = 1,
    ACTIONS(105), 1,
      anon_sym_class,
  [388] = 1,
    ACTIONS(107), 1,
      anon_sym_namespace,
  [392] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 98,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 142,
  [SMALL_STATE(10)] = 164,
  [SMALL_STATE(11)] = 176,
  [SMALL_STATE(12)] = 188,
  [SMALL_STATE(13)] = 200,
  [SMALL_STATE(14)] = 212,
  [SMALL_STATE(15)] = 224,
  [SMALL_STATE(16)] = 236,
  [SMALL_STATE(17)] = 248,
  [SMALL_STATE(18)] = 258,
  [SMALL_STATE(19)] = 264,
  [SMALL_STATE(20)] = 270,
  [SMALL_STATE(21)] = 278,
  [SMALL_STATE(22)] = 284,
  [SMALL_STATE(23)] = 292,
  [SMALL_STATE(24)] = 297,
  [SMALL_STATE(25)] = 304,
  [SMALL_STATE(26)] = 309,
  [SMALL_STATE(27)] = 314,
  [SMALL_STATE(28)] = 321,
  [SMALL_STATE(29)] = 328,
  [SMALL_STATE(30)] = 333,
  [SMALL_STATE(31)] = 340,
  [SMALL_STATE(32)] = 344,
  [SMALL_STATE(33)] = 348,
  [SMALL_STATE(34)] = 352,
  [SMALL_STATE(35)] = 356,
  [SMALL_STATE(36)] = 360,
  [SMALL_STATE(37)] = 364,
  [SMALL_STATE(38)] = 368,
  [SMALL_STATE(39)] = 372,
  [SMALL_STATE(40)] = 376,
  [SMALL_STATE(41)] = 380,
  [SMALL_STATE(42)] = 384,
  [SMALL_STATE(43)] = 388,
  [SMALL_STATE(44)] = 392,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 7),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Voxel(void) {
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
