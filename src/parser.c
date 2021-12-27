#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 367
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 207
#define ALIAS_COUNT 5
#define TOKEN_COUNT 114
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 40

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
  anon_sym_line = 112,
  aux_sym_linedir_token1 = 113,
  sym_re2c = 114,
  sym__block = 115,
  sym_global_block = 116,
  sym_local_block = 117,
  sym_rules_block = 118,
  sym_use_block = 119,
  sym_max_block = 120,
  sym_maxnmatch_block = 121,
  sym_getstate_block = 122,
  sym_stags_block = 123,
  sym_mtags_block = 124,
  sym_header_on_block = 125,
  sym_header_off_block = 126,
  sym_block_list = 127,
  sym__tag_directive = 128,
  sym_format_directive = 129,
  sym_separator_directive = 130,
  sym_body = 131,
  sym_named_definition = 132,
  sym_configuration = 133,
  sym__option_name = 134,
  sym_set_flags = 135,
  sym_define = 136,
  sym_set_cond = 137,
  sym_set_label = 138,
  sym_set_variable = 139,
  sym_set_yych = 140,
  sym_set_state = 141,
  sym_set_yybm = 142,
  sym_set_cgoto = 143,
  sym_set_api = 144,
  sym_set_tags = 145,
  sym_set_indent = 146,
  sym_set_yyfill = 147,
  sym_set_eof = 148,
  sym_set_sentinel = 149,
  sym_set_condprefix = 150,
  sym_set_condenumprefix = 151,
  sym_set_startlabel = 152,
  sym__conf_value = 153,
  sym_field_expression = 154,
  sym_encoding_policy = 155,
  sym_input_conf = 156,
  sym_empty_class_conf = 157,
  sym_api_style = 158,
  sym_ordinary_rule = 159,
  sym_conditional_rule = 160,
  sym_shortcut = 161,
  sym_condition = 162,
  sym_pattern = 163,
  sym_action = 164,
  sym_code_block = 165,
  sym__code_in_braces = 166,
  sym_use = 167,
  sym_include = 168,
  sym_regex = 169,
  sym_lookahead = 170,
  sym__pattern_expr = 171,
  sym_alternation = 172,
  sym__branch = 173,
  sym__alt_expr = 174,
  sym_difference = 175,
  sym__dif_expr = 176,
  sym_concat = 177,
  sym__cat_expr = 178,
  sym_repetition = 179,
  sym_close = 180,
  sym_limits = 181,
  sym__mininum = 182,
  sym__maximum = 183,
  sym__exactly = 184,
  sym__atom = 185,
  sym_parenthesized = 186,
  sym_character_class = 187,
  sym_range = 188,
  sym_wildcard = 189,
  sym_literal = 190,
  sym_dstring = 191,
  sym_sstring = 192,
  sym__escape = 193,
  sym_code_unit = 194,
  sym_stag = 195,
  sym_mtag = 196,
  sym_number = 197,
  sym_linedir = 198,
  aux_sym_stags_block_repeat1 = 199,
  aux_sym_block_list_repeat1 = 200,
  aux_sym_body_repeat1 = 201,
  aux_sym__clist_repeat1 = 202,
  aux_sym_code_block_repeat1 = 203,
  aux_sym_alternation_repeat1 = 204,
  aux_sym_concat_repeat1 = 205,
  aux_sym_character_class_repeat1 = 206,
  alias_sym_block_name = 207,
  alias_sym_default = 208,
  alias_sym_field_identifier = 209,
  alias_sym_label = 210,
  alias_sym_name = 211,
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
  [anon_sym_line] = "line",
  [aux_sym_linedir_token1] = "linedir_token1",
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
  [sym_linedir] = "linedir",
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
  [anon_sym_line] = anon_sym_line,
  [aux_sym_linedir_token1] = aux_sym_linedir_token1,
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
  [sym_linedir] = sym_linedir,
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
  [anon_sym_line] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_linedir_token1] = {
    .visible = false,
    .named = false,
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
  [sym_linedir] = {
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
  field_linenum = 11,
  field_lookahead = 12,
  field_maximum = 13,
  field_minimum = 14,
  field_name = 15,
  field_operator = 16,
  field_option = 17,
  field_right = 18,
  field_separator = 19,
  field_to = 20,
  field_value = 21,
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
  [field_linenum] = "linenum",
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
  [21] = {.index = 22, .length = 1},
  [22] = {.index = 23, .length = 2},
  [23] = {.index = 25, .length = 1},
  [26] = {.index = 26, .length = 1},
  [27] = {.index = 27, .length = 1},
  [28] = {.index = 28, .length = 1},
  [29] = {.index = 27, .length = 1},
  [31] = {.index = 29, .length = 2},
  [32] = {.index = 31, .length = 1},
  [33] = {.index = 32, .length = 1},
  [34] = {.index = 33, .length = 3},
  [35] = {.index = 36, .length = 2},
  [36] = {.index = 38, .length = 1},
  [37] = {.index = 39, .length = 1},
  [38] = {.index = 40, .length = 2},
  [39] = {.index = 42, .length = 3},
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
    {field_filename, 2},
  [23] =
    {field_name, 0},
    {field_value, 2},
  [25] =
    {field_exactly, 1, .inherited = true},
  [26] =
    {field_option, 1},
  [27] =
    {field_value, 0},
  [28] =
    {field_value, 2, .inherited = true},
  [29] =
    {field_filename, 2},
    {field_linenum, 3},
  [31] =
    {field_minimum, 1, .inherited = true},
  [32] =
    {field_maximum, 0},
  [33] =
    {field_field, 1, .inherited = true},
    {field_option, 1, .inherited = true},
    {field_value, 3, .inherited = true},
  [36] =
    {field_maximum, 3, .inherited = true},
    {field_minimum, 1, .inherited = true},
  [38] =
    {field_format, 2},
  [39] =
    {field_separator, 2},
  [40] =
    {field_field, 3},
    {field_option, 1},
  [42] =
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
  [22] = {
    [0] = alias_sym_name,
  },
  [24] = {
    [4] = alias_sym_block_name,
  },
  [25] = {
    [1] = alias_sym_block_name,
  },
  [27] = {
    [0] = alias_sym_name,
  },
  [30] = {
    [3] = alias_sym_label,
  },
  [39] = {
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
      if (eof) ADVANCE(125);
      if (lookahead == '!') ADVANCE(156);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '+') ADVANCE(176);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '0') ADVANCE(252);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '<') ADVANCE(154);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == '?') ADVANCE(177);
      if (lookahead == '@') ADVANCE(146);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '^') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '}') ADVANCE(180);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(118)
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (('G' <= lookahead && lookahead <= '_') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '+') ADVANCE(176);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == '?') ADVANCE(177);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '+') ADVANCE(176);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '?') ADVANCE(177);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '+') ADVANCE(176);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '?') ADVANCE(177);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '+') ADVANCE(176);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '?') ADVANCE(177);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '+') ADVANCE(176);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '?') ADVANCE(177);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '^') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '0') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '+') ADVANCE(176);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == '?') ADVANCE(177);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '+') ADVANCE(176);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '?') ADVANCE(177);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '+') ADVANCE(176);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '?') ADVANCE(177);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '+') ADVANCE(176);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '?') ADVANCE(177);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '+') ADVANCE(176);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '?') ADVANCE(177);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(257);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(256);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(140);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(111);
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
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == '2') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(96);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(152);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(153);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(148);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(69);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(134);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 109:
      if (lookahead == 'x') ADVANCE(133);
      END_STATE();
    case 110:
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 111:
      if (lookahead == '"' ||
          lookahead == '-' ||
          lookahead == '\\' ||
          lookahead == ']') ADVANCE(206);
      if (lookahead == 'U') ADVANCE(229);
      if (lookahead == 'X') ADVANCE(221);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == 'x') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(232);
      END_STATE();
    case 112:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 113:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 114:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 115:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 116:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 117:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(257);
      if (lookahead == '\r') ADVANCE(258);
      END_STATE();
    case 118:
      if (eof) ADVANCE(125);
      if (lookahead == '!') ADVANCE(156);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '0') ADVANCE(251);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '<') ADVANCE(154);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(118)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 119:
      if (eof) ADVANCE(125);
      if (lookahead == '!') ADVANCE(156);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 120:
      if (eof) ADVANCE(125);
      if (lookahead == '!') ADVANCE(156);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 121:
      if (eof) ADVANCE(125);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '}') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(122)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 122:
      if (eof) ADVANCE(125);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(122)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 123:
      if (eof) ADVANCE(125);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '0') ADVANCE(251);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == '@') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 124:
      if (eof) ADVANCE(125);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '0') ADVANCE(251);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BANGre2c);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_BANGlocal);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_BANGrules);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__block_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_BANGuse);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_BANGmax);
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_BANGmaxnmatch);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_BANGgetstate);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_BANGstags);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BANGmtags);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_BANGheader);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ignore_block);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(152);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_re2c2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__option_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_match_DASHempty);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_match_DASHnone);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_free_DASHform);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_GT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__code_in_braces_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__code_in_braces_token2);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__code_in_braces_token3);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__code_in_braces_token3);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(168)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(169)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(125);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '<') ADVANCE(154);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(172)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(125);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(154);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(171)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(125);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(154);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(172)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"' ||
          lookahead == '-' ||
          lookahead == '\\' ||
          lookahead == ']') ADVANCE(206);
      if (lookahead == 'U') ADVANCE(229);
      if (lookahead == 'X') ADVANCE(221);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == 'x') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(232);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__mininum_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_range_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(257);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '>') ADVANCE(152);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"' ||
          lookahead == '-' ||
          lookahead == '\\' ||
          lookahead == ']') ADVANCE(206);
      if (lookahead == 'U') ADVANCE(229);
      if (lookahead == 'X') ADVANCE(221);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == 'x') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(232);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_dstring_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_dstring_token1);
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_dstring_token1);
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_sstring_token1);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_quote);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ctrl_code);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__esc_hex_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__esc_hex_token2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__esc_hex_token3);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__esc_hex_token4);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__esc_hex_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__esc_hex_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__esc_hex_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__esc_hex_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
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
      ACCEPT_TOKEN(aux_sym__esc_hex_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__esc_hex_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
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
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
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
      ACCEPT_TOKEN(aux_sym__esc_oct_token1);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__esc_oct_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(230);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__esc_oct_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_hex_digit);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_hex_digit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_oct_digit);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(117);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_linedir_token1);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '\r') ADVANCE(9);
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
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(66);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_api);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_eof);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_cond);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_fail);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_re2c);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_yybm);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_yych);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_cgoto);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_flags);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_label);
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_state);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(134);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_ignore);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_indent);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_yyfill);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 137:
      if (lookahead == 'f') ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 143:
      if (lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 149:
      if (lookahead == 'f') ADVANCE(158);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_sentinel);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 156:
      if (lookahead == 'x') ADVANCE(163);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_separator);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_condprefix);
      END_STATE();
    case 164:
      if (lookahead == 'x') ADVANCE(168);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_startlabel);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_substitute);
      END_STATE();
    case 167:
      if (lookahead == 'f') ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_labelprefix);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'x') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_condenumprefix);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 121},
  [2] = {.lex_state = 170},
  [3] = {.lex_state = 170},
  [4] = {.lex_state = 170},
  [5] = {.lex_state = 172},
  [6] = {.lex_state = 172},
  [7] = {.lex_state = 172},
  [8] = {.lex_state = 172},
  [9] = {.lex_state = 172},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 168},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 121},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 169},
  [29] = {.lex_state = 169},
  [30] = {.lex_state = 169},
  [31] = {.lex_state = 169},
  [32] = {.lex_state = 169},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 123},
  [35] = {.lex_state = 123},
  [36] = {.lex_state = 123},
  [37] = {.lex_state = 123},
  [38] = {.lex_state = 169},
  [39] = {.lex_state = 123},
  [40] = {.lex_state = 123},
  [41] = {.lex_state = 123},
  [42] = {.lex_state = 123},
  [43] = {.lex_state = 169},
  [44] = {.lex_state = 169},
  [45] = {.lex_state = 123},
  [46] = {.lex_state = 123},
  [47] = {.lex_state = 123},
  [48] = {.lex_state = 169},
  [49] = {.lex_state = 169},
  [50] = {.lex_state = 169},
  [51] = {.lex_state = 123},
  [52] = {.lex_state = 123},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 169},
  [56] = {.lex_state = 123},
  [57] = {.lex_state = 123},
  [58] = {.lex_state = 123},
  [59] = {.lex_state = 123},
  [60] = {.lex_state = 123},
  [61] = {.lex_state = 169},
  [62] = {.lex_state = 121},
  [63] = {.lex_state = 121},
  [64] = {.lex_state = 121},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 121},
  [72] = {.lex_state = 121},
  [73] = {.lex_state = 121},
  [74] = {.lex_state = 121},
  [75] = {.lex_state = 121},
  [76] = {.lex_state = 121},
  [77] = {.lex_state = 121},
  [78] = {.lex_state = 121},
  [79] = {.lex_state = 121},
  [80] = {.lex_state = 121},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 121},
  [83] = {.lex_state = 121},
  [84] = {.lex_state = 121},
  [85] = {.lex_state = 121},
  [86] = {.lex_state = 121},
  [87] = {.lex_state = 121},
  [88] = {.lex_state = 121},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 121},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 121},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 121},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 15},
  [103] = {.lex_state = 15},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 15},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 15},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 171},
  [128] = {.lex_state = 171},
  [129] = {.lex_state = 171},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 18},
  [132] = {.lex_state = 16},
  [133] = {.lex_state = 16},
  [134] = {.lex_state = 16},
  [135] = {.lex_state = 16},
  [136] = {.lex_state = 172},
  [137] = {.lex_state = 172},
  [138] = {.lex_state = 172},
  [139] = {.lex_state = 172},
  [140] = {.lex_state = 172},
  [141] = {.lex_state = 172},
  [142] = {.lex_state = 172},
  [143] = {.lex_state = 172},
  [144] = {.lex_state = 172},
  [145] = {.lex_state = 16},
  [146] = {.lex_state = 172},
  [147] = {.lex_state = 172},
  [148] = {.lex_state = 172},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 168},
  [156] = {.lex_state = 168},
  [157] = {.lex_state = 168},
  [158] = {.lex_state = 168},
  [159] = {.lex_state = 168},
  [160] = {.lex_state = 168},
  [161] = {.lex_state = 119},
  [162] = {.lex_state = 119},
  [163] = {.lex_state = 169},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 16},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 121},
  [171] = {.lex_state = 16},
  [172] = {.lex_state = 121},
  [173] = {.lex_state = 121},
  [174] = {.lex_state = 121},
  [175] = {.lex_state = 121},
  [176] = {.lex_state = 121},
  [177] = {.lex_state = 121},
  [178] = {.lex_state = 16},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 16},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 16},
  [183] = {.lex_state = 119},
  [184] = {.lex_state = 119},
  [185] = {.lex_state = 121},
  [186] = {.lex_state = 119},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 121},
  [189] = {.lex_state = 121},
  [190] = {.lex_state = 121},
  [191] = {.lex_state = 16},
  [192] = {.lex_state = 123},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 16},
  [195] = {.lex_state = 16},
  [196] = {.lex_state = 121},
  [197] = {.lex_state = 121},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 121},
  [200] = {.lex_state = 121},
  [201] = {.lex_state = 121},
  [202] = {.lex_state = 123},
  [203] = {.lex_state = 119},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 123},
  [206] = {.lex_state = 121},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 121},
  [209] = {.lex_state = 121},
  [210] = {.lex_state = 121},
  [211] = {.lex_state = 121},
  [212] = {.lex_state = 121},
  [213] = {.lex_state = 121},
  [214] = {.lex_state = 121},
  [215] = {.lex_state = 121},
  [216] = {.lex_state = 121},
  [217] = {.lex_state = 121},
  [218] = {.lex_state = 121},
  [219] = {.lex_state = 121},
  [220] = {.lex_state = 123},
  [221] = {.lex_state = 121},
  [222] = {.lex_state = 123},
  [223] = {.lex_state = 123},
  [224] = {.lex_state = 121},
  [225] = {.lex_state = 123},
  [226] = {.lex_state = 123},
  [227] = {.lex_state = 121},
  [228] = {.lex_state = 123},
  [229] = {.lex_state = 123},
  [230] = {.lex_state = 123},
  [231] = {.lex_state = 123},
  [232] = {.lex_state = 121},
  [233] = {.lex_state = 121},
  [234] = {.lex_state = 123},
  [235] = {.lex_state = 123},
  [236] = {.lex_state = 33},
  [237] = {.lex_state = 123},
  [238] = {.lex_state = 121},
  [239] = {.lex_state = 123},
  [240] = {.lex_state = 123},
  [241] = {.lex_state = 121},
  [242] = {.lex_state = 123},
  [243] = {.lex_state = 123},
  [244] = {.lex_state = 121},
  [245] = {.lex_state = 16},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 123},
  [248] = {.lex_state = 123},
  [249] = {.lex_state = 123},
  [250] = {.lex_state = 121},
  [251] = {.lex_state = 121},
  [252] = {.lex_state = 121},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 121},
  [255] = {.lex_state = 121},
  [256] = {.lex_state = 121},
  [257] = {.lex_state = 121},
  [258] = {.lex_state = 121},
  [259] = {.lex_state = 121},
  [260] = {.lex_state = 121},
  [261] = {.lex_state = 121},
  [262] = {.lex_state = 121},
  [263] = {.lex_state = 38},
  [264] = {.lex_state = 121},
  [265] = {.lex_state = 121},
  [266] = {.lex_state = 121},
  [267] = {.lex_state = 121},
  [268] = {.lex_state = 121},
  [269] = {.lex_state = 121},
  [270] = {.lex_state = 121},
  [271] = {.lex_state = 121},
  [272] = {.lex_state = 121},
  [273] = {.lex_state = 121},
  [274] = {.lex_state = 121},
  [275] = {.lex_state = 121},
  [276] = {.lex_state = 121},
  [277] = {.lex_state = 121},
  [278] = {.lex_state = 121},
  [279] = {.lex_state = 121},
  [280] = {.lex_state = 121},
  [281] = {.lex_state = 123},
  [282] = {.lex_state = 121},
  [283] = {.lex_state = 121},
  [284] = {.lex_state = 121},
  [285] = {.lex_state = 121},
  [286] = {.lex_state = 121},
  [287] = {.lex_state = 121},
  [288] = {.lex_state = 121},
  [289] = {.lex_state = 121},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 119},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 123},
  [294] = {.lex_state = 123},
  [295] = {.lex_state = 123},
  [296] = {.lex_state = 123},
  [297] = {.lex_state = 123},
  [298] = {.lex_state = 123},
  [299] = {.lex_state = 123},
  [300] = {.lex_state = 123},
  [301] = {.lex_state = 123},
  [302] = {.lex_state = 123},
  [303] = {.lex_state = 123},
  [304] = {.lex_state = 123},
  [305] = {.lex_state = 123},
  [306] = {.lex_state = 38},
  [307] = {.lex_state = 123},
  [308] = {.lex_state = 123},
  [309] = {.lex_state = 119},
  [310] = {.lex_state = 121},
  [311] = {.lex_state = 121},
  [312] = {.lex_state = 121},
  [313] = {.lex_state = 37},
  [314] = {.lex_state = 37},
  [315] = {.lex_state = 121},
  [316] = {.lex_state = 37},
  [317] = {.lex_state = 121},
  [318] = {.lex_state = 37},
  [319] = {.lex_state = 121},
  [320] = {.lex_state = 121},
  [321] = {.lex_state = 123},
  [322] = {.lex_state = 123},
  [323] = {.lex_state = 121},
  [324] = {.lex_state = 121},
  [325] = {.lex_state = 121},
  [326] = {.lex_state = 123},
  [327] = {.lex_state = 123},
  [328] = {.lex_state = 123},
  [329] = {.lex_state = 123},
  [330] = {.lex_state = 123},
  [331] = {.lex_state = 121},
  [332] = {.lex_state = 121},
  [333] = {.lex_state = 123},
  [334] = {.lex_state = 121},
  [335] = {.lex_state = 33},
  [336] = {.lex_state = 36},
  [337] = {.lex_state = 121},
  [338] = {.lex_state = 37},
  [339] = {.lex_state = 121},
  [340] = {.lex_state = 121},
  [341] = {.lex_state = 37},
  [342] = {.lex_state = 121},
  [343] = {.lex_state = 121},
  [344] = {.lex_state = 121},
  [345] = {.lex_state = 121},
  [346] = {.lex_state = 121},
  [347] = {.lex_state = 121},
  [348] = {.lex_state = 121},
  [349] = {.lex_state = 121},
  [350] = {.lex_state = 121},
  [351] = {.lex_state = 121},
  [352] = {.lex_state = 121},
  [353] = {.lex_state = 37},
  [354] = {.lex_state = 123},
  [355] = {.lex_state = 123},
  [356] = {.lex_state = 37},
  [357] = {.lex_state = 121},
  [358] = {.lex_state = 121},
  [359] = {.lex_state = 123},
  [360] = {.lex_state = 123},
  [361] = {.lex_state = 123},
  [362] = {.lex_state = 123},
  [363] = {.lex_state = 123},
  [364] = {.lex_state = 123},
  [365] = {.lex_state = 123},
  [366] = {.lex_state = 123},
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
    [anon_sym_line] = ACTIONS(1),
  },
  [1] = {
    [sym_re2c] = STATE(358),
    [sym__block] = STATE(357),
    [sym_global_block] = STATE(357),
    [sym_local_block] = STATE(357),
    [sym_rules_block] = STATE(357),
    [sym_use_block] = STATE(357),
    [sym_max_block] = STATE(357),
    [sym_maxnmatch_block] = STATE(357),
    [sym_getstate_block] = STATE(357),
    [sym_stags_block] = STATE(357),
    [sym_mtags_block] = STATE(357),
    [sym_header_on_block] = STATE(357),
    [sym_header_off_block] = STATE(357),
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
  [0] = 31,
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
    STATE(12), 1,
      sym_condition,
    STATE(43), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(190), 1,
      sym_lookahead,
    STATE(216), 1,
      sym_regex,
    STATE(232), 1,
      sym_pattern,
    STATE(351), 1,
      sym__branch,
    STATE(352), 1,
      sym_body,
    STATE(67), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(245), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(194), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
    STATE(9), 8,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      sym_linedir,
      aux_sym_body_repeat1,
  [112] = 31,
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
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      anon_sym_COLON,
    STATE(12), 1,
      sym_condition,
    STATE(43), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(190), 1,
      sym_lookahead,
    STATE(216), 1,
      sym_regex,
    STATE(232), 1,
      sym_pattern,
    STATE(315), 1,
      sym_body,
    STATE(351), 1,
      sym__branch,
    STATE(67), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(245), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(194), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
    STATE(9), 8,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      sym_linedir,
      aux_sym_body_repeat1,
  [224] = 31,
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
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_COLON,
    STATE(12), 1,
      sym_condition,
    STATE(43), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(190), 1,
      sym_lookahead,
    STATE(216), 1,
      sym_regex,
    STATE(232), 1,
      sym_pattern,
    STATE(317), 1,
      sym_body,
    STATE(351), 1,
      sym__branch,
    STATE(67), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(245), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(194), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
    STATE(9), 8,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      sym_linedir,
      aux_sym_body_repeat1,
  [336] = 30,
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
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_condition,
    STATE(43), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(190), 1,
      sym_lookahead,
    STATE(216), 1,
      sym_regex,
    STATE(232), 1,
      sym_pattern,
    STATE(332), 1,
      sym_body,
    STATE(351), 1,
      sym__branch,
    STATE(67), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(245), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(194), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
    STATE(9), 8,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      sym_linedir,
      aux_sym_body_repeat1,
  [445] = 30,
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
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_condition,
    STATE(43), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(190), 1,
      sym_lookahead,
    STATE(216), 1,
      sym_regex,
    STATE(232), 1,
      sym_pattern,
    STATE(259), 1,
      sym_body,
    STATE(351), 1,
      sym__branch,
    STATE(67), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(245), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(194), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
    STATE(9), 8,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      sym_linedir,
      aux_sym_body_repeat1,
  [554] = 30,
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
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_condition,
    STATE(43), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(190), 1,
      sym_lookahead,
    STATE(216), 1,
      sym_regex,
    STATE(232), 1,
      sym_pattern,
    STATE(260), 1,
      sym_body,
    STATE(351), 1,
      sym__branch,
    STATE(67), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(245), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(194), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
    STATE(9), 8,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      sym_linedir,
      aux_sym_body_repeat1,
  [663] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_BANGuse,
    ACTIONS(85), 1,
      anon_sym_BANGinclude,
    ACTIONS(88), 1,
      anon_sym_re2c2,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_LT,
    ACTIONS(97), 1,
      anon_sym_STAR,
    ACTIONS(100), 1,
      anon_sym_DOLLAR,
    ACTIONS(103), 1,
      anon_sym_,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      aux_sym_dstring_token1,
    ACTIONS(115), 1,
      aux_sym_sstring_token1,
    ACTIONS(118), 1,
      anon_sym_AT2,
    ACTIONS(121), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_condition,
    STATE(43), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(190), 1,
      sym_lookahead,
    STATE(216), 1,
      sym_regex,
    STATE(232), 1,
      sym_pattern,
    STATE(351), 1,
      sym__branch,
    STATE(67), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(245), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(194), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
    STATE(8), 8,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      sym_linedir,
      aux_sym_body_repeat1,
  [769] = 29,
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
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_condition,
    STATE(43), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(190), 1,
      sym_lookahead,
    STATE(216), 1,
      sym_regex,
    STATE(232), 1,
      sym_pattern,
    STATE(351), 1,
      sym__branch,
    STATE(67), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(245), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(194), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
    STATE(8), 8,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      sym_linedir,
      aux_sym_body_repeat1,
  [875] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(109), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(128), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(126), 14,
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
  [941] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(121), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(146), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(144), 14,
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
  [1007] = 26,
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
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      anon_sym_POUND,
    STATE(55), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(127), 1,
      sym_shortcut,
    STATE(138), 1,
      sym_action,
    STATE(185), 1,
      sym_pattern,
    STATE(190), 1,
      sym_lookahead,
    STATE(216), 1,
      sym_regex,
    STATE(351), 1,
      sym__branch,
    ACTIONS(152), 2,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
    STATE(33), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(193), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(182), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [1098] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(109), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(128), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(126), 13,
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
  [1163] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(121), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(146), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(144), 13,
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
  [1228] = 20,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_flags,
    ACTIONS(162), 1,
      anon_sym_define,
    ACTIONS(164), 1,
      anon_sym_cond,
    ACTIONS(166), 1,
      anon_sym_label,
    ACTIONS(168), 1,
      anon_sym_variable,
    ACTIONS(170), 1,
      anon_sym_yych,
    ACTIONS(172), 1,
      anon_sym_state,
    ACTIONS(174), 1,
      anon_sym_yybm,
    ACTIONS(176), 1,
      anon_sym_cgoto,
    ACTIONS(178), 1,
      anon_sym_api,
    ACTIONS(180), 1,
      anon_sym_tags,
    ACTIONS(182), 1,
      anon_sym_indent,
    ACTIONS(184), 1,
      anon_sym_yyfill,
    ACTIONS(186), 1,
      anon_sym_eof,
    ACTIONS(188), 1,
      anon_sym_sentinel,
    ACTIONS(190), 1,
      anon_sym_condprefix,
    ACTIONS(192), 1,
      anon_sym_condenumprefix,
    ACTIONS(194), 1,
      anon_sym_startlabel,
    STATE(325), 18,
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
  [1306] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(109), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(128), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(126), 12,
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
  [1370] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(121), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(146), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(144), 12,
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
  [1434] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(121), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(146), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(144), 12,
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
  [1498] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(109), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(128), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(126), 12,
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
  [1562] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(121), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(146), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(144), 11,
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
  [1625] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(109), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(128), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(126), 11,
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
  [1688] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(121), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(146), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(144), 11,
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
  [1751] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(121), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(146), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(144), 11,
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
  [1814] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(109), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(128), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(126), 11,
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
  [1877] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(109), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(128), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(126), 11,
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
  [1940] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(109), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(128), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(126), 10,
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
  [2002] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(121), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(146), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(144), 10,
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
  [2064] = 19,
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
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(190), 1,
      sym_lookahead,
    STATE(284), 1,
      sym_regex,
    STATE(351), 1,
      sym__branch,
    STATE(65), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(246), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(191), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2133] = 17,
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
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    STATE(49), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(351), 1,
      sym__branch,
    STATE(62), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(196), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(189), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2196] = 17,
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
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_POUND,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(351), 1,
      sym__branch,
    STATE(85), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(337), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(215), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2259] = 17,
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
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(351), 1,
      sym__branch,
    STATE(72), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(196), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(208), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2322] = 17,
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
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(351), 1,
      sym__branch,
    STATE(74), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(196), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(214), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2385] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    STATE(81), 1,
      sym__atom,
    STATE(54), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(210), 6,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2438] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(272), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2493] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(250), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2548] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(283), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2603] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(280), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2658] = 16,
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
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(178), 1,
      sym__branch,
    STATE(74), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(218), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2717] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(279), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2772] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(275), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2827] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(274), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2882] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(256), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2937] = 16,
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
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_POUND,
    STATE(44), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(178), 1,
      sym__branch,
    STATE(67), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(195), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2996] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      aux_sym_dstring_token1,
    ACTIONS(260), 1,
      aux_sym_sstring_token1,
    ACTIONS(263), 1,
      anon_sym_AT2,
    ACTIONS(266), 1,
      anon_sym_POUND,
    STATE(44), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(351), 1,
      sym__branch,
    STATE(97), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(244), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3055] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(273), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3110] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(269), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3165] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(268), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3220] = 16,
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
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_POUND,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(178), 1,
      sym__branch,
    STATE(85), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(209), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3279] = 16,
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
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(178), 1,
      sym__branch,
    STATE(62), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(188), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3338] = 16,
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
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(178), 1,
      sym__branch,
    STATE(65), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(204), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3397] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(276), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3452] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(271), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3507] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      aux_sym_dstring_token1,
    ACTIONS(286), 1,
      aux_sym_sstring_token1,
    ACTIONS(289), 1,
      anon_sym_AT2,
    ACTIONS(292), 1,
      anon_sym_POUND,
    STATE(81), 1,
      sym__atom,
    STATE(53), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(275), 6,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3560] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    STATE(81), 1,
      sym__atom,
    STATE(53), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(295), 6,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3613] = 16,
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
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      anon_sym_POUND,
    STATE(44), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(178), 1,
      sym__branch,
    STATE(33), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(180), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3672] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(264), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3727] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(270), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3782] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(265), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3837] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(266), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3892] = 14,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_error,
    ACTIONS(234), 1,
      anon_sym_functions,
    ACTIONS(236), 1,
      anon_sym_free_DASHform,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(267), 1,
      sym__conf_value,
    ACTIONS(228), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(230), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(238), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(226), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(278), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3947] = 16,
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
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      aux_sym_alternation_repeat1,
    STATE(81), 1,
      sym__atom,
    STATE(178), 1,
      sym__branch,
    STATE(72), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(217), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4006] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    STATE(63), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(210), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4058] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    STATE(64), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(295), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4110] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      aux_sym_dstring_token1,
    ACTIONS(286), 1,
      aux_sym_sstring_token1,
    ACTIONS(289), 1,
      anon_sym_AT2,
    ACTIONS(292), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    STATE(64), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(275), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4162] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    STATE(69), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(210), 4,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4213] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    STATE(70), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(295), 4,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4264] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    STATE(66), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(210), 4,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4315] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      aux_sym_dstring_token1,
    ACTIONS(286), 1,
      aux_sym_sstring_token1,
    ACTIONS(289), 1,
      anon_sym_AT2,
    ACTIONS(292), 1,
      anon_sym_POUND,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    STATE(68), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(275), 4,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4366] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    STATE(68), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(295), 4,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4417] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      aux_sym_dstring_token1,
    ACTIONS(286), 1,
      aux_sym_sstring_token1,
    ACTIONS(289), 1,
      anon_sym_AT2,
    ACTIONS(292), 1,
      anon_sym_POUND,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    STATE(70), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(275), 4,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4468] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    STATE(65), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(168), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4518] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(312), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    ACTIONS(210), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(83), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4568] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    STATE(74), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(168), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4618] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    ACTIONS(210), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(79), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4668] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(312), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    STATE(72), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(168), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4718] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      aux_sym_dstring_token1,
    ACTIONS(286), 1,
      aux_sym_sstring_token1,
    ACTIONS(289), 1,
      anon_sym_AT2,
    ACTIONS(292), 1,
      anon_sym_POUND,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    ACTIONS(275), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(76), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4768] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    STATE(97), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(168), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4818] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    STATE(81), 1,
      sym__atom,
    STATE(33), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(168), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4868] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    ACTIONS(295), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(76), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4918] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      aux_sym_dstring_token1,
    ACTIONS(286), 1,
      aux_sym_sstring_token1,
    ACTIONS(289), 1,
      anon_sym_AT2,
    ACTIONS(292), 1,
      anon_sym_POUND,
    ACTIONS(321), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    ACTIONS(275), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(80), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4968] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_LBRACE2,
    STATE(145), 2,
      sym_close,
      sym_limits,
    ACTIONS(328), 3,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(324), 15,
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
  [5004] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      aux_sym_dstring_token1,
    ACTIONS(286), 1,
      aux_sym_sstring_token1,
    ACTIONS(289), 1,
      anon_sym_AT2,
    ACTIONS(292), 1,
      anon_sym_POUND,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    ACTIONS(275), 3,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
    STATE(82), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5054] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(312), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    ACTIONS(295), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(80), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5104] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    STATE(67), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(168), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5154] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    ACTIONS(210), 3,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
    STATE(86), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5204] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    ACTIONS(295), 3,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
    STATE(82), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5254] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    STATE(85), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(168), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5304] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    STATE(62), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(168), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5354] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(337), 1,
      anon_sym_CARET,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(117), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5401] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(341), 1,
      anon_sym_CARET,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(117), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5448] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      aux_sym_dstring_token1,
    ACTIONS(286), 1,
      aux_sym_sstring_token1,
    ACTIONS(289), 1,
      anon_sym_AT2,
    ACTIONS(292), 1,
      anon_sym_POUND,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    ACTIONS(275), 2,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(91), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5497] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(348), 1,
      anon_sym_CARET,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(117), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5544] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    ACTIONS(295), 2,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(91), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5593] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(352), 1,
      anon_sym_CARET,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(117), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5640] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(356), 1,
      anon_sym_CARET,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(117), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5687] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(360), 1,
      anon_sym_CARET,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(117), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5734] = 13,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    ACTIONS(220), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__atom,
    ACTIONS(210), 2,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(93), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(111), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5783] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(364), 1,
      anon_sym_CARET,
    ACTIONS(366), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(117), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5830] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(368), 1,
      anon_sym_CARET,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(117), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 19,
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
  [5905] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(118), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 19,
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
  [5977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    ACTIONS(382), 19,
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
  [6005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 19,
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
  [6033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(390), 19,
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
  [6061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    ACTIONS(394), 19,
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
  [6089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 19,
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
  [6117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    ACTIONS(402), 19,
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
  [6145] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(406), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(125), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(408), 19,
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
  [6217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 19,
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
  [6245] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(416), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(118), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6289] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(418), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(118), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6333] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(420), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(118), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(422), 19,
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
  [6405] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(118), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6449] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(428), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(125), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6493] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(125), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    ACTIONS(432), 19,
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
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(118), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6609] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(125), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6653] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(440), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(118), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 19,
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
  [6725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 19,
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
  [6753] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_RBRACK,
    ACTIONS(448), 1,
      aux_sym_range_token1,
    ACTIONS(451), 1,
      aux_sym_literal_token1,
    ACTIONS(463), 1,
      aux_sym__esc_oct_token2,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(454), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(125), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(460), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(457), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6797] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(118), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(154), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6841] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      sym_action,
    ACTIONS(470), 15,
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
  [6871] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym_action,
    ACTIONS(474), 15,
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
  [6901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
    ACTIONS(478), 16,
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
  [6926] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_range_token1,
    ACTIONS(134), 1,
      aux_sym_literal_token1,
    ACTIONS(142), 1,
      aux_sym__esc_oct_token2,
    STATE(152), 1,
      sym_code_unit,
    ACTIONS(136), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(150), 2,
      sym_literal,
      sym__escape,
    ACTIONS(140), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(138), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_EQ,
    ACTIONS(372), 15,
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
  [6990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 16,
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
  [7012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 16,
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
  [7034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 16,
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
  [7056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 16,
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
  [7078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
    ACTIONS(492), 15,
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
  [7102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
    ACTIONS(496), 15,
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
  [7126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
    ACTIONS(470), 15,
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
  [7150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      ts_builtin_sym_end,
    ACTIONS(500), 15,
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
  [7174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      ts_builtin_sym_end,
    ACTIONS(504), 15,
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
  [7198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      ts_builtin_sym_end,
    ACTIONS(508), 15,
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
  [7222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
    ACTIONS(474), 15,
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
  [7246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
    ACTIONS(512), 15,
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
  [7270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
    ACTIONS(516), 15,
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
  [7294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 16,
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
  [7316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    ACTIONS(522), 15,
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
  [7340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
    ACTIONS(526), 15,
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
  [7364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
    ACTIONS(530), 15,
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
  [7388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 2,
      anon_sym_RBRACK,
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
  [7411] = 3,
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
  [7434] = 3,
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
  [7457] = 3,
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
  [7480] = 3,
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
  [7503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_RBRACK,
    ACTIONS(554), 1,
      aux_sym_range_token1,
    ACTIONS(557), 13,
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
  [7528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 14,
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
  [7548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 14,
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
  [7568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 14,
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
  [7588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 14,
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
  [7608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 14,
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
  [7628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 14,
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
  [7648] = 8,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    ACTIONS(573), 1,
      anon_sym_COLON,
    ACTIONS(575), 1,
      anon_sym_format,
    ACTIONS(577), 1,
      anon_sym_separator,
    STATE(176), 1,
      sym_block_list,
    STATE(184), 1,
      aux_sym_block_list_repeat1,
    STATE(175), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7676] = 8,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_COLON,
    ACTIONS(575), 1,
      anon_sym_format,
    ACTIONS(577), 1,
      anon_sym_separator,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
    STATE(174), 1,
      sym_block_list,
    STATE(184), 1,
      aux_sym_block_list_repeat1,
    STATE(177), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 9,
      anon_sym_DOT,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7719] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
    ACTIONS(585), 1,
      anon_sym_RBRACE,
    ACTIONS(589), 1,
      aux_sym__code_in_braces_token3,
    STATE(321), 1,
      sym_code_block,
    STATE(167), 2,
      sym__code_in_braces,
      aux_sym_code_block_repeat1,
    ACTIONS(587), 3,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [7744] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    ACTIONS(594), 1,
      anon_sym_RBRACE,
    ACTIONS(600), 1,
      aux_sym__code_in_braces_token3,
    STATE(169), 2,
      sym__code_in_braces,
      aux_sym_code_block_repeat1,
    ACTIONS(597), 3,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [7766] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    ACTIONS(611), 1,
      aux_sym__code_in_braces_token3,
    STATE(166), 2,
      sym__code_in_braces,
      aux_sym_code_block_repeat1,
    ACTIONS(608), 3,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [7788] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
    ACTIONS(618), 1,
      aux_sym__code_in_braces_token3,
    STATE(166), 2,
      sym__code_in_braces,
      aux_sym_code_block_repeat1,
    ACTIONS(616), 3,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [7810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 8,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
  [7824] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
    ACTIONS(631), 1,
      aux_sym__code_in_braces_token3,
    STATE(166), 2,
      sym__code_in_braces,
      aux_sym_code_block_repeat1,
    ACTIONS(628), 3,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [7846] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_format,
    ACTIONS(577), 1,
      anon_sym_separator,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    STATE(172), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 7,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [7878] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    ACTIONS(640), 1,
      anon_sym_format,
    ACTIONS(643), 1,
      anon_sym_separator,
    STATE(172), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7897] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_format,
    ACTIONS(577), 1,
      anon_sym_separator,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    STATE(172), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7916] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_format,
    ACTIONS(577), 1,
      anon_sym_separator,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    STATE(173), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7935] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_format,
    ACTIONS(577), 1,
      anon_sym_separator,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
    STATE(172), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7954] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_format,
    ACTIONS(577), 1,
      anon_sym_separator,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
    STATE(170), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7973] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_format,
    ACTIONS(577), 1,
      anon_sym_separator,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    STATE(172), 4,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
      aux_sym_stags_block_repeat1,
  [7992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_PIPE,
    ACTIONS(652), 6,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [8007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      aux_sym__code_in_braces_token3,
    ACTIONS(656), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [8021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_BSLASH,
    ACTIONS(636), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [8035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      aux_sym__code_in_braces_token3,
    ACTIONS(662), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [8049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_PIPE,
    ACTIONS(660), 1,
      anon_sym_BSLASH,
    ACTIONS(666), 4,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
  [8065] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_COLON,
    STATE(183), 1,
      aux_sym_block_list_repeat1,
    ACTIONS(668), 3,
      ts_builtin_sym_end,
      anon_sym_format,
      anon_sym_separator,
  [8080] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_COLON,
    STATE(183), 1,
      aux_sym_block_list_repeat1,
    ACTIONS(673), 3,
      ts_builtin_sym_end,
      anon_sym_format,
      anon_sym_separator,
  [8095] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_shortcut,
    STATE(142), 1,
      sym_action,
    ACTIONS(675), 2,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
  [8112] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(679), 1,
      sym_identifier,
    ACTIONS(681), 1,
      anon_sym_GT,
    ACTIONS(683), 1,
      anon_sym_BANG,
    ACTIONS(685), 1,
      anon_sym_STAR,
    STATE(238), 1,
      aux_sym__clist_repeat1,
  [8131] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_DASH,
    ACTIONS(691), 1,
      aux_sym_linedir_token1,
    STATE(290), 1,
      sym_number,
    ACTIONS(687), 2,
      anon_sym_0,
      aux_sym_number_token2,
  [8148] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_BSLASH,
    ACTIONS(636), 4,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [8161] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_PIPE,
    ACTIONS(693), 1,
      anon_sym_BSLASH,
    ACTIONS(666), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [8176] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(695), 4,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [8186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_PIPE,
    ACTIONS(697), 1,
      anon_sym_BSLASH,
    ACTIONS(666), 2,
      anon_sym_SEMI,
      anon_sym_SLASH,
  [8200] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_COLON,
    ACTIONS(699), 1,
      ts_builtin_sym_end,
    STATE(184), 1,
      aux_sym_block_list_repeat1,
    STATE(312), 1,
      sym_block_list,
  [8216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_SLASH,
    ACTIONS(695), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [8228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_PIPE,
    ACTIONS(703), 1,
      anon_sym_BSLASH,
    ACTIONS(666), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
  [8242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_BSLASH,
    ACTIONS(636), 3,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [8254] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(705), 4,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [8264] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    STATE(340), 2,
      sym_dstring,
      sym_sstring,
  [8278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      aux_sym_linedir_token1,
    ACTIONS(392), 3,
      anon_sym_0,
      anon_sym_DASH,
      aux_sym_number_token2,
  [8290] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(707), 1,
      aux_sym_dstring_token1,
    ACTIONS(709), 1,
      aux_sym_sstring_token1,
    STATE(187), 2,
      sym_dstring,
      sym_sstring,
  [8304] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    STATE(262), 2,
      sym_dstring,
      sym_sstring,
  [8318] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dstring_token1,
    ACTIONS(218), 1,
      aux_sym_sstring_token1,
    STATE(261), 2,
      sym_dstring,
      sym_sstring,
  [8332] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_COLON,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
    STATE(184), 1,
      aux_sym_block_list_repeat1,
    STATE(310), 1,
      sym_block_list,
  [8348] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(713), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_format,
      anon_sym_separator,
  [8358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_BSLASH,
    ACTIONS(636), 3,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [8370] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_COLON,
    ACTIONS(715), 1,
      ts_builtin_sym_end,
    STATE(184), 1,
      aux_sym_block_list_repeat1,
    STATE(311), 1,
      sym_block_list,
  [8386] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_identifier,
    ACTIONS(719), 1,
      anon_sym_GT,
    ACTIONS(721), 1,
      anon_sym_STAR,
    STATE(241), 1,
      aux_sym__clist_repeat1,
  [8402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      aux_sym_linedir_token1,
    ACTIONS(388), 3,
      anon_sym_0,
      anon_sym_DASH,
      aux_sym_number_token2,
  [8414] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_PIPE,
    ACTIONS(666), 1,
      anon_sym_SEMI,
    ACTIONS(723), 1,
      anon_sym_BSLASH,
  [8427] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_BSLASH,
    ACTIONS(636), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [8438] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(727), 3,
      ts_builtin_sym_end,
      anon_sym_format,
      anon_sym_separator,
  [8447] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(729), 3,
      ts_builtin_sym_end,
      anon_sym_format,
      anon_sym_separator,
  [8456] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_RBRACE2,
    ACTIONS(733), 1,
      aux_sym__mininum_token1,
    STATE(258), 1,
      sym__maximum,
  [8469] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_SEMI,
    ACTIONS(737), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
  [8480] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_PIPE,
    ACTIONS(666), 1,
      anon_sym_LBRACE,
    ACTIONS(739), 1,
      anon_sym_BSLASH,
  [8493] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_PIPE,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
    ACTIONS(725), 1,
      anon_sym_BSLASH,
  [8506] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(741), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [8515] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_BSLASH,
    ACTIONS(636), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [8526] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_BSLASH,
    ACTIONS(636), 2,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [8537] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(743), 1,
      aux_sym__mininum_token1,
    STATE(319), 1,
      sym__exactly,
    STATE(320), 1,
      sym__mininum,
  [8550] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_EQ,
    ACTIONS(745), 2,
      anon_sym_COLON,
      anon_sym_AT,
  [8561] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(749), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [8570] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COLON,
    STATE(300), 1,
      sym__option_name,
  [8580] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COLON,
    STATE(305), 1,
      sym__option_name,
  [8590] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_on,
    ACTIONS(755), 1,
      anon_sym_off,
  [8600] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COLON,
    STATE(303), 1,
      sym__option_name,
  [8610] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COLON,
    STATE(302), 1,
      sym__option_name,
  [8620] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_COMMA2,
    ACTIONS(759), 1,
      anon_sym_RBRACE2,
  [8630] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COLON,
    STATE(296), 1,
      sym__option_name,
  [8640] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_GT,
    ACTIONS(763), 1,
      anon_sym_COMMA,
  [8650] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COLON,
    STATE(301), 1,
      sym__option_name,
  [8660] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COLON,
    STATE(249), 1,
      sym__option_name,
  [8670] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_action,
  [8680] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(765), 1,
      sym_identifier,
    STATE(233), 1,
      aux_sym__clist_repeat1,
  [8690] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COLON,
    STATE(295), 1,
      sym__option_name,
  [8700] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COLON,
    STATE(304), 1,
      sym__option_name,
  [8710] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(768), 1,
      aux_sym__block_name_token1,
    ACTIONS(770), 1,
      anon_sym_line,
  [8720] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      anon_sym_GT,
  [8730] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_identifier,
    STATE(233), 1,
      aux_sym__clist_repeat1,
  [8740] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COLON,
    STATE(294), 1,
      sym__option_name,
  [8750] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COLON,
    STATE(299), 1,
      sym__option_name,
  [8760] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym_identifier,
    STATE(233), 1,
      aux_sym__clist_repeat1,
  [8770] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_GT,
  [8780] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(778), 1,
      ts_builtin_sym_end,
    ACTIONS(780), 1,
      anon_sym_COLON,
  [8790] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_PIPE,
    ACTIONS(782), 1,
      anon_sym_BSLASH,
  [8800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_LBRACE,
    ACTIONS(784), 1,
      anon_sym_SLASH,
  [8810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_SEMI,
    ACTIONS(786), 1,
      anon_sym_SLASH,
  [8820] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COLON,
    STATE(298), 1,
      sym__option_name,
  [8830] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_COLON,
    STATE(297), 1,
      sym__option_name,
  [8840] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_EQ,
  [8847] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
  [8854] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_SEMI,
  [8861] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_SEMI,
  [8868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      aux_sym_linedir_token1,
  [8875] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_SEMI,
  [8882] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_SEMI,
  [8889] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_SEMI,
  [8896] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RBRACE2,
  [8903] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_RBRACE2,
  [8910] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(808), 1,
      ts_builtin_sym_end,
  [8917] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(810), 1,
      ts_builtin_sym_end,
  [8924] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_SEMI,
  [8931] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_SEMI,
  [8938] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(816), 1,
      aux_sym__option_name_token1,
  [8945] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_SEMI,
  [8952] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_SEMI,
  [8959] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_SEMI,
  [8966] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_SEMI,
  [8973] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_SEMI,
  [8980] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_SEMI,
  [8987] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_SEMI,
  [8994] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_SEMI,
  [9001] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_SEMI,
  [9008] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SEMI,
  [9015] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_SEMI,
  [9022] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_SEMI,
  [9029] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_SEMI,
  [9036] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(844), 1,
      sym_identifier,
  [9043] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_SEMI,
  [9050] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_SEMI,
  [9057] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_SEMI,
  [9064] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_EQ,
  [9071] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_SEMI,
  [9078] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_SEMI,
  [9085] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_SEMI,
  [9092] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(860), 1,
      ts_builtin_sym_end,
  [9099] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(862), 1,
      ts_builtin_sym_end,
  [9106] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_SEMI,
  [9113] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SEMI,
  [9120] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(866), 1,
      ts_builtin_sym_end,
  [9127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      aux_sym_linedir_token1,
  [9134] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(870), 1,
      aux_sym_number_token1,
  [9141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      aux_sym_linedir_token1,
  [9148] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_COMMA,
  [9155] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_EQ,
  [9162] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_EQ,
  [9169] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_EQ,
  [9176] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_EQ,
  [9183] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_EQ,
  [9190] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_EQ,
  [9197] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_EQ,
  [9204] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_EQ,
  [9211] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_EQ,
  [9218] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_EQ,
  [9225] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_EQ,
  [9232] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_EQ,
  [9239] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(896), 1,
      aux_sym__option_name_token1,
  [9246] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_EQ,
  [9253] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_EQ,
  [9260] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(902), 1,
      aux_sym_number_token1,
  [9267] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(904), 1,
      ts_builtin_sym_end,
  [9274] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(906), 1,
      ts_builtin_sym_end,
  [9281] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(908), 1,
      ts_builtin_sym_end,
  [9288] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(910), 1,
      aux_sym__block_name_token1,
  [9295] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(912), 1,
      aux_sym__block_name_token1,
  [9302] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(914), 1,
      ts_builtin_sym_end,
  [9309] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(916), 1,
      aux_sym__block_name_token1,
  [9316] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(918), 1,
      ts_builtin_sym_end,
  [9323] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(920), 1,
      aux_sym__block_name_token1,
  [9330] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_RBRACE2,
  [9337] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_COMMA2,
  [9344] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_RBRACE,
  [9351] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_COLON,
  [9358] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(930), 1,
      sym_identifier,
  [9365] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_GT,
  [9372] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_SEMI,
  [9379] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_EQ,
  [9386] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_EQ,
  [9393] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_EQ,
  [9400] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_EQ,
  [9407] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_EQ,
  [9414] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_SEMI,
  [9421] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(948), 1,
      ts_builtin_sym_end,
  [9428] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_COLON,
  [9435] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(952), 1,
      sym_identifier,
  [9442] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(954), 1,
      sym_oct_digit,
  [9449] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(954), 1,
      sym_hex_digit,
  [9456] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
  [9463] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(958), 1,
      aux_sym__block_name_token1,
  [9470] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_GT,
  [9477] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_SEMI,
  [9484] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(962), 1,
      aux_sym__block_name_token1,
  [9491] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_re2c,
  [9498] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_re2c,
  [9505] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_re2c,
  [9512] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_re2c,
  [9519] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_re2c,
  [9526] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_re2c,
  [9533] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_re2c,
  [9540] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_re2c,
  [9547] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_re2c,
  [9554] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_PIPE,
  [9561] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(982), 1,
      ts_builtin_sym_end,
  [9568] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(984), 1,
      aux_sym__block_name_token1,
  [9575] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_COLON,
  [9582] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_COLON,
  [9589] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(990), 1,
      aux_sym__block_name_token1,
  [9596] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(992), 1,
      ts_builtin_sym_end,
  [9603] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(994), 1,
      ts_builtin_sym_end,
  [9610] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_COLON,
  [9617] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_COLON,
  [9624] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_COLON,
  [9631] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_COLON,
  [9638] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_COLON,
  [9645] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_COLON,
  [9652] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_COLON,
  [9659] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 112,
  [SMALL_STATE(4)] = 224,
  [SMALL_STATE(5)] = 336,
  [SMALL_STATE(6)] = 445,
  [SMALL_STATE(7)] = 554,
  [SMALL_STATE(8)] = 663,
  [SMALL_STATE(9)] = 769,
  [SMALL_STATE(10)] = 875,
  [SMALL_STATE(11)] = 941,
  [SMALL_STATE(12)] = 1007,
  [SMALL_STATE(13)] = 1098,
  [SMALL_STATE(14)] = 1163,
  [SMALL_STATE(15)] = 1228,
  [SMALL_STATE(16)] = 1306,
  [SMALL_STATE(17)] = 1370,
  [SMALL_STATE(18)] = 1434,
  [SMALL_STATE(19)] = 1498,
  [SMALL_STATE(20)] = 1562,
  [SMALL_STATE(21)] = 1625,
  [SMALL_STATE(22)] = 1688,
  [SMALL_STATE(23)] = 1751,
  [SMALL_STATE(24)] = 1814,
  [SMALL_STATE(25)] = 1877,
  [SMALL_STATE(26)] = 1940,
  [SMALL_STATE(27)] = 2002,
  [SMALL_STATE(28)] = 2064,
  [SMALL_STATE(29)] = 2133,
  [SMALL_STATE(30)] = 2196,
  [SMALL_STATE(31)] = 2259,
  [SMALL_STATE(32)] = 2322,
  [SMALL_STATE(33)] = 2385,
  [SMALL_STATE(34)] = 2438,
  [SMALL_STATE(35)] = 2493,
  [SMALL_STATE(36)] = 2548,
  [SMALL_STATE(37)] = 2603,
  [SMALL_STATE(38)] = 2658,
  [SMALL_STATE(39)] = 2717,
  [SMALL_STATE(40)] = 2772,
  [SMALL_STATE(41)] = 2827,
  [SMALL_STATE(42)] = 2882,
  [SMALL_STATE(43)] = 2937,
  [SMALL_STATE(44)] = 2996,
  [SMALL_STATE(45)] = 3055,
  [SMALL_STATE(46)] = 3110,
  [SMALL_STATE(47)] = 3165,
  [SMALL_STATE(48)] = 3220,
  [SMALL_STATE(49)] = 3279,
  [SMALL_STATE(50)] = 3338,
  [SMALL_STATE(51)] = 3397,
  [SMALL_STATE(52)] = 3452,
  [SMALL_STATE(53)] = 3507,
  [SMALL_STATE(54)] = 3560,
  [SMALL_STATE(55)] = 3613,
  [SMALL_STATE(56)] = 3672,
  [SMALL_STATE(57)] = 3727,
  [SMALL_STATE(58)] = 3782,
  [SMALL_STATE(59)] = 3837,
  [SMALL_STATE(60)] = 3892,
  [SMALL_STATE(61)] = 3947,
  [SMALL_STATE(62)] = 4006,
  [SMALL_STATE(63)] = 4058,
  [SMALL_STATE(64)] = 4110,
  [SMALL_STATE(65)] = 4162,
  [SMALL_STATE(66)] = 4213,
  [SMALL_STATE(67)] = 4264,
  [SMALL_STATE(68)] = 4315,
  [SMALL_STATE(69)] = 4366,
  [SMALL_STATE(70)] = 4417,
  [SMALL_STATE(71)] = 4468,
  [SMALL_STATE(72)] = 4518,
  [SMALL_STATE(73)] = 4568,
  [SMALL_STATE(74)] = 4618,
  [SMALL_STATE(75)] = 4668,
  [SMALL_STATE(76)] = 4718,
  [SMALL_STATE(77)] = 4768,
  [SMALL_STATE(78)] = 4818,
  [SMALL_STATE(79)] = 4868,
  [SMALL_STATE(80)] = 4918,
  [SMALL_STATE(81)] = 4968,
  [SMALL_STATE(82)] = 5004,
  [SMALL_STATE(83)] = 5054,
  [SMALL_STATE(84)] = 5104,
  [SMALL_STATE(85)] = 5154,
  [SMALL_STATE(86)] = 5204,
  [SMALL_STATE(87)] = 5254,
  [SMALL_STATE(88)] = 5304,
  [SMALL_STATE(89)] = 5354,
  [SMALL_STATE(90)] = 5401,
  [SMALL_STATE(91)] = 5448,
  [SMALL_STATE(92)] = 5497,
  [SMALL_STATE(93)] = 5544,
  [SMALL_STATE(94)] = 5593,
  [SMALL_STATE(95)] = 5640,
  [SMALL_STATE(96)] = 5687,
  [SMALL_STATE(97)] = 5734,
  [SMALL_STATE(98)] = 5783,
  [SMALL_STATE(99)] = 5830,
  [SMALL_STATE(100)] = 5877,
  [SMALL_STATE(101)] = 5905,
  [SMALL_STATE(102)] = 5949,
  [SMALL_STATE(103)] = 5977,
  [SMALL_STATE(104)] = 6005,
  [SMALL_STATE(105)] = 6033,
  [SMALL_STATE(106)] = 6061,
  [SMALL_STATE(107)] = 6089,
  [SMALL_STATE(108)] = 6117,
  [SMALL_STATE(109)] = 6145,
  [SMALL_STATE(110)] = 6189,
  [SMALL_STATE(111)] = 6217,
  [SMALL_STATE(112)] = 6245,
  [SMALL_STATE(113)] = 6289,
  [SMALL_STATE(114)] = 6333,
  [SMALL_STATE(115)] = 6377,
  [SMALL_STATE(116)] = 6405,
  [SMALL_STATE(117)] = 6449,
  [SMALL_STATE(118)] = 6493,
  [SMALL_STATE(119)] = 6537,
  [SMALL_STATE(120)] = 6565,
  [SMALL_STATE(121)] = 6609,
  [SMALL_STATE(122)] = 6653,
  [SMALL_STATE(123)] = 6697,
  [SMALL_STATE(124)] = 6725,
  [SMALL_STATE(125)] = 6753,
  [SMALL_STATE(126)] = 6797,
  [SMALL_STATE(127)] = 6841,
  [SMALL_STATE(128)] = 6871,
  [SMALL_STATE(129)] = 6901,
  [SMALL_STATE(130)] = 6926,
  [SMALL_STATE(131)] = 6963,
  [SMALL_STATE(132)] = 6990,
  [SMALL_STATE(133)] = 7012,
  [SMALL_STATE(134)] = 7034,
  [SMALL_STATE(135)] = 7056,
  [SMALL_STATE(136)] = 7078,
  [SMALL_STATE(137)] = 7102,
  [SMALL_STATE(138)] = 7126,
  [SMALL_STATE(139)] = 7150,
  [SMALL_STATE(140)] = 7174,
  [SMALL_STATE(141)] = 7198,
  [SMALL_STATE(142)] = 7222,
  [SMALL_STATE(143)] = 7246,
  [SMALL_STATE(144)] = 7270,
  [SMALL_STATE(145)] = 7294,
  [SMALL_STATE(146)] = 7316,
  [SMALL_STATE(147)] = 7340,
  [SMALL_STATE(148)] = 7364,
  [SMALL_STATE(149)] = 7388,
  [SMALL_STATE(150)] = 7411,
  [SMALL_STATE(151)] = 7434,
  [SMALL_STATE(152)] = 7457,
  [SMALL_STATE(153)] = 7480,
  [SMALL_STATE(154)] = 7503,
  [SMALL_STATE(155)] = 7528,
  [SMALL_STATE(156)] = 7548,
  [SMALL_STATE(157)] = 7568,
  [SMALL_STATE(158)] = 7588,
  [SMALL_STATE(159)] = 7608,
  [SMALL_STATE(160)] = 7628,
  [SMALL_STATE(161)] = 7648,
  [SMALL_STATE(162)] = 7676,
  [SMALL_STATE(163)] = 7704,
  [SMALL_STATE(164)] = 7719,
  [SMALL_STATE(165)] = 7744,
  [SMALL_STATE(166)] = 7766,
  [SMALL_STATE(167)] = 7788,
  [SMALL_STATE(168)] = 7810,
  [SMALL_STATE(169)] = 7824,
  [SMALL_STATE(170)] = 7846,
  [SMALL_STATE(171)] = 7865,
  [SMALL_STATE(172)] = 7878,
  [SMALL_STATE(173)] = 7897,
  [SMALL_STATE(174)] = 7916,
  [SMALL_STATE(175)] = 7935,
  [SMALL_STATE(176)] = 7954,
  [SMALL_STATE(177)] = 7973,
  [SMALL_STATE(178)] = 7992,
  [SMALL_STATE(179)] = 8007,
  [SMALL_STATE(180)] = 8021,
  [SMALL_STATE(181)] = 8035,
  [SMALL_STATE(182)] = 8049,
  [SMALL_STATE(183)] = 8065,
  [SMALL_STATE(184)] = 8080,
  [SMALL_STATE(185)] = 8095,
  [SMALL_STATE(186)] = 8112,
  [SMALL_STATE(187)] = 8131,
  [SMALL_STATE(188)] = 8148,
  [SMALL_STATE(189)] = 8161,
  [SMALL_STATE(190)] = 8176,
  [SMALL_STATE(191)] = 8186,
  [SMALL_STATE(192)] = 8200,
  [SMALL_STATE(193)] = 8216,
  [SMALL_STATE(194)] = 8228,
  [SMALL_STATE(195)] = 8242,
  [SMALL_STATE(196)] = 8254,
  [SMALL_STATE(197)] = 8264,
  [SMALL_STATE(198)] = 8278,
  [SMALL_STATE(199)] = 8290,
  [SMALL_STATE(200)] = 8304,
  [SMALL_STATE(201)] = 8318,
  [SMALL_STATE(202)] = 8332,
  [SMALL_STATE(203)] = 8348,
  [SMALL_STATE(204)] = 8358,
  [SMALL_STATE(205)] = 8370,
  [SMALL_STATE(206)] = 8386,
  [SMALL_STATE(207)] = 8402,
  [SMALL_STATE(208)] = 8414,
  [SMALL_STATE(209)] = 8427,
  [SMALL_STATE(210)] = 8438,
  [SMALL_STATE(211)] = 8447,
  [SMALL_STATE(212)] = 8456,
  [SMALL_STATE(213)] = 8469,
  [SMALL_STATE(214)] = 8480,
  [SMALL_STATE(215)] = 8493,
  [SMALL_STATE(216)] = 8506,
  [SMALL_STATE(217)] = 8515,
  [SMALL_STATE(218)] = 8526,
  [SMALL_STATE(219)] = 8537,
  [SMALL_STATE(220)] = 8550,
  [SMALL_STATE(221)] = 8561,
  [SMALL_STATE(222)] = 8570,
  [SMALL_STATE(223)] = 8580,
  [SMALL_STATE(224)] = 8590,
  [SMALL_STATE(225)] = 8600,
  [SMALL_STATE(226)] = 8610,
  [SMALL_STATE(227)] = 8620,
  [SMALL_STATE(228)] = 8630,
  [SMALL_STATE(229)] = 8640,
  [SMALL_STATE(230)] = 8650,
  [SMALL_STATE(231)] = 8660,
  [SMALL_STATE(232)] = 8670,
  [SMALL_STATE(233)] = 8680,
  [SMALL_STATE(234)] = 8690,
  [SMALL_STATE(235)] = 8700,
  [SMALL_STATE(236)] = 8710,
  [SMALL_STATE(237)] = 8720,
  [SMALL_STATE(238)] = 8730,
  [SMALL_STATE(239)] = 8740,
  [SMALL_STATE(240)] = 8750,
  [SMALL_STATE(241)] = 8760,
  [SMALL_STATE(242)] = 8770,
  [SMALL_STATE(243)] = 8780,
  [SMALL_STATE(244)] = 8790,
  [SMALL_STATE(245)] = 8800,
  [SMALL_STATE(246)] = 8810,
  [SMALL_STATE(247)] = 8820,
  [SMALL_STATE(248)] = 8830,
  [SMALL_STATE(249)] = 8840,
  [SMALL_STATE(250)] = 8847,
  [SMALL_STATE(251)] = 8854,
  [SMALL_STATE(252)] = 8861,
  [SMALL_STATE(253)] = 8868,
  [SMALL_STATE(254)] = 8875,
  [SMALL_STATE(255)] = 8882,
  [SMALL_STATE(256)] = 8889,
  [SMALL_STATE(257)] = 8896,
  [SMALL_STATE(258)] = 8903,
  [SMALL_STATE(259)] = 8910,
  [SMALL_STATE(260)] = 8917,
  [SMALL_STATE(261)] = 8924,
  [SMALL_STATE(262)] = 8931,
  [SMALL_STATE(263)] = 8938,
  [SMALL_STATE(264)] = 8945,
  [SMALL_STATE(265)] = 8952,
  [SMALL_STATE(266)] = 8959,
  [SMALL_STATE(267)] = 8966,
  [SMALL_STATE(268)] = 8973,
  [SMALL_STATE(269)] = 8980,
  [SMALL_STATE(270)] = 8987,
  [SMALL_STATE(271)] = 8994,
  [SMALL_STATE(272)] = 9001,
  [SMALL_STATE(273)] = 9008,
  [SMALL_STATE(274)] = 9015,
  [SMALL_STATE(275)] = 9022,
  [SMALL_STATE(276)] = 9029,
  [SMALL_STATE(277)] = 9036,
  [SMALL_STATE(278)] = 9043,
  [SMALL_STATE(279)] = 9050,
  [SMALL_STATE(280)] = 9057,
  [SMALL_STATE(281)] = 9064,
  [SMALL_STATE(282)] = 9071,
  [SMALL_STATE(283)] = 9078,
  [SMALL_STATE(284)] = 9085,
  [SMALL_STATE(285)] = 9092,
  [SMALL_STATE(286)] = 9099,
  [SMALL_STATE(287)] = 9106,
  [SMALL_STATE(288)] = 9113,
  [SMALL_STATE(289)] = 9120,
  [SMALL_STATE(290)] = 9127,
  [SMALL_STATE(291)] = 9134,
  [SMALL_STATE(292)] = 9141,
  [SMALL_STATE(293)] = 9148,
  [SMALL_STATE(294)] = 9155,
  [SMALL_STATE(295)] = 9162,
  [SMALL_STATE(296)] = 9169,
  [SMALL_STATE(297)] = 9176,
  [SMALL_STATE(298)] = 9183,
  [SMALL_STATE(299)] = 9190,
  [SMALL_STATE(300)] = 9197,
  [SMALL_STATE(301)] = 9204,
  [SMALL_STATE(302)] = 9211,
  [SMALL_STATE(303)] = 9218,
  [SMALL_STATE(304)] = 9225,
  [SMALL_STATE(305)] = 9232,
  [SMALL_STATE(306)] = 9239,
  [SMALL_STATE(307)] = 9246,
  [SMALL_STATE(308)] = 9253,
  [SMALL_STATE(309)] = 9260,
  [SMALL_STATE(310)] = 9267,
  [SMALL_STATE(311)] = 9274,
  [SMALL_STATE(312)] = 9281,
  [SMALL_STATE(313)] = 9288,
  [SMALL_STATE(314)] = 9295,
  [SMALL_STATE(315)] = 9302,
  [SMALL_STATE(316)] = 9309,
  [SMALL_STATE(317)] = 9316,
  [SMALL_STATE(318)] = 9323,
  [SMALL_STATE(319)] = 9330,
  [SMALL_STATE(320)] = 9337,
  [SMALL_STATE(321)] = 9344,
  [SMALL_STATE(322)] = 9351,
  [SMALL_STATE(323)] = 9358,
  [SMALL_STATE(324)] = 9365,
  [SMALL_STATE(325)] = 9372,
  [SMALL_STATE(326)] = 9379,
  [SMALL_STATE(327)] = 9386,
  [SMALL_STATE(328)] = 9393,
  [SMALL_STATE(329)] = 9400,
  [SMALL_STATE(330)] = 9407,
  [SMALL_STATE(331)] = 9414,
  [SMALL_STATE(332)] = 9421,
  [SMALL_STATE(333)] = 9428,
  [SMALL_STATE(334)] = 9435,
  [SMALL_STATE(335)] = 9442,
  [SMALL_STATE(336)] = 9449,
  [SMALL_STATE(337)] = 9456,
  [SMALL_STATE(338)] = 9463,
  [SMALL_STATE(339)] = 9470,
  [SMALL_STATE(340)] = 9477,
  [SMALL_STATE(341)] = 9484,
  [SMALL_STATE(342)] = 9491,
  [SMALL_STATE(343)] = 9498,
  [SMALL_STATE(344)] = 9505,
  [SMALL_STATE(345)] = 9512,
  [SMALL_STATE(346)] = 9519,
  [SMALL_STATE(347)] = 9526,
  [SMALL_STATE(348)] = 9533,
  [SMALL_STATE(349)] = 9540,
  [SMALL_STATE(350)] = 9547,
  [SMALL_STATE(351)] = 9554,
  [SMALL_STATE(352)] = 9561,
  [SMALL_STATE(353)] = 9568,
  [SMALL_STATE(354)] = 9575,
  [SMALL_STATE(355)] = 9582,
  [SMALL_STATE(356)] = 9589,
  [SMALL_STATE(357)] = 9596,
  [SMALL_STATE(358)] = 9603,
  [SMALL_STATE(359)] = 9610,
  [SMALL_STATE(360)] = 9617,
  [SMALL_STATE(361)] = 9624,
  [SMALL_STATE(362)] = 9631,
  [SMALL_STATE(363)] = 9638,
  [SMALL_STATE(364)] = 9645,
  [SMALL_STATE(365)] = 9652,
  [SMALL_STATE(366)] = 9659,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_block, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules_block, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_block, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_block, 3, .production_id = 5),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_block, 5, .production_id = 24),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules_block, 5, .production_id = 24),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(131),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(355),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(197),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(354),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(103),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(186),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(221),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(216),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(171),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(30),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(98),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(104),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(105),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(353),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(236),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dif_expr, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(100),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(103),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(171),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(30),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(95),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(104),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(105),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(353),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(338),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(100),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(103),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(30),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(99),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(104),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(105),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(353),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(338),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(89),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(94),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(98),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(96),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(92),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cat_expr, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cat_expr, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(90),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(95),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1, .production_id = 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1, .production_id = 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 5, .production_id = 19),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 5, .production_id = 19),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1, .production_id = 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard, 1, .production_id = 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dstring, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dstring, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sstring, 1),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sstring, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4, .production_id = 12),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4, .production_id = 12),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4, .production_id = 19),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4, .production_id = 19),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtag, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mtag, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 3, .production_id = 12),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3, .production_id = 12),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stag, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stag, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 2),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(151),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(151),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(152),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(153),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(336),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(335),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_rule, 2),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_rule, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_rule, 3),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_rule, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shortcut, 2, .production_id = 13),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shortcut, 2, .production_id = 13),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 3, .production_id = 23),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 5, .production_id = 35),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 4, .production_id = 32),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, .production_id = 5),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, .production_id = 5),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linedir, 5, .production_id = 31),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_linedir, 5, .production_id = 31),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordinary_rule, 2),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordinary_rule, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_rule, 4),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_rule, 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, .dynamic_precedence = 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, .dynamic_precedence = 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_definition, 4, .production_id = 22),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_definition, 4, .production_id = 22),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linedir, 4, .production_id = 21),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_linedir, 4, .production_id = 21),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repetition, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, .dynamic_precedence = 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, .dynamic_precedence = 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, .production_id = 9),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3, .production_id = 9),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 4),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_configuration, 4),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_unit, 2),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_unit, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 20),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 20),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_unit, 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_unit, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 1),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 1), SHIFT(130),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 2),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, .production_id = 10),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4, .production_id = 18),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, .production_id = 30),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtags_block, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stags_block, 3),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 6),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 1), SHIFT(165),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 1), SHIFT(181),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 1), SHIFT(169),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__code_in_braces, 1), SHIFT(169),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(165),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(166),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(166),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 1),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_difference, 3, .production_id = 15),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 2), SHIFT(165),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 2), SHIFT(179),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 2), SHIFT(166),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__code_in_braces, 2), SHIFT(166),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtags_block, 5),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch, 1, .production_id = 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stags_block_repeat1, 2),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stags_block_repeat1, 2), SHIFT_REPEAT(308),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stags_block_repeat1, 2), SHIFT_REPEAT(307),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stags_block, 5),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stags_block, 4),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtags_block, 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternation, 2, .production_id = 7),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_in_braces, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__code_in_braces, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_in_braces, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__code_in_braces, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern_expr, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(313),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_list, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_block, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookahead, 3, .production_id = 14),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getstate_block, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2, .production_id = 25),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maxnmatch_block, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_separator_directive, 4, .production_id = 37),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_directive, 4, .production_id = 36),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conf_value, 1, .production_id = 27),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 2, .production_id = 26),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, .production_id = 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mininum, 1, .production_id = 16),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exactly, 1, .production_id = 17),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__clist_repeat1, 2), SHIFT_REPEAT(293),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_block, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_startlabel, 3, .production_id = 28),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_conf, 1),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_class_conf, 1),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api_style, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding_policy, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_eof, 3, .production_id = 28),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__maximum, 1, .production_id = 33),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_block, 6, .production_id = 24),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules_block, 6, .production_id = 24),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_flags, 4, .production_id = 34),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 4, .production_id = 34),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_cond, 4, .production_id = 34),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_label, 4, .production_id = 34),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_variable, 4, .production_id = 34),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_yych, 4, .production_id = 34),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_state, 4, .production_id = 34),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_yybm, 4, .production_id = 34),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_cgoto, 4, .production_id = 34),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_api, 4, .production_id = 34),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_tags, 4, .production_id = 34),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_indent, 4, .production_id = 34),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_yyfill, 4, .production_id = 34),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conf_value, 1, .production_id = 29),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_sentinel, 3, .production_id = 28),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_condprefix, 3, .production_id = 28),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 4, .production_id = 38),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, .production_id = 39),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_condenumprefix, 3, .production_id = 28),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_off_block, 5),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_on_block, 5),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_block, 5, .production_id = 24),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getstate_block, 4),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maxnmatch_block, 4),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_block, 4),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules_block, 4),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_block, 4),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__clist_repeat1, 2, .production_id = 11),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_block, 4, .production_id = 5),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_block, 2),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_re2c, 1),
  [994] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
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
