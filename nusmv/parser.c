#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 484
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 196
#define ALIAS_COUNT 0
#define TOKEN_COUNT 121
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_comment_token1 = 1,
  anon_sym_MODULE = 2,
  sym_identifier = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_ISA = 7,
  anon_sym_COMPUTE = 8,
  anon_sym_SEMI = 9,
  anon_sym_NAME = 10,
  anon_sym_COLON_EQ = 11,
  anon_sym_MIN = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_MAX = 15,
  anon_sym_EBF = 16,
  anon_sym_ABF = 17,
  anon_sym_EBG = 18,
  anon_sym_ABG = 19,
  anon_sym_A = 20,
  anon_sym_BU = 21,
  anon_sym_E = 22,
  anon_sym_DOT_DOT = 23,
  anon_sym_LTLSPEC = 24,
  anon_sym_BANG = 25,
  anon_sym_AMP = 26,
  anon_sym_PIPE = 27,
  anon_sym_xor = 28,
  anon_sym_xnor = 29,
  anon_sym_DASH_GT = 30,
  anon_sym_LT_DASH_GT = 31,
  anon_sym_X = 32,
  anon_sym_G = 33,
  anon_sym_F = 34,
  anon_sym_U = 35,
  anon_sym_V = 36,
  anon_sym_Y = 37,
  anon_sym_Z = 38,
  anon_sym_H = 39,
  anon_sym_O = 40,
  anon_sym_S = 41,
  anon_sym_T = 42,
  anon_sym_INVARSPEC = 43,
  anon_sym_CTLSPEC = 44,
  anon_sym_SPEC = 45,
  anon_sym_EG = 46,
  anon_sym_EX = 47,
  anon_sym_EF = 48,
  anon_sym_AG = 49,
  anon_sym_AX = 50,
  anon_sym_AF = 51,
  anon_sym_FAIRNESS = 52,
  anon_sym_JUSTICE = 53,
  anon_sym_COMPASSION = 54,
  anon_sym_INVAR = 55,
  anon_sym_INIT = 56,
  anon_sym_TRANS = 57,
  anon_sym_ASSIGN = 58,
  anon_sym_init = 59,
  anon_sym_next = 60,
  anon_sym_VAR = 61,
  anon_sym_IVAR = 62,
  anon_sym_FROZENVAR = 63,
  anon_sym_COLON = 64,
  anon_sym_DEFINE = 65,
  anon_sym_CONSTANTS = 66,
  anon_sym_process = 67,
  anon_sym_abs = 68,
  anon_sym_max = 69,
  anon_sym_min = 70,
  anon_sym_EQ = 71,
  anon_sym_BANG_EQ = 72,
  anon_sym_LT = 73,
  anon_sym_GT = 74,
  anon_sym_LT_EQ = 75,
  anon_sym_GT_EQ = 76,
  anon_sym_PLUS = 77,
  anon_sym_DASH = 78,
  anon_sym_STAR = 79,
  anon_sym_SLASH = 80,
  anon_sym_mod = 81,
  anon_sym_GT_GT = 82,
  anon_sym_LT_LT = 83,
  anon_sym_COLON_COLON = 84,
  anon_sym_union = 85,
  anon_sym_in = 86,
  anon_sym_word1 = 87,
  anon_sym_bool = 88,
  anon_sym_toint = 89,
  anon_sym_signed = 90,
  anon_sym_unsigned = 91,
  anon_sym_extend = 92,
  anon_sym_resize = 93,
  anon_sym_LBRACE = 94,
  anon_sym_RBRACE = 95,
  anon_sym_QMARK = 96,
  anon_sym_count = 97,
  anon_sym_case = 98,
  anon_sym_esac = 99,
  anon_sym_boolean = 100,
  anon_sym_word = 101,
  anon_sym_array = 102,
  anon_sym_of = 103,
  anon_sym_TRUE = 104,
  anon_sym_FALSE = 105,
  sym_digit = 106,
  sym_digits = 107,
  anon_sym_0 = 108,
  anon_sym__ = 109,
  anon_sym_u = 110,
  anon_sym_s = 111,
  anon_sym_b = 112,
  anon_sym_B = 113,
  anon_sym_o = 114,
  anon_sym_h = 115,
  anon_sym_d = 116,
  anon_sym_D = 117,
  sym_hex_digit = 118,
  anon_sym_DOT = 119,
  anon_sym_self = 120,
  sym_source_file = 121,
  sym_comment = 122,
  sym_module = 123,
  sym_module_parameters = 124,
  sym_module_body = 125,
  sym_module_element = 126,
  sym_isa_declaration = 127,
  sym_compute_specification = 128,
  sym_compute_expr = 129,
  sym_rtctl_expr = 130,
  sym_range = 131,
  sym_ltl_specification = 132,
  sym_ltl_expr = 133,
  sym_bound = 134,
  sym_invar_specification = 135,
  sym_ctl_specification = 136,
  sym_ctl_expr = 137,
  sym_fairness_constraint = 138,
  sym_invar_constraint = 139,
  sym_init_constraint = 140,
  sym_trans_constraint = 141,
  sym_assign_constraint = 142,
  sym_assign_list = 143,
  sym_assign = 144,
  sym_next_expr = 145,
  sym_var_declaration = 146,
  sym_ivar_declaration = 147,
  sym_frozenvar_declaration = 148,
  sym_simple_var_list = 149,
  sym_simple_var_declaration_item = 150,
  sym_define_declaration = 151,
  sym_define_body = 152,
  sym_constants_declaration = 153,
  sym_constants_body = 154,
  sym_var_list = 155,
  sym_var_declaration_item = 156,
  sym_type_specifier = 157,
  sym_module_type_spicifier = 158,
  sym_parameter_list = 159,
  sym_simple_expr = 160,
  sym_basic_expr = 161,
  sym_basic_expr_list = 162,
  sym_set_body_expr = 163,
  sym_case_expr = 164,
  sym_case_body = 165,
  sym_simple_type_specifier = 166,
  sym_enumeration_type_body = 167,
  sym_enumeration_type_value = 168,
  sym_boolean_constant = 169,
  sym_constant = 170,
  sym_integer_constant = 171,
  sym_integer_number = 172,
  sym_negative_integer_number = 173,
  sym_symbolic_constant = 174,
  sym_range_constant = 175,
  sym_word_constant = 176,
  sym_word_sign_specifier = 177,
  sym_word_width = 178,
  sym_word_base = 179,
  sym_word_value = 180,
  sym_variable_identifier = 181,
  sym_define_identifier = 182,
  sym_complex_identifier = 183,
  aux_sym_source_file_repeat1 = 184,
  aux_sym_source_file_repeat2 = 185,
  aux_sym_module_parameters_repeat1 = 186,
  aux_sym_module_body_repeat1 = 187,
  aux_sym_assign_list_repeat1 = 188,
  aux_sym_simple_var_list_repeat1 = 189,
  aux_sym_define_body_repeat1 = 190,
  aux_sym_var_list_repeat1 = 191,
  aux_sym_parameter_list_repeat1 = 192,
  aux_sym_basic_expr_list_repeat1 = 193,
  aux_sym_case_body_repeat1 = 194,
  aux_sym_enumeration_type_body_repeat1 = 195,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_MODULE] = "MODULE",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_ISA] = "ISA",
  [anon_sym_COMPUTE] = "COMPUTE",
  [anon_sym_SEMI] = ";",
  [anon_sym_NAME] = "NAME",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_MIN] = "MIN",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_MAX] = "MAX",
  [anon_sym_EBF] = "EBF",
  [anon_sym_ABF] = "ABF",
  [anon_sym_EBG] = "EBG",
  [anon_sym_ABG] = "ABG",
  [anon_sym_A] = "A",
  [anon_sym_BU] = "BU",
  [anon_sym_E] = "E",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LTLSPEC] = "LTLSPEC",
  [anon_sym_BANG] = "!",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_xor] = "xor",
  [anon_sym_xnor] = "xnor",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH_GT] = "<->",
  [anon_sym_X] = "X",
  [anon_sym_G] = "G",
  [anon_sym_F] = "F",
  [anon_sym_U] = "U",
  [anon_sym_V] = "V",
  [anon_sym_Y] = "Y",
  [anon_sym_Z] = "Z",
  [anon_sym_H] = "H",
  [anon_sym_O] = "O",
  [anon_sym_S] = "S",
  [anon_sym_T] = "T",
  [anon_sym_INVARSPEC] = "INVARSPEC",
  [anon_sym_CTLSPEC] = "CTLSPEC",
  [anon_sym_SPEC] = "SPEC",
  [anon_sym_EG] = "EG",
  [anon_sym_EX] = "EX",
  [anon_sym_EF] = "EF",
  [anon_sym_AG] = "AG",
  [anon_sym_AX] = "AX",
  [anon_sym_AF] = "AF",
  [anon_sym_FAIRNESS] = "FAIRNESS",
  [anon_sym_JUSTICE] = "JUSTICE",
  [anon_sym_COMPASSION] = "COMPASSION",
  [anon_sym_INVAR] = "INVAR",
  [anon_sym_INIT] = "INIT",
  [anon_sym_TRANS] = "TRANS",
  [anon_sym_ASSIGN] = "ASSIGN",
  [anon_sym_init] = "init",
  [anon_sym_next] = "next",
  [anon_sym_VAR] = "VAR",
  [anon_sym_IVAR] = "IVAR",
  [anon_sym_FROZENVAR] = "FROZENVAR",
  [anon_sym_COLON] = ":",
  [anon_sym_DEFINE] = "DEFINE",
  [anon_sym_CONSTANTS] = "CONSTANTS",
  [anon_sym_process] = "process",
  [anon_sym_abs] = "abs",
  [anon_sym_max] = "max",
  [anon_sym_min] = "min",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_mod] = "mod",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_union] = "union",
  [anon_sym_in] = "in",
  [anon_sym_word1] = "word1",
  [anon_sym_bool] = "bool",
  [anon_sym_toint] = "toint",
  [anon_sym_signed] = "signed",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_extend] = "extend",
  [anon_sym_resize] = "resize",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_QMARK] = "\?",
  [anon_sym_count] = "count",
  [anon_sym_case] = "case",
  [anon_sym_esac] = "esac",
  [anon_sym_boolean] = "boolean",
  [anon_sym_word] = "word",
  [anon_sym_array] = "array",
  [anon_sym_of] = "of",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [sym_digit] = "digit",
  [sym_digits] = "digits",
  [anon_sym_0] = "0",
  [anon_sym__] = "_",
  [anon_sym_u] = "u",
  [anon_sym_s] = "s",
  [anon_sym_b] = "b",
  [anon_sym_B] = "B",
  [anon_sym_o] = "o",
  [anon_sym_h] = "h",
  [anon_sym_d] = "d",
  [anon_sym_D] = "D",
  [sym_hex_digit] = "hex_digit",
  [anon_sym_DOT] = ".",
  [anon_sym_self] = "self",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_module] = "module",
  [sym_module_parameters] = "module_parameters",
  [sym_module_body] = "module_body",
  [sym_module_element] = "module_element",
  [sym_isa_declaration] = "isa_declaration",
  [sym_compute_specification] = "compute_specification",
  [sym_compute_expr] = "compute_expr",
  [sym_rtctl_expr] = "rtctl_expr",
  [sym_range] = "range",
  [sym_ltl_specification] = "ltl_specification",
  [sym_ltl_expr] = "ltl_expr",
  [sym_bound] = "bound",
  [sym_invar_specification] = "invar_specification",
  [sym_ctl_specification] = "ctl_specification",
  [sym_ctl_expr] = "ctl_expr",
  [sym_fairness_constraint] = "fairness_constraint",
  [sym_invar_constraint] = "invar_constraint",
  [sym_init_constraint] = "init_constraint",
  [sym_trans_constraint] = "trans_constraint",
  [sym_assign_constraint] = "assign_constraint",
  [sym_assign_list] = "assign_list",
  [sym_assign] = "assign",
  [sym_next_expr] = "next_expr",
  [sym_var_declaration] = "var_declaration",
  [sym_ivar_declaration] = "ivar_declaration",
  [sym_frozenvar_declaration] = "frozenvar_declaration",
  [sym_simple_var_list] = "simple_var_list",
  [sym_simple_var_declaration_item] = "simple_var_declaration_item",
  [sym_define_declaration] = "define_declaration",
  [sym_define_body] = "define_body",
  [sym_constants_declaration] = "constants_declaration",
  [sym_constants_body] = "constants_body",
  [sym_var_list] = "var_list",
  [sym_var_declaration_item] = "var_declaration_item",
  [sym_type_specifier] = "type_specifier",
  [sym_module_type_spicifier] = "module_type_spicifier",
  [sym_parameter_list] = "parameter_list",
  [sym_simple_expr] = "simple_expr",
  [sym_basic_expr] = "basic_expr",
  [sym_basic_expr_list] = "basic_expr_list",
  [sym_set_body_expr] = "set_body_expr",
  [sym_case_expr] = "case_expr",
  [sym_case_body] = "case_body",
  [sym_simple_type_specifier] = "simple_type_specifier",
  [sym_enumeration_type_body] = "enumeration_type_body",
  [sym_enumeration_type_value] = "enumeration_type_value",
  [sym_boolean_constant] = "boolean_constant",
  [sym_constant] = "constant",
  [sym_integer_constant] = "integer_constant",
  [sym_integer_number] = "integer_number",
  [sym_negative_integer_number] = "negative_integer_number",
  [sym_symbolic_constant] = "symbolic_constant",
  [sym_range_constant] = "range_constant",
  [sym_word_constant] = "word_constant",
  [sym_word_sign_specifier] = "word_sign_specifier",
  [sym_word_width] = "word_width",
  [sym_word_base] = "word_base",
  [sym_word_value] = "word_value",
  [sym_variable_identifier] = "variable_identifier",
  [sym_define_identifier] = "define_identifier",
  [sym_complex_identifier] = "complex_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_module_parameters_repeat1] = "module_parameters_repeat1",
  [aux_sym_module_body_repeat1] = "module_body_repeat1",
  [aux_sym_assign_list_repeat1] = "assign_list_repeat1",
  [aux_sym_simple_var_list_repeat1] = "simple_var_list_repeat1",
  [aux_sym_define_body_repeat1] = "define_body_repeat1",
  [aux_sym_var_list_repeat1] = "var_list_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_basic_expr_list_repeat1] = "basic_expr_list_repeat1",
  [aux_sym_case_body_repeat1] = "case_body_repeat1",
  [aux_sym_enumeration_type_body_repeat1] = "enumeration_type_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_MODULE] = anon_sym_MODULE,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_ISA] = anon_sym_ISA,
  [anon_sym_COMPUTE] = anon_sym_COMPUTE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_NAME] = anon_sym_NAME,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_MIN] = anon_sym_MIN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_MAX] = anon_sym_MAX,
  [anon_sym_EBF] = anon_sym_EBF,
  [anon_sym_ABF] = anon_sym_ABF,
  [anon_sym_EBG] = anon_sym_EBG,
  [anon_sym_ABG] = anon_sym_ABG,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_BU] = anon_sym_BU,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_LTLSPEC] = anon_sym_LTLSPEC,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_xnor] = anon_sym_xnor,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH_GT] = anon_sym_LT_DASH_GT,
  [anon_sym_X] = anon_sym_X,
  [anon_sym_G] = anon_sym_G,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_U] = anon_sym_U,
  [anon_sym_V] = anon_sym_V,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_Z] = anon_sym_Z,
  [anon_sym_H] = anon_sym_H,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_S] = anon_sym_S,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_INVARSPEC] = anon_sym_INVARSPEC,
  [anon_sym_CTLSPEC] = anon_sym_CTLSPEC,
  [anon_sym_SPEC] = anon_sym_SPEC,
  [anon_sym_EG] = anon_sym_EG,
  [anon_sym_EX] = anon_sym_EX,
  [anon_sym_EF] = anon_sym_EF,
  [anon_sym_AG] = anon_sym_AG,
  [anon_sym_AX] = anon_sym_AX,
  [anon_sym_AF] = anon_sym_AF,
  [anon_sym_FAIRNESS] = anon_sym_FAIRNESS,
  [anon_sym_JUSTICE] = anon_sym_JUSTICE,
  [anon_sym_COMPASSION] = anon_sym_COMPASSION,
  [anon_sym_INVAR] = anon_sym_INVAR,
  [anon_sym_INIT] = anon_sym_INIT,
  [anon_sym_TRANS] = anon_sym_TRANS,
  [anon_sym_ASSIGN] = anon_sym_ASSIGN,
  [anon_sym_init] = anon_sym_init,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_VAR] = anon_sym_VAR,
  [anon_sym_IVAR] = anon_sym_IVAR,
  [anon_sym_FROZENVAR] = anon_sym_FROZENVAR,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DEFINE] = anon_sym_DEFINE,
  [anon_sym_CONSTANTS] = anon_sym_CONSTANTS,
  [anon_sym_process] = anon_sym_process,
  [anon_sym_abs] = anon_sym_abs,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_word1] = anon_sym_word1,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_toint] = anon_sym_toint,
  [anon_sym_signed] = anon_sym_signed,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_resize] = anon_sym_resize,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_esac] = anon_sym_esac,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_word] = anon_sym_word,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [sym_digit] = sym_digit,
  [sym_digits] = sym_digits,
  [anon_sym_0] = anon_sym_0,
  [anon_sym__] = anon_sym__,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_B] = anon_sym_B,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_D] = anon_sym_D,
  [sym_hex_digit] = sym_hex_digit,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_self] = anon_sym_self,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_module] = sym_module,
  [sym_module_parameters] = sym_module_parameters,
  [sym_module_body] = sym_module_body,
  [sym_module_element] = sym_module_element,
  [sym_isa_declaration] = sym_isa_declaration,
  [sym_compute_specification] = sym_compute_specification,
  [sym_compute_expr] = sym_compute_expr,
  [sym_rtctl_expr] = sym_rtctl_expr,
  [sym_range] = sym_range,
  [sym_ltl_specification] = sym_ltl_specification,
  [sym_ltl_expr] = sym_ltl_expr,
  [sym_bound] = sym_bound,
  [sym_invar_specification] = sym_invar_specification,
  [sym_ctl_specification] = sym_ctl_specification,
  [sym_ctl_expr] = sym_ctl_expr,
  [sym_fairness_constraint] = sym_fairness_constraint,
  [sym_invar_constraint] = sym_invar_constraint,
  [sym_init_constraint] = sym_init_constraint,
  [sym_trans_constraint] = sym_trans_constraint,
  [sym_assign_constraint] = sym_assign_constraint,
  [sym_assign_list] = sym_assign_list,
  [sym_assign] = sym_assign,
  [sym_next_expr] = sym_next_expr,
  [sym_var_declaration] = sym_var_declaration,
  [sym_ivar_declaration] = sym_ivar_declaration,
  [sym_frozenvar_declaration] = sym_frozenvar_declaration,
  [sym_simple_var_list] = sym_simple_var_list,
  [sym_simple_var_declaration_item] = sym_simple_var_declaration_item,
  [sym_define_declaration] = sym_define_declaration,
  [sym_define_body] = sym_define_body,
  [sym_constants_declaration] = sym_constants_declaration,
  [sym_constants_body] = sym_constants_body,
  [sym_var_list] = sym_var_list,
  [sym_var_declaration_item] = sym_var_declaration_item,
  [sym_type_specifier] = sym_type_specifier,
  [sym_module_type_spicifier] = sym_module_type_spicifier,
  [sym_parameter_list] = sym_parameter_list,
  [sym_simple_expr] = sym_simple_expr,
  [sym_basic_expr] = sym_basic_expr,
  [sym_basic_expr_list] = sym_basic_expr_list,
  [sym_set_body_expr] = sym_set_body_expr,
  [sym_case_expr] = sym_case_expr,
  [sym_case_body] = sym_case_body,
  [sym_simple_type_specifier] = sym_simple_type_specifier,
  [sym_enumeration_type_body] = sym_enumeration_type_body,
  [sym_enumeration_type_value] = sym_enumeration_type_value,
  [sym_boolean_constant] = sym_boolean_constant,
  [sym_constant] = sym_constant,
  [sym_integer_constant] = sym_integer_constant,
  [sym_integer_number] = sym_integer_number,
  [sym_negative_integer_number] = sym_negative_integer_number,
  [sym_symbolic_constant] = sym_symbolic_constant,
  [sym_range_constant] = sym_range_constant,
  [sym_word_constant] = sym_word_constant,
  [sym_word_sign_specifier] = sym_word_sign_specifier,
  [sym_word_width] = sym_word_width,
  [sym_word_base] = sym_word_base,
  [sym_word_value] = sym_word_value,
  [sym_variable_identifier] = sym_variable_identifier,
  [sym_define_identifier] = sym_define_identifier,
  [sym_complex_identifier] = sym_complex_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_module_parameters_repeat1] = aux_sym_module_parameters_repeat1,
  [aux_sym_module_body_repeat1] = aux_sym_module_body_repeat1,
  [aux_sym_assign_list_repeat1] = aux_sym_assign_list_repeat1,
  [aux_sym_simple_var_list_repeat1] = aux_sym_simple_var_list_repeat1,
  [aux_sym_define_body_repeat1] = aux_sym_define_body_repeat1,
  [aux_sym_var_list_repeat1] = aux_sym_var_list_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_basic_expr_list_repeat1] = aux_sym_basic_expr_list_repeat1,
  [aux_sym_case_body_repeat1] = aux_sym_case_body_repeat1,
  [aux_sym_enumeration_type_body_repeat1] = aux_sym_enumeration_type_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_MODULE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ISA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMPUTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NAME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MIN] = {
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
  [anon_sym_MAX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EBF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ABF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EBG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ABG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTLSPEC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xnor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_G] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_S] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INVARSPEC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CTLSPEC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPEC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FAIRNESS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JUSTICE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMPASSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INVAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRANS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ASSIGN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_init] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IVAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROZENVAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFINE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONSTANTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_process] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resize] = {
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
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_esac] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_digits] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [sym_hex_digit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_module_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_module_body] = {
    .visible = true,
    .named = true,
  },
  [sym_module_element] = {
    .visible = true,
    .named = true,
  },
  [sym_isa_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_compute_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_compute_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_rtctl_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_ltl_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_ltl_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_bound] = {
    .visible = true,
    .named = true,
  },
  [sym_invar_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_ctl_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_ctl_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_fairness_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_invar_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_init_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_trans_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_list] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_next_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_ivar_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_frozenvar_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_var_list] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_var_declaration_item] = {
    .visible = true,
    .named = true,
  },
  [sym_define_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_define_body] = {
    .visible = true,
    .named = true,
  },
  [sym_constants_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_constants_body] = {
    .visible = true,
    .named = true,
  },
  [sym_var_list] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration_item] = {
    .visible = true,
    .named = true,
  },
  [sym_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_module_type_spicifier] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_expr_list] = {
    .visible = true,
    .named = true,
  },
  [sym_set_body_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_case_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_case_body] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_enumeration_type_body] = {
    .visible = true,
    .named = true,
  },
  [sym_enumeration_type_value] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_number] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_integer_number] = {
    .visible = true,
    .named = true,
  },
  [sym_symbolic_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_range_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_word_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_word_sign_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_word_width] = {
    .visible = true,
    .named = true,
  },
  [sym_word_base] = {
    .visible = true,
    .named = true,
  },
  [sym_word_value] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_define_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_complex_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assign_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_simple_var_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_define_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_basic_expr_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enumeration_type_body_repeat1] = {
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
  [15] = 11,
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
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 39,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 42,
  [51] = 51,
  [52] = 40,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 46,
  [59] = 47,
  [60] = 54,
  [61] = 53,
  [62] = 62,
  [63] = 63,
  [64] = 55,
  [65] = 48,
  [66] = 63,
  [67] = 49,
  [68] = 45,
  [69] = 57,
  [70] = 56,
  [71] = 71,
  [72] = 43,
  [73] = 73,
  [74] = 41,
  [75] = 75,
  [76] = 73,
  [77] = 57,
  [78] = 40,
  [79] = 56,
  [80] = 43,
  [81] = 81,
  [82] = 41,
  [83] = 73,
  [84] = 84,
  [85] = 81,
  [86] = 81,
  [87] = 62,
  [88] = 62,
  [89] = 89,
  [90] = 51,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 101,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 112,
  [114] = 114,
  [115] = 115,
  [116] = 109,
  [117] = 117,
  [118] = 118,
  [119] = 18,
  [120] = 120,
  [121] = 9,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 4,
  [127] = 127,
  [128] = 128,
  [129] = 17,
  [130] = 130,
  [131] = 125,
  [132] = 124,
  [133] = 128,
  [134] = 124,
  [135] = 135,
  [136] = 125,
  [137] = 120,
  [138] = 123,
  [139] = 6,
  [140] = 8,
  [141] = 118,
  [142] = 7,
  [143] = 135,
  [144] = 120,
  [145] = 16,
  [146] = 146,
  [147] = 5,
  [148] = 128,
  [149] = 122,
  [150] = 2,
  [151] = 146,
  [152] = 135,
  [153] = 2,
  [154] = 19,
  [155] = 32,
  [156] = 3,
  [157] = 34,
  [158] = 27,
  [159] = 28,
  [160] = 33,
  [161] = 29,
  [162] = 162,
  [163] = 22,
  [164] = 23,
  [165] = 24,
  [166] = 25,
  [167] = 30,
  [168] = 3,
  [169] = 20,
  [170] = 26,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 21,
  [191] = 191,
  [192] = 31,
  [193] = 193,
  [194] = 194,
  [195] = 194,
  [196] = 196,
  [197] = 7,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 6,
  [204] = 204,
  [205] = 205,
  [206] = 8,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 26,
  [213] = 20,
  [214] = 31,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 217,
  [220] = 215,
  [221] = 221,
  [222] = 222,
  [223] = 215,
  [224] = 224,
  [225] = 218,
  [226] = 224,
  [227] = 221,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 184,
  [277] = 186,
  [278] = 278,
  [279] = 188,
  [280] = 177,
  [281] = 189,
  [282] = 180,
  [283] = 181,
  [284] = 191,
  [285] = 182,
  [286] = 179,
  [287] = 183,
  [288] = 278,
  [289] = 185,
  [290] = 178,
  [291] = 199,
  [292] = 207,
  [293] = 200,
  [294] = 201,
  [295] = 208,
  [296] = 296,
  [297] = 205,
  [298] = 298,
  [299] = 298,
  [300] = 298,
  [301] = 200,
  [302] = 302,
  [303] = 303,
  [304] = 205,
  [305] = 305,
  [306] = 306,
  [307] = 208,
  [308] = 201,
  [309] = 207,
  [310] = 199,
  [311] = 311,
  [312] = 312,
  [313] = 303,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 318,
  [320] = 318,
  [321] = 317,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 327,
  [337] = 337,
  [338] = 332,
  [339] = 339,
  [340] = 340,
  [341] = 323,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 346,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 346,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 368,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 368,
  [384] = 384,
  [385] = 385,
  [386] = 374,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 400,
  [417] = 417,
  [418] = 397,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 400,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 422,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 437,
  [439] = 419,
  [440] = 390,
  [441] = 441,
  [442] = 442,
  [443] = 442,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 421,
  [448] = 432,
  [449] = 432,
  [450] = 450,
  [451] = 437,
  [452] = 392,
  [453] = 392,
  [454] = 454,
  [455] = 455,
  [456] = 434,
  [457] = 434,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 442,
  [463] = 413,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 412,
  [483] = 411,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(189);
      if (lookahead == '!') ADVANCE(395);
      if (lookahead == '&') ADVANCE(396);
      if (lookahead == '(') ADVANCE(365);
      if (lookahead == ')') ADVANCE(367);
      if (lookahead == '*') ADVANCE(485);
      if (lookahead == '+') ADVANCE(481);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '-') ADVANCE(483);
      if (lookahead == '.') ADVANCE(553);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == ':') ADVANCE(463);
      if (lookahead == ';') ADVANCE(372);
      if (lookahead == '<') ADVANCE(477);
      if (lookahead == '=') ADVANCE(475);
      if (lookahead == '>') ADVANCE(478);
      if (lookahead == '?') ADVANCE(509);
      if (lookahead == 'A') ADVANCE(386);
      if (lookahead == 'B') ADVANCE(536);
      if (lookahead == 'C') ADVANCE(546);
      if (lookahead == 'D') ADVANCE(542);
      if (lookahead == 'E') ADVANCE(390);
      if (lookahead == 'F') ADVANCE(406);
      if (lookahead == 'G') ADVANCE(404);
      if (lookahead == 'H') ADVANCE(415);
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead == 'J') ADVANCE(108);
      if (lookahead == 'L') ADVANCE(106);
      if (lookahead == 'M') ADVANCE(25);
      if (lookahead == 'N') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(417);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead == 'U') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(410);
      if (lookahead == 'X') ADVANCE(402);
      if (lookahead == 'Y') ADVANCE(411);
      if (lookahead == 'Z') ADVANCE(413);
      if (lookahead == '[') ADVANCE(377);
      if (lookahead == ']') ADVANCE(378);
      if (lookahead == '_') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(550);
      if (lookahead == 'b') ADVANCE(534);
      if (lookahead == 'c') ADVANCE(549);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == 'f') ADVANCE(543);
      if (lookahead == 'h') ADVANCE(539);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(538);
      if (lookahead == 'p') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(530);
      if (lookahead == 'w') ADVANCE(159);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '{') ADVANCE(507);
      if (lookahead == '|') ADVANCE(397);
      if (lookahead == '}') ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(525);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '&') ADVANCE(396);
      if (lookahead == ')') ADVANCE(367);
      if (lookahead == '*') ADVANCE(485);
      if (lookahead == '+') ADVANCE(481);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == ':') ADVANCE(462);
      if (lookahead == ';') ADVANCE(372);
      if (lookahead == '<') ADVANCE(477);
      if (lookahead == '=') ADVANCE(475);
      if (lookahead == '>') ADVANCE(478);
      if (lookahead == '?') ADVANCE(509);
      if (lookahead == 'B') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(419);
      if (lookahead == 'T') ADVANCE(421);
      if (lookahead == 'U') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(409);
      if (lookahead == '[') ADVANCE(377);
      if (lookahead == ']') ADVANCE(378);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'b') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == 'w') ADVANCE(163);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '{') ADVANCE(507);
      if (lookahead == '|') ADVANCE(397);
      if (lookahead == '}') ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '&') ADVANCE(396);
      if (lookahead == ')') ADVANCE(367);
      if (lookahead == '*') ADVANCE(485);
      if (lookahead == '+') ADVANCE(481);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead == '.') ADVANCE(552);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == ':') ADVANCE(462);
      if (lookahead == ';') ADVANCE(372);
      if (lookahead == '<') ADVANCE(477);
      if (lookahead == '=') ADVANCE(475);
      if (lookahead == '>') ADVANCE(478);
      if (lookahead == '?') ADVANCE(509);
      if (lookahead == 'B') ADVANCE(548);
      if (lookahead == 'S') ADVANCE(419);
      if (lookahead == 'T') ADVANCE(421);
      if (lookahead == 'U') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(409);
      if (lookahead == '[') ADVANCE(377);
      if (lookahead == ']') ADVANCE(378);
      if (lookahead == '_') ADVANCE(528);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '|') ADVANCE(397);
      if (lookahead == '}') ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(543);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '&') ADVANCE(396);
      if (lookahead == ')') ADVANCE(367);
      if (lookahead == '*') ADVANCE(485);
      if (lookahead == '+') ADVANCE(481);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == ':') ADVANCE(462);
      if (lookahead == ';') ADVANCE(372);
      if (lookahead == '<') ADVANCE(477);
      if (lookahead == '=') ADVANCE(475);
      if (lookahead == '>') ADVANCE(478);
      if (lookahead == '?') ADVANCE(509);
      if (lookahead == 'S') ADVANCE(419);
      if (lookahead == 'T') ADVANCE(421);
      if (lookahead == 'U') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(409);
      if (lookahead == '[') ADVANCE(377);
      if (lookahead == ']') ADVANCE(378);
      if (lookahead == '_') ADVANCE(528);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '|') ADVANCE(397);
      if (lookahead == '}') ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(543);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(394);
      if (lookahead == '(') ADVANCE(365);
      if (lookahead == ')') ADVANCE(367);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == 'F') ADVANCE(195);
      if (lookahead == 'T') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead == 'w') ADVANCE(334);
      if (lookahead == '{') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(394);
      if (lookahead == '(') ADVANCE(365);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == 'A') ADVANCE(384);
      if (lookahead == 'E') ADVANCE(388);
      if (lookahead == 'F') ADVANCE(195);
      if (lookahead == 'T') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead == 'w') ADVANCE(334);
      if (lookahead == '{') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(394);
      if (lookahead == '(') ADVANCE(365);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == 'A') ADVANCE(385);
      if (lookahead == 'E') ADVANCE(389);
      if (lookahead == 'F') ADVANCE(195);
      if (lookahead == 'N') ADVANCE(196);
      if (lookahead == 'T') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead == 'w') ADVANCE(334);
      if (lookahead == '{') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(394);
      if (lookahead == '(') ADVANCE(365);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == 'A') ADVANCE(385);
      if (lookahead == 'E') ADVANCE(389);
      if (lookahead == 'F') ADVANCE(195);
      if (lookahead == 'T') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead == 'w') ADVANCE(334);
      if (lookahead == '{') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(394);
      if (lookahead == '(') ADVANCE(365);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == 'F') ADVANCE(195);
      if (lookahead == 'N') ADVANCE(196);
      if (lookahead == 'T') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead == 'w') ADVANCE(334);
      if (lookahead == '{') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(394);
      if (lookahead == '(') ADVANCE(365);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == 'F') ADVANCE(195);
      if (lookahead == 'T') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead == 'w') ADVANCE(334);
      if (lookahead == '{') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(394);
      if (lookahead == '(') ADVANCE(365);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == 'F') ADVANCE(407);
      if (lookahead == 'G') ADVANCE(405);
      if (lookahead == 'H') ADVANCE(416);
      if (lookahead == 'N') ADVANCE(196);
      if (lookahead == 'O') ADVANCE(418);
      if (lookahead == 'T') ADVANCE(259);
      if (lookahead == 'X') ADVANCE(403);
      if (lookahead == 'Y') ADVANCE(412);
      if (lookahead == 'Z') ADVANCE(414);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead == 'w') ADVANCE(334);
      if (lookahead == '{') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'W') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(394);
      if (lookahead == '(') ADVANCE(365);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == 'F') ADVANCE(407);
      if (lookahead == 'G') ADVANCE(405);
      if (lookahead == 'H') ADVANCE(416);
      if (lookahead == 'O') ADVANCE(418);
      if (lookahead == 'T') ADVANCE(259);
      if (lookahead == 'X') ADVANCE(403);
      if (lookahead == 'Y') ADVANCE(412);
      if (lookahead == 'Z') ADVANCE(414);
      if (lookahead == '[') ADVANCE(377);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead == 'w') ADVANCE(334);
      if (lookahead == '{') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(367);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(191);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'b') ADVANCE(339);
      if (lookahead == 'p') ADVANCE(345);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead == 'w') ADVANCE(340);
      if (lookahead == '{') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(391);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(491);
      if (lookahead == '=') ADVANCE(375);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(476);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(401);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(111);
      if (lookahead == 'I') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(368);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(85);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(86);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(99);
      if (lookahead == 'U') ADVANCE(103);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(74);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 35:
      if (lookahead == 'B') ADVANCE(535);
      if (lookahead == 'D') ADVANCE(541);
      if (lookahead == 'H') ADVANCE(415);
      if (lookahead == 'O') ADVANCE(417);
      if (lookahead == 'b') ADVANCE(533);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'h') ADVANCE(539);
      if (lookahead == 'o') ADVANCE(537);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead == 'u') ADVANCE(529);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(427);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(425);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(392);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(423);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(109);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(373);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(464);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(192);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(370);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(441);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'F') ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == 'G') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'V') ADVANCE(30);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(40);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(88);
      END_STATE();
    case 62:
      if (lookahead == 'L') ADVANCE(94);
      END_STATE();
    case 63:
      if (lookahead == 'L') ADVANCE(46);
      END_STATE();
    case 64:
      if (lookahead == 'L') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'M') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(96);
      END_STATE();
    case 66:
      if (lookahead == 'M') ADVANCE(44);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(58);
      if (lookahead == 'S') ADVANCE(27);
      if (lookahead == 'V') ADVANCE(29);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(376);
      END_STATE();
    case 69:
      if (lookahead == 'N') ADVANCE(451);
      END_STATE();
    case 70:
      if (lookahead == 'N') ADVANCE(443);
      END_STATE();
    case 71:
      if (lookahead == 'N') ADVANCE(110);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(91);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(105);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 76:
      if (lookahead == 'O') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 77:
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 78:
      if (lookahead == 'O') ADVANCE(112);
      END_STATE();
    case 79:
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 80:
      if (lookahead == 'P') ADVANCE(31);
      END_STATE();
    case 81:
      if (lookahead == 'P') ADVANCE(49);
      END_STATE();
    case 82:
      if (lookahead == 'P') ADVANCE(50);
      END_STATE();
    case 83:
      if (lookahead == 'P') ADVANCE(51);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(456);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(458);
      END_STATE();
    case 86:
      if (lookahead == 'R') ADVANCE(446);
      END_STATE();
    case 87:
      if (lookahead == 'R') ADVANCE(460);
      END_STATE();
    case 88:
      if (lookahead == 'R') ADVANCE(75);
      END_STATE();
    case 89:
      if (lookahead == 'S') ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'S') ADVANCE(56);
      END_STATE();
    case 91:
      if (lookahead == 'S') ADVANCE(449);
      END_STATE();
    case 92:
      if (lookahead == 'S') ADVANCE(466);
      END_STATE();
    case 93:
      if (lookahead == 'S') ADVANCE(439);
      END_STATE();
    case 94:
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 95:
      if (lookahead == 'S') ADVANCE(102);
      END_STATE();
    case 96:
      if (lookahead == 'S') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == 'S') ADVANCE(57);
      END_STATE();
    case 98:
      if (lookahead == 'S') ADVANCE(93);
      END_STATE();
    case 99:
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(82);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(447);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(59);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(92);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 107:
      if (lookahead == 'U') ADVANCE(387);
      END_STATE();
    case 108:
      if (lookahead == 'U') ADVANCE(95);
      END_STATE();
    case 109:
      if (lookahead == 'U') ADVANCE(63);
      END_STATE();
    case 110:
      if (lookahead == 'V') ADVANCE(33);
      END_STATE();
    case 111:
      if (lookahead == 'X') ADVANCE(379);
      END_STATE();
    case 112:
      if (lookahead == 'Z') ADVANCE(53);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(513);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(488);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(518);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(500);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(502);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(517);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 131:
      if (lookahead == 'f') ADVANCE(522);
      END_STATE();
    case 132:
      if (lookahead == 'f') ADVANCE(554);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(139)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(496);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(515);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(176)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 181:
      if (lookahead == 'x') ADVANCE(471);
      END_STATE();
    case 182:
      if (lookahead == 'x') ADVANCE(177);
      END_STATE();
    case 183:
      if (lookahead == 'y') ADVANCE(520);
      END_STATE();
    case 184:
      if (lookahead == 'z') ADVANCE(125);
      END_STATE();
    case 185:
      if (eof) ADVANCE(189);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '&') ADVANCE(396);
      if (lookahead == '(') ADVANCE(365);
      if (lookahead == '*') ADVANCE(485);
      if (lookahead == '+') ADVANCE(481);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '-') ADVANCE(483);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == ':') ADVANCE(462);
      if (lookahead == ';') ADVANCE(372);
      if (lookahead == '<') ADVANCE(477);
      if (lookahead == '=') ADVANCE(475);
      if (lookahead == '>') ADVANCE(478);
      if (lookahead == '?') ADVANCE(509);
      if (lookahead == 'A') ADVANCE(547);
      if (lookahead == 'C') ADVANCE(546);
      if (lookahead == 'D') ADVANCE(545);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead == 'J') ADVANCE(108);
      if (lookahead == 'L') ADVANCE(106);
      if (lookahead == 'M') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead == 'U') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(410);
      if (lookahead == '[') ADVANCE(377);
      if (lookahead == ']') ADVANCE(378);
      if (lookahead == '_') ADVANCE(528);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == 'w') ADVANCE(163);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '|') ADVANCE(397);
      if (lookahead == '}') ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(185)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(543);
      END_STATE();
    case 186:
      if (eof) ADVANCE(189);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '&') ADVANCE(396);
      if (lookahead == ')') ADVANCE(367);
      if (lookahead == '*') ADVANCE(485);
      if (lookahead == '+') ADVANCE(481);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '-') ADVANCE(483);
      if (lookahead == '.') ADVANCE(552);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(372);
      if (lookahead == '<') ADVANCE(477);
      if (lookahead == '=') ADVANCE(475);
      if (lookahead == '>') ADVANCE(478);
      if (lookahead == '?') ADVANCE(509);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'B') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(76);
      if (lookahead == 'D') ADVANCE(42);
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead == 'J') ADVANCE(108);
      if (lookahead == 'L') ADVANCE(106);
      if (lookahead == 'M') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead == 'U') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(410);
      if (lookahead == '[') ADVANCE(377);
      if (lookahead == ']') ADVANCE(378);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '|') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(186)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 187:
      if (eof) ADVANCE(189);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'A') ADVANCE(271);
      if (lookahead == 'C') ADVANCE(250);
      if (lookahead == 'D') ADVANCE(215);
      if (lookahead == 'F') ADVANCE(197);
      if (lookahead == 'I') ADVANCE(242);
      if (lookahead == 'J') ADVANCE(287);
      if (lookahead == 'L') ADVANCE(284);
      if (lookahead == 'M') ADVANCE(251);
      if (lookahead == 'S') ADVANCE(255);
      if (lookahead == 'T') ADVANCE(264);
      if (lookahead == 'V') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(187)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 188:
      if (eof) ADVANCE(189);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'A') ADVANCE(271);
      if (lookahead == 'C') ADVANCE(250);
      if (lookahead == 'D') ADVANCE(215);
      if (lookahead == 'F') ADVANCE(197);
      if (lookahead == 'I') ADVANCE(242);
      if (lookahead == 'J') ADVANCE(287);
      if (lookahead == 'L') ADVANCE(284);
      if (lookahead == 'M') ADVANCE(251);
      if (lookahead == 'S') ADVANCE(255);
      if (lookahead == 'T') ADVANCE(264);
      if (lookahead == 'V') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(188)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_MODULE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_MODULE);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(495);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(236);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(241);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(235);
      if (lookahead == 'R') ADVANCE(252);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(369);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(247);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(260);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(246);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(262);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(263);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(275);
      if (lookahead == 'U') ADVANCE(283);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(428);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(426);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(393);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(424);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(220);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(286);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(523);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(524);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(374);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(228);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(206);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(465);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(193);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(371);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(442);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(207);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(208);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(209);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(381);
      if (lookahead == 'G') ADVANCE(383);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(380);
      if (lookahead == 'G') ADVANCE(382);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(233);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(243);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(229);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(279);
      if (lookahead == 'V') ADVANCE(203);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(210);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(248);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(253);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(265);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(269);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(277);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(278);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(254);
      if (lookahead == 'N') ADVANCE(273);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(214);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(231);
      if (lookahead == 'S') ADVANCE(198);
      if (lookahead == 'V') ADVANCE(201);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(452);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(288);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(444);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(282);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(266);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(217);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(225);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(240);
      if (lookahead == 'T') ADVANCE(237);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(211);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(289);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(245);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(205);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(216);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(221);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(222);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(224);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(285);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(459);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(461);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(199);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(249);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(450);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(440);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(467);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(213);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(230);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(270);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(280);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(281);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(234);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(274);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(267);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(256);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(257);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(232);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(202);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(268);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(219);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(239);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(212);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(238);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(272);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(204);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Z') ADVANCE(223);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(346);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(514);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(312);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(504);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(501);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(503);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(519);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 'i') ADVANCE(315);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(555);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(332);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(497);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(516);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(354);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(308);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(335);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(337);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(291);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(470);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(290);
      if (lookahead == 'x') ADVANCE(357);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(455);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(511);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(327);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(357);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(472);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(353);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(521);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(306);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_ISA);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_ISA);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_COMPUTE);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_COMPUTE);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_NAME);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_NAME);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_MIN);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_MAX);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_EBF);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_ABF);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_EBG);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_ABG);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == 'B') ADVANCE(226);
      if (lookahead == 'F') ADVANCE(438);
      if (lookahead == 'G') ADVANCE(435);
      if (lookahead == 'X') ADVANCE(437);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == 'F') ADVANCE(438);
      if (lookahead == 'G') ADVANCE(435);
      if (lookahead == 'X') ADVANCE(437);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == 'G') ADVANCE(434);
      if (lookahead == 'S') ADVANCE(90);
      if (lookahead == 'X') ADVANCE(436);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_BU);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'B') ADVANCE(227);
      if (lookahead == 'F') ADVANCE(433);
      if (lookahead == 'G') ADVANCE(430);
      if (lookahead == 'X') ADVANCE(432);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'F') ADVANCE(433);
      if (lookahead == 'G') ADVANCE(430);
      if (lookahead == 'X') ADVANCE(432);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'G') ADVANCE(429);
      if (lookahead == 'X') ADVANCE(431);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_LTLSPEC);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_LTLSPEC);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(476);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_xnor);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_G);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_G);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'A') ADVANCE(236);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_V);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_V);
      if (lookahead == 'A') ADVANCE(84);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_H);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_H);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == 'P') ADVANCE(43);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_INVARSPEC);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_INVARSPEC);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_CTLSPEC);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_CTLSPEC);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_SPEC);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_SPEC);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_EG);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_EG);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_EX);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_EX);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_EF);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_AG);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_AG);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_AX);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_AX);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_AF);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_FAIRNESS);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_FAIRNESS);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_JUSTICE);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_JUSTICE);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_COMPASSION);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_COMPASSION);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_INVAR);
      if (lookahead == 'S') ADVANCE(258);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_INVAR);
      if (lookahead == 'S') ADVANCE(83);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_INIT);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_INIT);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_TRANS);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_TRANS);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_ASSIGN);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_ASSIGN);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_init);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_next);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_VAR);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_VAR);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_IVAR);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_IVAR);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_FROZENVAR);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_FROZENVAR);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(491);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(491);
      if (lookahead == '=') ADVANCE(375);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_CONSTANTS);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_CONSTANTS);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_process);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_process);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_abs);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_max);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_min);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '<') ADVANCE(490);
      if (lookahead == '=') ADVANCE(479);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(480);
      if (lookahead == '>') ADVANCE(489);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '>') ADVANCE(400);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(400);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_word1);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_word1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_toint);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_toint);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_signed);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_extend);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_resize);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_resize);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_esac);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_esac);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '1') ADVANCE(494);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_digits);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == 'U') ADVANCE(387);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'f') ADVANCE(522);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_hex_digit);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_hex_digit);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_hex_digit);
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_hex_digit);
      if (lookahead == 'O') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_hex_digit);
      if (lookahead == 'S') ADVANCE(90);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_hex_digit);
      if (lookahead == 'U') ADVANCE(387);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_hex_digit);
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_hex_digit);
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_hex_digit);
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(391);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_self);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 185},
  [3] = {.lex_state = 185},
  [4] = {.lex_state = 186},
  [5] = {.lex_state = 186},
  [6] = {.lex_state = 185},
  [7] = {.lex_state = 185},
  [8] = {.lex_state = 185},
  [9] = {.lex_state = 185},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 186},
  [17] = {.lex_state = 185},
  [18] = {.lex_state = 186},
  [19] = {.lex_state = 185},
  [20] = {.lex_state = 185},
  [21] = {.lex_state = 185},
  [22] = {.lex_state = 185},
  [23] = {.lex_state = 185},
  [24] = {.lex_state = 185},
  [25] = {.lex_state = 185},
  [26] = {.lex_state = 185},
  [27] = {.lex_state = 185},
  [28] = {.lex_state = 185},
  [29] = {.lex_state = 185},
  [30] = {.lex_state = 185},
  [31] = {.lex_state = 185},
  [32] = {.lex_state = 185},
  [33] = {.lex_state = 185},
  [34] = {.lex_state = 185},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 185},
  [92] = {.lex_state = 185},
  [93] = {.lex_state = 185},
  [94] = {.lex_state = 185},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 186},
  [172] = {.lex_state = 186},
  [173] = {.lex_state = 186},
  [174] = {.lex_state = 186},
  [175] = {.lex_state = 186},
  [176] = {.lex_state = 185},
  [177] = {.lex_state = 185},
  [178] = {.lex_state = 185},
  [179] = {.lex_state = 185},
  [180] = {.lex_state = 185},
  [181] = {.lex_state = 185},
  [182] = {.lex_state = 185},
  [183] = {.lex_state = 185},
  [184] = {.lex_state = 185},
  [185] = {.lex_state = 185},
  [186] = {.lex_state = 185},
  [187] = {.lex_state = 185},
  [188] = {.lex_state = 185},
  [189] = {.lex_state = 185},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 185},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 11},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 187},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 185},
  [199] = {.lex_state = 185},
  [200] = {.lex_state = 185},
  [201] = {.lex_state = 185},
  [202] = {.lex_state = 185},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 187},
  [205] = {.lex_state = 185},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 185},
  [208] = {.lex_state = 185},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 187},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 188},
  [230] = {.lex_state = 188},
  [231] = {.lex_state = 188},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 188},
  [234] = {.lex_state = 188},
  [235] = {.lex_state = 188},
  [236] = {.lex_state = 185},
  [237] = {.lex_state = 185},
  [238] = {.lex_state = 185},
  [239] = {.lex_state = 185},
  [240] = {.lex_state = 185},
  [241] = {.lex_state = 185},
  [242] = {.lex_state = 185},
  [243] = {.lex_state = 188},
  [244] = {.lex_state = 188},
  [245] = {.lex_state = 188},
  [246] = {.lex_state = 185},
  [247] = {.lex_state = 185},
  [248] = {.lex_state = 185},
  [249] = {.lex_state = 185},
  [250] = {.lex_state = 185},
  [251] = {.lex_state = 185},
  [252] = {.lex_state = 185},
  [253] = {.lex_state = 185},
  [254] = {.lex_state = 185},
  [255] = {.lex_state = 185},
  [256] = {.lex_state = 185},
  [257] = {.lex_state = 185},
  [258] = {.lex_state = 185},
  [259] = {.lex_state = 185},
  [260] = {.lex_state = 185},
  [261] = {.lex_state = 185},
  [262] = {.lex_state = 185},
  [263] = {.lex_state = 185},
  [264] = {.lex_state = 185},
  [265] = {.lex_state = 185},
  [266] = {.lex_state = 185},
  [267] = {.lex_state = 185},
  [268] = {.lex_state = 185},
  [269] = {.lex_state = 185},
  [270] = {.lex_state = 185},
  [271] = {.lex_state = 185},
  [272] = {.lex_state = 185},
  [273] = {.lex_state = 185},
  [274] = {.lex_state = 19},
  [275] = {.lex_state = 19},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 35},
  [299] = {.lex_state = 35},
  [300] = {.lex_state = 35},
  [301] = {.lex_state = 186},
  [302] = {.lex_state = 12},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 186},
  [305] = {.lex_state = 139},
  [306] = {.lex_state = 186},
  [307] = {.lex_state = 186},
  [308] = {.lex_state = 186},
  [309] = {.lex_state = 186},
  [310] = {.lex_state = 186},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 186},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 12},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 1},
  [318] = {.lex_state = 1},
  [319] = {.lex_state = 1},
  [320] = {.lex_state = 1},
  [321] = {.lex_state = 1},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 1},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 1},
  [326] = {.lex_state = 12},
  [327] = {.lex_state = 1},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 1},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 1},
  [333] = {.lex_state = 1},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 1},
  [336] = {.lex_state = 1},
  [337] = {.lex_state = 1},
  [338] = {.lex_state = 1},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 1},
  [342] = {.lex_state = 12},
  [343] = {.lex_state = 12},
  [344] = {.lex_state = 1},
  [345] = {.lex_state = 1},
  [346] = {.lex_state = 35},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 186},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 35},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 176},
  [356] = {.lex_state = 176},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 12},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 35},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 186},
  [368] = {.lex_state = 3},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 186},
  [372] = {.lex_state = 12},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 185},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 12},
  [379] = {.lex_state = 3},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 3},
  [384] = {.lex_state = 186},
  [385] = {.lex_state = 186},
  [386] = {.lex_state = 185},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 12},
  [394] = {.lex_state = 185},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 186},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 186},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 185},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 185},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 186},
  [413] = {.lex_state = 12},
  [414] = {.lex_state = 12},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 186},
  [417] = {.lex_state = 12},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 186},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 185},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 12},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 186},
  [436] = {.lex_state = 185},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 186},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 12},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 186},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 12},
  [459] = {.lex_state = 186},
  [460] = {.lex_state = 186},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 12},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 185},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 12},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 186},
  [475] = {.lex_state = 186},
  [476] = {.lex_state = 12},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 185},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 186},
  [483] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_MODULE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_ISA] = ACTIONS(1),
    [anon_sym_COMPUTE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_NAME] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_MIN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_MAX] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_BU] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_LTLSPEC] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_xnor] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH_GT] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym_G] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_U] = ACTIONS(1),
    [anon_sym_V] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_Z] = ACTIONS(1),
    [anon_sym_H] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_INVARSPEC] = ACTIONS(1),
    [anon_sym_CTLSPEC] = ACTIONS(1),
    [anon_sym_SPEC] = ACTIONS(1),
    [anon_sym_EG] = ACTIONS(1),
    [anon_sym_EX] = ACTIONS(1),
    [anon_sym_AG] = ACTIONS(1),
    [anon_sym_AX] = ACTIONS(1),
    [anon_sym_JUSTICE] = ACTIONS(1),
    [anon_sym_COMPASSION] = ACTIONS(1),
    [anon_sym_INVAR] = ACTIONS(1),
    [anon_sym_INIT] = ACTIONS(1),
    [anon_sym_TRANS] = ACTIONS(1),
    [anon_sym_ASSIGN] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_VAR] = ACTIONS(1),
    [anon_sym_IVAR] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DEFINE] = ACTIONS(1),
    [anon_sym_CONSTANTS] = ACTIONS(1),
    [anon_sym_process] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_word1] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_toint] = ACTIONS(1),
    [anon_sym_signed] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_resize] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_esac] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [sym_digits] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_B] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [sym_hex_digit] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(468),
    [sym_comment] = STATE(311),
    [sym_module] = STATE(331),
    [aux_sym_source_file_repeat1] = STATE(311),
    [aux_sym_source_file_repeat2] = STATE(331),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_MODULE] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(11), 9,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(9), 47,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_COMMA,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_of,
  [61] = 2,
    ACTIONS(15), 9,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(13), 47,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_COMMA,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_of,
  [122] = 2,
    ACTIONS(19), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(17), 45,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_RPAREN,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
      anon_sym_DOT,
  [180] = 2,
    ACTIONS(23), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(21), 45,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_RPAREN,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
      anon_sym_DOT,
  [238] = 2,
    ACTIONS(27), 9,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_hex_digit,
    ACTIONS(25), 43,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
      anon_sym__,
  [295] = 2,
    ACTIONS(31), 9,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_hex_digit,
    ACTIONS(29), 43,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
      anon_sym__,
  [352] = 4,
    ACTIONS(37), 1,
      anon_sym__,
    ACTIONS(39), 1,
      sym_hex_digit,
    ACTIONS(35), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(33), 42,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [413] = 2,
    ACTIONS(15), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(13), 43,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [469] = 25,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(192), 1,
      sym_basic_expr,
    STATE(303), 1,
      sym_ctl_expr,
    STATE(403), 1,
      sym_rtctl_expr,
    ACTIONS(47), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(45), 4,
      anon_sym_EBF,
      anon_sym_ABF,
      anon_sym_EBG,
      anon_sym_ABG,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(51), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [571] = 25,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(192), 1,
      sym_basic_expr,
    STATE(303), 1,
      sym_ctl_expr,
    STATE(348), 1,
      sym_rtctl_expr,
    ACTIONS(47), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(45), 4,
      anon_sym_EBF,
      anon_sym_ABF,
      anon_sym_EBG,
      anon_sym_ABG,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(51), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [673] = 25,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(75), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_0,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(214), 1,
      sym_basic_expr,
    STATE(306), 1,
      sym_ctl_expr,
    STATE(454), 1,
      sym_rtctl_expr,
    ACTIONS(47), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(73), 4,
      anon_sym_EBF,
      anon_sym_ABF,
      anon_sym_EBG,
      anon_sym_ABG,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(77), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [775] = 25,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(192), 1,
      sym_basic_expr,
    STATE(303), 1,
      sym_ctl_expr,
    STATE(445), 1,
      sym_rtctl_expr,
    ACTIONS(47), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(45), 4,
      anon_sym_EBF,
      anon_sym_ABF,
      anon_sym_EBG,
      anon_sym_ABG,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(51), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [877] = 25,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(192), 1,
      sym_basic_expr,
    STATE(303), 1,
      sym_ctl_expr,
    STATE(465), 1,
      sym_rtctl_expr,
    ACTIONS(47), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(45), 4,
      anon_sym_EBF,
      anon_sym_ABF,
      anon_sym_EBG,
      anon_sym_ABG,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(51), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [979] = 25,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(75), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_0,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(214), 1,
      sym_basic_expr,
    STATE(313), 1,
      sym_ctl_expr,
    STATE(348), 1,
      sym_rtctl_expr,
    ACTIONS(47), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(73), 4,
      anon_sym_EBF,
      anon_sym_ABF,
      anon_sym_EBG,
      anon_sym_ABG,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(77), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [1081] = 3,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(85), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(83), 42,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [1139] = 3,
    ACTIONS(91), 1,
      anon_sym_DOT_DOT,
    ACTIONS(93), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(89), 42,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [1197] = 2,
    ACTIONS(23), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(21), 43,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
      anon_sym_DOT,
  [1253] = 2,
    ACTIONS(97), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(95), 42,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [1308] = 3,
    ACTIONS(103), 1,
      anon_sym_QMARK,
    ACTIONS(101), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(99), 41,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [1365] = 2,
    ACTIONS(101), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(99), 42,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [1420] = 2,
    ACTIONS(101), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(99), 42,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [1475] = 2,
    ACTIONS(107), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(105), 42,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [1530] = 2,
    ACTIONS(107), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(105), 42,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [1585] = 2,
    ACTIONS(111), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(109), 42,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [1640] = 3,
    ACTIONS(103), 1,
      anon_sym_QMARK,
    ACTIONS(107), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(105), 41,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [1697] = 2,
    ACTIONS(115), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(113), 42,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [1752] = 2,
    ACTIONS(115), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(113), 42,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [1807] = 2,
    ACTIONS(119), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(117), 42,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [1862] = 2,
    ACTIONS(123), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(121), 42,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [1917] = 6,
    ACTIONS(103), 1,
      anon_sym_QMARK,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 4,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
    ACTIONS(133), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(129), 18,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
    ACTIONS(125), 22,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [1980] = 2,
    ACTIONS(137), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(135), 42,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [2035] = 2,
    ACTIONS(141), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(139), 42,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [2090] = 2,
    ACTIONS(145), 8,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(143), 42,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [2145] = 26,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(64), 1,
      sym_bound,
    STATE(179), 1,
      sym_simple_expr,
    STATE(180), 1,
      sym_ltl_expr,
    STATE(182), 1,
      sym_next_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(155), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(157), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [2246] = 26,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_BANG,
    STATE(55), 1,
      sym_bound,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(282), 1,
      sym_ltl_expr,
    STATE(285), 1,
      sym_next_expr,
    STATE(286), 1,
      sym_simple_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(183), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(185), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [2347] = 24,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_NAME,
    ACTIONS(193), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(172), 1,
      sym_simple_expr,
    STATE(198), 1,
      sym_ctl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(195), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [2443] = 25,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(197), 1,
      anon_sym_NAME,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(179), 1,
      sym_simple_expr,
    STATE(182), 1,
      sym_next_expr,
    STATE(187), 1,
      sym_ltl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(155), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(157), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [2541] = 24,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(281), 1,
      sym_ltl_expr,
    STATE(285), 1,
      sym_next_expr,
    STATE(286), 1,
      sym_simple_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(183), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(185), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [2636] = 23,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(172), 1,
      sym_simple_expr,
    STATE(201), 1,
      sym_ctl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(195), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [2729] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(192), 1,
      sym_basic_expr,
    STATE(292), 1,
      sym_ctl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(51), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [2822] = 24,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(179), 1,
      sym_simple_expr,
    STATE(182), 1,
      sym_next_expr,
    STATE(188), 1,
      sym_ltl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(155), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(157), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [2917] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(173), 1,
      sym_ctl_expr,
    STATE(192), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(51), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [3010] = 24,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(179), 1,
      sym_simple_expr,
    STATE(182), 1,
      sym_next_expr,
    STATE(189), 1,
      sym_ltl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(155), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(157), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [3105] = 24,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(283), 1,
      sym_ltl_expr,
    STATE(285), 1,
      sym_next_expr,
    STATE(286), 1,
      sym_simple_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(183), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(185), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [3200] = 24,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(280), 1,
      sym_ltl_expr,
    STATE(285), 1,
      sym_next_expr,
    STATE(286), 1,
      sym_simple_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(183), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(185), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [3295] = 24,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(276), 1,
      sym_ltl_expr,
    STATE(285), 1,
      sym_next_expr,
    STATE(286), 1,
      sym_simple_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(183), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(185), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [3390] = 24,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(285), 1,
      sym_next_expr,
    STATE(286), 1,
      sym_simple_expr,
    STATE(289), 1,
      sym_ltl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(183), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(185), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [3485] = 24,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(277), 1,
      sym_ltl_expr,
    STATE(285), 1,
      sym_next_expr,
    STATE(286), 1,
      sym_simple_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(183), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(185), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [3580] = 24,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(279), 1,
      sym_ltl_expr,
    STATE(285), 1,
      sym_next_expr,
    STATE(286), 1,
      sym_simple_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(183), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(185), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [3675] = 24,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(194), 1,
      sym_basic_expr,
    STATE(285), 1,
      sym_next_expr,
    STATE(286), 1,
      sym_simple_expr,
    STATE(288), 1,
      sym_ltl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(183), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(185), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [3770] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(75), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_0,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(214), 1,
      sym_basic_expr,
    STATE(308), 1,
      sym_ctl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(77), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [3863] = 24,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(21), 1,
      sym_basic_expr,
    STATE(179), 1,
      sym_simple_expr,
    STATE(182), 1,
      sym_next_expr,
    STATE(191), 1,
      sym_ltl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(155), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(157), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [3958] = 24,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(179), 1,
      sym_simple_expr,
    STATE(180), 1,
      sym_ltl_expr,
    STATE(182), 1,
      sym_next_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(155), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(157), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [4053] = 24,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(285), 1,
      sym_next_expr,
    STATE(286), 1,
      sym_simple_expr,
    STATE(287), 1,
      sym_ltl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(183), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(185), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [4148] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(192), 1,
      sym_basic_expr,
    STATE(297), 1,
      sym_ctl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(51), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [4241] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(175), 1,
      sym_ctl_expr,
    STATE(190), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(51), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [4334] = 24,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(177), 1,
      sym_ltl_expr,
    STATE(179), 1,
      sym_simple_expr,
    STATE(182), 1,
      sym_next_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(155), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(157), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [4429] = 24,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(179), 1,
      sym_simple_expr,
    STATE(182), 1,
      sym_next_expr,
    STATE(184), 1,
      sym_ltl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(155), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(157), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [4524] = 24,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(282), 1,
      sym_ltl_expr,
    STATE(285), 1,
      sym_next_expr,
    STATE(286), 1,
      sym_simple_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(183), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(185), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [4619] = 24,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(190), 1,
      sym_basic_expr,
    STATE(284), 1,
      sym_ltl_expr,
    STATE(285), 1,
      sym_next_expr,
    STATE(286), 1,
      sym_simple_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(183), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(185), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [4714] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(75), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_0,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(214), 1,
      sym_basic_expr,
    STATE(307), 1,
      sym_ctl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(77), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [4807] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(195), 1,
      sym_basic_expr,
    STATE(312), 1,
      sym_ctl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(51), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [4900] = 24,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(179), 1,
      sym_simple_expr,
    STATE(182), 1,
      sym_next_expr,
    STATE(183), 1,
      sym_ltl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(155), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(157), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [4995] = 24,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(179), 1,
      sym_simple_expr,
    STATE(182), 1,
      sym_next_expr,
    STATE(185), 1,
      sym_ltl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(155), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(157), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [5090] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(194), 1,
      sym_basic_expr,
    STATE(312), 1,
      sym_ctl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(51), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [5183] = 24,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(179), 1,
      sym_simple_expr,
    STATE(182), 1,
      sym_next_expr,
    STATE(186), 1,
      sym_ltl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(155), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(157), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [5278] = 24,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(179), 1,
      sym_simple_expr,
    STATE(181), 1,
      sym_ltl_expr,
    STATE(182), 1,
      sym_next_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(155), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(157), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [5373] = 23,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(21), 1,
      sym_basic_expr,
    STATE(172), 1,
      sym_simple_expr,
    STATE(175), 1,
      sym_ctl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(195), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [5466] = 23,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(172), 1,
      sym_simple_expr,
    STATE(205), 1,
      sym_ctl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(195), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [5559] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(192), 1,
      sym_basic_expr,
    STATE(314), 1,
      sym_ctl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(51), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [5652] = 23,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(172), 1,
      sym_simple_expr,
    STATE(173), 1,
      sym_ctl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(195), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [5745] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(75), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_0,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(214), 1,
      sym_basic_expr,
    STATE(310), 1,
      sym_ctl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(77), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [5838] = 23,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(172), 1,
      sym_simple_expr,
    STATE(207), 1,
      sym_ctl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(195), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [5931] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(192), 1,
      sym_basic_expr,
    STATE(316), 1,
      sym_ctl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(51), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [6024] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(192), 1,
      sym_basic_expr,
    STATE(291), 1,
      sym_ctl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(51), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [6117] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(75), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_0,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(175), 1,
      sym_ctl_expr,
    STATE(190), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(77), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [6210] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(192), 1,
      sym_basic_expr,
    STATE(294), 1,
      sym_ctl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(51), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [6303] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(75), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_0,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(214), 1,
      sym_basic_expr,
    STATE(304), 1,
      sym_ctl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(77), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [6396] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(75), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_0,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(173), 1,
      sym_ctl_expr,
    STATE(214), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(77), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [6489] = 23,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(172), 1,
      sym_simple_expr,
    STATE(200), 1,
      sym_ctl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(195), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [6582] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(75), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_0,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(214), 1,
      sym_basic_expr,
    STATE(309), 1,
      sym_ctl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(77), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [6675] = 23,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(172), 1,
      sym_simple_expr,
    STATE(199), 1,
      sym_ctl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(195), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [6768] = 23,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(172), 1,
      sym_simple_expr,
    STATE(202), 1,
      sym_ctl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(195), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [6861] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(192), 1,
      sym_basic_expr,
    STATE(293), 1,
      sym_ctl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(51), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [6954] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(75), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_0,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(214), 1,
      sym_basic_expr,
    STATE(301), 1,
      sym_ctl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(77), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [7047] = 23,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(172), 1,
      sym_simple_expr,
    STATE(208), 1,
      sym_ctl_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(195), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [7140] = 23,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(172), 1,
      sym_simple_expr,
    STATE(192), 1,
      sym_basic_expr,
    STATE(295), 1,
      sym_ctl_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(191), 2,
      anon_sym_A,
      anon_sym_E,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(51), 6,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [7233] = 24,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(176), 1,
      sym_ltl_expr,
    STATE(179), 1,
      sym_simple_expr,
    STATE(182), 1,
      sym_next_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(155), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(157), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [7328] = 24,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(195), 1,
      sym_basic_expr,
    STATE(278), 1,
      sym_ltl_expr,
    STATE(285), 1,
      sym_next_expr,
    STATE(286), 1,
      sym_simple_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    ACTIONS(183), 3,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
    ACTIONS(185), 4,
      anon_sym_G,
      anon_sym_F,
      anon_sym_H,
      anon_sym_O,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [7423] = 23,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_ISA,
    ACTIONS(205), 1,
      anon_sym_COMPUTE,
    ACTIONS(207), 1,
      anon_sym_LTLSPEC,
    ACTIONS(209), 1,
      anon_sym_INVARSPEC,
    ACTIONS(215), 1,
      anon_sym_COMPASSION,
    ACTIONS(217), 1,
      anon_sym_INVAR,
    ACTIONS(219), 1,
      anon_sym_INIT,
    ACTIONS(221), 1,
      anon_sym_TRANS,
    ACTIONS(223), 1,
      anon_sym_ASSIGN,
    ACTIONS(225), 1,
      anon_sym_VAR,
    ACTIONS(227), 1,
      anon_sym_IVAR,
    ACTIONS(229), 1,
      anon_sym_FROZENVAR,
    ACTIONS(231), 1,
      anon_sym_DEFINE,
    ACTIONS(233), 1,
      anon_sym_CONSTANTS,
    STATE(92), 1,
      sym_module_parameters,
    STATE(370), 1,
      sym_module_body,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_MODULE,
    ACTIONS(211), 2,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
    ACTIONS(213), 2,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
    STATE(93), 2,
      sym_module_element,
      aux_sym_module_body_repeat1,
    STATE(253), 16,
      sym_comment,
      sym_isa_declaration,
      sym_compute_specification,
      sym_ltl_specification,
      sym_invar_specification,
      sym_ctl_specification,
      sym_fairness_constraint,
      sym_invar_constraint,
      sym_init_constraint,
      sym_trans_constraint,
      sym_assign_constraint,
      sym_var_declaration,
      sym_ivar_declaration,
      sym_frozenvar_declaration,
      sym_define_declaration,
      sym_constants_declaration,
  [7512] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(203), 1,
      anon_sym_ISA,
    ACTIONS(205), 1,
      anon_sym_COMPUTE,
    ACTIONS(207), 1,
      anon_sym_LTLSPEC,
    ACTIONS(209), 1,
      anon_sym_INVARSPEC,
    ACTIONS(215), 1,
      anon_sym_COMPASSION,
    ACTIONS(217), 1,
      anon_sym_INVAR,
    ACTIONS(219), 1,
      anon_sym_INIT,
    ACTIONS(221), 1,
      anon_sym_TRANS,
    ACTIONS(223), 1,
      anon_sym_ASSIGN,
    ACTIONS(225), 1,
      anon_sym_VAR,
    ACTIONS(227), 1,
      anon_sym_IVAR,
    ACTIONS(229), 1,
      anon_sym_FROZENVAR,
    ACTIONS(231), 1,
      anon_sym_DEFINE,
    ACTIONS(233), 1,
      anon_sym_CONSTANTS,
    STATE(373), 1,
      sym_module_body,
    ACTIONS(211), 2,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
    ACTIONS(213), 2,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_MODULE,
    STATE(93), 2,
      sym_module_element,
      aux_sym_module_body_repeat1,
    STATE(253), 16,
      sym_comment,
      sym_isa_declaration,
      sym_compute_specification,
      sym_ltl_specification,
      sym_invar_specification,
      sym_ctl_specification,
      sym_fairness_constraint,
      sym_invar_constraint,
      sym_init_constraint,
      sym_trans_constraint,
      sym_assign_constraint,
      sym_var_declaration,
      sym_ivar_declaration,
      sym_frozenvar_declaration,
      sym_define_declaration,
      sym_constants_declaration,
  [7595] = 20,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(203), 1,
      anon_sym_ISA,
    ACTIONS(205), 1,
      anon_sym_COMPUTE,
    ACTIONS(207), 1,
      anon_sym_LTLSPEC,
    ACTIONS(209), 1,
      anon_sym_INVARSPEC,
    ACTIONS(215), 1,
      anon_sym_COMPASSION,
    ACTIONS(217), 1,
      anon_sym_INVAR,
    ACTIONS(219), 1,
      anon_sym_INIT,
    ACTIONS(221), 1,
      anon_sym_TRANS,
    ACTIONS(223), 1,
      anon_sym_ASSIGN,
    ACTIONS(225), 1,
      anon_sym_VAR,
    ACTIONS(227), 1,
      anon_sym_IVAR,
    ACTIONS(229), 1,
      anon_sym_FROZENVAR,
    ACTIONS(231), 1,
      anon_sym_DEFINE,
    ACTIONS(233), 1,
      anon_sym_CONSTANTS,
    ACTIONS(211), 2,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
    ACTIONS(213), 2,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      anon_sym_MODULE,
    STATE(94), 2,
      sym_module_element,
      aux_sym_module_body_repeat1,
    STATE(253), 16,
      sym_comment,
      sym_isa_declaration,
      sym_compute_specification,
      sym_ltl_specification,
      sym_invar_specification,
      sym_ctl_specification,
      sym_fairness_constraint,
      sym_invar_constraint,
      sym_init_constraint,
      sym_trans_constraint,
      sym_assign_constraint,
      sym_var_declaration,
      sym_ivar_declaration,
      sym_frozenvar_declaration,
      sym_define_declaration,
      sym_constants_declaration,
  [7675] = 20,
    ACTIONS(241), 1,
      aux_sym_comment_token1,
    ACTIONS(244), 1,
      anon_sym_ISA,
    ACTIONS(247), 1,
      anon_sym_COMPUTE,
    ACTIONS(250), 1,
      anon_sym_LTLSPEC,
    ACTIONS(253), 1,
      anon_sym_INVARSPEC,
    ACTIONS(262), 1,
      anon_sym_COMPASSION,
    ACTIONS(265), 1,
      anon_sym_INVAR,
    ACTIONS(268), 1,
      anon_sym_INIT,
    ACTIONS(271), 1,
      anon_sym_TRANS,
    ACTIONS(274), 1,
      anon_sym_ASSIGN,
    ACTIONS(277), 1,
      anon_sym_VAR,
    ACTIONS(280), 1,
      anon_sym_IVAR,
    ACTIONS(283), 1,
      anon_sym_FROZENVAR,
    ACTIONS(286), 1,
      anon_sym_DEFINE,
    ACTIONS(289), 1,
      anon_sym_CONSTANTS,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      anon_sym_MODULE,
    ACTIONS(256), 2,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
    ACTIONS(259), 2,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
    STATE(94), 2,
      sym_module_element,
      aux_sym_module_body_repeat1,
    STATE(253), 16,
      sym_comment,
      sym_isa_declaration,
      sym_compute_specification,
      sym_ltl_specification,
      sym_invar_specification,
      sym_ctl_specification,
      sym_fairness_constraint,
      sym_invar_constraint,
      sym_init_constraint,
      sym_trans_constraint,
      sym_assign_constraint,
      sym_var_declaration,
      sym_ivar_declaration,
      sym_frozenvar_declaration,
      sym_define_declaration,
      sym_constants_declaration,
  [7755] = 22,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_NAME,
    ACTIONS(296), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(179), 1,
      sym_simple_expr,
    STATE(237), 1,
      sym_next_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [7839] = 22,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(349), 1,
      sym_simple_expr,
    STATE(389), 1,
      sym_parameter_list,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [7923] = 22,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(349), 1,
      sym_simple_expr,
    STATE(471), 1,
      sym_parameter_list,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [8007] = 21,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(179), 1,
      sym_simple_expr,
    STATE(192), 1,
      sym_basic_expr,
    STATE(473), 1,
      sym_next_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [8088] = 21,
    ACTIONS(306), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 1,
      anon_sym_BANG,
    ACTIONS(321), 1,
      anon_sym_DASH,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    ACTIONS(327), 1,
      anon_sym_count,
    ACTIONS(330), 1,
      anon_sym_case,
    ACTIONS(333), 1,
      anon_sym_esac,
    ACTIONS(338), 1,
      sym_digits,
    ACTIONS(341), 1,
      anon_sym_0,
    ACTIONS(344), 1,
      anon_sym_self,
    STATE(99), 1,
      aux_sym_case_body_repeat1,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(222), 1,
      sym_basic_expr,
    ACTIONS(335), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(318), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(315), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [8169] = 21,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(179), 1,
      sym_simple_expr,
    STATE(236), 1,
      sym_next_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [8250] = 21,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(104), 1,
      aux_sym_case_body_repeat1,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(222), 1,
      sym_basic_expr,
    STATE(412), 1,
      sym_case_body,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [8331] = 21,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(179), 1,
      sym_simple_expr,
    STATE(247), 1,
      sym_next_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [8412] = 21,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(104), 1,
      aux_sym_case_body_repeat1,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(222), 1,
      sym_basic_expr,
    STATE(482), 1,
      sym_case_body,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [8493] = 21,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    ACTIONS(347), 1,
      anon_sym_esac,
    STATE(99), 1,
      aux_sym_case_body_repeat1,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(222), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [8574] = 20,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(242), 1,
      sym_simple_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [8652] = 20,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(408), 1,
      sym_simple_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [8730] = 20,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(248), 1,
      sym_simple_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [8808] = 20,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(31), 1,
      sym_basic_expr,
    STATE(246), 1,
      sym_simple_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [8886] = 20,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(209), 1,
      sym_basic_expr,
    STATE(418), 1,
      sym_basic_expr_list,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [8964] = 20,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(473), 1,
      sym_simple_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [9042] = 20,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(376), 1,
      sym_simple_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [9120] = 20,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(211), 1,
      sym_basic_expr,
    STATE(411), 1,
      sym_set_body_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [9198] = 20,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(211), 1,
      sym_basic_expr,
    STATE(483), 1,
      sym_set_body_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [9276] = 20,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(429), 1,
      sym_simple_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [9354] = 20,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(477), 1,
      sym_simple_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [9432] = 20,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(209), 1,
      sym_basic_expr,
    STATE(397), 1,
      sym_basic_expr_list,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [9510] = 20,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(192), 1,
      sym_basic_expr,
    STATE(391), 1,
      sym_simple_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [9588] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(225), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [9663] = 2,
    ACTIONS(23), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(21), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DOT,
  [9704] = 19,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(349), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(20), 1,
      sym_basic_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [9779] = 2,
    ACTIONS(15), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(13), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [9820] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(226), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [9895] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(227), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [9970] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(170), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [10045] = 19,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(29), 1,
      sym_basic_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [10120] = 2,
    ACTIONS(19), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(17), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DOT,
  [10161] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(228), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [10236] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(223), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [10311] = 3,
    ACTIONS(351), 1,
      anon_sym_DOT_DOT,
    ACTIONS(93), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(89), 31,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [10354] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(210), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [10429] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_0,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(161), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [10504] = 19,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(26), 1,
      sym_basic_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [10579] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(215), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [10654] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_0,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(212), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [10729] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_0,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(163), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [10804] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(161), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [10879] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_0,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_BANG,
    ACTIONS(355), 1,
      sym_digits,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(213), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [10954] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(221), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [11029] = 2,
    ACTIONS(27), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(25), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym__,
      sym_hex_digit,
  [11070] = 3,
    ACTIONS(357), 2,
      anon_sym__,
      sym_hex_digit,
    ACTIONS(35), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(33), 30,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [11113] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(218), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [11188] = 2,
    ACTIONS(31), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(29), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym__,
      sym_hex_digit,
  [11229] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(163), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [11304] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    ACTIONS(355), 1,
      sym_digits,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(169), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [11379] = 3,
    ACTIONS(359), 1,
      anon_sym_DOT,
    ACTIONS(85), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(83), 31,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [11422] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(217), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [11497] = 2,
    ACTIONS(23), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(21), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_DOT,
  [11538] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(220), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [11613] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(224), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [11688] = 2,
    ACTIONS(11), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(9), 32,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [11729] = 19,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_count,
    ACTIONS(63), 1,
      anon_sym_case,
    ACTIONS(67), 1,
      sym_digits,
    ACTIONS(69), 1,
      anon_sym_0,
    ACTIONS(71), 1,
      anon_sym_self,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_BANG,
    STATE(129), 1,
      sym_integer_number,
    STATE(145), 1,
      sym_complex_identifier,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(219), 1,
      sym_basic_expr,
    ACTIONS(65), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(55), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(155), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(160), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(53), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [11804] = 19,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_count,
    ACTIONS(169), 1,
      anon_sym_case,
    ACTIONS(173), 1,
      sym_digits,
    ACTIONS(175), 1,
      anon_sym_0,
    ACTIONS(177), 1,
      anon_sym_self,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_BANG,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(16), 1,
      sym_complex_identifier,
    STATE(17), 1,
      sym_integer_number,
    STATE(22), 1,
      sym_basic_expr,
    ACTIONS(171), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(161), 3,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
    STATE(32), 4,
      sym_case_expr,
      sym_constant,
      sym_variable_identifier,
      sym_define_identifier,
    STATE(33), 5,
      sym_boolean_constant,
      sym_integer_constant,
      sym_symbolic_constant,
      sym_range_constant,
      sym_word_constant,
    ACTIONS(159), 8,
      anon_sym_next,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
  [11879] = 2,
    ACTIONS(9), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(11), 31,
      sym_identifier,
      anon_sym_EBF,
      anon_sym_ABF,
      anon_sym_EBG,
      anon_sym_ABG,
      anon_sym_A,
      anon_sym_E,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
      anon_sym_next,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
      anon_sym_count,
      anon_sym_case,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_digits,
      anon_sym_0,
      anon_sym_self,
  [11919] = 2,
    ACTIONS(97), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(95), 31,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [11959] = 2,
    ACTIONS(137), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(135), 31,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [11999] = 2,
    ACTIONS(15), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(13), 31,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [12039] = 2,
    ACTIONS(145), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(143), 31,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [12079] = 2,
    ACTIONS(115), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(113), 31,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [12119] = 2,
    ACTIONS(115), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(113), 31,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [12159] = 2,
    ACTIONS(141), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(139), 31,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [12199] = 2,
    ACTIONS(119), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(117), 31,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [12239] = 2,
    ACTIONS(363), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(361), 31,
      sym_identifier,
      anon_sym_EBF,
      anon_sym_ABF,
      anon_sym_EBG,
      anon_sym_ABG,
      anon_sym_A,
      anon_sym_E,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
      anon_sym_next,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
      anon_sym_count,
      anon_sym_case,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_digits,
      anon_sym_0,
      anon_sym_self,
  [12279] = 2,
    ACTIONS(101), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(99), 31,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [12319] = 2,
    ACTIONS(107), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(105), 31,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [12359] = 2,
    ACTIONS(107), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(105), 31,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [12399] = 2,
    ACTIONS(111), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(109), 31,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [12439] = 2,
    ACTIONS(123), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(121), 31,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
      anon_sym_QMARK,
  [12479] = 2,
    ACTIONS(13), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(15), 31,
      sym_identifier,
      anon_sym_EBF,
      anon_sym_ABF,
      anon_sym_EBG,
      anon_sym_ABG,
      anon_sym_A,
      anon_sym_E,
      anon_sym_EG,
      anon_sym_EX,
      anon_sym_EF,
      anon_sym_AG,
      anon_sym_AX,
      anon_sym_AF,
      anon_sym_next,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
      anon_sym_count,
      anon_sym_case,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_digits,
      anon_sym_0,
      anon_sym_self,
  [12519] = 3,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(101), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(99), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
  [12560] = 3,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(107), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(105), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_RBRACE,
  [12601] = 2,
    ACTIONS(369), 1,
      anon_sym_INVAR,
    ACTIONS(367), 32,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [12639] = 2,
    ACTIONS(373), 1,
      anon_sym_INVAR,
    ACTIONS(371), 32,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [12677] = 2,
    ACTIONS(369), 1,
      anon_sym_INVAR,
    ACTIONS(367), 32,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [12715] = 2,
    ACTIONS(377), 1,
      anon_sym_INVAR,
    ACTIONS(375), 32,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [12753] = 2,
    ACTIONS(381), 1,
      anon_sym_INVAR,
    ACTIONS(379), 32,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [12791] = 11,
    ACTIONS(385), 1,
      anon_sym_SEMI,
    ACTIONS(387), 1,
      anon_sym_AMP,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      anon_sym_xor,
    ACTIONS(393), 1,
      anon_sym_xnor,
    ACTIONS(395), 1,
      anon_sym_DASH_GT,
    ACTIONS(397), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(399), 1,
      anon_sym_U,
    ACTIONS(403), 1,
      anon_sym_INVAR,
    ACTIONS(401), 3,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
    ACTIONS(383), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [12846] = 7,
    ACTIONS(387), 1,
      anon_sym_AMP,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      anon_sym_xor,
    ACTIONS(393), 1,
      anon_sym_xnor,
    ACTIONS(395), 1,
      anon_sym_DASH_GT,
    ACTIONS(407), 4,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
    ACTIONS(405), 23,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [12893] = 2,
    ACTIONS(407), 4,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
    ACTIONS(405), 28,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [12930] = 2,
    ACTIONS(411), 4,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
    ACTIONS(409), 28,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [12967] = 8,
    ACTIONS(387), 1,
      anon_sym_AMP,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      anon_sym_xor,
    ACTIONS(393), 1,
      anon_sym_xnor,
    ACTIONS(395), 1,
      anon_sym_DASH_GT,
    ACTIONS(397), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(415), 4,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
    ACTIONS(413), 22,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13016] = 8,
    ACTIONS(387), 1,
      anon_sym_AMP,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      anon_sym_xor,
    ACTIONS(393), 1,
      anon_sym_xnor,
    ACTIONS(395), 1,
      anon_sym_DASH_GT,
    ACTIONS(397), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(407), 4,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
    ACTIONS(405), 22,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13065] = 2,
    ACTIONS(419), 4,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
    ACTIONS(417), 28,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13102] = 8,
    ACTIONS(387), 1,
      anon_sym_AMP,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      anon_sym_xor,
    ACTIONS(393), 1,
      anon_sym_xnor,
    ACTIONS(395), 1,
      anon_sym_DASH_GT,
    ACTIONS(397), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(407), 4,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
    ACTIONS(405), 22,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13151] = 6,
    ACTIONS(387), 1,
      anon_sym_AMP,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      anon_sym_xor,
    ACTIONS(393), 1,
      anon_sym_xnor,
    ACTIONS(407), 4,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
    ACTIONS(405), 24,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13196] = 5,
    ACTIONS(387), 1,
      anon_sym_AMP,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      anon_sym_xor,
    ACTIONS(407), 4,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
    ACTIONS(405), 25,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13239] = 4,
    ACTIONS(387), 1,
      anon_sym_AMP,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(407), 4,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
    ACTIONS(405), 26,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13280] = 11,
    ACTIONS(387), 1,
      anon_sym_AMP,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      anon_sym_xor,
    ACTIONS(393), 1,
      anon_sym_xnor,
    ACTIONS(395), 1,
      anon_sym_DASH_GT,
    ACTIONS(397), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(399), 1,
      anon_sym_U,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(425), 1,
      anon_sym_INVAR,
    ACTIONS(401), 3,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
    ACTIONS(421), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13335] = 3,
    ACTIONS(387), 1,
      anon_sym_AMP,
    ACTIONS(407), 4,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
    ACTIONS(405), 27,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13374] = 2,
    ACTIONS(407), 4,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
    ACTIONS(405), 28,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13411] = 2,
    ACTIONS(101), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(99), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [13448] = 2,
    ACTIONS(415), 4,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
      anon_sym_INVAR,
    ACTIONS(413), 28,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13485] = 5,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(125), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [13528] = 2,
    ACTIONS(435), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(433), 26,
      sym_identifier,
      anon_sym_X,
      anon_sym_G,
      anon_sym_F,
      anon_sym_Y,
      anon_sym_Z,
      anon_sym_H,
      anon_sym_O,
      anon_sym_next,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
      anon_sym_count,
      anon_sym_case,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_digits,
      anon_sym_0,
      anon_sym_self,
  [13563] = 6,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(125), 4,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [13605] = 6,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(125), 4,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [13647] = 8,
    ACTIONS(448), 1,
      anon_sym_init,
    ACTIONS(451), 1,
      anon_sym_next,
    STATE(196), 1,
      aux_sym_assign_list_repeat1,
    STATE(371), 1,
      sym_complex_identifier,
    STATE(420), 1,
      sym_assign,
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    ACTIONS(445), 2,
      sym_identifier,
      anon_sym_self,
    ACTIONS(443), 19,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INVAR,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13692] = 2,
    ACTIONS(31), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      sym_hex_digit,
    ACTIONS(29), 24,
      anon_sym_LBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
      anon_sym__,
  [13725] = 9,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(460), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_xor,
    ACTIONS(464), 1,
      anon_sym_xnor,
    ACTIONS(466), 1,
      anon_sym_DASH_GT,
    ACTIONS(468), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(470), 1,
      anon_sym_INVAR,
    ACTIONS(454), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13772] = 5,
    ACTIONS(369), 1,
      anon_sym_INVAR,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(460), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_xor,
    ACTIONS(367), 24,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13811] = 4,
    ACTIONS(369), 1,
      anon_sym_INVAR,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(460), 1,
      anon_sym_PIPE,
    ACTIONS(367), 25,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13848] = 6,
    ACTIONS(369), 1,
      anon_sym_INVAR,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(460), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_xor,
    ACTIONS(464), 1,
      anon_sym_xnor,
    ACTIONS(367), 23,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13889] = 9,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(460), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_xor,
    ACTIONS(464), 1,
      anon_sym_xnor,
    ACTIONS(466), 1,
      anon_sym_DASH_GT,
    ACTIONS(468), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_INVAR,
    ACTIONS(472), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [13936] = 2,
    ACTIONS(27), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      sym_hex_digit,
    ACTIONS(25), 24,
      anon_sym_LBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
      anon_sym__,
  [13969] = 8,
    ACTIONS(482), 1,
      anon_sym_init,
    ACTIONS(484), 1,
      anon_sym_next,
    STATE(196), 1,
      aux_sym_assign_list_repeat1,
    STATE(371), 1,
      sym_complex_identifier,
    STATE(420), 1,
      sym_assign,
    ACTIONS(177), 2,
      sym_identifier,
      anon_sym_self,
    ACTIONS(478), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    ACTIONS(480), 19,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INVAR,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [14014] = 8,
    ACTIONS(381), 1,
      anon_sym_INVAR,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(460), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_xor,
    ACTIONS(464), 1,
      anon_sym_xnor,
    ACTIONS(466), 1,
      anon_sym_DASH_GT,
    ACTIONS(468), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(379), 21,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [14059] = 4,
    ACTIONS(486), 1,
      anon_sym__,
    ACTIONS(488), 1,
      sym_hex_digit,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(33), 23,
      anon_sym_LBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
      anon_sym_QMARK,
  [14096] = 3,
    ACTIONS(369), 1,
      anon_sym_INVAR,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(367), 26,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [14131] = 7,
    ACTIONS(369), 1,
      anon_sym_INVAR,
    ACTIONS(458), 1,
      anon_sym_AMP,
    ACTIONS(460), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_xor,
    ACTIONS(464), 1,
      anon_sym_xnor,
    ACTIONS(466), 1,
      anon_sym_DASH_GT,
    ACTIONS(367), 22,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_LT_DASH_GT,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [14174] = 7,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_basic_expr_list_repeat1,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14216] = 5,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(494), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14254] = 7,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    STATE(347), 1,
      aux_sym_basic_expr_list_repeat1,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14296] = 3,
    ACTIONS(498), 1,
      anon_sym_QMARK,
    ACTIONS(107), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(105), 22,
      anon_sym_LBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14329] = 3,
    ACTIONS(498), 1,
      anon_sym_QMARK,
    ACTIONS(101), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(99), 22,
      anon_sym_LBRACK,
      anon_sym_BU,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14362] = 5,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(498), 1,
      anon_sym_QMARK,
    ACTIONS(125), 2,
      anon_sym_BU,
      anon_sym_U,
    ACTIONS(502), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(500), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14399] = 5,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14435] = 2,
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    ACTIONS(443), 23,
      anon_sym_MODULE,
      sym_identifier,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INVAR,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_init,
      anon_sym_next,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
      anon_sym_self,
  [14465] = 5,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14501] = 5,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14537] = 5,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14573] = 5,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      anon_sym_COLON,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14609] = 5,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(510), 1,
      anon_sym_COMMA,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14645] = 5,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      anon_sym_COLON,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14681] = 5,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(514), 1,
      anon_sym_COLON,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14717] = 5,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14753] = 5,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14789] = 5,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14825] = 5,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14861] = 5,
    ACTIONS(365), 1,
      anon_sym_QMARK,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      anon_sym_SEMI,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(429), 19,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_mod,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_COLON_COLON,
      anon_sym_union,
      anon_sym_in,
  [14897] = 4,
    ACTIONS(530), 1,
      sym_identifier,
    ACTIONS(526), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    STATE(229), 2,
      sym_var_declaration_item,
      aux_sym_var_list_repeat1,
    ACTIONS(528), 19,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INVAR,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [14930] = 4,
    ACTIONS(537), 1,
      sym_identifier,
    ACTIONS(533), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    STATE(230), 2,
      sym_simple_var_declaration_item,
      aux_sym_simple_var_list_repeat1,
    ACTIONS(535), 19,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INVAR,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [14963] = 4,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(540), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    STATE(230), 2,
      sym_simple_var_declaration_item,
      aux_sym_simple_var_list_repeat1,
    ACTIONS(542), 19,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INVAR,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [14996] = 2,
    ACTIONS(548), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(546), 20,
      sym_identifier,
      anon_sym_next,
      anon_sym_abs,
      anon_sym_max,
      anon_sym_min,
      anon_sym_word1,
      anon_sym_bool,
      anon_sym_toint,
      anon_sym_signed,
      anon_sym_unsigned,
      anon_sym_extend,
      anon_sym_resize,
      anon_sym_count,
      anon_sym_case,
      anon_sym_esac,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_digits,
      anon_sym_0,
      anon_sym_self,
  [15025] = 4,
    ACTIONS(554), 1,
      sym_identifier,
    ACTIONS(550), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    STATE(229), 2,
      sym_var_declaration_item,
      aux_sym_var_list_repeat1,
    ACTIONS(552), 19,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INVAR,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15058] = 4,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(234), 1,
      aux_sym_define_body_repeat1,
    ACTIONS(556), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    ACTIONS(558), 19,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INVAR,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15090] = 4,
    ACTIONS(567), 1,
      sym_identifier,
    STATE(234), 1,
      aux_sym_define_body_repeat1,
    ACTIONS(563), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    ACTIONS(565), 19,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INVAR,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15122] = 3,
    ACTIONS(571), 1,
      anon_sym_SEMI,
    ACTIONS(573), 1,
      anon_sym_INVAR,
    ACTIONS(569), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15151] = 3,
    ACTIONS(577), 1,
      anon_sym_SEMI,
    ACTIONS(579), 1,
      anon_sym_INVAR,
    ACTIONS(575), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15180] = 3,
    ACTIONS(583), 1,
      anon_sym_SEMI,
    ACTIONS(585), 1,
      anon_sym_INVAR,
    ACTIONS(581), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15209] = 3,
    ACTIONS(589), 1,
      anon_sym_SEMI,
    ACTIONS(591), 1,
      anon_sym_INVAR,
    ACTIONS(587), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15238] = 2,
    ACTIONS(595), 1,
      anon_sym_INVAR,
    ACTIONS(593), 21,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_SEMI,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15265] = 3,
    ACTIONS(599), 1,
      anon_sym_SEMI,
    ACTIONS(601), 1,
      anon_sym_INVAR,
    ACTIONS(597), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15294] = 3,
    ACTIONS(605), 1,
      anon_sym_SEMI,
    ACTIONS(607), 1,
      anon_sym_INVAR,
    ACTIONS(603), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15323] = 2,
    ACTIONS(609), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    ACTIONS(611), 20,
      anon_sym_MODULE,
      sym_identifier,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INVAR,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15350] = 2,
    ACTIONS(613), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    ACTIONS(615), 20,
      anon_sym_MODULE,
      sym_identifier,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INVAR,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15377] = 2,
    ACTIONS(617), 2,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
    ACTIONS(619), 20,
      anon_sym_MODULE,
      sym_identifier,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INVAR,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15404] = 3,
    ACTIONS(623), 1,
      anon_sym_SEMI,
    ACTIONS(625), 1,
      anon_sym_INVAR,
    ACTIONS(621), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15433] = 3,
    ACTIONS(629), 1,
      anon_sym_SEMI,
    ACTIONS(631), 1,
      anon_sym_INVAR,
    ACTIONS(627), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15462] = 3,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    ACTIONS(637), 1,
      anon_sym_INVAR,
    ACTIONS(633), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15491] = 2,
    ACTIONS(641), 1,
      anon_sym_INVAR,
    ACTIONS(639), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15517] = 2,
    ACTIONS(645), 1,
      anon_sym_INVAR,
    ACTIONS(643), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15543] = 2,
    ACTIONS(649), 1,
      anon_sym_INVAR,
    ACTIONS(647), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15569] = 2,
    ACTIONS(653), 1,
      anon_sym_INVAR,
    ACTIONS(651), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15595] = 2,
    ACTIONS(657), 1,
      anon_sym_INVAR,
    ACTIONS(655), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15621] = 2,
    ACTIONS(661), 1,
      anon_sym_INVAR,
    ACTIONS(659), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15647] = 2,
    ACTIONS(665), 1,
      anon_sym_INVAR,
    ACTIONS(663), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15673] = 2,
    ACTIONS(669), 1,
      anon_sym_INVAR,
    ACTIONS(667), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15699] = 2,
    ACTIONS(673), 1,
      anon_sym_INVAR,
    ACTIONS(671), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15725] = 2,
    ACTIONS(677), 1,
      anon_sym_INVAR,
    ACTIONS(675), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15751] = 2,
    ACTIONS(681), 1,
      anon_sym_INVAR,
    ACTIONS(679), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15777] = 2,
    ACTIONS(685), 1,
      anon_sym_INVAR,
    ACTIONS(683), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15803] = 2,
    ACTIONS(689), 1,
      anon_sym_INVAR,
    ACTIONS(687), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15829] = 2,
    ACTIONS(693), 1,
      anon_sym_INVAR,
    ACTIONS(691), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15855] = 2,
    ACTIONS(697), 1,
      anon_sym_INVAR,
    ACTIONS(695), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15881] = 2,
    ACTIONS(701), 1,
      anon_sym_INVAR,
    ACTIONS(699), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15907] = 2,
    ACTIONS(705), 1,
      anon_sym_INVAR,
    ACTIONS(703), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15933] = 2,
    ACTIONS(709), 1,
      anon_sym_INVAR,
    ACTIONS(707), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15959] = 2,
    ACTIONS(713), 1,
      anon_sym_INVAR,
    ACTIONS(711), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [15985] = 2,
    ACTIONS(717), 1,
      anon_sym_INVAR,
    ACTIONS(715), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [16011] = 2,
    ACTIONS(721), 1,
      anon_sym_INVAR,
    ACTIONS(719), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [16037] = 2,
    ACTIONS(725), 1,
      anon_sym_INVAR,
    ACTIONS(723), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [16063] = 2,
    ACTIONS(729), 1,
      anon_sym_INVAR,
    ACTIONS(727), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [16089] = 2,
    ACTIONS(733), 1,
      anon_sym_INVAR,
    ACTIONS(731), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [16115] = 2,
    ACTIONS(737), 1,
      anon_sym_INVAR,
    ACTIONS(735), 20,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_MODULE,
      anon_sym_ISA,
      anon_sym_COMPUTE,
      anon_sym_LTLSPEC,
      anon_sym_INVARSPEC,
      anon_sym_CTLSPEC,
      anon_sym_SPEC,
      anon_sym_FAIRNESS,
      anon_sym_JUSTICE,
      anon_sym_COMPASSION,
      anon_sym_INIT,
      anon_sym_TRANS,
      anon_sym_ASSIGN,
      anon_sym_VAR,
      anon_sym_IVAR,
      anon_sym_FROZENVAR,
      anon_sym_DEFINE,
      anon_sym_CONSTANTS,
  [16141] = 13,
    ACTIONS(739), 1,
      sym_identifier,
    ACTIONS(741), 1,
      anon_sym_process,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(745), 1,
      anon_sym_unsigned,
    ACTIONS(747), 1,
      anon_sym_LBRACE,
    ACTIONS(749), 1,
      anon_sym_boolean,
    ACTIONS(751), 1,
      anon_sym_word,
    ACTIONS(753), 1,
      anon_sym_array,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(406), 1,
      sym_integer_number,
    STATE(450), 1,
      sym_type_specifier,
    STATE(405), 2,
      sym_module_type_spicifier,
      sym_simple_type_specifier,
  [16182] = 13,
    ACTIONS(739), 1,
      sym_identifier,
    ACTIONS(741), 1,
      anon_sym_process,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(745), 1,
      anon_sym_unsigned,
    ACTIONS(747), 1,
      anon_sym_LBRACE,
    ACTIONS(749), 1,
      anon_sym_boolean,
    ACTIONS(751), 1,
      anon_sym_word,
    ACTIONS(753), 1,
      anon_sym_array,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(402), 1,
      sym_type_specifier,
    STATE(406), 1,
      sym_integer_number,
    STATE(405), 2,
      sym_module_type_spicifier,
      sym_simple_type_specifier,
  [16223] = 5,
    ACTIONS(757), 1,
      anon_sym_AMP,
    ACTIONS(759), 1,
      anon_sym_PIPE,
    ACTIONS(761), 1,
      anon_sym_xor,
    ACTIONS(763), 1,
      anon_sym_xnor,
    ACTIONS(405), 7,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
  [16245] = 3,
    ACTIONS(757), 1,
      anon_sym_AMP,
    ACTIONS(759), 1,
      anon_sym_PIPE,
    ACTIONS(405), 9,
      anon_sym_RPAREN,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
  [16263] = 8,
    ACTIONS(757), 1,
      anon_sym_AMP,
    ACTIONS(759), 1,
      anon_sym_PIPE,
    ACTIONS(761), 1,
      anon_sym_xor,
    ACTIONS(763), 1,
      anon_sym_xnor,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    ACTIONS(767), 1,
      anon_sym_DASH_GT,
    ACTIONS(769), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(771), 4,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
  [16291] = 2,
    ACTIONS(757), 1,
      anon_sym_AMP,
    ACTIONS(405), 10,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
  [16307] = 6,
    ACTIONS(757), 1,
      anon_sym_AMP,
    ACTIONS(759), 1,
      anon_sym_PIPE,
    ACTIONS(761), 1,
      anon_sym_xor,
    ACTIONS(763), 1,
      anon_sym_xnor,
    ACTIONS(767), 1,
      anon_sym_DASH_GT,
    ACTIONS(405), 6,
      anon_sym_RPAREN,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
  [16331] = 1,
    ACTIONS(405), 11,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
  [16345] = 7,
    ACTIONS(757), 1,
      anon_sym_AMP,
    ACTIONS(759), 1,
      anon_sym_PIPE,
    ACTIONS(761), 1,
      anon_sym_xor,
    ACTIONS(763), 1,
      anon_sym_xnor,
    ACTIONS(767), 1,
      anon_sym_DASH_GT,
    ACTIONS(769), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(413), 5,
      anon_sym_RPAREN,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
  [16371] = 7,
    ACTIONS(757), 1,
      anon_sym_AMP,
    ACTIONS(759), 1,
      anon_sym_PIPE,
    ACTIONS(761), 1,
      anon_sym_xor,
    ACTIONS(763), 1,
      anon_sym_xnor,
    ACTIONS(767), 1,
      anon_sym_DASH_GT,
    ACTIONS(769), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(405), 5,
      anon_sym_RPAREN,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
  [16397] = 1,
    ACTIONS(413), 11,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
  [16411] = 1,
    ACTIONS(417), 11,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
  [16425] = 1,
    ACTIONS(409), 11,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
  [16439] = 7,
    ACTIONS(757), 1,
      anon_sym_AMP,
    ACTIONS(759), 1,
      anon_sym_PIPE,
    ACTIONS(761), 1,
      anon_sym_xor,
    ACTIONS(763), 1,
      anon_sym_xnor,
    ACTIONS(767), 1,
      anon_sym_DASH_GT,
    ACTIONS(769), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(405), 5,
      anon_sym_RPAREN,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
  [16465] = 8,
    ACTIONS(757), 1,
      anon_sym_AMP,
    ACTIONS(759), 1,
      anon_sym_PIPE,
    ACTIONS(761), 1,
      anon_sym_xor,
    ACTIONS(763), 1,
      anon_sym_xnor,
    ACTIONS(767), 1,
      anon_sym_DASH_GT,
    ACTIONS(769), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    ACTIONS(771), 4,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
  [16493] = 4,
    ACTIONS(757), 1,
      anon_sym_AMP,
    ACTIONS(759), 1,
      anon_sym_PIPE,
    ACTIONS(761), 1,
      anon_sym_xor,
    ACTIONS(405), 8,
      anon_sym_RPAREN,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
  [16513] = 1,
    ACTIONS(405), 11,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
      anon_sym_V,
      anon_sym_S,
      anon_sym_T,
  [16527] = 4,
    ACTIONS(775), 1,
      anon_sym_AMP,
    ACTIONS(777), 1,
      anon_sym_PIPE,
    ACTIONS(779), 1,
      anon_sym_xor,
    ACTIONS(367), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
  [16546] = 2,
    ACTIONS(775), 1,
      anon_sym_AMP,
    ACTIONS(367), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
  [16561] = 3,
    ACTIONS(775), 1,
      anon_sym_AMP,
    ACTIONS(777), 1,
      anon_sym_PIPE,
    ACTIONS(367), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
  [16578] = 5,
    ACTIONS(775), 1,
      anon_sym_AMP,
    ACTIONS(777), 1,
      anon_sym_PIPE,
    ACTIONS(779), 1,
      anon_sym_xor,
    ACTIONS(781), 1,
      anon_sym_xnor,
    ACTIONS(367), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
  [16599] = 6,
    ACTIONS(775), 1,
      anon_sym_AMP,
    ACTIONS(777), 1,
      anon_sym_PIPE,
    ACTIONS(779), 1,
      anon_sym_xor,
    ACTIONS(781), 1,
      anon_sym_xnor,
    ACTIONS(783), 1,
      anon_sym_DASH_GT,
    ACTIONS(367), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
  [16622] = 10,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(747), 1,
      anon_sym_LBRACE,
    ACTIONS(755), 1,
      sym_digits,
    ACTIONS(785), 1,
      anon_sym_unsigned,
    ACTIONS(787), 1,
      anon_sym_boolean,
    ACTIONS(789), 1,
      anon_sym_word,
    ACTIONS(791), 1,
      anon_sym_array,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(406), 1,
      sym_integer_number,
    STATE(407), 1,
      sym_simple_type_specifier,
  [16653] = 7,
    ACTIONS(775), 1,
      anon_sym_AMP,
    ACTIONS(777), 1,
      anon_sym_PIPE,
    ACTIONS(779), 1,
      anon_sym_xor,
    ACTIONS(781), 1,
      anon_sym_xnor,
    ACTIONS(783), 1,
      anon_sym_DASH_GT,
    ACTIONS(793), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(379), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_U,
  [16678] = 2,
    STATE(432), 1,
      sym_word_base,
    ACTIONS(795), 8,
      anon_sym_H,
      anon_sym_O,
      anon_sym_b,
      anon_sym_B,
      anon_sym_o,
      anon_sym_h,
      anon_sym_d,
      anon_sym_D,
  [16692] = 2,
    STATE(448), 1,
      sym_word_base,
    ACTIONS(795), 8,
      anon_sym_H,
      anon_sym_O,
      anon_sym_b,
      anon_sym_B,
      anon_sym_o,
      anon_sym_h,
      anon_sym_d,
      anon_sym_D,
  [16706] = 2,
    STATE(449), 1,
      sym_word_base,
    ACTIONS(795), 8,
      anon_sym_H,
      anon_sym_O,
      anon_sym_b,
      anon_sym_B,
      anon_sym_o,
      anon_sym_h,
      anon_sym_d,
      anon_sym_D,
  [16720] = 3,
    ACTIONS(797), 1,
      anon_sym_AMP,
    ACTIONS(799), 1,
      anon_sym_PIPE,
    ACTIONS(367), 6,
      anon_sym_BU,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
  [16735] = 8,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    ACTIONS(801), 1,
      sym_identifier,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(351), 1,
      sym_enumeration_type_value,
    STATE(377), 1,
      sym_symbolic_constant,
    STATE(381), 1,
      sym_integer_number,
    STATE(427), 1,
      sym_enumeration_type_body,
  [16760] = 7,
    ACTIONS(775), 1,
      anon_sym_AMP,
    ACTIONS(777), 1,
      anon_sym_PIPE,
    ACTIONS(779), 1,
      anon_sym_xor,
    ACTIONS(781), 1,
      anon_sym_xnor,
    ACTIONS(783), 1,
      anon_sym_DASH_GT,
    ACTIONS(793), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(803), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16783] = 7,
    ACTIONS(797), 1,
      anon_sym_AMP,
    ACTIONS(799), 1,
      anon_sym_PIPE,
    ACTIONS(805), 1,
      anon_sym_xor,
    ACTIONS(807), 1,
      anon_sym_xnor,
    ACTIONS(809), 1,
      anon_sym_DASH_GT,
    ACTIONS(811), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(379), 2,
      anon_sym_BU,
      anon_sym_U,
  [16806] = 7,
    ACTIONS(482), 1,
      anon_sym_init,
    ACTIONS(484), 1,
      anon_sym_next,
    STATE(204), 1,
      aux_sym_assign_list_repeat1,
    STATE(265), 1,
      sym_assign_list,
    STATE(371), 1,
      sym_complex_identifier,
    STATE(420), 1,
      sym_assign,
    ACTIONS(177), 2,
      sym_identifier,
      anon_sym_self,
  [16829] = 8,
    ACTIONS(797), 1,
      anon_sym_AMP,
    ACTIONS(799), 1,
      anon_sym_PIPE,
    ACTIONS(803), 1,
      anon_sym_BU,
    ACTIONS(805), 1,
      anon_sym_xor,
    ACTIONS(807), 1,
      anon_sym_xnor,
    ACTIONS(809), 1,
      anon_sym_DASH_GT,
    ACTIONS(811), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(813), 1,
      anon_sym_U,
  [16854] = 6,
    ACTIONS(797), 1,
      anon_sym_AMP,
    ACTIONS(799), 1,
      anon_sym_PIPE,
    ACTIONS(805), 1,
      anon_sym_xor,
    ACTIONS(807), 1,
      anon_sym_xnor,
    ACTIONS(809), 1,
      anon_sym_DASH_GT,
    ACTIONS(367), 3,
      anon_sym_BU,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
  [16875] = 5,
    ACTIONS(797), 1,
      anon_sym_AMP,
    ACTIONS(799), 1,
      anon_sym_PIPE,
    ACTIONS(805), 1,
      anon_sym_xor,
    ACTIONS(807), 1,
      anon_sym_xnor,
    ACTIONS(367), 4,
      anon_sym_BU,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
  [16894] = 2,
    ACTIONS(797), 1,
      anon_sym_AMP,
    ACTIONS(367), 7,
      anon_sym_BU,
      anon_sym_PIPE,
      anon_sym_xor,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
  [16907] = 4,
    ACTIONS(797), 1,
      anon_sym_AMP,
    ACTIONS(799), 1,
      anon_sym_PIPE,
    ACTIONS(805), 1,
      anon_sym_xor,
    ACTIONS(367), 5,
      anon_sym_BU,
      anon_sym_xnor,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_GT,
      anon_sym_U,
  [16924] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_MODULE,
    ACTIONS(815), 1,
      ts_builtin_sym_end,
    STATE(322), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(328), 2,
      sym_module,
      aux_sym_source_file_repeat2,
  [16942] = 7,
    ACTIONS(775), 1,
      anon_sym_AMP,
    ACTIONS(777), 1,
      anon_sym_PIPE,
    ACTIONS(779), 1,
      anon_sym_xor,
    ACTIONS(781), 1,
      anon_sym_xnor,
    ACTIONS(783), 1,
      anon_sym_DASH_GT,
    ACTIONS(793), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
  [16964] = 7,
    ACTIONS(797), 1,
      anon_sym_AMP,
    ACTIONS(799), 1,
      anon_sym_PIPE,
    ACTIONS(803), 1,
      anon_sym_BU,
    ACTIONS(805), 1,
      anon_sym_xor,
    ACTIONS(807), 1,
      anon_sym_xnor,
    ACTIONS(809), 1,
      anon_sym_DASH_GT,
    ACTIONS(811), 1,
      anon_sym_LT_DASH_GT,
  [16986] = 7,
    ACTIONS(775), 1,
      anon_sym_AMP,
    ACTIONS(777), 1,
      anon_sym_PIPE,
    ACTIONS(779), 1,
      anon_sym_xor,
    ACTIONS(781), 1,
      anon_sym_xnor,
    ACTIONS(783), 1,
      anon_sym_DASH_GT,
    ACTIONS(793), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(813), 1,
      anon_sym_U,
  [17008] = 7,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    ACTIONS(801), 1,
      sym_identifier,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(377), 1,
      sym_symbolic_constant,
    STATE(380), 1,
      sym_enumeration_type_value,
    STATE(381), 1,
      sym_integer_number,
  [17030] = 7,
    ACTIONS(775), 1,
      anon_sym_AMP,
    ACTIONS(777), 1,
      anon_sym_PIPE,
    ACTIONS(779), 1,
      anon_sym_xor,
    ACTIONS(781), 1,
      anon_sym_xnor,
    ACTIONS(783), 1,
      anon_sym_DASH_GT,
    ACTIONS(793), 1,
      anon_sym_LT_DASH_GT,
    ACTIONS(819), 1,
      anon_sym_RBRACK,
  [17052] = 5,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(11), 1,
      sym_range,
    STATE(409), 1,
      sym_integer_number,
  [17068] = 5,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(462), 1,
      sym_word_width,
    STATE(464), 1,
      sym_integer_number,
  [17084] = 5,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(442), 1,
      sym_word_width,
    STATE(464), 1,
      sym_integer_number,
  [17100] = 5,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(443), 1,
      sym_word_width,
    STATE(464), 1,
      sym_integer_number,
  [17116] = 5,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(15), 1,
      sym_range,
    STATE(409), 1,
      sym_integer_number,
  [17132] = 3,
    ACTIONS(823), 1,
      aux_sym_comment_token1,
    ACTIONS(821), 2,
      ts_builtin_sym_end,
      anon_sym_MODULE,
    STATE(322), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [17144] = 4,
    ACTIONS(826), 1,
      anon_sym_DASH,
    ACTIONS(828), 1,
      sym_digits,
    STATE(150), 1,
      sym_negative_integer_number,
    STATE(154), 1,
      sym_integer_number,
  [17157] = 4,
    ACTIONS(830), 1,
      anon_sym_DASH,
    ACTIONS(832), 1,
      sym_digits,
    STATE(153), 1,
      sym_negative_integer_number,
    STATE(162), 1,
      sym_integer_number,
  [17170] = 4,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(426), 1,
      sym_integer_number,
  [17183] = 3,
    ACTIONS(834), 1,
      sym_identifier,
    STATE(267), 1,
      sym_simple_var_list,
    STATE(231), 2,
      sym_simple_var_declaration_item,
      aux_sym_simple_var_list_repeat1,
  [17194] = 4,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(428), 1,
      sym_integer_number,
  [17207] = 3,
    ACTIONS(7), 1,
      anon_sym_MODULE,
    ACTIONS(836), 1,
      ts_builtin_sym_end,
    STATE(334), 2,
      sym_module,
      aux_sym_source_file_repeat2,
  [17218] = 4,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(480), 1,
      sym_integer_number,
  [17231] = 3,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym_module_parameters_repeat1,
    ACTIONS(841), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17242] = 3,
    ACTIONS(7), 1,
      anon_sym_MODULE,
    ACTIONS(815), 1,
      ts_builtin_sym_end,
    STATE(334), 2,
      sym_module,
      aux_sym_source_file_repeat2,
  [17253] = 4,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(386), 1,
      sym_integer_number,
  [17266] = 4,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(470), 1,
      sym_integer_number,
  [17279] = 3,
    ACTIONS(843), 1,
      ts_builtin_sym_end,
    ACTIONS(845), 1,
      anon_sym_MODULE,
    STATE(334), 2,
      sym_module,
      aux_sym_source_file_repeat2,
  [17290] = 4,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(466), 1,
      sym_integer_number,
  [17303] = 4,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(422), 1,
      sym_integer_number,
  [17316] = 4,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(399), 1,
      sym_integer_number,
  [17329] = 4,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(374), 1,
      sym_integer_number,
  [17342] = 3,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_basic_expr_list_repeat1,
    ACTIONS(494), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [17353] = 3,
    ACTIONS(851), 1,
      anon_sym_NAME,
    STATE(239), 1,
      sym_compute_expr,
    ACTIONS(853), 2,
      anon_sym_MIN,
      anon_sym_MAX,
  [17364] = 4,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(19), 1,
      sym_integer_number,
  [17377] = 3,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(266), 1,
      sym_var_list,
    STATE(233), 2,
      sym_var_declaration_item,
      aux_sym_var_list_repeat1,
  [17388] = 3,
    ACTIONS(834), 1,
      sym_identifier,
    STATE(260), 1,
      sym_simple_var_list,
    STATE(231), 2,
      sym_simple_var_declaration_item,
      aux_sym_simple_var_list_repeat1,
  [17399] = 4,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(444), 1,
      sym_integer_number,
  [17412] = 4,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(755), 1,
      sym_digits,
    STATE(2), 1,
      sym_negative_integer_number,
    STATE(479), 1,
      sym_integer_number,
  [17425] = 2,
    STATE(452), 1,
      sym_word_sign_specifier,
    ACTIONS(857), 2,
      anon_sym_u,
      anon_sym_s,
  [17433] = 3,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      aux_sym_basic_expr_list_repeat1,
  [17443] = 1,
    ACTIONS(861), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BU,
  [17449] = 3,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    ACTIONS(865), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      aux_sym_parameter_list_repeat1,
  [17459] = 3,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      aux_sym_parameter_list_repeat1,
  [17469] = 3,
    ACTIONS(869), 1,
      anon_sym_COMMA,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_enumeration_type_body_repeat1,
  [17479] = 3,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      aux_sym_basic_expr_list_repeat1,
  [17489] = 2,
    STATE(392), 1,
      sym_word_sign_specifier,
    ACTIONS(857), 2,
      anon_sym_u,
      anon_sym_s,
  [17497] = 3,
    ACTIONS(875), 1,
      anon_sym_COMMA,
    ACTIONS(878), 1,
      anon_sym_RBRACE,
    STATE(354), 1,
      aux_sym_enumeration_type_body_repeat1,
  [17507] = 2,
    STATE(385), 1,
      sym_complex_identifier,
    ACTIONS(177), 2,
      sym_identifier,
      anon_sym_self,
  [17515] = 2,
    STATE(384), 1,
      sym_complex_identifier,
    ACTIONS(177), 2,
      sym_identifier,
      anon_sym_self,
  [17523] = 3,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      anon_sym_SEMI,
    STATE(363), 1,
      aux_sym_module_parameters_repeat1,
  [17533] = 3,
    ACTIONS(884), 1,
      anon_sym_COMMA,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      aux_sym_parameter_list_repeat1,
  [17543] = 3,
    ACTIONS(889), 1,
      sym_identifier,
    STATE(235), 1,
      aux_sym_define_body_repeat1,
    STATE(268), 1,
      sym_define_body,
  [17553] = 3,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      aux_sym_module_parameters_repeat1,
  [17563] = 3,
    ACTIONS(869), 1,
      anon_sym_COMMA,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    STATE(354), 1,
      aux_sym_enumeration_type_body_repeat1,
  [17573] = 3,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(895), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      aux_sym_module_parameters_repeat1,
  [17583] = 3,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(897), 1,
      anon_sym_SEMI,
    STATE(330), 1,
      aux_sym_module_parameters_repeat1,
  [17593] = 1,
    ACTIONS(841), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17599] = 2,
    STATE(453), 1,
      sym_word_sign_specifier,
    ACTIONS(857), 2,
      anon_sym_u,
      anon_sym_s,
  [17607] = 2,
    STATE(238), 1,
      sym_compute_expr,
    ACTIONS(853), 2,
      anon_sym_MIN,
      anon_sym_MAX,
  [17615] = 1,
    ACTIONS(899), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BU,
  [17621] = 2,
    ACTIONS(901), 1,
      sym_hex_digit,
    STATE(8), 1,
      sym_word_value,
  [17628] = 2,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    ACTIONS(905), 1,
      anon_sym_SEMI,
  [17635] = 1,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_MODULE,
  [17640] = 2,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(907), 1,
      anon_sym_COLON_EQ,
  [17647] = 2,
    ACTIONS(909), 1,
      sym_identifier,
    STATE(410), 1,
      sym_constants_body,
  [17654] = 1,
    ACTIONS(911), 2,
      ts_builtin_sym_end,
      anon_sym_MODULE,
  [17659] = 2,
    ACTIONS(913), 1,
      anon_sym_RBRACK,
    ACTIONS(915), 1,
      anon_sym_COLON,
  [17666] = 1,
    ACTIONS(917), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [17671] = 1,
    ACTIONS(887), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17676] = 1,
    ACTIONS(919), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [17681] = 2,
    ACTIONS(921), 1,
      sym_identifier,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
  [17688] = 2,
    ACTIONS(925), 1,
      sym_hex_digit,
    STATE(140), 1,
      sym_word_value,
  [17695] = 1,
    ACTIONS(878), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [17700] = 1,
    ACTIONS(919), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [17705] = 2,
    ACTIONS(927), 1,
      anon_sym_LPAREN,
    ACTIONS(929), 1,
      anon_sym_SEMI,
  [17712] = 2,
    ACTIONS(931), 1,
      sym_hex_digit,
    STATE(206), 1,
      sym_word_value,
  [17719] = 2,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
  [17726] = 2,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
  [17733] = 2,
    ACTIONS(937), 1,
      anon_sym_RBRACK,
    ACTIONS(939), 1,
      anon_sym_COLON,
  [17740] = 1,
    ACTIONS(941), 1,
      anon_sym_LBRACK,
  [17744] = 1,
    ACTIONS(943), 1,
      anon_sym_LBRACK,
  [17748] = 1,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
  [17752] = 1,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
  [17756] = 1,
    ACTIONS(947), 1,
      anon_sym_SEMI,
  [17760] = 1,
    ACTIONS(949), 1,
      anon_sym_RBRACK,
  [17764] = 1,
    ACTIONS(951), 1,
      sym_identifier,
  [17768] = 1,
    ACTIONS(953), 1,
      anon_sym_word,
  [17772] = 1,
    ACTIONS(955), 1,
      anon_sym_RBRACK,
  [17776] = 1,
    ACTIONS(957), 1,
      anon_sym_COLON_EQ,
  [17780] = 1,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
  [17784] = 1,
    ACTIONS(959), 1,
      anon_sym_SEMI,
  [17788] = 1,
    ACTIONS(961), 1,
      anon_sym_COMMA,
  [17792] = 1,
    ACTIONS(963), 1,
      sym_digits,
  [17796] = 1,
    ACTIONS(965), 1,
      anon_sym_LBRACK,
  [17800] = 1,
    ACTIONS(967), 1,
      anon_sym_SEMI,
  [17804] = 1,
    ACTIONS(969), 1,
      anon_sym_COMMA,
  [17808] = 1,
    ACTIONS(971), 1,
      anon_sym_LBRACK,
  [17812] = 1,
    ACTIONS(973), 1,
      anon_sym_SEMI,
  [17816] = 1,
    ACTIONS(975), 1,
      anon_sym_DOT_DOT,
  [17820] = 1,
    ACTIONS(977), 1,
      anon_sym_SEMI,
  [17824] = 1,
    ACTIONS(979), 1,
      anon_sym_SEMI,
  [17828] = 1,
    ACTIONS(981), 1,
      anon_sym_DOT_DOT,
  [17832] = 1,
    ACTIONS(983), 1,
      anon_sym_SEMI,
  [17836] = 1,
    ACTIONS(985), 1,
      anon_sym_RBRACE,
  [17840] = 1,
    ACTIONS(987), 1,
      anon_sym_esac,
  [17844] = 1,
    ACTIONS(989), 1,
      sym_identifier,
  [17848] = 1,
    ACTIONS(991), 1,
      sym_identifier,
  [17852] = 1,
    ACTIONS(993), 1,
      anon_sym_LBRACK,
  [17856] = 1,
    ACTIONS(995), 1,
      sym_digits,
  [17860] = 1,
    ACTIONS(997), 1,
      sym_identifier,
  [17864] = 1,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
  [17868] = 1,
    ACTIONS(999), 1,
      anon_sym_LPAREN,
  [17872] = 1,
    ACTIONS(1001), 1,
      anon_sym_SEMI,
  [17876] = 1,
    ACTIONS(1003), 1,
      anon_sym_LPAREN,
  [17880] = 1,
    ACTIONS(506), 1,
      anon_sym_RBRACK,
  [17884] = 1,
    ACTIONS(1005), 1,
      anon_sym_LPAREN,
  [17888] = 1,
    ACTIONS(1007), 1,
      sym_digits,
  [17892] = 1,
    ACTIONS(1009), 1,
      anon_sym_LPAREN,
  [17896] = 1,
    ACTIONS(1011), 1,
      anon_sym_DOT_DOT,
  [17900] = 1,
    ACTIONS(1013), 1,
      anon_sym_RBRACE,
  [17904] = 1,
    ACTIONS(518), 1,
      anon_sym_RBRACK,
  [17908] = 1,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
  [17912] = 1,
    ACTIONS(1017), 1,
      anon_sym_LPAREN,
  [17916] = 1,
    ACTIONS(1019), 1,
      sym_identifier,
  [17920] = 1,
    ACTIONS(1021), 1,
      anon_sym_LBRACK,
  [17924] = 1,
    ACTIONS(1023), 1,
      anon_sym_SEMI,
  [17928] = 1,
    ACTIONS(1025), 1,
      anon_sym_LBRACK,
  [17932] = 1,
    ACTIONS(1027), 1,
      anon_sym_COLON_EQ,
  [17936] = 1,
    ACTIONS(1029), 1,
      anon_sym_COLON,
  [17940] = 1,
    ACTIONS(1031), 1,
      anon_sym__,
  [17944] = 1,
    ACTIONS(1033), 1,
      anon_sym__,
  [17948] = 1,
    ACTIONS(1035), 1,
      anon_sym_LPAREN,
  [17952] = 1,
    ACTIONS(1037), 1,
      anon_sym_LPAREN,
  [17956] = 1,
    ACTIONS(1039), 1,
      anon_sym_COLON_EQ,
  [17960] = 1,
    ACTIONS(1041), 1,
      anon_sym_RBRACK,
  [17964] = 1,
    ACTIONS(1043), 1,
      anon_sym_RBRACK,
  [17968] = 1,
    ACTIONS(1045), 1,
      anon_sym_RBRACK,
  [17972] = 1,
    ACTIONS(1047), 1,
      anon_sym_RBRACK,
  [17976] = 1,
    ACTIONS(1049), 1,
      sym_identifier,
  [17980] = 1,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
  [17984] = 1,
    ACTIONS(1053), 1,
      anon_sym_LBRACK,
  [17988] = 1,
    ACTIONS(1055), 1,
      anon_sym_LBRACK,
  [17992] = 1,
    ACTIONS(1057), 1,
      anon_sym_SEMI,
  [17996] = 1,
    ACTIONS(1059), 1,
      anon_sym__,
  [18000] = 1,
    ACTIONS(1061), 1,
      anon_sym_RBRACK,
  [18004] = 1,
    ACTIONS(1063), 1,
      anon_sym_RBRACK,
  [18008] = 1,
    ACTIONS(1065), 1,
      anon_sym_BU,
  [18012] = 1,
    ACTIONS(1067), 1,
      anon_sym_SEMI,
  [18016] = 1,
    ACTIONS(1069), 1,
      anon_sym_LBRACK,
  [18020] = 1,
    ACTIONS(1071), 1,
      anon_sym_LBRACK,
  [18024] = 1,
    ACTIONS(1073), 1,
      sym_identifier,
  [18028] = 1,
    ACTIONS(1075), 1,
      anon_sym_COLON_EQ,
  [18032] = 1,
    ACTIONS(1077), 1,
      anon_sym_COLON_EQ,
  [18036] = 1,
    ACTIONS(1079), 1,
      anon_sym_SEMI,
  [18040] = 1,
    ACTIONS(1081), 1,
      anon_sym_RBRACK,
  [18044] = 1,
    ACTIONS(1083), 1,
      sym_identifier,
  [18048] = 1,
    ACTIONS(1085), 1,
      anon_sym_RBRACK,
  [18052] = 1,
    ACTIONS(1087), 1,
      anon_sym_RBRACK,
  [18056] = 1,
    ACTIONS(1089), 1,
      anon_sym_of,
  [18060] = 1,
    ACTIONS(1091), 1,
      anon_sym_SEMI,
  [18064] = 1,
    ACTIONS(1093), 1,
      ts_builtin_sym_end,
  [18068] = 1,
    ACTIONS(1095), 1,
      sym_identifier,
  [18072] = 1,
    ACTIONS(1097), 1,
      anon_sym_RBRACK,
  [18076] = 1,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
  [18080] = 1,
    ACTIONS(1101), 1,
      anon_sym_SEMI,
  [18084] = 1,
    ACTIONS(1103), 1,
      anon_sym_SEMI,
  [18088] = 1,
    ACTIONS(1105), 1,
      anon_sym_COLON_EQ,
  [18092] = 1,
    ACTIONS(1107), 1,
      anon_sym_COLON_EQ,
  [18096] = 1,
    ACTIONS(1109), 1,
      sym_identifier,
  [18100] = 1,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
  [18104] = 1,
    ACTIONS(1113), 1,
      anon_sym_COLON,
  [18108] = 1,
    ACTIONS(1115), 1,
      anon_sym_RBRACK,
  [18112] = 1,
    ACTIONS(1117), 1,
      anon_sym_SEMI,
  [18116] = 1,
    ACTIONS(1119), 1,
      anon_sym_LBRACK,
  [18120] = 1,
    ACTIONS(1121), 1,
      anon_sym_esac,
  [18124] = 1,
    ACTIONS(1123), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 238,
  [SMALL_STATE(7)] = 295,
  [SMALL_STATE(8)] = 352,
  [SMALL_STATE(9)] = 413,
  [SMALL_STATE(10)] = 469,
  [SMALL_STATE(11)] = 571,
  [SMALL_STATE(12)] = 673,
  [SMALL_STATE(13)] = 775,
  [SMALL_STATE(14)] = 877,
  [SMALL_STATE(15)] = 979,
  [SMALL_STATE(16)] = 1081,
  [SMALL_STATE(17)] = 1139,
  [SMALL_STATE(18)] = 1197,
  [SMALL_STATE(19)] = 1253,
  [SMALL_STATE(20)] = 1308,
  [SMALL_STATE(21)] = 1365,
  [SMALL_STATE(22)] = 1420,
  [SMALL_STATE(23)] = 1475,
  [SMALL_STATE(24)] = 1530,
  [SMALL_STATE(25)] = 1585,
  [SMALL_STATE(26)] = 1640,
  [SMALL_STATE(27)] = 1697,
  [SMALL_STATE(28)] = 1752,
  [SMALL_STATE(29)] = 1807,
  [SMALL_STATE(30)] = 1862,
  [SMALL_STATE(31)] = 1917,
  [SMALL_STATE(32)] = 1980,
  [SMALL_STATE(33)] = 2035,
  [SMALL_STATE(34)] = 2090,
  [SMALL_STATE(35)] = 2145,
  [SMALL_STATE(36)] = 2246,
  [SMALL_STATE(37)] = 2347,
  [SMALL_STATE(38)] = 2443,
  [SMALL_STATE(39)] = 2541,
  [SMALL_STATE(40)] = 2636,
  [SMALL_STATE(41)] = 2729,
  [SMALL_STATE(42)] = 2822,
  [SMALL_STATE(43)] = 2917,
  [SMALL_STATE(44)] = 3010,
  [SMALL_STATE(45)] = 3105,
  [SMALL_STATE(46)] = 3200,
  [SMALL_STATE(47)] = 3295,
  [SMALL_STATE(48)] = 3390,
  [SMALL_STATE(49)] = 3485,
  [SMALL_STATE(50)] = 3580,
  [SMALL_STATE(51)] = 3675,
  [SMALL_STATE(52)] = 3770,
  [SMALL_STATE(53)] = 3863,
  [SMALL_STATE(54)] = 3958,
  [SMALL_STATE(55)] = 4053,
  [SMALL_STATE(56)] = 4148,
  [SMALL_STATE(57)] = 4241,
  [SMALL_STATE(58)] = 4334,
  [SMALL_STATE(59)] = 4429,
  [SMALL_STATE(60)] = 4524,
  [SMALL_STATE(61)] = 4619,
  [SMALL_STATE(62)] = 4714,
  [SMALL_STATE(63)] = 4807,
  [SMALL_STATE(64)] = 4900,
  [SMALL_STATE(65)] = 4995,
  [SMALL_STATE(66)] = 5090,
  [SMALL_STATE(67)] = 5183,
  [SMALL_STATE(68)] = 5278,
  [SMALL_STATE(69)] = 5373,
  [SMALL_STATE(70)] = 5466,
  [SMALL_STATE(71)] = 5559,
  [SMALL_STATE(72)] = 5652,
  [SMALL_STATE(73)] = 5745,
  [SMALL_STATE(74)] = 5838,
  [SMALL_STATE(75)] = 5931,
  [SMALL_STATE(76)] = 6024,
  [SMALL_STATE(77)] = 6117,
  [SMALL_STATE(78)] = 6210,
  [SMALL_STATE(79)] = 6303,
  [SMALL_STATE(80)] = 6396,
  [SMALL_STATE(81)] = 6489,
  [SMALL_STATE(82)] = 6582,
  [SMALL_STATE(83)] = 6675,
  [SMALL_STATE(84)] = 6768,
  [SMALL_STATE(85)] = 6861,
  [SMALL_STATE(86)] = 6954,
  [SMALL_STATE(87)] = 7047,
  [SMALL_STATE(88)] = 7140,
  [SMALL_STATE(89)] = 7233,
  [SMALL_STATE(90)] = 7328,
  [SMALL_STATE(91)] = 7423,
  [SMALL_STATE(92)] = 7512,
  [SMALL_STATE(93)] = 7595,
  [SMALL_STATE(94)] = 7675,
  [SMALL_STATE(95)] = 7755,
  [SMALL_STATE(96)] = 7839,
  [SMALL_STATE(97)] = 7923,
  [SMALL_STATE(98)] = 8007,
  [SMALL_STATE(99)] = 8088,
  [SMALL_STATE(100)] = 8169,
  [SMALL_STATE(101)] = 8250,
  [SMALL_STATE(102)] = 8331,
  [SMALL_STATE(103)] = 8412,
  [SMALL_STATE(104)] = 8493,
  [SMALL_STATE(105)] = 8574,
  [SMALL_STATE(106)] = 8652,
  [SMALL_STATE(107)] = 8730,
  [SMALL_STATE(108)] = 8808,
  [SMALL_STATE(109)] = 8886,
  [SMALL_STATE(110)] = 8964,
  [SMALL_STATE(111)] = 9042,
  [SMALL_STATE(112)] = 9120,
  [SMALL_STATE(113)] = 9198,
  [SMALL_STATE(114)] = 9276,
  [SMALL_STATE(115)] = 9354,
  [SMALL_STATE(116)] = 9432,
  [SMALL_STATE(117)] = 9510,
  [SMALL_STATE(118)] = 9588,
  [SMALL_STATE(119)] = 9663,
  [SMALL_STATE(120)] = 9704,
  [SMALL_STATE(121)] = 9779,
  [SMALL_STATE(122)] = 9820,
  [SMALL_STATE(123)] = 9895,
  [SMALL_STATE(124)] = 9970,
  [SMALL_STATE(125)] = 10045,
  [SMALL_STATE(126)] = 10120,
  [SMALL_STATE(127)] = 10161,
  [SMALL_STATE(128)] = 10236,
  [SMALL_STATE(129)] = 10311,
  [SMALL_STATE(130)] = 10354,
  [SMALL_STATE(131)] = 10429,
  [SMALL_STATE(132)] = 10504,
  [SMALL_STATE(133)] = 10579,
  [SMALL_STATE(134)] = 10654,
  [SMALL_STATE(135)] = 10729,
  [SMALL_STATE(136)] = 10804,
  [SMALL_STATE(137)] = 10879,
  [SMALL_STATE(138)] = 10954,
  [SMALL_STATE(139)] = 11029,
  [SMALL_STATE(140)] = 11070,
  [SMALL_STATE(141)] = 11113,
  [SMALL_STATE(142)] = 11188,
  [SMALL_STATE(143)] = 11229,
  [SMALL_STATE(144)] = 11304,
  [SMALL_STATE(145)] = 11379,
  [SMALL_STATE(146)] = 11422,
  [SMALL_STATE(147)] = 11497,
  [SMALL_STATE(148)] = 11538,
  [SMALL_STATE(149)] = 11613,
  [SMALL_STATE(150)] = 11688,
  [SMALL_STATE(151)] = 11729,
  [SMALL_STATE(152)] = 11804,
  [SMALL_STATE(153)] = 11879,
  [SMALL_STATE(154)] = 11919,
  [SMALL_STATE(155)] = 11959,
  [SMALL_STATE(156)] = 11999,
  [SMALL_STATE(157)] = 12039,
  [SMALL_STATE(158)] = 12079,
  [SMALL_STATE(159)] = 12119,
  [SMALL_STATE(160)] = 12159,
  [SMALL_STATE(161)] = 12199,
  [SMALL_STATE(162)] = 12239,
  [SMALL_STATE(163)] = 12279,
  [SMALL_STATE(164)] = 12319,
  [SMALL_STATE(165)] = 12359,
  [SMALL_STATE(166)] = 12399,
  [SMALL_STATE(167)] = 12439,
  [SMALL_STATE(168)] = 12479,
  [SMALL_STATE(169)] = 12519,
  [SMALL_STATE(170)] = 12560,
  [SMALL_STATE(171)] = 12601,
  [SMALL_STATE(172)] = 12639,
  [SMALL_STATE(173)] = 12677,
  [SMALL_STATE(174)] = 12715,
  [SMALL_STATE(175)] = 12753,
  [SMALL_STATE(176)] = 12791,
  [SMALL_STATE(177)] = 12846,
  [SMALL_STATE(178)] = 12893,
  [SMALL_STATE(179)] = 12930,
  [SMALL_STATE(180)] = 12967,
  [SMALL_STATE(181)] = 13016,
  [SMALL_STATE(182)] = 13065,
  [SMALL_STATE(183)] = 13102,
  [SMALL_STATE(184)] = 13151,
  [SMALL_STATE(185)] = 13196,
  [SMALL_STATE(186)] = 13239,
  [SMALL_STATE(187)] = 13280,
  [SMALL_STATE(188)] = 13335,
  [SMALL_STATE(189)] = 13374,
  [SMALL_STATE(190)] = 13411,
  [SMALL_STATE(191)] = 13448,
  [SMALL_STATE(192)] = 13485,
  [SMALL_STATE(193)] = 13528,
  [SMALL_STATE(194)] = 13563,
  [SMALL_STATE(195)] = 13605,
  [SMALL_STATE(196)] = 13647,
  [SMALL_STATE(197)] = 13692,
  [SMALL_STATE(198)] = 13725,
  [SMALL_STATE(199)] = 13772,
  [SMALL_STATE(200)] = 13811,
  [SMALL_STATE(201)] = 13848,
  [SMALL_STATE(202)] = 13889,
  [SMALL_STATE(203)] = 13936,
  [SMALL_STATE(204)] = 13969,
  [SMALL_STATE(205)] = 14014,
  [SMALL_STATE(206)] = 14059,
  [SMALL_STATE(207)] = 14096,
  [SMALL_STATE(208)] = 14131,
  [SMALL_STATE(209)] = 14174,
  [SMALL_STATE(210)] = 14216,
  [SMALL_STATE(211)] = 14254,
  [SMALL_STATE(212)] = 14296,
  [SMALL_STATE(213)] = 14329,
  [SMALL_STATE(214)] = 14362,
  [SMALL_STATE(215)] = 14399,
  [SMALL_STATE(216)] = 14435,
  [SMALL_STATE(217)] = 14465,
  [SMALL_STATE(218)] = 14501,
  [SMALL_STATE(219)] = 14537,
  [SMALL_STATE(220)] = 14573,
  [SMALL_STATE(221)] = 14609,
  [SMALL_STATE(222)] = 14645,
  [SMALL_STATE(223)] = 14681,
  [SMALL_STATE(224)] = 14717,
  [SMALL_STATE(225)] = 14753,
  [SMALL_STATE(226)] = 14789,
  [SMALL_STATE(227)] = 14825,
  [SMALL_STATE(228)] = 14861,
  [SMALL_STATE(229)] = 14897,
  [SMALL_STATE(230)] = 14930,
  [SMALL_STATE(231)] = 14963,
  [SMALL_STATE(232)] = 14996,
  [SMALL_STATE(233)] = 15025,
  [SMALL_STATE(234)] = 15058,
  [SMALL_STATE(235)] = 15090,
  [SMALL_STATE(236)] = 15122,
  [SMALL_STATE(237)] = 15151,
  [SMALL_STATE(238)] = 15180,
  [SMALL_STATE(239)] = 15209,
  [SMALL_STATE(240)] = 15238,
  [SMALL_STATE(241)] = 15265,
  [SMALL_STATE(242)] = 15294,
  [SMALL_STATE(243)] = 15323,
  [SMALL_STATE(244)] = 15350,
  [SMALL_STATE(245)] = 15377,
  [SMALL_STATE(246)] = 15404,
  [SMALL_STATE(247)] = 15433,
  [SMALL_STATE(248)] = 15462,
  [SMALL_STATE(249)] = 15491,
  [SMALL_STATE(250)] = 15517,
  [SMALL_STATE(251)] = 15543,
  [SMALL_STATE(252)] = 15569,
  [SMALL_STATE(253)] = 15595,
  [SMALL_STATE(254)] = 15621,
  [SMALL_STATE(255)] = 15647,
  [SMALL_STATE(256)] = 15673,
  [SMALL_STATE(257)] = 15699,
  [SMALL_STATE(258)] = 15725,
  [SMALL_STATE(259)] = 15751,
  [SMALL_STATE(260)] = 15777,
  [SMALL_STATE(261)] = 15803,
  [SMALL_STATE(262)] = 15829,
  [SMALL_STATE(263)] = 15855,
  [SMALL_STATE(264)] = 15881,
  [SMALL_STATE(265)] = 15907,
  [SMALL_STATE(266)] = 15933,
  [SMALL_STATE(267)] = 15959,
  [SMALL_STATE(268)] = 15985,
  [SMALL_STATE(269)] = 16011,
  [SMALL_STATE(270)] = 16037,
  [SMALL_STATE(271)] = 16063,
  [SMALL_STATE(272)] = 16089,
  [SMALL_STATE(273)] = 16115,
  [SMALL_STATE(274)] = 16141,
  [SMALL_STATE(275)] = 16182,
  [SMALL_STATE(276)] = 16223,
  [SMALL_STATE(277)] = 16245,
  [SMALL_STATE(278)] = 16263,
  [SMALL_STATE(279)] = 16291,
  [SMALL_STATE(280)] = 16307,
  [SMALL_STATE(281)] = 16331,
  [SMALL_STATE(282)] = 16345,
  [SMALL_STATE(283)] = 16371,
  [SMALL_STATE(284)] = 16397,
  [SMALL_STATE(285)] = 16411,
  [SMALL_STATE(286)] = 16425,
  [SMALL_STATE(287)] = 16439,
  [SMALL_STATE(288)] = 16465,
  [SMALL_STATE(289)] = 16493,
  [SMALL_STATE(290)] = 16513,
  [SMALL_STATE(291)] = 16527,
  [SMALL_STATE(292)] = 16546,
  [SMALL_STATE(293)] = 16561,
  [SMALL_STATE(294)] = 16578,
  [SMALL_STATE(295)] = 16599,
  [SMALL_STATE(296)] = 16622,
  [SMALL_STATE(297)] = 16653,
  [SMALL_STATE(298)] = 16678,
  [SMALL_STATE(299)] = 16692,
  [SMALL_STATE(300)] = 16706,
  [SMALL_STATE(301)] = 16720,
  [SMALL_STATE(302)] = 16735,
  [SMALL_STATE(303)] = 16760,
  [SMALL_STATE(304)] = 16783,
  [SMALL_STATE(305)] = 16806,
  [SMALL_STATE(306)] = 16829,
  [SMALL_STATE(307)] = 16854,
  [SMALL_STATE(308)] = 16875,
  [SMALL_STATE(309)] = 16894,
  [SMALL_STATE(310)] = 16907,
  [SMALL_STATE(311)] = 16924,
  [SMALL_STATE(312)] = 16942,
  [SMALL_STATE(313)] = 16964,
  [SMALL_STATE(314)] = 16986,
  [SMALL_STATE(315)] = 17008,
  [SMALL_STATE(316)] = 17030,
  [SMALL_STATE(317)] = 17052,
  [SMALL_STATE(318)] = 17068,
  [SMALL_STATE(319)] = 17084,
  [SMALL_STATE(320)] = 17100,
  [SMALL_STATE(321)] = 17116,
  [SMALL_STATE(322)] = 17132,
  [SMALL_STATE(323)] = 17144,
  [SMALL_STATE(324)] = 17157,
  [SMALL_STATE(325)] = 17170,
  [SMALL_STATE(326)] = 17183,
  [SMALL_STATE(327)] = 17194,
  [SMALL_STATE(328)] = 17207,
  [SMALL_STATE(329)] = 17218,
  [SMALL_STATE(330)] = 17231,
  [SMALL_STATE(331)] = 17242,
  [SMALL_STATE(332)] = 17253,
  [SMALL_STATE(333)] = 17266,
  [SMALL_STATE(334)] = 17279,
  [SMALL_STATE(335)] = 17290,
  [SMALL_STATE(336)] = 17303,
  [SMALL_STATE(337)] = 17316,
  [SMALL_STATE(338)] = 17329,
  [SMALL_STATE(339)] = 17342,
  [SMALL_STATE(340)] = 17353,
  [SMALL_STATE(341)] = 17364,
  [SMALL_STATE(342)] = 17377,
  [SMALL_STATE(343)] = 17388,
  [SMALL_STATE(344)] = 17399,
  [SMALL_STATE(345)] = 17412,
  [SMALL_STATE(346)] = 17425,
  [SMALL_STATE(347)] = 17433,
  [SMALL_STATE(348)] = 17443,
  [SMALL_STATE(349)] = 17449,
  [SMALL_STATE(350)] = 17459,
  [SMALL_STATE(351)] = 17469,
  [SMALL_STATE(352)] = 17479,
  [SMALL_STATE(353)] = 17489,
  [SMALL_STATE(354)] = 17497,
  [SMALL_STATE(355)] = 17507,
  [SMALL_STATE(356)] = 17515,
  [SMALL_STATE(357)] = 17523,
  [SMALL_STATE(358)] = 17533,
  [SMALL_STATE(359)] = 17543,
  [SMALL_STATE(360)] = 17553,
  [SMALL_STATE(361)] = 17563,
  [SMALL_STATE(362)] = 17573,
  [SMALL_STATE(363)] = 17583,
  [SMALL_STATE(364)] = 17593,
  [SMALL_STATE(365)] = 17599,
  [SMALL_STATE(366)] = 17607,
  [SMALL_STATE(367)] = 17615,
  [SMALL_STATE(368)] = 17621,
  [SMALL_STATE(369)] = 17628,
  [SMALL_STATE(370)] = 17635,
  [SMALL_STATE(371)] = 17640,
  [SMALL_STATE(372)] = 17647,
  [SMALL_STATE(373)] = 17654,
  [SMALL_STATE(374)] = 17659,
  [SMALL_STATE(375)] = 17666,
  [SMALL_STATE(376)] = 17671,
  [SMALL_STATE(377)] = 17676,
  [SMALL_STATE(378)] = 17681,
  [SMALL_STATE(379)] = 17688,
  [SMALL_STATE(380)] = 17695,
  [SMALL_STATE(381)] = 17700,
  [SMALL_STATE(382)] = 17705,
  [SMALL_STATE(383)] = 17712,
  [SMALL_STATE(384)] = 17719,
  [SMALL_STATE(385)] = 17726,
  [SMALL_STATE(386)] = 17733,
  [SMALL_STATE(387)] = 17740,
  [SMALL_STATE(388)] = 17744,
  [SMALL_STATE(389)] = 17748,
  [SMALL_STATE(390)] = 17752,
  [SMALL_STATE(391)] = 17756,
  [SMALL_STATE(392)] = 17760,
  [SMALL_STATE(393)] = 17764,
  [SMALL_STATE(394)] = 17768,
  [SMALL_STATE(395)] = 17772,
  [SMALL_STATE(396)] = 17776,
  [SMALL_STATE(397)] = 17780,
  [SMALL_STATE(398)] = 17784,
  [SMALL_STATE(399)] = 17788,
  [SMALL_STATE(400)] = 17792,
  [SMALL_STATE(401)] = 17796,
  [SMALL_STATE(402)] = 17800,
  [SMALL_STATE(403)] = 17804,
  [SMALL_STATE(404)] = 17808,
  [SMALL_STATE(405)] = 17812,
  [SMALL_STATE(406)] = 17816,
  [SMALL_STATE(407)] = 17820,
  [SMALL_STATE(408)] = 17824,
  [SMALL_STATE(409)] = 17828,
  [SMALL_STATE(410)] = 17832,
  [SMALL_STATE(411)] = 17836,
  [SMALL_STATE(412)] = 17840,
  [SMALL_STATE(413)] = 17844,
  [SMALL_STATE(414)] = 17848,
  [SMALL_STATE(415)] = 17852,
  [SMALL_STATE(416)] = 17856,
  [SMALL_STATE(417)] = 17860,
  [SMALL_STATE(418)] = 17864,
  [SMALL_STATE(419)] = 17868,
  [SMALL_STATE(420)] = 17872,
  [SMALL_STATE(421)] = 17876,
  [SMALL_STATE(422)] = 17880,
  [SMALL_STATE(423)] = 17884,
  [SMALL_STATE(424)] = 17888,
  [SMALL_STATE(425)] = 17892,
  [SMALL_STATE(426)] = 17896,
  [SMALL_STATE(427)] = 17900,
  [SMALL_STATE(428)] = 17904,
  [SMALL_STATE(429)] = 17908,
  [SMALL_STATE(430)] = 17912,
  [SMALL_STATE(431)] = 17916,
  [SMALL_STATE(432)] = 17920,
  [SMALL_STATE(433)] = 17924,
  [SMALL_STATE(434)] = 17928,
  [SMALL_STATE(435)] = 17932,
  [SMALL_STATE(436)] = 17936,
  [SMALL_STATE(437)] = 17940,
  [SMALL_STATE(438)] = 17944,
  [SMALL_STATE(439)] = 17948,
  [SMALL_STATE(440)] = 17952,
  [SMALL_STATE(441)] = 17956,
  [SMALL_STATE(442)] = 17960,
  [SMALL_STATE(443)] = 17964,
  [SMALL_STATE(444)] = 17968,
  [SMALL_STATE(445)] = 17972,
  [SMALL_STATE(446)] = 17976,
  [SMALL_STATE(447)] = 17980,
  [SMALL_STATE(448)] = 17984,
  [SMALL_STATE(449)] = 17988,
  [SMALL_STATE(450)] = 17992,
  [SMALL_STATE(451)] = 17996,
  [SMALL_STATE(452)] = 18000,
  [SMALL_STATE(453)] = 18004,
  [SMALL_STATE(454)] = 18008,
  [SMALL_STATE(455)] = 18012,
  [SMALL_STATE(456)] = 18016,
  [SMALL_STATE(457)] = 18020,
  [SMALL_STATE(458)] = 18024,
  [SMALL_STATE(459)] = 18028,
  [SMALL_STATE(460)] = 18032,
  [SMALL_STATE(461)] = 18036,
  [SMALL_STATE(462)] = 18040,
  [SMALL_STATE(463)] = 18044,
  [SMALL_STATE(464)] = 18048,
  [SMALL_STATE(465)] = 18052,
  [SMALL_STATE(466)] = 18056,
  [SMALL_STATE(467)] = 18060,
  [SMALL_STATE(468)] = 18064,
  [SMALL_STATE(469)] = 18068,
  [SMALL_STATE(470)] = 18072,
  [SMALL_STATE(471)] = 18076,
  [SMALL_STATE(472)] = 18080,
  [SMALL_STATE(473)] = 18084,
  [SMALL_STATE(474)] = 18088,
  [SMALL_STATE(475)] = 18092,
  [SMALL_STATE(476)] = 18096,
  [SMALL_STATE(477)] = 18100,
  [SMALL_STATE(478)] = 18104,
  [SMALL_STATE(479)] = 18108,
  [SMALL_STATE(480)] = 18112,
  [SMALL_STATE(481)] = 18116,
  [SMALL_STATE(482)] = 18120,
  [SMALL_STATE(483)] = 18124,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_number, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_number, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_integer_number, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_integer_number, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_identifier, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_identifier, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_identifier, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_value, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_value, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_value, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_value, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_constant, 10),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_constant, 10),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_identifier, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_identifier, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_constant, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_constant, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_constant, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_constant, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_expr, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_expr, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_expr, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_expr, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expr, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expr, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_expr, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_expr, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_expr, 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_expr, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_expr, 6),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_expr, 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expr, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expr, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_expr, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_expr, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_constant, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_constant, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(251),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(458),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(340),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(38),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(95),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(37),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(105),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(430),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(108),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(107),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(100),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(305),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(342),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(343),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(326),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(359),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(372),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_body_repeat1, 2), SHIFT_REPEAT(119),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_body_repeat1, 2), SHIFT_REPEAT(151),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_body_repeat1, 2), SHIFT_REPEAT(143),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_body_repeat1, 2), SHIFT_REPEAT(439),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_body_repeat1, 2), SHIFT_REPEAT(447),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_body_repeat1, 2), SHIFT_REPEAT(144),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_body_repeat1, 2), SHIFT_REPEAT(112),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_body_repeat1, 2), SHIFT_REPEAT(440),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_body_repeat1, 2), SHIFT_REPEAT(101),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_body_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_body_repeat1, 2), SHIFT_REPEAT(157),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_body_repeat1, 2), SHIFT_REPEAT(150),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_body_repeat1, 2), SHIFT_REPEAT(456),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_body_repeat1, 2), SHIFT_REPEAT(147),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_body, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctl_expr, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctl_expr, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctl_expr, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctl_expr, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctl_expr, 6),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctl_expr, 6),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctl_expr, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctl_expr, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ltl_specification, 5),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ltl_specification, 5),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ltl_expr, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ltl_expr, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_expr, 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_expr, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ltl_expr, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ltl_expr, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ltl_expr, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ltl_expr, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ltl_specification, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ltl_specification, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bound, 5),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bound, 5),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assign_list_repeat1, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assign_list_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assign_list_repeat1, 2), SHIFT_REPEAT(5),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assign_list_repeat1, 2), SHIFT_REPEAT(425),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assign_list_repeat1, 2), SHIFT_REPEAT(423),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctl_specification, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctl_specification, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctl_specification, 5),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctl_specification, 5),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_list, 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_list, 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_expr_list, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_expr_list_repeat1, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_body_expr, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_list_repeat1, 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_list_repeat1, 2),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_list_repeat1, 2), SHIFT_REPEAT(478),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_simple_var_list_repeat1, 2),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_simple_var_list_repeat1, 2),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_simple_var_list_repeat1, 2), SHIFT_REPEAT(436),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_var_list, 1),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_var_list, 1),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_body_repeat1, 4),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_body_repeat1, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_list, 1),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_list, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_define_body_repeat1, 2),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_body_repeat1, 2),
  [560] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_body_repeat1, 2), SHIFT_REPEAT(396),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_body, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_body, 1),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_constraint, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_constraint, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invar_specification, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invar_specification, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compute_specification, 5),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compute_specification, 5),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compute_specification, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compute_specification, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compute_expr, 6),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compute_expr, 6),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fairness_constraint, 6),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fairness_constraint, 6),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fairness_constraint, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fairness_constraint, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_define_body_repeat1, 4),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_body_repeat1, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_var_declaration_item, 4),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_var_declaration_item, 4),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration_item, 4),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration_item, 4),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invar_constraint, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invar_constraint, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invar_specification, 5),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invar_specification, 5),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_constraint, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_constraint, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants_declaration, 3),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constants_declaration, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans_constraint, 3),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trans_constraint, 3),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invar_specification, 3),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invar_specification, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_element, 1),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_element, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ltl_specification, 3),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ltl_specification, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctl_specification, 3),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctl_specification, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compute_specification, 3),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compute_specification, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_parameters, 3),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_parameters, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compute_specification, 6),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compute_specification, 6),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ltl_specification, 6),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ltl_specification, 6),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_declaration, 2),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ivar_declaration, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fairness_constraint, 3),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fairness_constraint, 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invar_constraint, 3),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invar_constraint, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invar_specification, 6),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invar_specification, 6),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctl_specification, 6),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctl_specification, 6),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_constraint, 2),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_constraint, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 2),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frozenvar_declaration, 2),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frozenvar_declaration, 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_declaration, 2),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_declaration, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_constraint, 3),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init_constraint, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_parameters, 2),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_parameters, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_isa_declaration, 2),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_isa_declaration, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_parameters, 4),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_parameters, 4),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fairness_constraint, 7),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fairness_constraint, 7),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rtctl_expr, 1),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_parameters_repeat1, 2), SHIFT_REPEAT(431),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_parameters_repeat1, 2),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [845] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(469),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_expr_list_repeat1, 2), SHIFT_REPEAT(130),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_body_expr, 2),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rtctl_expr, 3),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumeration_type_body, 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_expr_list, 2),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumeration_type_body_repeat1, 2), SHIFT_REPEAT(315),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumeration_type_body_repeat1, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants_body, 1),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(111),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumeration_type_body, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants_body, 2),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rtctl_expr, 6),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_type_spicifier, 2),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_constant, 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumeration_type_value, 1),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_type_spicifier, 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_base, 1),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_sign_specifier, 1),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type_specifier, 1),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_type_spicifier, 3),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type_specifier, 6),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type_specifier, 5),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_type_spicifier, 5),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_width, 1),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type_specifier, 4),
  [1093] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_type_spicifier, 4),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 6),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type_specifier, 3),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nusmv(void) {
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
