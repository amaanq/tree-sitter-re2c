#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 356
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 205
#define ALIAS_COUNT 5
#define TOKEN_COUNT 113
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 38

enum {
  sym_identifier = 1,
  anon_sym_BANGre2c = 2,
  anon_sym_BANGlocal = 3,
  anon_sym_COLON = 4,
  anon_sym_re2c = 5,
  anon_sym_BANGrules = 6,
  aux_sym__block_name_token1 = 7,
  anon_sym_BANGuse = 8,
  anon_sym_BANGmax = 9,
  anon_sym_BANGmaxnmatch = 10,
  anon_sym_BANGgetstate = 11,
  anon_sym_BANGstags = 12,
  anon_sym_BANGmtags = 13,
  anon_sym_BANGinclude = 14,
  anon_sym_BANGheader = 15,
  anon_sym_on = 16,
  anon_sym_off = 17,
  sym_ignore_block = 18,
  anon_sym_format = 19,
  anon_sym_EQ = 20,
  anon_sym_SEMI = 21,
  anon_sym_separator = 22,
  anon_sym_re2c2 = 23,
  aux_sym__option_name_token1 = 24,
  anon_sym_AT = 25,
  anon_sym_flags = 26,
  anon_sym_define = 27,
  anon_sym_cond = 28,
  anon_sym_label = 29,
  anon_sym_variable = 30,
  anon_sym_yych = 31,
  anon_sym_state = 32,
  anon_sym_yybm = 33,
  anon_sym_cgoto = 34,
  anon_sym_api = 35,
  anon_sym_tags = 36,
  anon_sym_indent = 37,
  anon_sym_yyfill = 38,
  anon_sym_eof = 39,
  anon_sym_sentinel = 40,
  anon_sym_condprefix = 41,
  anon_sym_condenumprefix = 42,
  anon_sym_labelprefix = 43,
  anon_sym_startlabel = 44,
  anon_sym_DOT = 45,
  anon_sym_DASH_GT = 46,
  anon_sym_ignore = 47,
  anon_sym_substitute = 48,
  anon_sym_fail = 49,
  anon_sym_default = 50,
  anon_sym_custom = 51,
  anon_sym_match_DASHempty = 52,
  anon_sym_match_DASHnone = 53,
  anon_sym_error = 54,
  anon_sym_functions = 55,
  anon_sym_free_DASHform = 56,
  anon_sym_EQ_GT = 57,
  anon_sym_COLON_EQ_GT = 58,
  anon_sym_LT = 59,
  anon_sym_GT = 60,
  anon_sym_BANG = 61,
  anon_sym_COMMA = 62,
  anon_sym_STAR = 63,
  anon_sym_DOLLAR = 64,
  anon_sym_LBRACE = 65,
  anon_sym_RBRACE = 66,
  aux_sym__code_in_braces_token1 = 67,
  aux_sym__code_in_braces_token2 = 68,
  aux_sym__code_in_braces_token3 = 69,
  aux_sym__code_in_braces_token4 = 70,
  anon_sym_SLASH = 71,
  anon_sym_PIPE = 72,
  anon_sym_ = 73,
  anon_sym_BSLASH = 74,
  anon_sym_STAR2 = 75,
  anon_sym_PLUS = 76,
  anon_sym_QMARK = 77,
  anon_sym_LBRACE2 = 78,
  anon_sym_COMMA2 = 79,
  anon_sym_RBRACE2 = 80,
  aux_sym__mininum_token1 = 81,
  anon_sym_LPAREN = 82,
  anon_sym_RPAREN = 83,
  anon_sym_LBRACK = 84,
  anon_sym_CARET = 85,
  anon_sym_RBRACK = 86,
  aux_sym_range_token1 = 87,
  aux_sym_literal_token1 = 88,
  aux_sym_dstring_token1 = 89,
  aux_sym_sstring_token1 = 90,
  sym_quote = 91,
  sym_ctrl_code = 92,
  aux_sym__esc_hex_token1 = 93,
  aux_sym__esc_hex_token2 = 94,
  aux_sym__esc_hex_token3 = 95,
  aux_sym__esc_hex_token4 = 96,
  aux_sym__esc_hex_token5 = 97,
  aux_sym__esc_hex_token6 = 98,
  aux_sym__esc_hex_token7 = 99,
  aux_sym__esc_hex_token8 = 100,
  aux_sym__esc_oct_token1 = 101,
  aux_sym__esc_oct_token2 = 102,
  sym_hex_digit = 103,
  sym_oct_digit = 104,
  anon_sym_AT2 = 105,
  anon_sym_POUND = 106,
  anon_sym_0 = 107,
  anon_sym_DASH = 108,
  aux_sym_number_token1 = 109,
  aux_sym_number_token2 = 110,
  sym_comment = 111,
  sym_linedir = 112,
  sym_re2c = 113,
  sym__block = 114,
  sym_global_block = 115,
  sym_local_block = 116,
  sym_rules_block = 117,
  sym_use_block = 118,
  sym_max_block = 119,
  sym_maxnmatch_block = 120,
  sym_getstate_block = 121,
  sym_stags_block = 122,
  sym_mtags_block = 123,
  sym_header_on_block = 124,
  sym_header_off_block = 125,
  sym_block_list = 126,
  sym__tag_directive = 127,
  sym_format_directive = 128,
  sym_separator_directive = 129,
  sym_body = 130,
  sym_named_definition = 131,
  sym_configuration = 132,
  sym__option_name = 133,
  sym_set_flags = 134,
  sym_define = 135,
  sym_set_cond = 136,
  sym_set_label = 137,
  sym_set_variable = 138,
  sym_set_yych = 139,
  sym_set_state = 140,
  sym_set_yybm = 141,
  sym_set_cgoto = 142,
  sym_set_api = 143,
  sym_set_tags = 144,
  sym_set_indent = 145,
  sym_set_yyfill = 146,
  sym_set_eof = 147,
  sym_set_sentinel = 148,
  sym_set_condprefix = 149,
  sym_set_condenumprefix = 150,
  sym_set_startlabel = 151,
  sym__conf_value = 152,
  sym_field_expression = 153,
  sym_encoding_policy = 154,
  sym_input_conf = 155,
  sym_empty_class_conf = 156,
  sym_api_style = 157,
  sym_ordinary_rule = 158,
  sym_conditional_rule = 159,
  sym_shortcut = 160,
  sym_condition = 161,
  sym_pattern = 162,
  sym_action = 163,
  sym_code_block = 164,
  sym__code_in_braces = 165,
  sym_use = 166,
  sym_include = 167,
  sym_regex = 168,
  sym_lookahead = 169,
  sym__pattern_expr = 170,
  sym_alternation = 171,
  sym__branch = 172,
  sym__alt_expr = 173,
  sym_difference = 174,
  sym__dif_expr = 175,
  sym_concat = 176,
  sym__cat_expr = 177,
  sym_repetition = 178,
  sym_close = 179,
  sym_limits = 180,
  sym__mininum = 181,
  sym__maximum = 182,
  sym__exactly = 183,
  sym__atom = 184,
  sym_parenthesized = 185,
  sym_character_class = 186,
  sym_range = 187,
  sym_wildcard = 188,
  sym_literal = 189,
  sym_dstring = 190,
  sym_sstring = 191,
  sym__escape = 192,
  sym_code_unit = 193,
  sym_stag = 194,
  sym_mtag = 195,
  sym_number = 196,
  aux_sym_stags_block_repeat1 = 197,
  aux_sym_block_list_repeat1 = 198,
  aux_sym_body_repeat1 = 199,
  aux_sym__clist_repeat1 = 200,
  aux_sym_code_block_repeat1 = 201,
  aux_sym_alternation_repeat1 = 202,
  aux_sym_concat_repeat1 = 203,
  aux_sym_character_class_repeat1 = 204,
  alias_sym_block_name = 205,
  alias_sym_default = 206,
  alias_sym_field_identifier = 207,
  alias_sym_label = 208,
  alias_sym_name = 209,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_BANGre2c] = "!re2c",
  [anon_sym_BANGlocal] = "!local",
  [anon_sym_COLON] = ":",
  [anon_sym_re2c] = "re2c",
  [anon_sym_BANGrules] = "!rules",
  [aux_sym__block_name_token1] = "_block_name_token1",
  [anon_sym_BANGuse] = "!use",
  [anon_sym_BANGmax] = "!max",
  [anon_sym_BANGmaxnmatch] = "!maxnmatch",
  [anon_sym_BANGgetstate] = "!getstate",
  [anon_sym_BANGstags] = "!stags",
  [anon_sym_BANGmtags] = "!mtags",
  [anon_sym_BANGinclude] = "!include",
  [anon_sym_BANGheader] = "!header",
  [anon_sym_on] = "on",
  [anon_sym_off] = "off",
  [sym_ignore_block] = "ignore_block",
  [anon_sym_format] = "format",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_separator] = "separator",
  [anon_sym_re2c2] = "re2c",
  [aux_sym__option_name_token1] = "option_name",
  [anon_sym_AT] = "@",
  [anon_sym_flags] = "flags",
  [anon_sym_define] = "define",
  [anon_sym_cond] = "cond",
  [anon_sym_label] = "label",
  [anon_sym_variable] = "variable",
  [anon_sym_yych] = "yych",
  [anon_sym_state] = "state",
  [anon_sym_yybm] = "yybm",
  [anon_sym_cgoto] = "cgoto",
  [anon_sym_api] = "api",
  [anon_sym_tags] = "tags",
  [anon_sym_indent] = "indent",
  [anon_sym_yyfill] = "yyfill",
  [anon_sym_eof] = "eof",
  [anon_sym_sentinel] = "sentinel",
  [anon_sym_condprefix] = "condprefix",
  [anon_sym_condenumprefix] = "condenumprefix",
  [anon_sym_labelprefix] = "labelprefix",
  [anon_sym_startlabel] = "startlabel",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_ignore] = "ignore",
  [anon_sym_substitute] = "substitute",
  [anon_sym_fail] = "fail",
  [anon_sym_default] = "default",
  [anon_sym_custom] = "custom",
  [anon_sym_match_DASHempty] = "match-empty",
  [anon_sym_match_DASHnone] = "match-none",
  [anon_sym_error] = "error",
  [anon_sym_functions] = "functions",
  [anon_sym_free_DASHform] = "free-form",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_COLON_EQ_GT] = ":=>",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_BANG] = "!",
  [anon_sym_COMMA] = ",",
  [anon_sym_STAR] = "any",
  [anon_sym_DOLLAR] = "end_of_input",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__code_in_braces_token1] = "_code_in_braces_token1",
  [aux_sym__code_in_braces_token2] = "_code_in_braces_token2",
  [aux_sym__code_in_braces_token3] = "_code_in_braces_token3",
  [aux_sym__code_in_braces_token4] = "_code_in_braces_token4",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE] = "|",
  [anon_sym_] = "empty",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_STAR2] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LBRACE2] = "{",
  [anon_sym_COMMA2] = ",",
  [anon_sym_RBRACE2] = "}",
  [aux_sym__mininum_token1] = "number",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_CARET] = "^",
  [anon_sym_RBRACK] = "]",
  [aux_sym_range_token1] = "range_token1",
  [aux_sym_literal_token1] = "literal_token1",
  [aux_sym_dstring_token1] = "dstring_token1",
  [aux_sym_sstring_token1] = "sstring_token1",
  [sym_quote] = "quote",
  [sym_ctrl_code] = "ctrl_code",
  [aux_sym__esc_hex_token1] = "_esc_hex_token1",
  [aux_sym__esc_hex_token2] = "_esc_hex_token2",
  [aux_sym__esc_hex_token3] = "_esc_hex_token3",
  [aux_sym__esc_hex_token4] = "_esc_hex_token4",
  [aux_sym__esc_hex_token5] = "_esc_hex_token5",
  [aux_sym__esc_hex_token6] = "_esc_hex_token6",
  [aux_sym__esc_hex_token7] = "_esc_hex_token7",
  [aux_sym__esc_hex_token8] = "_esc_hex_token8",
  [aux_sym__esc_oct_token1] = "_esc_oct_token1",
  [aux_sym__esc_oct_token2] = "_esc_oct_token2",
  [sym_hex_digit] = "hex_digit",
  [sym_oct_digit] = "oct_digit",
  [anon_sym_AT2] = "@",
  [anon_sym_POUND] = "#",
  [anon_sym_0] = "0",
  [anon_sym_DASH] = "-",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [sym_comment] = "comment",
  [sym_linedir] = "linedir",
  [sym_re2c] = "re2c",
  [sym__block] = "_block",
  [sym_global_block] = "global_block",
  [sym_local_block] = "local_block",
  [sym_rules_block] = "rules_block",
  [sym_use_block] = "use_block",
  [sym_max_block] = "max_block",
  [sym_maxnmatch_block] = "maxnmatch_block",
  [sym_getstate_block] = "getstate_block",
  [sym_stags_block] = "stags_block",
  [sym_mtags_block] = "mtags_block",
  [sym_header_on_block] = "header_on_block",
  [sym_header_off_block] = "header_off_block",
  [sym_block_list] = "block_list",
  [sym__tag_directive] = "_tag_directive",
  [sym_format_directive] = "format_directive",
  [sym_separator_directive] = "separator_directive",
  [sym_body] = "body",
  [sym_named_definition] = "named_definition",
  [sym_configuration] = "configuration",
  [sym__option_name] = "_option_name",
  [sym_set_flags] = "set_flags",
  [sym_define] = "define",
  [sym_set_cond] = "set_cond",
  [sym_set_label] = "set_label",
  [sym_set_variable] = "set_variable",
  [sym_set_yych] = "set_yych",
  [sym_set_state] = "set_state",
  [sym_set_yybm] = "set_yybm",
  [sym_set_cgoto] = "set_cgoto",
  [sym_set_api] = "set_api",
  [sym_set_tags] = "set_tags",
  [sym_set_indent] = "set_indent",
  [sym_set_yyfill] = "set_yyfill",
  [sym_set_eof] = "set_eof",
  [sym_set_sentinel] = "set_sentinel",
  [sym_set_condprefix] = "set_condprefix",
  [sym_set_condenumprefix] = "set_condenumprefix",
  [sym_set_startlabel] = "set_startlabel",
  [sym__conf_value] = "_conf_value",
  [sym_field_expression] = "field_expression",
  [sym_encoding_policy] = "encoding_policy",
  [sym_input_conf] = "input_conf",
  [sym_empty_class_conf] = "empty_class_conf",
  [sym_api_style] = "api_style",
  [sym_ordinary_rule] = "ordinary_rule",
  [sym_conditional_rule] = "conditional_rule",
  [sym_shortcut] = "shortcut",
  [sym_condition] = "condition",
  [sym_pattern] = "pattern",
  [sym_action] = "action",
  [sym_code_block] = "code_block",
  [sym__code_in_braces] = "_code_in_braces",
  [sym_use] = "use",
  [sym_include] = "include",
  [sym_regex] = "regex",
  [sym_lookahead] = "lookahead",
  [sym__pattern_expr] = "_pattern_expr",
  [sym_alternation] = "alternation",
  [sym__branch] = "_branch",
  [sym__alt_expr] = "_alt_expr",
  [sym_difference] = "difference",
  [sym__dif_expr] = "_dif_expr",
  [sym_concat] = "concat",
  [sym__cat_expr] = "_cat_expr",
  [sym_repetition] = "repetition",
  [sym_close] = "close",
  [sym_limits] = "limits",
  [sym__mininum] = "_mininum",
  [sym__maximum] = "_maximum",
  [sym__exactly] = "_exactly",
  [sym__atom] = "_atom",
  [sym_parenthesized] = "parenthesized",
  [sym_character_class] = "character_class",
  [sym_range] = "range",
  [sym_wildcard] = "wildcard",
  [sym_literal] = "literal",
  [sym_dstring] = "dstring",
  [sym_sstring] = "sstring",
  [sym__escape] = "_escape",
  [sym_code_unit] = "code_unit",
  [sym_stag] = "stag",
  [sym_mtag] = "mtag",
  [sym_number] = "number",
  [aux_sym_stags_block_repeat1] = "stags_block_repeat1",
  [aux_sym_block_list_repeat1] = "block_list_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym__clist_repeat1] = "_clist_repeat1",
  [aux_sym_code_block_repeat1] = "code_block_repeat1",
  [aux_sym_alternation_repeat1] = "alternation_repeat1",
  [aux_sym_concat_repeat1] = "concat_repeat1",
  [aux_sym_character_class_repeat1] = "character_class_repeat1",
  [alias_sym_block_name] = "block_name",
  [alias_sym_default] = "default",
  [alias_sym_field_identifier] = "field_identifier",
  [alias_sym_label] = "label",
  [alias_sym_name] = "name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_BANGre2c] = anon_sym_BANGre2c,
  [anon_sym_BANGlocal] = anon_sym_BANGlocal,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_re2c] = anon_sym_re2c,
  [anon_sym_BANGrules] = anon_sym_BANGrules,
  [aux_sym__block_name_token1] = aux_sym__block_name_token1,
  [anon_sym_BANGuse] = anon_sym_BANGuse,
  [anon_sym_BANGmax] = anon_sym_BANGmax,
  [anon_sym_BANGmaxnmatch] = anon_sym_BANGmaxnmatch,
  [anon_sym_BANGgetstate] = anon_sym_BANGgetstate,
  [anon_sym_BANGstags] = anon_sym_BANGstags,
  [anon_sym_BANGmtags] = anon_sym_BANGmtags,
  [anon_sym_BANGinclude] = anon_sym_BANGinclude,
  [anon_sym_BANGheader] = anon_sym_BANGheader,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_off] = anon_sym_off,
  [sym_ignore_block] = sym_ignore_block,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_separator] = anon_sym_separator,
  [anon_sym_re2c2] = anon_sym_re2c,
  [aux_sym__option_name_token1] = aux_sym__option_name_token1,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_flags] = anon_sym_flags,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_cond] = anon_sym_cond,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_variable] = anon_sym_variable,
  [anon_sym_yych] = anon_sym_yych,
  [anon_sym_state] = anon_sym_state,
  [anon_sym_yybm] = anon_sym_yybm,
  [anon_sym_cgoto] = anon_sym_cgoto,
  [anon_sym_api] = anon_sym_api,
  [anon_sym_tags] = anon_sym_tags,
  [anon_sym_indent] = anon_sym_indent,
  [anon_sym_yyfill] = anon_sym_yyfill,
  [anon_sym_eof] = anon_sym_eof,
  [anon_sym_sentinel] = anon_sym_sentinel,
  [anon_sym_condprefix] = anon_sym_condprefix,
  [anon_sym_condenumprefix] = anon_sym_condenumprefix,
  [anon_sym_labelprefix] = anon_sym_labelprefix,
  [anon_sym_startlabel] = anon_sym_startlabel,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_ignore] = anon_sym_ignore,
  [anon_sym_substitute] = anon_sym_substitute,
  [anon_sym_fail] = anon_sym_fail,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_match_DASHempty] = anon_sym_match_DASHempty,
  [anon_sym_match_DASHnone] = anon_sym_match_DASHnone,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_functions] = anon_sym_functions,
  [anon_sym_free_DASHform] = anon_sym_free_DASHform,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_COLON_EQ_GT] = anon_sym_COLON_EQ_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__code_in_braces_token1] = aux_sym__code_in_braces_token1,
  [aux_sym__code_in_braces_token2] = aux_sym__code_in_braces_token2,
  [aux_sym__code_in_braces_token3] = aux_sym__code_in_braces_token3,
  [aux_sym__code_in_braces_token4] = aux_sym__code_in_braces_token4,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_] = anon_sym_,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_STAR2] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LBRACE2] = anon_sym_LBRACE,
  [anon_sym_COMMA2] = anon_sym_COMMA,
  [anon_sym_RBRACE2] = anon_sym_RBRACE,
  [aux_sym__mininum_token1] = sym_number,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_range_token1] = aux_sym_range_token1,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [aux_sym_dstring_token1] = aux_sym_dstring_token1,
  [aux_sym_sstring_token1] = aux_sym_sstring_token1,
  [sym_quote] = sym_quote,
  [sym_ctrl_code] = sym_ctrl_code,
  [aux_sym__esc_hex_token1] = aux_sym__esc_hex_token1,
  [aux_sym__esc_hex_token2] = aux_sym__esc_hex_token2,
  [aux_sym__esc_hex_token3] = aux_sym__esc_hex_token3,
  [aux_sym__esc_hex_token4] = aux_sym__esc_hex_token4,
  [aux_sym__esc_hex_token5] = aux_sym__esc_hex_token5,
  [aux_sym__esc_hex_token6] = aux_sym__esc_hex_token6,
  [aux_sym__esc_hex_token7] = aux_sym__esc_hex_token7,
  [aux_sym__esc_hex_token8] = aux_sym__esc_hex_token8,
  [aux_sym__esc_oct_token1] = aux_sym__esc_oct_token1,
  [aux_sym__esc_oct_token2] = aux_sym__esc_oct_token2,
  [sym_hex_digit] = sym_hex_digit,
  [sym_oct_digit] = sym_oct_digit,
  [anon_sym_AT2] = anon_sym_AT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [sym_comment] = sym_comment,
  [sym_linedir] = sym_linedir,
  [sym_re2c] = sym_re2c,
  [sym__block] = sym__block,
  [sym_global_block] = sym_global_block,
  [sym_local_block] = sym_local_block,
  [sym_rules_block] = sym_rules_block,
  [sym_use_block] = sym_use_block,
  [sym_max_block] = sym_max_block,
  [sym_maxnmatch_block] = sym_maxnmatch_block,
  [sym_getstate_block] = sym_getstate_block,
  [sym_stags_block] = sym_stags_block,
  [sym_mtags_block] = sym_mtags_block,
  [sym_header_on_block] = sym_header_on_block,
  [sym_header_off_block] = sym_header_off_block,
  [sym_block_list] = sym_block_list,
  [sym__tag_directive] = sym__tag_directive,
  [sym_format_directive] = sym_format_directive,
  [sym_separator_directive] = sym_separator_directive,
  [sym_body] = sym_body,
  [sym_named_definition] = sym_named_definition,
  [sym_configuration] = sym_configuration,
  [sym__option_name] = sym__option_name,
  [sym_set_flags] = sym_set_flags,
  [sym_define] = sym_define,
  [sym_set_cond] = sym_set_cond,
  [sym_set_label] = sym_set_label,
  [sym_set_variable] = sym_set_variable,
  [sym_set_yych] = sym_set_yych,
  [sym_set_state] = sym_set_state,
  [sym_set_yybm] = sym_set_yybm,
  [sym_set_cgoto] = sym_set_cgoto,
  [sym_set_api] = sym_set_api,
  [sym_set_tags] = sym_set_tags,
  [sym_set_indent] = sym_set_indent,
  [sym_set_yyfill] = sym_set_yyfill,
  [sym_set_eof] = sym_set_eof,
  [sym_set_sentinel] = sym_set_sentinel,
  [sym_set_condprefix] = sym_set_condprefix,
  [sym_set_condenumprefix] = sym_set_condenumprefix,
  [sym_set_startlabel] = sym_set_startlabel,
  [sym__conf_value] = sym__conf_value,
  [sym_field_expression] = sym_field_expression,
  [sym_encoding_policy] = sym_encoding_policy,
  [sym_input_conf] = sym_input_conf,
  [sym_empty_class_conf] = sym_empty_class_conf,
  [sym_api_style] = sym_api_style,
  [sym_ordinary_rule] = sym_ordinary_rule,
  [sym_conditional_rule] = sym_conditional_rule,
  [sym_shortcut] = sym_shortcut,
  [sym_condition] = sym_condition,
  [sym_pattern] = sym_pattern,
  [sym_action] = sym_action,
  [sym_code_block] = sym_code_block,
  [sym__code_in_braces] = sym__code_in_braces,
  [sym_use] = sym_use,
  [sym_include] = sym_include,
  [sym_regex] = sym_regex,
  [sym_lookahead] = sym_lookahead,
  [sym__pattern_expr] = sym__pattern_expr,
  [sym_alternation] = sym_alternation,
  [sym__branch] = sym__branch,
  [sym__alt_expr] = sym__alt_expr,
  [sym_difference] = sym_difference,
  [sym__dif_expr] = sym__dif_expr,
  [sym_concat] = sym_concat,
  [sym__cat_expr] = sym__cat_expr,
  [sym_repetition] = sym_repetition,
  [sym_close] = sym_close,
  [sym_limits] = sym_limits,
  [sym__mininum] = sym__mininum,
  [sym__maximum] = sym__maximum,
  [sym__exactly] = sym__exactly,
  [sym__atom] = sym__atom,
  [sym_parenthesized] = sym_parenthesized,
  [sym_character_class] = sym_character_class,
  [sym_range] = sym_range,
  [sym_wildcard] = sym_wildcard,
  [sym_literal] = sym_literal,
  [sym_dstring] = sym_dstring,
  [sym_sstring] = sym_sstring,
  [sym__escape] = sym__escape,
  [sym_code_unit] = sym_code_unit,
  [sym_stag] = sym_stag,
  [sym_mtag] = sym_mtag,
  [sym_number] = sym_number,
  [aux_sym_stags_block_repeat1] = aux_sym_stags_block_repeat1,
  [aux_sym_block_list_repeat1] = aux_sym_block_list_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym__clist_repeat1] = aux_sym__clist_repeat1,
  [aux_sym_code_block_repeat1] = aux_sym_code_block_repeat1,
  [aux_sym_alternation_repeat1] = aux_sym_alternation_repeat1,
  [aux_sym_concat_repeat1] = aux_sym_concat_repeat1,
  [aux_sym_character_class_repeat1] = aux_sym_character_class_repeat1,
  [alias_sym_block_name] = alias_sym_block_name,
  [alias_sym_default] = alias_sym_default,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
  [alias_sym_label] = alias_sym_label,
  [alias_sym_name] = alias_sym_name,
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
  [anon_sym_BANGre2c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGlocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_re2c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGrules] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__block_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BANGuse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGmax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGmaxnmatch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGgetstate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGstags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGmtags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGheader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [sym_ignore_block] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_separator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_re2c2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__option_name_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yych] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_state] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yybm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cgoto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_api] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yyfill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sentinel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_condprefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_condenumprefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_labelprefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_startlabel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_substitute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fail] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match_DASHempty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match_DASHnone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_functions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_free_DASHform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ_GT] = {
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__code_in_braces_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__code_in_braces_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__code_in_braces_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__code_in_braces_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__mininum_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_range_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dstring_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sstring_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_ctrl_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__esc_hex_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__esc_hex_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__esc_hex_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__esc_hex_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__esc_hex_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__esc_hex_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__esc_hex_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__esc_hex_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__esc_oct_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__esc_oct_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_hex_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_oct_digit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_linedir] = {
    .visible = true,
    .named = true,
  },
  [sym_re2c] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_global_block] = {
    .visible = true,
    .named = true,
  },
  [sym_local_block] = {
    .visible = true,
    .named = true,
  },
  [sym_rules_block] = {
    .visible = true,
    .named = true,
  },
  [sym_use_block] = {
    .visible = true,
    .named = true,
  },
  [sym_max_block] = {
    .visible = true,
    .named = true,
  },
  [sym_maxnmatch_block] = {
    .visible = true,
    .named = true,
  },
  [sym_getstate_block] = {
    .visible = true,
    .named = true,
  },
  [sym_stags_block] = {
    .visible = true,
    .named = true,
  },
  [sym_mtags_block] = {
    .visible = true,
    .named = true,
  },
  [sym_header_on_block] = {
    .visible = true,
    .named = true,
  },
  [sym_header_off_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym__tag_directive] = {
    .visible = false,
    .named = true,
  },
  [sym_format_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_separator_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_named_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_configuration] = {
    .visible = true,
    .named = true,
  },
  [sym__option_name] = {
    .visible = false,
    .named = true,
  },
  [sym_set_flags] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_set_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_set_label] = {
    .visible = true,
    .named = true,
  },
  [sym_set_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_set_yych] = {
    .visible = true,
    .named = true,
  },
  [sym_set_state] = {
    .visible = true,
    .named = true,
  },
  [sym_set_yybm] = {
    .visible = true,
    .named = true,
  },
  [sym_set_cgoto] = {
    .visible = true,
    .named = true,
  },
  [sym_set_api] = {
    .visible = true,
    .named = true,
  },
  [sym_set_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_set_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_set_yyfill] = {
    .visible = true,
    .named = true,
  },
  [sym_set_eof] = {
    .visible = true,
    .named = true,
  },
  [sym_set_sentinel] = {
    .visible = true,
    .named = true,
  },
  [sym_set_condprefix] = {
    .visible = true,
    .named = true,
  },
  [sym_set_condenumprefix] = {
    .visible = true,
    .named = true,
  },
  [sym_set_startlabel] = {
    .visible = true,
    .named = true,
  },
  [sym__conf_value] = {
    .visible = false,
    .named = true,
  },
  [sym_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_encoding_policy] = {
    .visible = true,
    .named = true,
  },
  [sym_input_conf] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_class_conf] = {
    .visible = true,
    .named = true,
  },
  [sym_api_style] = {
    .visible = true,
    .named = true,
  },
  [sym_ordinary_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_shortcut] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym__code_in_braces] = {
    .visible = false,
    .named = true,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_lookahead] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_alternation] = {
    .visible = true,
    .named = true,
  },
  [sym__branch] = {
    .visible = false,
    .named = true,
  },
  [sym__alt_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_difference] = {
    .visible = true,
    .named = true,
  },
  [sym__dif_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_concat] = {
    .visible = true,
    .named = true,
  },
  [sym__cat_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_repetition] = {
    .visible = true,
    .named = true,
  },
  [sym_close] = {
    .visible = true,
    .named = true,
  },
  [sym_limits] = {
    .visible = true,
    .named = true,
  },
  [sym__mininum] = {
    .visible = false,
    .named = true,
  },
  [sym__maximum] = {
    .visible = false,
    .named = true,
  },
  [sym__exactly] = {
    .visible = false,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_parenthesized] = {
    .visible = true,
    .named = true,
  },
  [sym_character_class] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_dstring] = {
    .visible = true,
    .named = true,
  },
  [sym_sstring] = {
    .visible = true,
    .named = true,
  },
  [sym__escape] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_code_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_stag] = {
    .visible = true,
    .named = true,
  },
  [sym_mtag] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stags_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__clist_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alternation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_concat_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_block_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_default] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_label] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_argument = 1,
  field_branch = 2,
  field_condition = 3,
  field_exactly = 4,
  field_expr = 5,
  field_field = 6,
  field_filename = 7,
  field_format = 8,
  field_from = 9,
  field_left = 10,
  field_lookahead = 11,
  field_maximum = 12,
  field_minimum = 13,
  field_name = 14,
  field_operator = 15,
  field_option = 16,
  field_right = 17,
  field_separator = 18,
  field_to = 19,
  field_value = 20,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_branch] = "branch",
  [field_condition] = "condition",
  [field_exactly] = "exactly",
  [field_expr] = "expr",
  [field_field] = "field",
  [field_filename] = "filename",
  [field_format] = "format",
  [field_from] = "from",
  [field_left] = "left",
  [field_lookahead] = "lookahead",
  [field_maximum] = "maximum",
  [field_minimum] = "minimum",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_option] = "option",
  [field_right] = "right",
  [field_separator] = "separator",
  [field_to] = "to",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 1},
  [6] = {.index = 1, .length = 2},
  [7] = {.index = 3, .length = 3},
  [8] = {.index = 6, .length = 4},
  [9] = {.index = 10, .length = 1},
  [13] = {.index = 11, .length = 1},
  [14] = {.index = 12, .length = 3},
  [15] = {.index = 15, .length = 3},
  [16] = {.index = 18, .length = 1},
  [17] = {.index = 19, .length = 1},
  [20] = {.index = 20, .length = 2},
  [21] = {.index = 22, .length = 2},
  [22] = {.index = 24, .length = 1},
  [25] = {.index = 25, .length = 1},
  [26] = {.index = 26, .length = 1},
  [27] = {.index = 27, .length = 1},
  [28] = {.index = 26, .length = 1},
  [30] = {.index = 28, .length = 1},
  [31] = {.index = 29, .length = 1},
  [32] = {.index = 30, .length = 3},
  [33] = {.index = 33, .length = 2},
  [34] = {.index = 35, .length = 1},
  [35] = {.index = 36, .length = 1},
  [36] = {.index = 37, .length = 2},
  [37] = {.index = 39, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_branch, 0},
  [1] =
    {field_branch, 0, .inherited = true},
    {field_operator, 1},
  [3] =
    {field_branch, 0, .inherited = true},
    {field_branch, 1, .inherited = true},
    {field_operator, 0, .inherited = true},
  [6] =
    {field_branch, 0, .inherited = true},
    {field_branch, 1, .inherited = true},
    {field_operator, 0, .inherited = true},
    {field_operator, 1, .inherited = true},
  [10] =
    {field_filename, 1},
  [11] =
    {field_condition, 1},
  [12] =
    {field_expr, 0},
    {field_lookahead, 2},
    {field_operator, 1},
  [15] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [18] =
    {field_minimum, 0},
  [19] =
    {field_exactly, 0},
  [20] =
    {field_from, 0},
    {field_to, 2},
  [22] =
    {field_name, 0},
    {field_value, 2},
  [24] =
    {field_exactly, 1, .inherited = true},
  [25] =
    {field_option, 1},
  [26] =
    {field_value, 0},
  [27] =
    {field_value, 2, .inherited = true},
  [28] =
    {field_minimum, 1, .inherited = true},
  [29] =
    {field_maximum, 0},
  [30] =
    {field_field, 1, .inherited = true},
    {field_option, 1, .inherited = true},
    {field_value, 3, .inherited = true},
  [33] =
    {field_maximum, 3, .inherited = true},
    {field_minimum, 1, .inherited = true},
  [35] =
    {field_format, 2},
  [36] =
    {field_separator, 2},
  [37] =
    {field_field, 3},
    {field_option, 1},
  [39] =
    {field_argument, 0},
    {field_field, 2},
    {field_operator, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_sym_DOT,
  },
  [2] = {
    [0] = alias_sym_default,
  },
  [4] = {
    [0] = alias_sym_name,
  },
  [5] = {
    [2] = alias_sym_block_name,
  },
  [10] = {
    [1] = alias_sym_label,
  },
  [11] = {
    [0] = alias_sym_label,
  },
  [12] = {
    [1] = sym_literal,
  },
  [13] = {
    [1] = alias_sym_label,
  },
  [18] = {
    [2] = alias_sym_label,
  },
  [19] = {
    [2] = sym_literal,
  },
  [20] = {
    [1] = anon_sym_DASH,
  },
  [21] = {
    [0] = alias_sym_name,
  },
  [23] = {
    [4] = alias_sym_block_name,
  },
  [24] = {
    [1] = alias_sym_block_name,
  },
  [26] = {
    [0] = alias_sym_name,
  },
  [29] = {
    [3] = alias_sym_label,
  },
  [37] = {
    [2] = alias_sym_field_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(157);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == ')') ADVANCE(184);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == ',') ADVANCE(180);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '0') ADVANCE(254);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead == '=') ADVANCE(143);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '?') ADVANCE(178);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '^') ADVANCE(186);
      if (lookahead == 'm') ADVANCE(243);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '}') ADVANCE(181);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('G' <= lookahead && lookahead <= '_') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == '?') ADVANCE(178);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '?') ADVANCE(178);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '?') ADVANCE(178);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == ')') ADVANCE(184);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '?') ADVANCE(178);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '?') ADVANCE(178);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '^') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == '?') ADVANCE(178);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '?') ADVANCE(178);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '?') ADVANCE(178);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == ']') ADVANCE(187);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == ')') ADVANCE(184);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '?') ADVANCE(178);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == ')') ADVANCE(184);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == ')') ADVANCE(184);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '+') ADVANCE(177);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == '?') ADVANCE(178);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(259);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(258);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(141);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == '2') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(97);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(153);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(154);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(149);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(68);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 110:
      if (lookahead == 'x') ADVANCE(134);
      END_STATE();
    case 111:
      if (lookahead == 'y') ADVANCE(150);
      END_STATE();
    case 112:
      if (lookahead == '"' ||
          lookahead == '-' ||
          lookahead == '\\' ||
          lookahead == ']') ADVANCE(207);
      if (lookahead == 'U') ADVANCE(230);
      if (lookahead == 'X') ADVANCE(222);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(218);
      if (lookahead == 'x') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(233);
      END_STATE();
    case 113:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 114:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 115:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 116:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 117:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 118:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(259);
      if (lookahead == '\r') ADVANCE(260);
      END_STATE();
    case 119:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(157);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == ')') ADVANCE(184);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '0') ADVANCE(253);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead == '=') ADVANCE(143);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(243);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 120:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(157);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(121)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 121:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(157);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(121)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 122:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(73);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == ')') ADVANCE(184);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '}') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 123:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(73);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == ')') ADVANCE(184);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 124:
      if (eof) ADVANCE(126);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == ',') ADVANCE(180);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '0') ADVANCE(253);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'm') ADVANCE(243);
      if (lookahead == '}') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(125)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 125:
      if (eof) ADVANCE(126);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '0') ADVANCE(253);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'm') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(125)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_BANGre2c);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_BANGlocal);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_BANGrules);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__block_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_BANGuse);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_BANGmax);
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_BANGmaxnmatch);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_BANGgetstate);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BANGstags);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BANGmtags);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_BANGheader);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ignore_block);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(153);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_re2c2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__option_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_match_DASHempty);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_match_DASHnone);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_free_DASHform);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_GT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__code_in_braces_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__code_in_braces_token2);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__code_in_braces_token3);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__code_in_braces_token3);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(169)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(173)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(172)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(173)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"' ||
          lookahead == '-' ||
          lookahead == '\\' ||
          lookahead == ']') ADVANCE(207);
      if (lookahead == 'U') ADVANCE(230);
      if (lookahead == 'X') ADVANCE(222);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(218);
      if (lookahead == 'x') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(233);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__mininum_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_range_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == ')') ADVANCE(184);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(259);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '>') ADVANCE(153);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"' ||
          lookahead == '-' ||
          lookahead == '\\' ||
          lookahead == ']') ADVANCE(207);
      if (lookahead == 'U') ADVANCE(230);
      if (lookahead == 'X') ADVANCE(222);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(218);
      if (lookahead == 'x') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(233);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_dstring_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_dstring_token1);
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_dstring_token1);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_sstring_token1);
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_quote);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ctrl_code);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__esc_hex_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__esc_hex_token2);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__esc_hex_token3);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__esc_hex_token4);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__esc_hex_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__esc_hex_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__esc_hex_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__esc_hex_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__esc_hex_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__esc_hex_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__esc_hex_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__esc_hex_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__esc_hex_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__esc_hex_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__esc_oct_token1);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__esc_oct_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__esc_oct_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_hex_digit);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_hex_digit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_oct_digit);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(118);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_linedir);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'y') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 1:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'g') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'g') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_api);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_eof);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(95);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_cond);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_fail);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_re2c);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_yybm);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_yych);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_cgoto);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_flags);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_label);
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_state);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 114:
      if (lookahead == 'b') ADVANCE(130);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_ignore);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_indent);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_yyfill);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 133:
      if (lookahead == 'f') ADVANCE(143);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 139:
      if (lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_sentinel);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 152:
      if (lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_separator);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_condprefix);
      END_STATE();
    case 160:
      if (lookahead == 'x') ADVANCE(164);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_startlabel);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_substitute);
      END_STATE();
    case 163:
      if (lookahead == 'f') ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_labelprefix);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'x') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_condenumprefix);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 122},
  [2] = {.lex_state = 171},
  [3] = {.lex_state = 171},
  [4] = {.lex_state = 171},
  [5] = {.lex_state = 173},
  [6] = {.lex_state = 173},
  [7] = {.lex_state = 173},
  [8] = {.lex_state = 173},
  [9] = {.lex_state = 173},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 169},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 122},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 170},
  [29] = {.lex_state = 170},
  [30] = {.lex_state = 170},
  [31] = {.lex_state = 170},
  [32] = {.lex_state = 170},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 124},
  [35] = {.lex_state = 124},
  [36] = {.lex_state = 124},
  [37] = {.lex_state = 124},
  [38] = {.lex_state = 124},
  [39] = {.lex_state = 124},
  [40] = {.lex_state = 124},
  [41] = {.lex_state = 170},
  [42] = {.lex_state = 170},
  [43] = {.lex_state = 124},
  [44] = {.lex_state = 124},
  [45] = {.lex_state = 124},
  [46] = {.lex_state = 170},
  [47] = {.lex_state = 124},
  [48] = {.lex_state = 170},
  [49] = {.lex_state = 124},
  [50] = {.lex_state = 124},
  [51] = {.lex_state = 124},
  [52] = {.lex_state = 124},
  [53] = {.lex_state = 170},
  [54] = {.lex_state = 124},
  [55] = {.lex_state = 124},
  [56] = {.lex_state = 124},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 170},
  [59] = {.lex_state = 170},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 170},
  [62] = {.lex_state = 122},
  [63] = {.lex_state = 122},
  [64] = {.lex_state = 122},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 122},
  [72] = {.lex_state = 122},
  [73] = {.lex_state = 122},
  [74] = {.lex_state = 122},
  [75] = {.lex_state = 122},
  [76] = {.lex_state = 122},
  [77] = {.lex_state = 122},
  [78] = {.lex_state = 122},
  [79] = {.lex_state = 122},
  [80] = {.lex_state = 122},
  [81] = {.lex_state = 122},
  [82] = {.lex_state = 122},
  [83] = {.lex_state = 122},
  [84] = {.lex_state = 122},
  [85] = {.lex_state = 122},
  [86] = {.lex_state = 122},
  [87] = {.lex_state = 15},
  [88] = {.lex_state = 122},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 122},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 122},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 122},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 15},
  [102] = {.lex_state = 15},
  [103] = {.lex_state = 15},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 15},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 172},
  [128] = {.lex_state = 172},
  [129] = {.lex_state = 172},
  [130] = {.lex_state = 173},
  [131] = {.lex_state = 173},
  [132] = {.lex_state = 173},
  [133] = {.lex_state = 173},
  [134] = {.lex_state = 173},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 18},
  [137] = {.lex_state = 173},
  [138] = {.lex_state = 173},
  [139] = {.lex_state = 173},
  [140] = {.lex_state = 173},
  [141] = {.lex_state = 173},
  [142] = {.lex_state = 16},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 16},
  [145] = {.lex_state = 16},
  [146] = {.lex_state = 16},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 169},
  [154] = {.lex_state = 169},
  [155] = {.lex_state = 169},
  [156] = {.lex_state = 169},
  [157] = {.lex_state = 169},
  [158] = {.lex_state = 169},
  [159] = {.lex_state = 120},
  [160] = {.lex_state = 120},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 170},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 122},
  [169] = {.lex_state = 122},
  [170] = {.lex_state = 122},
  [171] = {.lex_state = 16},
  [172] = {.lex_state = 122},
  [173] = {.lex_state = 122},
  [174] = {.lex_state = 122},
  [175] = {.lex_state = 122},
  [176] = {.lex_state = 16},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 16},
  [179] = {.lex_state = 16},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 122},
  [182] = {.lex_state = 120},
  [183] = {.lex_state = 122},
  [184] = {.lex_state = 120},
  [185] = {.lex_state = 120},
  [186] = {.lex_state = 122},
  [187] = {.lex_state = 124},
  [188] = {.lex_state = 122},
  [189] = {.lex_state = 122},
  [190] = {.lex_state = 16},
  [191] = {.lex_state = 16},
  [192] = {.lex_state = 122},
  [193] = {.lex_state = 122},
  [194] = {.lex_state = 16},
  [195] = {.lex_state = 120},
  [196] = {.lex_state = 124},
  [197] = {.lex_state = 124},
  [198] = {.lex_state = 16},
  [199] = {.lex_state = 122},
  [200] = {.lex_state = 122},
  [201] = {.lex_state = 16},
  [202] = {.lex_state = 122},
  [203] = {.lex_state = 122},
  [204] = {.lex_state = 122},
  [205] = {.lex_state = 122},
  [206] = {.lex_state = 122},
  [207] = {.lex_state = 122},
  [208] = {.lex_state = 122},
  [209] = {.lex_state = 122},
  [210] = {.lex_state = 122},
  [211] = {.lex_state = 122},
  [212] = {.lex_state = 122},
  [213] = {.lex_state = 122},
  [214] = {.lex_state = 122},
  [215] = {.lex_state = 124},
  [216] = {.lex_state = 124},
  [217] = {.lex_state = 122},
  [218] = {.lex_state = 122},
  [219] = {.lex_state = 122},
  [220] = {.lex_state = 122},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 124},
  [223] = {.lex_state = 124},
  [224] = {.lex_state = 124},
  [225] = {.lex_state = 122},
  [226] = {.lex_state = 124},
  [227] = {.lex_state = 122},
  [228] = {.lex_state = 124},
  [229] = {.lex_state = 16},
  [230] = {.lex_state = 124},
  [231] = {.lex_state = 122},
  [232] = {.lex_state = 124},
  [233] = {.lex_state = 124},
  [234] = {.lex_state = 124},
  [235] = {.lex_state = 124},
  [236] = {.lex_state = 124},
  [237] = {.lex_state = 124},
  [238] = {.lex_state = 122},
  [239] = {.lex_state = 124},
  [240] = {.lex_state = 124},
  [241] = {.lex_state = 122},
  [242] = {.lex_state = 124},
  [243] = {.lex_state = 122},
  [244] = {.lex_state = 122},
  [245] = {.lex_state = 122},
  [246] = {.lex_state = 122},
  [247] = {.lex_state = 122},
  [248] = {.lex_state = 122},
  [249] = {.lex_state = 122},
  [250] = {.lex_state = 122},
  [251] = {.lex_state = 122},
  [252] = {.lex_state = 122},
  [253] = {.lex_state = 122},
  [254] = {.lex_state = 122},
  [255] = {.lex_state = 122},
  [256] = {.lex_state = 36},
  [257] = {.lex_state = 122},
  [258] = {.lex_state = 122},
  [259] = {.lex_state = 122},
  [260] = {.lex_state = 122},
  [261] = {.lex_state = 122},
  [262] = {.lex_state = 122},
  [263] = {.lex_state = 122},
  [264] = {.lex_state = 122},
  [265] = {.lex_state = 122},
  [266] = {.lex_state = 122},
  [267] = {.lex_state = 122},
  [268] = {.lex_state = 122},
  [269] = {.lex_state = 122},
  [270] = {.lex_state = 122},
  [271] = {.lex_state = 122},
  [272] = {.lex_state = 122},
  [273] = {.lex_state = 120},
  [274] = {.lex_state = 122},
  [275] = {.lex_state = 124},
  [276] = {.lex_state = 122},
  [277] = {.lex_state = 122},
  [278] = {.lex_state = 122},
  [279] = {.lex_state = 122},
  [280] = {.lex_state = 122},
  [281] = {.lex_state = 122},
  [282] = {.lex_state = 122},
  [283] = {.lex_state = 122},
  [284] = {.lex_state = 124},
  [285] = {.lex_state = 124},
  [286] = {.lex_state = 124},
  [287] = {.lex_state = 124},
  [288] = {.lex_state = 124},
  [289] = {.lex_state = 124},
  [290] = {.lex_state = 124},
  [291] = {.lex_state = 124},
  [292] = {.lex_state = 124},
  [293] = {.lex_state = 124},
  [294] = {.lex_state = 124},
  [295] = {.lex_state = 124},
  [296] = {.lex_state = 36},
  [297] = {.lex_state = 124},
  [298] = {.lex_state = 124},
  [299] = {.lex_state = 122},
  [300] = {.lex_state = 122},
  [301] = {.lex_state = 122},
  [302] = {.lex_state = 34},
  [303] = {.lex_state = 34},
  [304] = {.lex_state = 122},
  [305] = {.lex_state = 34},
  [306] = {.lex_state = 122},
  [307] = {.lex_state = 34},
  [308] = {.lex_state = 122},
  [309] = {.lex_state = 124},
  [310] = {.lex_state = 120},
  [311] = {.lex_state = 124},
  [312] = {.lex_state = 122},
  [313] = {.lex_state = 122},
  [314] = {.lex_state = 122},
  [315] = {.lex_state = 124},
  [316] = {.lex_state = 124},
  [317] = {.lex_state = 124},
  [318] = {.lex_state = 124},
  [319] = {.lex_state = 124},
  [320] = {.lex_state = 122},
  [321] = {.lex_state = 122},
  [322] = {.lex_state = 124},
  [323] = {.lex_state = 122},
  [324] = {.lex_state = 34},
  [325] = {.lex_state = 35},
  [326] = {.lex_state = 122},
  [327] = {.lex_state = 122},
  [328] = {.lex_state = 122},
  [329] = {.lex_state = 34},
  [330] = {.lex_state = 122},
  [331] = {.lex_state = 122},
  [332] = {.lex_state = 122},
  [333] = {.lex_state = 122},
  [334] = {.lex_state = 122},
  [335] = {.lex_state = 122},
  [336] = {.lex_state = 122},
  [337] = {.lex_state = 122},
  [338] = {.lex_state = 122},
  [339] = {.lex_state = 122},
  [340] = {.lex_state = 122},
  [341] = {.lex_state = 34},
  [342] = {.lex_state = 34},
  [343] = {.lex_state = 124},
  [344] = {.lex_state = 124},
  [345] = {.lex_state = 34},
  [346] = {.lex_state = 122},
  [347] = {.lex_state = 122},
  [348] = {.lex_state = 124},
  [349] = {.lex_state = 124},
  [350] = {.lex_state = 124},
  [351] = {.lex_state = 124},
  [352] = {.lex_state = 124},
  [353] = {.lex_state = 124},
  [354] = {.lex_state = 124},
  [355] = {.lex_state = 124},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_re2c] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_separator] = ACTIONS(1),
    [anon_sym_re2c2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_flags] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_cond] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_variable] = ACTIONS(1),
    [anon_sym_yych] = ACTIONS(1),
    [anon_sym_state] = ACTIONS(1),
    [anon_sym_yybm] = ACTIONS(1),
    [anon_sym_cgoto] = ACTIONS(1),
    [anon_sym_api] = ACTIONS(1),
    [anon_sym_tags] = ACTIONS(1),
    [anon_sym_indent] = ACTIONS(1),
    [anon_sym_yyfill] = ACTIONS(1),
    [anon_sym_eof] = ACTIONS(1),
    [anon_sym_sentinel] = ACTIONS(1),
    [anon_sym_condprefix] = ACTIONS(1),
    [anon_sym_condenumprefix] = ACTIONS(1),
    [anon_sym_labelprefix] = ACTIONS(1),
    [anon_sym_startlabel] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_ignore] = ACTIONS(1),
    [anon_sym_substitute] = ACTIONS(1),
    [anon_sym_fail] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_match_DASHempty] = ACTIONS(1),
    [anon_sym_match_DASHnone] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_functions] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_COLON_EQ_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__code_in_braces_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LBRACE2] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_RBRACE2] = ACTIONS(1),
    [aux_sym__mininum_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_range_token1] = ACTIONS(1),
    [aux_sym_dstring_token1] = ACTIONS(1),
    [aux_sym_sstring_token1] = ACTIONS(1),
    [sym_quote] = ACTIONS(1),
    [sym_ctrl_code] = ACTIONS(1),
    [aux_sym__esc_hex_token1] = ACTIONS(1),
    [aux_sym__esc_hex_token2] = ACTIONS(1),
    [aux_sym__esc_hex_token3] = ACTIONS(1),
    [aux_sym__esc_hex_token4] = ACTIONS(1),
    [aux_sym__esc_hex_token5] = ACTIONS(1),
    [aux_sym__esc_hex_token6] = ACTIONS(1),
    [aux_sym__esc_hex_token7] = ACTIONS(1),
    [aux_sym__esc_hex_token8] = ACTIONS(1),
    [aux_sym__esc_oct_token1] = ACTIONS(1),
    [aux_sym__esc_oct_token2] = ACTIONS(1),
    [sym_hex_digit] = ACTIONS(1),
    [sym_oct_digit] = ACTIONS(1),
    [anon_sym_AT2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_linedir] = ACTIONS(1),
  },
  [1] = {
    [sym_re2c] = STATE(347),
    [sym__block] = STATE(346),
    [sym_global_block] = STATE(346),
    [sym_local_block] = STATE(346),
    [sym_rules_block] = STATE(346),
    [sym_use_block] = STATE(346),
    [sym_max_block] = STATE(346),
    [sym_maxnmatch_block] = STATE(346),
    [sym_getstate_block] = STATE(346),
    [sym_stags_block] = STATE(346),
    [sym_mtags_block] = STATE(346),
    [sym_header_on_block] = STATE(346),
    [sym_header_off_block] = STATE(346),
    [anon_sym_BANGre2c] = ACTIONS(5),
    [anon_sym_BANGlocal] = ACTIONS(7),
    [anon_sym_BANGrules] = ACTIONS(9),
    [anon_sym_BANGuse] = ACTIONS(11),
    [anon_sym_BANGmax] = ACTIONS(13),
    [anon_sym_BANGmaxnmatch] = ACTIONS(15),
    [anon_sym_BANGgetstate] = ACTIONS(17),
    [anon_sym_BANGstags] = ACTIONS(19),
    [anon_sym_BANGmtags] = ACTIONS(21),
    [anon_sym_BANGheader] = ACTIONS(23),
    [sym_ignore_block] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_COLON,
    ACTIONS(35), 1,
      anon_sym_BANGuse,
    ACTIONS(37), 1,
      anon_sym_BANGinclude,
    ACTIONS(39), 1,
      anon_sym_re2c2,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_LT,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      sym_linedir,
    STATE(12), 1,
      sym_condition,
    STATE(42), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(189), 1,
      sym_lookahead,
    STATE(212), 1,
      sym_regex,
    STATE(219), 1,
      sym_pattern,
    STATE(304), 1,
      sym_body,
    STATE(339), 1,
      sym__branch,
    STATE(66), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(229), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(191), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(8), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      aux_sym_body_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [114] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_BANGuse,
    ACTIONS(37), 1,
      anon_sym_BANGinclude,
    ACTIONS(39), 1,
      anon_sym_re2c2,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_LT,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      sym_linedir,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_COLON,
    STATE(12), 1,
      sym_condition,
    STATE(42), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(189), 1,
      sym_lookahead,
    STATE(212), 1,
      sym_regex,
    STATE(219), 1,
      sym_pattern,
    STATE(339), 1,
      sym__branch,
    STATE(340), 1,
      sym_body,
    STATE(66), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(229), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(191), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(8), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      aux_sym_body_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [228] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_BANGuse,
    ACTIONS(37), 1,
      anon_sym_BANGinclude,
    ACTIONS(39), 1,
      anon_sym_re2c2,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_LT,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      sym_linedir,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_COLON,
    STATE(12), 1,
      sym_condition,
    STATE(42), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(189), 1,
      sym_lookahead,
    STATE(212), 1,
      sym_regex,
    STATE(219), 1,
      sym_pattern,
    STATE(306), 1,
      sym_body,
    STATE(339), 1,
      sym__branch,
    STATE(66), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(229), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(191), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(8), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      aux_sym_body_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [342] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_BANGuse,
    ACTIONS(37), 1,
      anon_sym_BANGinclude,
    ACTIONS(39), 1,
      anon_sym_re2c2,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_LT,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      sym_linedir,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_condition,
    STATE(42), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(189), 1,
      sym_lookahead,
    STATE(212), 1,
      sym_regex,
    STATE(219), 1,
      sym_pattern,
    STATE(253), 1,
      sym_body,
    STATE(339), 1,
      sym__branch,
    STATE(66), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(229), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(191), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(8), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      aux_sym_body_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [453] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_BANGuse,
    ACTIONS(37), 1,
      anon_sym_BANGinclude,
    ACTIONS(39), 1,
      anon_sym_re2c2,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_LT,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      sym_linedir,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_condition,
    STATE(42), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(189), 1,
      sym_lookahead,
    STATE(212), 1,
      sym_regex,
    STATE(219), 1,
      sym_pattern,
    STATE(321), 1,
      sym_body,
    STATE(339), 1,
      sym__branch,
    STATE(66), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(229), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(191), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(8), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      aux_sym_body_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [564] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_BANGuse,
    ACTIONS(37), 1,
      anon_sym_BANGinclude,
    ACTIONS(39), 1,
      anon_sym_re2c2,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_LT,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      sym_linedir,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_condition,
    STATE(42), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(189), 1,
      sym_lookahead,
    STATE(212), 1,
      sym_regex,
    STATE(219), 1,
      sym_pattern,
    STATE(252), 1,
      sym_body,
    STATE(339), 1,
      sym__branch,
    STATE(66), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(229), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(191), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(8), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      aux_sym_body_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [675] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_BANGuse,
    ACTIONS(37), 1,
      anon_sym_BANGinclude,
    ACTIONS(39), 1,
      anon_sym_re2c2,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_LT,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      sym_linedir,
    STATE(12), 1,
      sym_condition,
    STATE(42), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(189), 1,
      sym_lookahead,
    STATE(212), 1,
      sym_regex,
    STATE(219), 1,
      sym_pattern,
    STATE(339), 1,
      sym__branch,
    STATE(66), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(229), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(191), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(9), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      aux_sym_body_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [783] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_BANGuse,
    ACTIONS(91), 1,
      anon_sym_BANGinclude,
    ACTIONS(94), 1,
      anon_sym_re2c2,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(103), 1,
      anon_sym_STAR,
    ACTIONS(106), 1,
      anon_sym_DOLLAR,
    ACTIONS(109), 1,
      anon_sym_,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      aux_sym_dstring_token1,
    ACTIONS(121), 1,
      aux_sym_sstring_token1,
    ACTIONS(124), 1,
      anon_sym_AT2,
    ACTIONS(127), 1,
      anon_sym_POUND,
    ACTIONS(130), 1,
      sym_linedir,
    STATE(12), 1,
      sym_condition,
    STATE(42), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(189), 1,
      sym_lookahead,
    STATE(212), 1,
      sym_regex,
    STATE(219), 1,
      sym_pattern,
    STATE(339), 1,
      sym__branch,
    STATE(66), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(229), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(191), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(9), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      aux_sym_body_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [891] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(118), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(135), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(133), 14,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [957] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(114), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(153), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(151), 14,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1023] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    STATE(59), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(128), 1,
      sym_shortcut,
    STATE(132), 1,
      sym_action,
    STATE(186), 1,
      sym_pattern,
    STATE(189), 1,
      sym_lookahead,
    STATE(212), 1,
      sym_regex,
    STATE(339), 1,
      sym__branch,
    ACTIONS(159), 2,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
    STATE(60), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(190), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(179), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [1114] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(114), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(153), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(151), 13,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1179] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(118), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(135), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(133), 13,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1244] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(114), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(153), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(151), 12,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1308] = 20,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_flags,
    ACTIONS(167), 1,
      anon_sym_define,
    ACTIONS(169), 1,
      anon_sym_cond,
    ACTIONS(171), 1,
      anon_sym_label,
    ACTIONS(173), 1,
      anon_sym_variable,
    ACTIONS(175), 1,
      anon_sym_yych,
    ACTIONS(177), 1,
      anon_sym_state,
    ACTIONS(179), 1,
      anon_sym_yybm,
    ACTIONS(181), 1,
      anon_sym_cgoto,
    ACTIONS(183), 1,
      anon_sym_api,
    ACTIONS(185), 1,
      anon_sym_tags,
    ACTIONS(187), 1,
      anon_sym_indent,
    ACTIONS(189), 1,
      anon_sym_yyfill,
    ACTIONS(191), 1,
      anon_sym_eof,
    ACTIONS(193), 1,
      anon_sym_sentinel,
    ACTIONS(195), 1,
      anon_sym_condprefix,
    ACTIONS(197), 1,
      anon_sym_condenumprefix,
    ACTIONS(199), 1,
      anon_sym_startlabel,
    STATE(314), 18,
      sym_set_flags,
      sym_define,
      sym_set_cond,
      sym_set_label,
      sym_set_variable,
      sym_set_yych,
      sym_set_state,
      sym_set_yybm,
      sym_set_cgoto,
      sym_set_api,
      sym_set_tags,
      sym_set_indent,
      sym_set_yyfill,
      sym_set_eof,
      sym_set_sentinel,
      sym_set_condprefix,
      sym_set_condenumprefix,
      sym_set_startlabel,
  [1386] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(118), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(135), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(133), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1450] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(118), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(135), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(133), 12,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1514] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(114), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(153), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(151), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1578] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(114), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(153), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(151), 11,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1641] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(118), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(135), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(133), 11,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1704] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(114), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(153), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(151), 11,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1767] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(118), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(135), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(133), 11,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1830] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(118), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(135), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(133), 11,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1893] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(114), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(153), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(151), 11,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1956] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(114), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(153), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(151), 10,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [2018] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(118), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(135), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(133), 10,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [2080] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(189), 1,
      sym_lookahead,
    STATE(279), 1,
      sym_regex,
    STATE(339), 1,
      sym__branch,
    STATE(69), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(221), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(201), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2149] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(339), 1,
      sym__branch,
    STATE(86), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(199), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(208), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2212] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    STATE(58), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(339), 1,
      sym__branch,
    STATE(79), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(326), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(204), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2275] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(339), 1,
      sym__branch,
    STATE(81), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(199), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(209), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2338] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(339), 1,
      sym__branch,
    STATE(62), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(199), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(181), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2401] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    STATE(87), 1,
      sym__atom,
    STATE(57), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(215), 6,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2454] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(245), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2509] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(268), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2564] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(244), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2619] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(243), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2674] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(278), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2729] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(274), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2784] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(267), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2839] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(171), 1,
      sym__branch,
    STATE(86), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(206), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2898] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(46), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(171), 1,
      sym__branch,
    STATE(66), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(194), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2957] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(266), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3012] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(265), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3067] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(264), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3122] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(253), 1,
      anon_sym_,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      aux_sym_dstring_token1,
    ACTIONS(265), 1,
      aux_sym_sstring_token1,
    ACTIONS(268), 1,
      anon_sym_AT2,
    ACTIONS(271), 1,
      anon_sym_POUND,
    STATE(46), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(339), 1,
      sym__branch,
    STATE(94), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(241), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3181] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(269), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3236] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(171), 1,
      sym__branch,
    STATE(81), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(207), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3295] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(263), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3350] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(262), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3405] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(257), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3460] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(258), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3515] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(171), 1,
      sym__branch,
    STATE(69), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(198), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3574] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(259), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3629] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(260), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3684] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_error,
    ACTIONS(239), 1,
      anon_sym_functions,
    ACTIONS(241), 1,
      anon_sym_free_DASHform,
    ACTIONS(245), 1,
      anon_sym_DASH,
    STATE(261), 1,
      sym__conf_value,
    ACTIONS(233), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(235), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(243), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(231), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(277), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3739] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(288), 1,
      aux_sym_dstring_token1,
    ACTIONS(291), 1,
      aux_sym_sstring_token1,
    ACTIONS(294), 1,
      anon_sym_AT2,
    ACTIONS(297), 1,
      anon_sym_POUND,
    STATE(87), 1,
      sym__atom,
    STATE(57), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(280), 6,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3792] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(171), 1,
      sym__branch,
    STATE(79), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(202), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3851] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(171), 1,
      sym__branch,
    STATE(60), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(178), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3910] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    STATE(87), 1,
      sym__atom,
    STATE(33), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(300), 6,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3963] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_dstring_token1,
    ACTIONS(57), 1,
      aux_sym_sstring_token1,
    ACTIONS(59), 1,
      anon_sym_AT2,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__atom,
    STATE(171), 1,
      sym__branch,
    STATE(62), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(183), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4022] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    STATE(64), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(300), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4074] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      aux_sym_dstring_token1,
    ACTIONS(291), 1,
      aux_sym_sstring_token1,
    ACTIONS(294), 1,
      anon_sym_AT2,
    ACTIONS(297), 1,
      anon_sym_POUND,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    STATE(63), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(280), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4126] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    STATE(63), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(215), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4178] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    STATE(68), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(215), 4,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4229] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    STATE(67), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(300), 4,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4280] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    STATE(70), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(215), 4,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4331] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      aux_sym_dstring_token1,
    ACTIONS(291), 1,
      aux_sym_sstring_token1,
    ACTIONS(294), 1,
      anon_sym_AT2,
    ACTIONS(297), 1,
      anon_sym_POUND,
    ACTIONS(311), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    STATE(68), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(280), 4,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4382] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    STATE(65), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(300), 4,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4433] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      aux_sym_dstring_token1,
    ACTIONS(291), 1,
      aux_sym_sstring_token1,
    ACTIONS(294), 1,
      anon_sym_AT2,
    ACTIONS(297), 1,
      anon_sym_POUND,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    STATE(70), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(280), 4,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4484] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    STATE(69), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(164), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4534] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    STATE(94), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(164), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4584] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      aux_sym_dstring_token1,
    ACTIONS(291), 1,
      aux_sym_sstring_token1,
    ACTIONS(294), 1,
      anon_sym_AT2,
    ACTIONS(297), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    ACTIONS(280), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(73), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4634] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      aux_sym_dstring_token1,
    ACTIONS(291), 1,
      aux_sym_sstring_token1,
    ACTIONS(294), 1,
      anon_sym_AT2,
    ACTIONS(297), 1,
      anon_sym_POUND,
    ACTIONS(322), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    ACTIONS(280), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(74), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4684] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      aux_sym_dstring_token1,
    ACTIONS(291), 1,
      aux_sym_sstring_token1,
    ACTIONS(294), 1,
      anon_sym_AT2,
    ACTIONS(297), 1,
      anon_sym_POUND,
    ACTIONS(325), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    ACTIONS(280), 3,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
    STATE(75), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4734] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    STATE(81), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(164), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4784] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    ACTIONS(215), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(73), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4834] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    STATE(62), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(164), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4884] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    ACTIONS(300), 3,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
    STATE(88), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4934] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    STATE(79), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(164), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4984] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    ACTIONS(300), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(77), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5034] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    STATE(66), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(164), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5084] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    STATE(87), 1,
      sym__atom,
    STATE(60), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(164), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5134] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    ACTIONS(215), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(74), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5184] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    STATE(86), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(164), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5234] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    ACTIONS(300), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(84), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5284] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_LBRACE2,
    STATE(144), 2,
      sym_close,
      sym_limits,
    ACTIONS(338), 3,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(334), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [5320] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    ACTIONS(215), 3,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
    STATE(75), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5370] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(342), 1,
      anon_sym_CARET,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(100), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5417] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(346), 1,
      anon_sym_CARET,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(100), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5464] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(350), 1,
      anon_sym_CARET,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(100), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5511] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(354), 1,
      anon_sym_CARET,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(100), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5558] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(358), 1,
      anon_sym_CARET,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(100), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5605] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    ACTIONS(300), 2,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(99), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5654] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(362), 1,
      anon_sym_CARET,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(100), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5701] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      aux_sym_dstring_token1,
    ACTIONS(291), 1,
      aux_sym_sstring_token1,
    ACTIONS(294), 1,
      anon_sym_AT2,
    ACTIONS(297), 1,
      anon_sym_POUND,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    ACTIONS(280), 2,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(96), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5750] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(369), 1,
      anon_sym_CARET,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(100), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5797] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(373), 1,
      anon_sym_CARET,
    ACTIONS(375), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(100), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5844] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    ACTIONS(225), 1,
      anon_sym_AT2,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__atom,
    ACTIONS(215), 2,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(96), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(123), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5893] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(116), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(379), 19,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [5965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 19,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [5993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(387), 19,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 19,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LBRACE,
    ACTIONS(395), 19,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    ACTIONS(399), 19,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6105] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(403), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(122), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6149] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(122), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
    ACTIONS(407), 19,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
    ACTIONS(411), 19,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6249] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(122), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LBRACE,
    ACTIONS(417), 19,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
    ACTIONS(421), 19,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6349] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(425), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(116), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    ACTIONS(427), 19,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6421] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_RBRACK,
    ACTIONS(433), 1,
      aux_sym_range_token1,
    ACTIONS(436), 1,
      aux_sym_literal_token1,
    ACTIONS(448), 1,
      aux_sym__esc_oct_token2,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(439), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(116), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(445), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(442), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 19,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6493] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(451), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(116), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    ACTIONS(453), 19,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6565] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(122), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6609] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(122), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6653] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(116), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_LBRACE,
    ACTIONS(463), 19,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6725] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(122), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6769] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(122), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6813] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(122), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(147), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6857] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    STATE(141), 1,
      sym_action,
    ACTIONS(475), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6888] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym_action,
    ACTIONS(479), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 17,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    ACTIONS(487), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
    ACTIONS(491), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(479), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [7020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    ACTIONS(495), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [7045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    ACTIONS(499), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [7070] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_range_token1,
    ACTIONS(141), 1,
      aux_sym_literal_token1,
    ACTIONS(149), 1,
      aux_sym__esc_oct_token2,
    STATE(150), 1,
      sym_code_unit,
    ACTIONS(143), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(148), 2,
      sym_literal,
      sym__escape,
    ACTIONS(147), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(145), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [7107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_EQ,
    ACTIONS(411), 15,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [7159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
    ACTIONS(509), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [7184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    ACTIONS(513), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [7209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    ACTIONS(475), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [7234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [7259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RBRACK,
    ACTIONS(531), 1,
      aux_sym_range_token1,
    ACTIONS(534), 13,
      aux_sym_literal_token1,
      sym_quote,
      sym_ctrl_code,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
      aux_sym__esc_oct_token1,
      aux_sym__esc_oct_token2,
  [7394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_RBRACK,
      aux_sym_range_token1,
    ACTIONS(538), 13,
      aux_sym_literal_token1,
      sym_quote,
      sym_ctrl_code,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
      aux_sym__esc_oct_token1,
      aux_sym__esc_oct_token2,
  [7417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 2,
      anon_sym_RBRACK,
      aux_sym_range_token1,
    ACTIONS(542), 13,
      aux_sym_literal_token1,
      sym_quote,
      sym_ctrl_code,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
      aux_sym__esc_oct_token1,
      aux_sym__esc_oct_token2,
  [7440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 2,
      anon_sym_RBRACK,
      aux_sym_range_token1,
    ACTIONS(546), 13,
      aux_sym_literal_token1,
      sym_quote,
      sym_ctrl_code,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
      aux_sym__esc_oct_token1,
      aux_sym__esc_oct_token2,
  [7463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 2,
      anon_sym_RBRACK,
      aux_sym_range_token1,
    ACTIONS(550), 13,
      aux_sym_literal_token1,
      sym_quote,
      sym_ctrl_code,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
      aux_sym__esc_oct_token1,
      aux_sym__esc_oct_token2,
  [7486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 2,
      anon_sym_RBRACK,
      aux_sym_range_token1,
    ACTIONS(554), 13,
      aux_sym_literal_token1,
      sym_quote,
      sym_ctrl_code,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
      aux_sym__esc_oct_token1,
      aux_sym__esc_oct_token2,
  [7509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 14,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 14,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 14,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 14,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 14,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 14,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7629] = 8,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
    ACTIONS(570), 1,
      anon_sym_COLON,
    ACTIONS(572), 1,
      anon_sym_format,
    ACTIONS(574), 1,
      anon_sym_separator,
    STATE(169), 1,
      sym_block_list,
    STATE(184), 1,
      aux_sym_block_list_repeat1,
    STATE(170), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7657] = 8,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COLON,
    ACTIONS(572), 1,
      anon_sym_format,
    ACTIONS(574), 1,
      anon_sym_separator,
    ACTIONS(576), 1,
      ts_builtin_sym_end,
    STATE(175), 1,
      sym_block_list,
    STATE(184), 1,
      aux_sym_block_list_repeat1,
    STATE(168), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7685] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
    ACTIONS(584), 1,
      aux_sym__code_in_braces_token3,
    STATE(310), 1,
      sym_code_block,
    STATE(167), 2,
      sym__code_in_braces,
      aux_sym_code_block_repeat1,
    ACTIONS(582), 3,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [7710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 9,
      anon_sym_DOT,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7725] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
    ACTIONS(596), 1,
      aux_sym__code_in_braces_token3,
    STATE(163), 2,
      sym__code_in_braces,
      aux_sym_code_block_repeat1,
    ACTIONS(593), 3,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [7747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 8,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
  [7761] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    ACTIONS(610), 1,
      aux_sym__code_in_braces_token3,
    STATE(163), 2,
      sym__code_in_braces,
      aux_sym_code_block_repeat1,
    ACTIONS(607), 3,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [7783] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
    ACTIONS(622), 1,
      aux_sym__code_in_braces_token3,
    STATE(165), 2,
      sym__code_in_braces,
      aux_sym_code_block_repeat1,
    ACTIONS(619), 3,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [7805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
    ACTIONS(629), 1,
      aux_sym__code_in_braces_token3,
    STATE(163), 2,
      sym__code_in_braces,
      aux_sym_code_block_repeat1,
    ACTIONS(627), 3,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [7827] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_format,
    ACTIONS(574), 1,
      anon_sym_separator,
    ACTIONS(631), 1,
      ts_builtin_sym_end,
    STATE(173), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7846] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_format,
    ACTIONS(574), 1,
      anon_sym_separator,
    ACTIONS(633), 1,
      ts_builtin_sym_end,
    STATE(174), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7865] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_format,
    ACTIONS(574), 1,
      anon_sym_separator,
    ACTIONS(633), 1,
      ts_builtin_sym_end,
    STATE(173), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_PIPE,
    ACTIONS(635), 6,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [7899] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_format,
    ACTIONS(574), 1,
      anon_sym_separator,
    ACTIONS(639), 1,
      ts_builtin_sym_end,
    STATE(173), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7918] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    ACTIONS(643), 1,
      anon_sym_format,
    ACTIONS(646), 1,
      anon_sym_separator,
    STATE(173), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7937] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_format,
    ACTIONS(574), 1,
      anon_sym_separator,
    ACTIONS(649), 1,
      ts_builtin_sym_end,
    STATE(173), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7956] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_format,
    ACTIONS(574), 1,
      anon_sym_separator,
    ACTIONS(631), 1,
      ts_builtin_sym_end,
    STATE(172), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 7,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [7988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      aux_sym__code_in_braces_token3,
    ACTIONS(653), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [8002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_BSLASH,
    ACTIONS(651), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [8016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_PIPE,
    ACTIONS(657), 1,
      anon_sym_BSLASH,
    ACTIONS(659), 4,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
  [8032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      aux_sym__code_in_braces_token3,
    ACTIONS(661), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [8046] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_PIPE,
    ACTIONS(665), 1,
      anon_sym_BSLASH,
    ACTIONS(659), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [8061] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym_identifier,
    ACTIONS(669), 1,
      anon_sym_GT,
    ACTIONS(671), 1,
      anon_sym_BANG,
    ACTIONS(673), 1,
      anon_sym_STAR,
    STATE(231), 1,
      aux_sym__clist_repeat1,
  [8080] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_BSLASH,
    ACTIONS(651), 4,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [8093] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COLON,
    STATE(185), 1,
      aux_sym_block_list_repeat1,
    ACTIONS(675), 3,
      ts_builtin_sym_end,
      anon_sym_format,
      anon_sym_separator,
  [8108] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COLON,
    STATE(185), 1,
      aux_sym_block_list_repeat1,
    ACTIONS(677), 3,
      ts_builtin_sym_end,
      anon_sym_format,
      anon_sym_separator,
  [8123] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym_shortcut,
    STATE(140), 1,
      sym_action,
    ACTIONS(682), 2,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
  [8140] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COLON,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
    STATE(184), 1,
      aux_sym_block_list_repeat1,
    STATE(300), 1,
      sym_block_list,
  [8156] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    STATE(328), 2,
      sym_dstring,
      sym_sstring,
  [8170] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(688), 4,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [8180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_SLASH,
    ACTIONS(688), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [8192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_PIPE,
    ACTIONS(692), 1,
      anon_sym_BSLASH,
    ACTIONS(659), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
  [8206] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    STATE(255), 2,
      sym_dstring,
      sym_sstring,
  [8220] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_dstring_token1,
    ACTIONS(223), 1,
      aux_sym_sstring_token1,
    STATE(254), 2,
      sym_dstring,
      sym_sstring,
  [8234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_BSLASH,
    ACTIONS(651), 3,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [8246] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(694), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_format,
      anon_sym_separator,
  [8256] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COLON,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
    STATE(184), 1,
      aux_sym_block_list_repeat1,
    STATE(301), 1,
      sym_block_list,
  [8272] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COLON,
    ACTIONS(698), 1,
      ts_builtin_sym_end,
    STATE(184), 1,
      aux_sym_block_list_repeat1,
    STATE(299), 1,
      sym_block_list,
  [8288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_BSLASH,
    ACTIONS(651), 3,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [8300] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(702), 4,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [8310] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(706), 1,
      anon_sym_GT,
    ACTIONS(708), 1,
      anon_sym_STAR,
    STATE(218), 1,
      aux_sym__clist_repeat1,
  [8326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_PIPE,
    ACTIONS(700), 1,
      anon_sym_BSLASH,
    ACTIONS(659), 2,
      anon_sym_SEMI,
      anon_sym_SLASH,
  [8340] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_BSLASH,
    ACTIONS(651), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [8351] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(712), 3,
      ts_builtin_sym_end,
      anon_sym_format,
      anon_sym_separator,
  [8360] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_PIPE,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    ACTIONS(710), 1,
      anon_sym_BSLASH,
  [8373] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_RBRACE2,
    ACTIONS(716), 1,
      aux_sym__mininum_token1,
    STATE(251), 1,
      sym__maximum,
  [8386] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_BSLASH,
    ACTIONS(651), 2,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [8397] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_BSLASH,
    ACTIONS(651), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [8408] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_PIPE,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
    ACTIONS(718), 1,
      anon_sym_BSLASH,
  [8421] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_PIPE,
    ACTIONS(659), 1,
      anon_sym_SEMI,
    ACTIONS(720), 1,
      anon_sym_BSLASH,
  [8434] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_SEMI,
    ACTIONS(724), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
  [8445] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(726), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [8454] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(728), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [8463] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(730), 1,
      aux_sym__mininum_token1,
    STATE(308), 1,
      sym__exactly,
    STATE(309), 1,
      sym__mininum,
  [8476] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(732), 3,
      ts_builtin_sym_end,
      anon_sym_format,
      anon_sym_separator,
  [8485] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_EQ,
    ACTIONS(734), 2,
      anon_sym_COLON,
      anon_sym_AT,
  [8496] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COLON,
    STATE(291), 1,
      sym__option_name,
  [8506] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym_identifier,
    STATE(217), 1,
      aux_sym__clist_repeat1,
  [8516] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_identifier,
    STATE(217), 1,
      aux_sym__clist_repeat1,
  [8526] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_action,
  [8536] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_GT,
    ACTIONS(747), 1,
      anon_sym_COMMA,
  [8546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_SEMI,
    ACTIONS(749), 1,
      anon_sym_SLASH,
  [8556] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COLON,
    STATE(295), 1,
      sym__option_name,
  [8566] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COLON,
    STATE(294), 1,
      sym__option_name,
  [8576] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COLON,
    STATE(293), 1,
      sym__option_name,
  [8586] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_on,
    ACTIONS(753), 1,
      anon_sym_off,
  [8596] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_COMMA2,
    ACTIONS(757), 1,
      anon_sym_RBRACE2,
  [8606] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_GT,
  [8616] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COLON,
    STATE(292), 1,
      sym__option_name,
  [8626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_LBRACE,
    ACTIONS(761), 1,
      anon_sym_SLASH,
  [8636] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COLON,
    STATE(290), 1,
      sym__option_name,
  [8646] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym_identifier,
    STATE(217), 1,
      aux_sym__clist_repeat1,
  [8656] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COLON,
    STATE(289), 1,
      sym__option_name,
  [8666] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COLON,
    STATE(242), 1,
      sym__option_name,
  [8676] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COLON,
    STATE(288), 1,
      sym__option_name,
  [8686] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(763), 1,
      ts_builtin_sym_end,
    ACTIONS(765), 1,
      anon_sym_COLON,
  [8696] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COLON,
    STATE(287), 1,
      sym__option_name,
  [8706] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COLON,
    STATE(286), 1,
      sym__option_name,
  [8716] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(767), 1,
      anon_sym_GT,
  [8726] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COLON,
    STATE(285), 1,
      sym__option_name,
  [8736] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COLON,
    STATE(284), 1,
      sym__option_name,
  [8746] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_PIPE,
    ACTIONS(769), 1,
      anon_sym_BSLASH,
  [8756] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_EQ,
  [8763] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_SEMI,
  [8770] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_SEMI,
  [8777] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_SEMI,
  [8784] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_SEMI,
  [8791] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_SEMI,
  [8798] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_SEMI,
  [8805] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_SEMI,
  [8812] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_RBRACE2,
  [8819] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_RBRACE2,
  [8826] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(791), 1,
      ts_builtin_sym_end,
  [8833] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(793), 1,
      ts_builtin_sym_end,
  [8840] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_SEMI,
  [8847] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_SEMI,
  [8854] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(799), 1,
      aux_sym__option_name_token1,
  [8861] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_SEMI,
  [8868] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_SEMI,
  [8875] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_SEMI,
  [8882] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_SEMI,
  [8889] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_SEMI,
  [8896] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_SEMI,
  [8903] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_SEMI,
  [8910] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_SEMI,
  [8917] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_SEMI,
  [8924] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_SEMI,
  [8931] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_SEMI,
  [8938] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_SEMI,
  [8945] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_SEMI,
  [8952] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(827), 1,
      sym_identifier,
  [8959] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_SEMI,
  [8966] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_SEMI,
  [8973] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(833), 1,
      aux_sym_number_token1,
  [8980] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_SEMI,
  [8987] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_EQ,
  [8994] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_SEMI,
  [9001] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_SEMI,
  [9008] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_SEMI,
  [9015] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_SEMI,
  [9022] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(847), 1,
      ts_builtin_sym_end,
  [9029] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(849), 1,
      ts_builtin_sym_end,
  [9036] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(851), 1,
      ts_builtin_sym_end,
  [9043] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
  [9050] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_EQ,
  [9057] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_EQ,
  [9064] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_EQ,
  [9071] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_EQ,
  [9078] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_EQ,
  [9085] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_EQ,
  [9092] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_EQ,
  [9099] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_EQ,
  [9106] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_EQ,
  [9113] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_EQ,
  [9120] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_EQ,
  [9127] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_EQ,
  [9134] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym__option_name_token1,
  [9141] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_EQ,
  [9148] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_EQ,
  [9155] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(883), 1,
      ts_builtin_sym_end,
  [9162] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(885), 1,
      ts_builtin_sym_end,
  [9169] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(887), 1,
      ts_builtin_sym_end,
  [9176] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(889), 1,
      aux_sym__block_name_token1,
  [9183] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(891), 1,
      aux_sym__block_name_token1,
  [9190] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(893), 1,
      ts_builtin_sym_end,
  [9197] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(895), 1,
      aux_sym__block_name_token1,
  [9204] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(897), 1,
      ts_builtin_sym_end,
  [9211] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(899), 1,
      aux_sym__block_name_token1,
  [9218] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_RBRACE2,
  [9225] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_COMMA2,
  [9232] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
  [9239] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COLON,
  [9246] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(909), 1,
      sym_identifier,
  [9253] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_GT,
  [9260] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_SEMI,
  [9267] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_EQ,
  [9274] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_EQ,
  [9281] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_EQ,
  [9288] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_EQ,
  [9295] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_EQ,
  [9302] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_SEMI,
  [9309] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(927), 1,
      ts_builtin_sym_end,
  [9316] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_COLON,
  [9323] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_identifier,
  [9330] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym_oct_digit,
  [9337] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym_hex_digit,
  [9344] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
  [9351] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_GT,
  [9358] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_SEMI,
  [9365] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(939), 1,
      aux_sym__block_name_token1,
  [9372] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_re2c,
  [9379] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_re2c,
  [9386] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_re2c,
  [9393] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_re2c,
  [9400] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_re2c,
  [9407] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_re2c,
  [9414] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_re2c,
  [9421] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_re2c,
  [9428] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_re2c,
  [9435] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_PIPE,
  [9442] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(959), 1,
      ts_builtin_sym_end,
  [9449] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(961), 1,
      aux_sym__block_name_token1,
  [9456] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(963), 1,
      aux_sym__block_name_token1,
  [9463] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_COLON,
  [9470] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_COLON,
  [9477] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(969), 1,
      aux_sym__block_name_token1,
  [9484] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(971), 1,
      ts_builtin_sym_end,
  [9491] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(973), 1,
      ts_builtin_sym_end,
  [9498] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_COLON,
  [9505] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_COLON,
  [9512] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_COLON,
  [9519] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_COLON,
  [9526] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_COLON,
  [9533] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_COLON,
  [9540] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_COLON,
  [9547] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 114,
  [SMALL_STATE(4)] = 228,
  [SMALL_STATE(5)] = 342,
  [SMALL_STATE(6)] = 453,
  [SMALL_STATE(7)] = 564,
  [SMALL_STATE(8)] = 675,
  [SMALL_STATE(9)] = 783,
  [SMALL_STATE(10)] = 891,
  [SMALL_STATE(11)] = 957,
  [SMALL_STATE(12)] = 1023,
  [SMALL_STATE(13)] = 1114,
  [SMALL_STATE(14)] = 1179,
  [SMALL_STATE(15)] = 1244,
  [SMALL_STATE(16)] = 1308,
  [SMALL_STATE(17)] = 1386,
  [SMALL_STATE(18)] = 1450,
  [SMALL_STATE(19)] = 1514,
  [SMALL_STATE(20)] = 1578,
  [SMALL_STATE(21)] = 1641,
  [SMALL_STATE(22)] = 1704,
  [SMALL_STATE(23)] = 1767,
  [SMALL_STATE(24)] = 1830,
  [SMALL_STATE(25)] = 1893,
  [SMALL_STATE(26)] = 1956,
  [SMALL_STATE(27)] = 2018,
  [SMALL_STATE(28)] = 2080,
  [SMALL_STATE(29)] = 2149,
  [SMALL_STATE(30)] = 2212,
  [SMALL_STATE(31)] = 2275,
  [SMALL_STATE(32)] = 2338,
  [SMALL_STATE(33)] = 2401,
  [SMALL_STATE(34)] = 2454,
  [SMALL_STATE(35)] = 2509,
  [SMALL_STATE(36)] = 2564,
  [SMALL_STATE(37)] = 2619,
  [SMALL_STATE(38)] = 2674,
  [SMALL_STATE(39)] = 2729,
  [SMALL_STATE(40)] = 2784,
  [SMALL_STATE(41)] = 2839,
  [SMALL_STATE(42)] = 2898,
  [SMALL_STATE(43)] = 2957,
  [SMALL_STATE(44)] = 3012,
  [SMALL_STATE(45)] = 3067,
  [SMALL_STATE(46)] = 3122,
  [SMALL_STATE(47)] = 3181,
  [SMALL_STATE(48)] = 3236,
  [SMALL_STATE(49)] = 3295,
  [SMALL_STATE(50)] = 3350,
  [SMALL_STATE(51)] = 3405,
  [SMALL_STATE(52)] = 3460,
  [SMALL_STATE(53)] = 3515,
  [SMALL_STATE(54)] = 3574,
  [SMALL_STATE(55)] = 3629,
  [SMALL_STATE(56)] = 3684,
  [SMALL_STATE(57)] = 3739,
  [SMALL_STATE(58)] = 3792,
  [SMALL_STATE(59)] = 3851,
  [SMALL_STATE(60)] = 3910,
  [SMALL_STATE(61)] = 3963,
  [SMALL_STATE(62)] = 4022,
  [SMALL_STATE(63)] = 4074,
  [SMALL_STATE(64)] = 4126,
  [SMALL_STATE(65)] = 4178,
  [SMALL_STATE(66)] = 4229,
  [SMALL_STATE(67)] = 4280,
  [SMALL_STATE(68)] = 4331,
  [SMALL_STATE(69)] = 4382,
  [SMALL_STATE(70)] = 4433,
  [SMALL_STATE(71)] = 4484,
  [SMALL_STATE(72)] = 4534,
  [SMALL_STATE(73)] = 4584,
  [SMALL_STATE(74)] = 4634,
  [SMALL_STATE(75)] = 4684,
  [SMALL_STATE(76)] = 4734,
  [SMALL_STATE(77)] = 4784,
  [SMALL_STATE(78)] = 4834,
  [SMALL_STATE(79)] = 4884,
  [SMALL_STATE(80)] = 4934,
  [SMALL_STATE(81)] = 4984,
  [SMALL_STATE(82)] = 5034,
  [SMALL_STATE(83)] = 5084,
  [SMALL_STATE(84)] = 5134,
  [SMALL_STATE(85)] = 5184,
  [SMALL_STATE(86)] = 5234,
  [SMALL_STATE(87)] = 5284,
  [SMALL_STATE(88)] = 5320,
  [SMALL_STATE(89)] = 5370,
  [SMALL_STATE(90)] = 5417,
  [SMALL_STATE(91)] = 5464,
  [SMALL_STATE(92)] = 5511,
  [SMALL_STATE(93)] = 5558,
  [SMALL_STATE(94)] = 5605,
  [SMALL_STATE(95)] = 5654,
  [SMALL_STATE(96)] = 5701,
  [SMALL_STATE(97)] = 5750,
  [SMALL_STATE(98)] = 5797,
  [SMALL_STATE(99)] = 5844,
  [SMALL_STATE(100)] = 5893,
  [SMALL_STATE(101)] = 5937,
  [SMALL_STATE(102)] = 5965,
  [SMALL_STATE(103)] = 5993,
  [SMALL_STATE(104)] = 6021,
  [SMALL_STATE(105)] = 6049,
  [SMALL_STATE(106)] = 6077,
  [SMALL_STATE(107)] = 6105,
  [SMALL_STATE(108)] = 6149,
  [SMALL_STATE(109)] = 6193,
  [SMALL_STATE(110)] = 6221,
  [SMALL_STATE(111)] = 6249,
  [SMALL_STATE(112)] = 6293,
  [SMALL_STATE(113)] = 6321,
  [SMALL_STATE(114)] = 6349,
  [SMALL_STATE(115)] = 6393,
  [SMALL_STATE(116)] = 6421,
  [SMALL_STATE(117)] = 6465,
  [SMALL_STATE(118)] = 6493,
  [SMALL_STATE(119)] = 6537,
  [SMALL_STATE(120)] = 6565,
  [SMALL_STATE(121)] = 6609,
  [SMALL_STATE(122)] = 6653,
  [SMALL_STATE(123)] = 6697,
  [SMALL_STATE(124)] = 6725,
  [SMALL_STATE(125)] = 6769,
  [SMALL_STATE(126)] = 6813,
  [SMALL_STATE(127)] = 6857,
  [SMALL_STATE(128)] = 6888,
  [SMALL_STATE(129)] = 6919,
  [SMALL_STATE(130)] = 6945,
  [SMALL_STATE(131)] = 6970,
  [SMALL_STATE(132)] = 6995,
  [SMALL_STATE(133)] = 7020,
  [SMALL_STATE(134)] = 7045,
  [SMALL_STATE(135)] = 7070,
  [SMALL_STATE(136)] = 7107,
  [SMALL_STATE(137)] = 7134,
  [SMALL_STATE(138)] = 7159,
  [SMALL_STATE(139)] = 7184,
  [SMALL_STATE(140)] = 7209,
  [SMALL_STATE(141)] = 7234,
  [SMALL_STATE(142)] = 7259,
  [SMALL_STATE(143)] = 7281,
  [SMALL_STATE(144)] = 7303,
  [SMALL_STATE(145)] = 7325,
  [SMALL_STATE(146)] = 7347,
  [SMALL_STATE(147)] = 7369,
  [SMALL_STATE(148)] = 7394,
  [SMALL_STATE(149)] = 7417,
  [SMALL_STATE(150)] = 7440,
  [SMALL_STATE(151)] = 7463,
  [SMALL_STATE(152)] = 7486,
  [SMALL_STATE(153)] = 7509,
  [SMALL_STATE(154)] = 7529,
  [SMALL_STATE(155)] = 7549,
  [SMALL_STATE(156)] = 7569,
  [SMALL_STATE(157)] = 7589,
  [SMALL_STATE(158)] = 7609,
  [SMALL_STATE(159)] = 7629,
  [SMALL_STATE(160)] = 7657,
  [SMALL_STATE(161)] = 7685,
  [SMALL_STATE(162)] = 7710,
  [SMALL_STATE(163)] = 7725,
  [SMALL_STATE(164)] = 7747,
  [SMALL_STATE(165)] = 7761,
  [SMALL_STATE(166)] = 7783,
  [SMALL_STATE(167)] = 7805,
  [SMALL_STATE(168)] = 7827,
  [SMALL_STATE(169)] = 7846,
  [SMALL_STATE(170)] = 7865,
  [SMALL_STATE(171)] = 7884,
  [SMALL_STATE(172)] = 7899,
  [SMALL_STATE(173)] = 7918,
  [SMALL_STATE(174)] = 7937,
  [SMALL_STATE(175)] = 7956,
  [SMALL_STATE(176)] = 7975,
  [SMALL_STATE(177)] = 7988,
  [SMALL_STATE(178)] = 8002,
  [SMALL_STATE(179)] = 8016,
  [SMALL_STATE(180)] = 8032,
  [SMALL_STATE(181)] = 8046,
  [SMALL_STATE(182)] = 8061,
  [SMALL_STATE(183)] = 8080,
  [SMALL_STATE(184)] = 8093,
  [SMALL_STATE(185)] = 8108,
  [SMALL_STATE(186)] = 8123,
  [SMALL_STATE(187)] = 8140,
  [SMALL_STATE(188)] = 8156,
  [SMALL_STATE(189)] = 8170,
  [SMALL_STATE(190)] = 8180,
  [SMALL_STATE(191)] = 8192,
  [SMALL_STATE(192)] = 8206,
  [SMALL_STATE(193)] = 8220,
  [SMALL_STATE(194)] = 8234,
  [SMALL_STATE(195)] = 8246,
  [SMALL_STATE(196)] = 8256,
  [SMALL_STATE(197)] = 8272,
  [SMALL_STATE(198)] = 8288,
  [SMALL_STATE(199)] = 8300,
  [SMALL_STATE(200)] = 8310,
  [SMALL_STATE(201)] = 8326,
  [SMALL_STATE(202)] = 8340,
  [SMALL_STATE(203)] = 8351,
  [SMALL_STATE(204)] = 8360,
  [SMALL_STATE(205)] = 8373,
  [SMALL_STATE(206)] = 8386,
  [SMALL_STATE(207)] = 8397,
  [SMALL_STATE(208)] = 8408,
  [SMALL_STATE(209)] = 8421,
  [SMALL_STATE(210)] = 8434,
  [SMALL_STATE(211)] = 8445,
  [SMALL_STATE(212)] = 8454,
  [SMALL_STATE(213)] = 8463,
  [SMALL_STATE(214)] = 8476,
  [SMALL_STATE(215)] = 8485,
  [SMALL_STATE(216)] = 8496,
  [SMALL_STATE(217)] = 8506,
  [SMALL_STATE(218)] = 8516,
  [SMALL_STATE(219)] = 8526,
  [SMALL_STATE(220)] = 8536,
  [SMALL_STATE(221)] = 8546,
  [SMALL_STATE(222)] = 8556,
  [SMALL_STATE(223)] = 8566,
  [SMALL_STATE(224)] = 8576,
  [SMALL_STATE(225)] = 8586,
  [SMALL_STATE(226)] = 8596,
  [SMALL_STATE(227)] = 8606,
  [SMALL_STATE(228)] = 8616,
  [SMALL_STATE(229)] = 8626,
  [SMALL_STATE(230)] = 8636,
  [SMALL_STATE(231)] = 8646,
  [SMALL_STATE(232)] = 8656,
  [SMALL_STATE(233)] = 8666,
  [SMALL_STATE(234)] = 8676,
  [SMALL_STATE(235)] = 8686,
  [SMALL_STATE(236)] = 8696,
  [SMALL_STATE(237)] = 8706,
  [SMALL_STATE(238)] = 8716,
  [SMALL_STATE(239)] = 8726,
  [SMALL_STATE(240)] = 8736,
  [SMALL_STATE(241)] = 8746,
  [SMALL_STATE(242)] = 8756,
  [SMALL_STATE(243)] = 8763,
  [SMALL_STATE(244)] = 8770,
  [SMALL_STATE(245)] = 8777,
  [SMALL_STATE(246)] = 8784,
  [SMALL_STATE(247)] = 8791,
  [SMALL_STATE(248)] = 8798,
  [SMALL_STATE(249)] = 8805,
  [SMALL_STATE(250)] = 8812,
  [SMALL_STATE(251)] = 8819,
  [SMALL_STATE(252)] = 8826,
  [SMALL_STATE(253)] = 8833,
  [SMALL_STATE(254)] = 8840,
  [SMALL_STATE(255)] = 8847,
  [SMALL_STATE(256)] = 8854,
  [SMALL_STATE(257)] = 8861,
  [SMALL_STATE(258)] = 8868,
  [SMALL_STATE(259)] = 8875,
  [SMALL_STATE(260)] = 8882,
  [SMALL_STATE(261)] = 8889,
  [SMALL_STATE(262)] = 8896,
  [SMALL_STATE(263)] = 8903,
  [SMALL_STATE(264)] = 8910,
  [SMALL_STATE(265)] = 8917,
  [SMALL_STATE(266)] = 8924,
  [SMALL_STATE(267)] = 8931,
  [SMALL_STATE(268)] = 8938,
  [SMALL_STATE(269)] = 8945,
  [SMALL_STATE(270)] = 8952,
  [SMALL_STATE(271)] = 8959,
  [SMALL_STATE(272)] = 8966,
  [SMALL_STATE(273)] = 8973,
  [SMALL_STATE(274)] = 8980,
  [SMALL_STATE(275)] = 8987,
  [SMALL_STATE(276)] = 8994,
  [SMALL_STATE(277)] = 9001,
  [SMALL_STATE(278)] = 9008,
  [SMALL_STATE(279)] = 9015,
  [SMALL_STATE(280)] = 9022,
  [SMALL_STATE(281)] = 9029,
  [SMALL_STATE(282)] = 9036,
  [SMALL_STATE(283)] = 9043,
  [SMALL_STATE(284)] = 9050,
  [SMALL_STATE(285)] = 9057,
  [SMALL_STATE(286)] = 9064,
  [SMALL_STATE(287)] = 9071,
  [SMALL_STATE(288)] = 9078,
  [SMALL_STATE(289)] = 9085,
  [SMALL_STATE(290)] = 9092,
  [SMALL_STATE(291)] = 9099,
  [SMALL_STATE(292)] = 9106,
  [SMALL_STATE(293)] = 9113,
  [SMALL_STATE(294)] = 9120,
  [SMALL_STATE(295)] = 9127,
  [SMALL_STATE(296)] = 9134,
  [SMALL_STATE(297)] = 9141,
  [SMALL_STATE(298)] = 9148,
  [SMALL_STATE(299)] = 9155,
  [SMALL_STATE(300)] = 9162,
  [SMALL_STATE(301)] = 9169,
  [SMALL_STATE(302)] = 9176,
  [SMALL_STATE(303)] = 9183,
  [SMALL_STATE(304)] = 9190,
  [SMALL_STATE(305)] = 9197,
  [SMALL_STATE(306)] = 9204,
  [SMALL_STATE(307)] = 9211,
  [SMALL_STATE(308)] = 9218,
  [SMALL_STATE(309)] = 9225,
  [SMALL_STATE(310)] = 9232,
  [SMALL_STATE(311)] = 9239,
  [SMALL_STATE(312)] = 9246,
  [SMALL_STATE(313)] = 9253,
  [SMALL_STATE(314)] = 9260,
  [SMALL_STATE(315)] = 9267,
  [SMALL_STATE(316)] = 9274,
  [SMALL_STATE(317)] = 9281,
  [SMALL_STATE(318)] = 9288,
  [SMALL_STATE(319)] = 9295,
  [SMALL_STATE(320)] = 9302,
  [SMALL_STATE(321)] = 9309,
  [SMALL_STATE(322)] = 9316,
  [SMALL_STATE(323)] = 9323,
  [SMALL_STATE(324)] = 9330,
  [SMALL_STATE(325)] = 9337,
  [SMALL_STATE(326)] = 9344,
  [SMALL_STATE(327)] = 9351,
  [SMALL_STATE(328)] = 9358,
  [SMALL_STATE(329)] = 9365,
  [SMALL_STATE(330)] = 9372,
  [SMALL_STATE(331)] = 9379,
  [SMALL_STATE(332)] = 9386,
  [SMALL_STATE(333)] = 9393,
  [SMALL_STATE(334)] = 9400,
  [SMALL_STATE(335)] = 9407,
  [SMALL_STATE(336)] = 9414,
  [SMALL_STATE(337)] = 9421,
  [SMALL_STATE(338)] = 9428,
  [SMALL_STATE(339)] = 9435,
  [SMALL_STATE(340)] = 9442,
  [SMALL_STATE(341)] = 9449,
  [SMALL_STATE(342)] = 9456,
  [SMALL_STATE(343)] = 9463,
  [SMALL_STATE(344)] = 9470,
  [SMALL_STATE(345)] = 9477,
  [SMALL_STATE(346)] = 9484,
  [SMALL_STATE(347)] = 9491,
  [SMALL_STATE(348)] = 9498,
  [SMALL_STATE(349)] = 9505,
  [SMALL_STATE(350)] = 9512,
  [SMALL_STATE(351)] = 9519,
  [SMALL_STATE(352)] = 9526,
  [SMALL_STATE(353)] = 9533,
  [SMALL_STATE(354)] = 9540,
  [SMALL_STATE(355)] = 9547,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules_block, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_block, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_block, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules_block, 5, .production_id = 23),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_block, 3, .production_id = 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_block, 5, .production_id = 23),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(136),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(344),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(188),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(343),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(103),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(182),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(211),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(212),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(176),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(30),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(98),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(104),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(106),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(342),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(341),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(9),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(110),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(103),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(176),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(30),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(95),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(104),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(106),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(342),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(341),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(110),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(103),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(30),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(91),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(104),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(106),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(342),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(341),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dif_expr, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(92),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(97),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(98),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(93),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(89),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(90),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cat_expr, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cat_expr, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(95),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1, .production_id = 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard, 1, .production_id = 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dstring, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dstring, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stag, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stag, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sstring, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sstring, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtag, 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mtag, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1, .production_id = 4),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1, .production_id = 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4, .production_id = 12),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4, .production_id = 12),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 5, .production_id = 19),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 5, .production_id = 19),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4, .production_id = 19),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4, .production_id = 19),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 2),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(152),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(152),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(150),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(149),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(325),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(324),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 3, .production_id = 12),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3, .production_id = 12),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_rule, 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_rule, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_rule, 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_rule, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shortcut, 2, .production_id = 13),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shortcut, 2, .production_id = 13),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, .production_id = 9),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3, .production_id = 9),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, .production_id = 5),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, .production_id = 5),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordinary_rule, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordinary_rule, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 4),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_configuration, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, .dynamic_precedence = 1),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, .dynamic_precedence = 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_definition, 4, .production_id = 21),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_definition, 4, .production_id = 21),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, .dynamic_precedence = 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, .dynamic_precedence = 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_rule, 4),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_rule, 4),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 5, .production_id = 33),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repetition, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 4, .production_id = 30),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 3, .production_id = 22),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 1),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 1), SHIFT(135),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 20),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 20),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_unit, 1),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_unit, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_unit, 2),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_unit, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 2),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, .production_id = 29),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, .production_id = 10),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4, .production_id = 18),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtags_block, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stags_block, 3),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 6),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(166),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(163),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(163),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_difference, 3, .production_id = 15),
  [601] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 2), SHIFT(166),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 2), SHIFT(177),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 2), SHIFT(163),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__code_in_braces, 2), SHIFT(163),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 1), SHIFT(166),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 1), SHIFT(180),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 1), SHIFT(165),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__code_in_braces, 1), SHIFT(165),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stags_block, 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtags_block, 4),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternation, 2, .production_id = 7),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stags_block, 5),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stags_block_repeat1, 2),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stags_block_repeat1, 2), SHIFT_REPEAT(298),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stags_block_repeat1, 2), SHIFT_REPEAT(297),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtags_block, 5),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch, 1, .production_id = 3),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_in_braces, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__code_in_braces, 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern_expr, 1),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_in_braces, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__code_in_braces, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_list, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(302),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maxnmatch_block, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2, .production_id = 24),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_block, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getstate_block, 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookahead, 3, .production_id = 14),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_separator_directive, 4, .production_id = 35),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conf_value, 1, .production_id = 26),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, .production_id = 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_directive, 4, .production_id = 34),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 2, .production_id = 25),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__clist_repeat1, 2), SHIFT_REPEAT(283),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mininum, 1, .production_id = 16),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exactly, 1, .production_id = 17),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_block, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_condprefix, 3, .production_id = 27),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_condenumprefix, 3, .production_id = 27),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_startlabel, 3, .production_id = 27),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_conf, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_class_conf, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api_style, 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding_policy, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__maximum, 1, .production_id = 31),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_block, 6, .production_id = 23),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules_block, 6, .production_id = 23),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_flags, 4, .production_id = 32),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 4, .production_id = 32),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_cond, 4, .production_id = 32),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_label, 4, .production_id = 32),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_variable, 4, .production_id = 32),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_yych, 4, .production_id = 32),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_state, 4, .production_id = 32),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_yybm, 4, .production_id = 32),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_cgoto, 4, .production_id = 32),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_api, 4, .production_id = 32),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_tags, 4, .production_id = 32),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_indent, 4, .production_id = 32),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_yyfill, 4, .production_id = 32),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_eof, 3, .production_id = 27),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 4, .production_id = 36),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, .production_id = 37),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conf_value, 1, .production_id = 28),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_sentinel, 3, .production_id = 27),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_off_block, 5),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_on_block, 5),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_block, 5, .production_id = 23),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getstate_block, 4),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maxnmatch_block, 4),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_block, 4),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules_block, 4),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_block, 4),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__clist_repeat1, 2, .production_id = 11),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_block, 4, .production_id = 5),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_block, 2),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_re2c, 1),
  [973] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_re2c(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
