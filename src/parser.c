#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 382
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 215
#define ALIAS_COUNT 5
#define TOKEN_COUNT 120
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 40

enum {
  sym_identifier = 1,
  sym_host_lang = 2,
  anon_sym_SLASH_STAR_BANG = 3,
  anon_sym_STAR_SLASH = 4,
  anon_sym_re2c = 5,
  anon_sym_local = 6,
  anon_sym_COLON = 7,
  anon_sym_rules = 8,
  aux_sym__block_name_token1 = 9,
  anon_sym_use = 10,
  anon_sym_max = 11,
  anon_sym_maxnmatch = 12,
  anon_sym_types = 13,
  anon_sym_getstate = 14,
  anon_sym_stags = 15,
  anon_sym_mtags = 16,
  anon_sym_include = 17,
  aux_sym_header_on_block_token1 = 18,
  anon_sym_on = 19,
  anon_sym_off = 20,
  sym_ignore_block = 21,
  anon_sym_format = 22,
  anon_sym_EQ = 23,
  anon_sym_SEMI = 24,
  anon_sym_separator = 25,
  anon_sym_re2c2 = 26,
  aux_sym__option_name_token1 = 27,
  anon_sym_AT = 28,
  anon_sym_flags = 29,
  anon_sym_define = 30,
  anon_sym_cond = 31,
  anon_sym_label = 32,
  anon_sym_variable = 33,
  anon_sym_yych = 34,
  anon_sym_state = 35,
  anon_sym_yybm = 36,
  anon_sym_cgoto = 37,
  anon_sym_api = 38,
  anon_sym_tags = 39,
  anon_sym_indent = 40,
  anon_sym_yyfill = 41,
  anon_sym_eof = 42,
  anon_sym_sentinel = 43,
  anon_sym_condprefix = 44,
  anon_sym_condenumprefix = 45,
  anon_sym_labelprefix = 46,
  anon_sym_startlabel = 47,
  anon_sym_DOT = 48,
  anon_sym_DASH_GT = 49,
  anon_sym_ignore = 50,
  anon_sym_substitute = 51,
  anon_sym_fail = 52,
  anon_sym_default = 53,
  anon_sym_custom = 54,
  anon_sym_match_DASHempty = 55,
  anon_sym_match_DASHnone = 56,
  anon_sym_error = 57,
  anon_sym_functions = 58,
  anon_sym_free_DASHform = 59,
  anon_sym_EQ_GT = 60,
  anon_sym_COLON_EQ_GT = 61,
  anon_sym_LT = 62,
  anon_sym_GT = 63,
  anon_sym_BANG = 64,
  anon_sym_COMMA = 65,
  anon_sym_STAR = 66,
  anon_sym_DOLLAR = 67,
  anon_sym_LBRACE = 68,
  anon_sym_RBRACE = 69,
  aux_sym__code_in_braces_token1 = 70,
  aux_sym__code_in_braces_token2 = 71,
  aux_sym__code_in_braces_token3 = 72,
  aux_sym__code_in_braces_token4 = 73,
  anon_sym_BANGuse = 74,
  anon_sym_BANGinclude = 75,
  anon_sym_SLASH = 76,
  anon_sym_PIPE = 77,
  anon_sym_ = 78,
  anon_sym_BSLASH = 79,
  anon_sym_STAR2 = 80,
  anon_sym_PLUS = 81,
  anon_sym_QMARK = 82,
  anon_sym_LBRACE2 = 83,
  anon_sym_COMMA2 = 84,
  anon_sym_RBRACE2 = 85,
  aux_sym__mininum_token1 = 86,
  anon_sym_LPAREN = 87,
  anon_sym_RPAREN = 88,
  anon_sym_LBRACK = 89,
  anon_sym_CARET = 90,
  anon_sym_RBRACK = 91,
  aux_sym_range_token1 = 92,
  aux_sym_literal_token1 = 93,
  aux_sym_dstring_token1 = 94,
  aux_sym_sstring_token1 = 95,
  sym_quote = 96,
  sym_ctrl_code = 97,
  aux_sym__esc_hex_token1 = 98,
  aux_sym__esc_hex_token2 = 99,
  aux_sym__esc_hex_token3 = 100,
  aux_sym__esc_hex_token4 = 101,
  aux_sym__esc_hex_token5 = 102,
  aux_sym__esc_hex_token6 = 103,
  aux_sym__esc_hex_token7 = 104,
  aux_sym__esc_hex_token8 = 105,
  aux_sym__esc_oct_token1 = 106,
  aux_sym__esc_oct_token2 = 107,
  sym_hex_digit = 108,
  sym_oct_digit = 109,
  anon_sym_AT2 = 110,
  anon_sym_POUND = 111,
  anon_sym_0 = 112,
  anon_sym_DASH = 113,
  aux_sym_number_token1 = 114,
  aux_sym_number_token2 = 115,
  aux_sym_comment_token1 = 116,
  aux_sym_comment_token2 = 117,
  anon_sym_line = 118,
  aux_sym_linedir_token1 = 119,
  sym_re2c = 120,
  sym__block = 121,
  sym_global_block = 122,
  sym_local_block = 123,
  sym_rules_block = 124,
  sym_use_block = 125,
  sym_max_block = 126,
  sym_maxnmatch_block = 127,
  sym_getstate_block = 128,
  sym_stags_block = 129,
  sym_mtags_block = 130,
  sym_header_on_block = 131,
  sym_header_off_block = 132,
  sym_block_list = 133,
  sym__tag_directive = 134,
  sym_format_directive = 135,
  sym_separator_directive = 136,
  sym_body = 137,
  sym_named_definition = 138,
  sym_configuration = 139,
  sym__option_name = 140,
  sym_set_flags = 141,
  sym_define = 142,
  sym_set_cond = 143,
  sym_set_label = 144,
  sym_set_variable = 145,
  sym_set_yych = 146,
  sym_set_state = 147,
  sym_set_yybm = 148,
  sym_set_cgoto = 149,
  sym_set_api = 150,
  sym_set_tags = 151,
  sym_set_indent = 152,
  sym_set_yyfill = 153,
  sym_set_eof = 154,
  sym_set_sentinel = 155,
  sym_set_condprefix = 156,
  sym_set_condenumprefix = 157,
  sym_set_startlabel = 158,
  sym__conf_value = 159,
  sym_field_expression = 160,
  sym_encoding_policy = 161,
  sym_input_conf = 162,
  sym_empty_class_conf = 163,
  sym_api_style = 164,
  sym_ordinary_rule = 165,
  sym_conditional_rule = 166,
  sym_shortcut = 167,
  sym_condition = 168,
  sym_pattern = 169,
  sym_action = 170,
  sym_code_block = 171,
  sym__code_in_braces = 172,
  sym_use = 173,
  sym_include = 174,
  sym_regex = 175,
  sym_lookahead = 176,
  sym__pattern_expr = 177,
  sym_alternation = 178,
  sym__branch = 179,
  sym__alt_expr = 180,
  sym_difference = 181,
  sym__dif_expr = 182,
  sym_concat = 183,
  sym__cat_expr = 184,
  sym_repetition = 185,
  sym_close = 186,
  sym_limits = 187,
  sym__mininum = 188,
  sym__maximum = 189,
  sym__exactly = 190,
  sym__atom = 191,
  sym_parenthesized = 192,
  sym_character_class = 193,
  sym_range = 194,
  sym_wildcard = 195,
  sym_literal = 196,
  sym_dstring = 197,
  sym_sstring = 198,
  sym__escape = 199,
  sym_code_unit = 200,
  sym_stag = 201,
  sym_mtag = 202,
  sym_number = 203,
  sym_comment = 204,
  sym_linedir = 205,
  aux_sym_re2c_repeat1 = 206,
  aux_sym_stags_block_repeat1 = 207,
  aux_sym_block_list_repeat1 = 208,
  aux_sym_body_repeat1 = 209,
  aux_sym__clist_repeat1 = 210,
  aux_sym_code_block_repeat1 = 211,
  aux_sym_alternation_repeat1 = 212,
  aux_sym_concat_repeat1 = 213,
  aux_sym_character_class_repeat1 = 214,
  alias_sym_block_name = 215,
  alias_sym_default = 216,
  alias_sym_field_identifier = 217,
  alias_sym_label = 218,
  alias_sym_name = 219,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_host_lang] = "host_lang",
  [anon_sym_SLASH_STAR_BANG] = "/*!",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_re2c] = "re2c",
  [anon_sym_local] = "local",
  [anon_sym_COLON] = ":",
  [anon_sym_rules] = "rules",
  [aux_sym__block_name_token1] = "_block_name_token1",
  [anon_sym_use] = "use",
  [anon_sym_max] = "max",
  [anon_sym_maxnmatch] = "maxnmatch",
  [anon_sym_types] = "types",
  [anon_sym_getstate] = "getstate",
  [anon_sym_stags] = "stags",
  [anon_sym_mtags] = "mtags",
  [anon_sym_include] = "include",
  [aux_sym_header_on_block_token1] = "header_on_block_token1",
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
  [anon_sym_BANGuse] = "!use",
  [anon_sym_BANGinclude] = "!include",
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
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
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
  [sym_code_block] = "host_lang",
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
  [sym_comment] = "comment",
  [sym_linedir] = "linedir",
  [aux_sym_re2c_repeat1] = "re2c_repeat1",
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
  [sym_host_lang] = sym_host_lang,
  [anon_sym_SLASH_STAR_BANG] = anon_sym_SLASH_STAR_BANG,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_re2c] = anon_sym_re2c,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_rules] = anon_sym_rules,
  [aux_sym__block_name_token1] = aux_sym__block_name_token1,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_maxnmatch] = anon_sym_maxnmatch,
  [anon_sym_types] = anon_sym_types,
  [anon_sym_getstate] = anon_sym_getstate,
  [anon_sym_stags] = anon_sym_stags,
  [anon_sym_mtags] = anon_sym_mtags,
  [anon_sym_include] = anon_sym_include,
  [aux_sym_header_on_block_token1] = aux_sym_header_on_block_token1,
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
  [anon_sym_BANGuse] = anon_sym_BANGuse,
  [anon_sym_BANGinclude] = anon_sym_BANGinclude,
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
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
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
  [sym_code_block] = sym_host_lang,
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
  [sym_comment] = sym_comment,
  [sym_linedir] = sym_linedir,
  [aux_sym_re2c_repeat1] = aux_sym_re2c_repeat1,
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
  [sym_host_lang] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_STAR_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_re2c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rules] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__block_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maxnmatch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_types] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getstate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mtags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_header_on_block_token1] = {
    .visible = false,
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
  [anon_sym_BANGuse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGinclude] = {
    .visible = true,
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
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_linedir] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_re2c_repeat1] = {
    .visible = false,
    .named = false,
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
  [11] = {.index = 10, .length = 1},
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
  [9] = {
    [1] = alias_sym_label,
  },
  [10] = {
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
      if (eof) ADVANCE(98);
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '"') ADVANCE(177);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(180);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '-') ADVANCE(241);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '0') ADVANCE(240);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '?') ADVANCE(151);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == '^') ADVANCE(159);
      if (lookahead == 'h') ADVANCE(225);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '}') ADVANCE(154);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (('G' <= lookahead && lookahead <= '_') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead == '?') ADVANCE(151);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '?') ADVANCE(151);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '?') ADVANCE(151);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '?') ADVANCE(151);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '?') ADVANCE(151);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == '^') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '-') ADVANCE(241);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead == '?') ADVANCE(151);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '?') ADVANCE(151);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '?') ADVANCE(151);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(104);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(104);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '?') ADVANCE(151);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '?') ADVANCE(151);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == ',') ADVANCE(127);
      if (lookahead == '-') ADVANCE(241);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == ',') ADVANCE(127);
      if (lookahead == '-') ADVANCE(241);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(247);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(110);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(93);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(246);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'h') ADVANCE(225);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(105);
      END_STATE();
    case 52:
      if (lookahead == '2') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == '2') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(122);
      END_STATE();
    case 56:
      if (lookahead == '>') ADVANCE(123);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(118);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 85:
      if (lookahead == '"' ||
          lookahead == '-' ||
          lookahead == '\\' ||
          lookahead == ']') ADVANCE(182);
      if (lookahead == 'U') ADVANCE(205);
      if (lookahead == 'X') ADVANCE(197);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == 'x') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(208);
      END_STATE();
    case 86:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 87:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(180);
      END_STATE();
    case 88:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 89:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 90:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 91:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 92:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(247);
      if (lookahead == '\r') ADVANCE(249);
      END_STATE();
    case 93:
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(102);
      END_STATE();
    case 94:
      if (eof) ADVANCE(98);
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '"') ADVANCE(177);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(180);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == ',') ADVANCE(127);
      if (lookahead == '-') ADVANCE(241);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 95:
      if (eof) ADVANCE(98);
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '}') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(96)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 96:
      if (eof) ADVANCE(98);
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(96)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 97:
      if (eof) ADVANCE(98);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_host_lang);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_host_lang);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_host_lang);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_host_lang);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_host_lang);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '/') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '/') ADVANCE(245);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR_BANG);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__block_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_header_on_block_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ignore_block);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_re2c2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__option_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_match_DASHempty);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_match_DASHnone);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_free_DASHform);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_GT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(105);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__code_in_braces_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__code_in_braces_token2);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__code_in_braces_token3);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__code_in_braces_token3);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BANGuse);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(247);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(247);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"' ||
          lookahead == '-' ||
          lookahead == '\\' ||
          lookahead == ']') ADVANCE(182);
      if (lookahead == 'U') ADVANCE(205);
      if (lookahead == 'X') ADVANCE(197);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == 'x') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(208);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__mininum_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_range_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(212);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(247);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '>') ADVANCE(122);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"' ||
          lookahead == '-' ||
          lookahead == '\\' ||
          lookahead == ']') ADVANCE(182);
      if (lookahead == 'U') ADVANCE(205);
      if (lookahead == 'X') ADVANCE(197);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == 'x') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(208);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_dstring_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_dstring_token1);
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_dstring_token1);
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_sstring_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_sstring_token1);
      if (lookahead == '\'') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_sstring_token1);
      if (lookahead == '\'') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_quote);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ctrl_code);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__esc_hex_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__esc_hex_token2);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__esc_hex_token3);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__esc_hex_token4);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__esc_hex_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__esc_hex_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__esc_hex_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__esc_hex_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__esc_hex_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__esc_hex_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__esc_hex_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__esc_hex_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__esc_hex_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__esc_hex_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__esc_hex_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__esc_oct_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__esc_oct_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__esc_oct_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_hex_digit);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_hex_digit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_oct_digit);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '!') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(246);
      if (lookahead == '/') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(103);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(92);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_linedir_token1);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '/') ADVANCE(35);
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
      if (lookahead == 'g') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == 'y') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 1:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == 'g') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 35:
      if (lookahead == 'x') ADVANCE(74);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(77);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_api);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_eof);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_max);
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(125);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_cond);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_fail);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_re2c);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_yybm);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_yych);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_cgoto);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_flags);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_label);
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_mtags);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_rules);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_stags);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_state);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_types);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_ignore);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_indent);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_yyfill);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 174:
      if (lookahead == 'f') ADVANCE(187);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(194);
      END_STATE();
    case 184:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_getstate);
      END_STATE();
    case 190:
      if (lookahead == 'f') ADVANCE(200);
      END_STATE();
    case 191:
      if (lookahead == 'h') ADVANCE(201);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_sentinel);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 198:
      if (lookahead == 'x') ADVANCE(206);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_maxnmatch);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_separator);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_condprefix);
      END_STATE();
    case 207:
      if (lookahead == 'x') ADVANCE(211);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_startlabel);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_substitute);
      END_STATE();
    case 210:
      if (lookahead == 'f') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_labelprefix);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 'x') ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_condenumprefix);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 97},
  [2] = {.lex_state = 142},
  [3] = {.lex_state = 142},
  [4] = {.lex_state = 142},
  [5] = {.lex_state = 144},
  [6] = {.lex_state = 144},
  [7] = {.lex_state = 144},
  [8] = {.lex_state = 144},
  [9] = {.lex_state = 144},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 145},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 95},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 146},
  [29] = {.lex_state = 146},
  [30] = {.lex_state = 146},
  [31] = {.lex_state = 146},
  [32] = {.lex_state = 146},
  [33] = {.lex_state = 146},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 30},
  [36] = {.lex_state = 30},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 146},
  [43] = {.lex_state = 30},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 146},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 30},
  [50] = {.lex_state = 30},
  [51] = {.lex_state = 146},
  [52] = {.lex_state = 146},
  [53] = {.lex_state = 146},
  [54] = {.lex_state = 30},
  [55] = {.lex_state = 30},
  [56] = {.lex_state = 30},
  [57] = {.lex_state = 146},
  [58] = {.lex_state = 30},
  [59] = {.lex_state = 30},
  [60] = {.lex_state = 146},
  [61] = {.lex_state = 30},
  [62] = {.lex_state = 95},
  [63] = {.lex_state = 95},
  [64] = {.lex_state = 95},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 95},
  [72] = {.lex_state = 95},
  [73] = {.lex_state = 43},
  [74] = {.lex_state = 95},
  [75] = {.lex_state = 95},
  [76] = {.lex_state = 95},
  [77] = {.lex_state = 95},
  [78] = {.lex_state = 95},
  [79] = {.lex_state = 95},
  [80] = {.lex_state = 95},
  [81] = {.lex_state = 95},
  [82] = {.lex_state = 95},
  [83] = {.lex_state = 95},
  [84] = {.lex_state = 95},
  [85] = {.lex_state = 95},
  [86] = {.lex_state = 95},
  [87] = {.lex_state = 95},
  [88] = {.lex_state = 18},
  [89] = {.lex_state = 95},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 95},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 95},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 95},
  [101] = {.lex_state = 18},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 18},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 18},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 18},
  [114] = {.lex_state = 18},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 18},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 18},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 18},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 18},
  [124] = {.lex_state = 18},
  [125] = {.lex_state = 18},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 18},
  [128] = {.lex_state = 143},
  [129] = {.lex_state = 143},
  [130] = {.lex_state = 143},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 21},
  [133] = {.lex_state = 144},
  [134] = {.lex_state = 144},
  [135] = {.lex_state = 144},
  [136] = {.lex_state = 144},
  [137] = {.lex_state = 20},
  [138] = {.lex_state = 144},
  [139] = {.lex_state = 144},
  [140] = {.lex_state = 144},
  [141] = {.lex_state = 144},
  [142] = {.lex_state = 20},
  [143] = {.lex_state = 144},
  [144] = {.lex_state = 20},
  [145] = {.lex_state = 20},
  [146] = {.lex_state = 144},
  [147] = {.lex_state = 20},
  [148] = {.lex_state = 144},
  [149] = {.lex_state = 144},
  [150] = {.lex_state = 144},
  [151] = {.lex_state = 20},
  [152] = {.lex_state = 20},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 145},
  [161] = {.lex_state = 145},
  [162] = {.lex_state = 145},
  [163] = {.lex_state = 145},
  [164] = {.lex_state = 145},
  [165] = {.lex_state = 145},
  [166] = {.lex_state = 39},
  [167] = {.lex_state = 39},
  [168] = {.lex_state = 146},
  [169] = {.lex_state = 17},
  [170] = {.lex_state = 20},
  [171] = {.lex_state = 17},
  [172] = {.lex_state = 17},
  [173] = {.lex_state = 17},
  [174] = {.lex_state = 17},
  [175] = {.lex_state = 20},
  [176] = {.lex_state = 20},
  [177] = {.lex_state = 95},
  [178] = {.lex_state = 95},
  [179] = {.lex_state = 95},
  [180] = {.lex_state = 95},
  [181] = {.lex_state = 95},
  [182] = {.lex_state = 95},
  [183] = {.lex_state = 95},
  [184] = {.lex_state = 20},
  [185] = {.lex_state = 20},
  [186] = {.lex_state = 17},
  [187] = {.lex_state = 17},
  [188] = {.lex_state = 20},
  [189] = {.lex_state = 17},
  [190] = {.lex_state = 20},
  [191] = {.lex_state = 17},
  [192] = {.lex_state = 20},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 95},
  [195] = {.lex_state = 39},
  [196] = {.lex_state = 39},
  [197] = {.lex_state = 95},
  [198] = {.lex_state = 97},
  [199] = {.lex_state = 95},
  [200] = {.lex_state = 95},
  [201] = {.lex_state = 97},
  [202] = {.lex_state = 95},
  [203] = {.lex_state = 30},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 95},
  [207] = {.lex_state = 20},
  [208] = {.lex_state = 20},
  [209] = {.lex_state = 95},
  [210] = {.lex_state = 95},
  [211] = {.lex_state = 95},
  [212] = {.lex_state = 95},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 39},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 30},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 30},
  [219] = {.lex_state = 95},
  [220] = {.lex_state = 95},
  [221] = {.lex_state = 97},
  [222] = {.lex_state = 95},
  [223] = {.lex_state = 95},
  [224] = {.lex_state = 95},
  [225] = {.lex_state = 95},
  [226] = {.lex_state = 95},
  [227] = {.lex_state = 95},
  [228] = {.lex_state = 97},
  [229] = {.lex_state = 95},
  [230] = {.lex_state = 95},
  [231] = {.lex_state = 95},
  [232] = {.lex_state = 95},
  [233] = {.lex_state = 95},
  [234] = {.lex_state = 95},
  [235] = {.lex_state = 30},
  [236] = {.lex_state = 95},
  [237] = {.lex_state = 95},
  [238] = {.lex_state = 30},
  [239] = {.lex_state = 30},
  [240] = {.lex_state = 30},
  [241] = {.lex_state = 30},
  [242] = {.lex_state = 30},
  [243] = {.lex_state = 30},
  [244] = {.lex_state = 95},
  [245] = {.lex_state = 95},
  [246] = {.lex_state = 30},
  [247] = {.lex_state = 30},
  [248] = {.lex_state = 50},
  [249] = {.lex_state = 95},
  [250] = {.lex_state = 30},
  [251] = {.lex_state = 30},
  [252] = {.lex_state = 30},
  [253] = {.lex_state = 95},
  [254] = {.lex_state = 20},
  [255] = {.lex_state = 95},
  [256] = {.lex_state = 30},
  [257] = {.lex_state = 95},
  [258] = {.lex_state = 30},
  [259] = {.lex_state = 95},
  [260] = {.lex_state = 30},
  [261] = {.lex_state = 20},
  [262] = {.lex_state = 30},
  [263] = {.lex_state = 30},
  [264] = {.lex_state = 30},
  [265] = {.lex_state = 30},
  [266] = {.lex_state = 95},
  [267] = {.lex_state = 95},
  [268] = {.lex_state = 9},
  [269] = {.lex_state = 95},
  [270] = {.lex_state = 95},
  [271] = {.lex_state = 95},
  [272] = {.lex_state = 95},
  [273] = {.lex_state = 95},
  [274] = {.lex_state = 95},
  [275] = {.lex_state = 95},
  [276] = {.lex_state = 95},
  [277] = {.lex_state = 95},
  [278] = {.lex_state = 48},
  [279] = {.lex_state = 95},
  [280] = {.lex_state = 95},
  [281] = {.lex_state = 95},
  [282] = {.lex_state = 95},
  [283] = {.lex_state = 95},
  [284] = {.lex_state = 95},
  [285] = {.lex_state = 95},
  [286] = {.lex_state = 95},
  [287] = {.lex_state = 95},
  [288] = {.lex_state = 95},
  [289] = {.lex_state = 95},
  [290] = {.lex_state = 95},
  [291] = {.lex_state = 95},
  [292] = {.lex_state = 95},
  [293] = {.lex_state = 95},
  [294] = {.lex_state = 95},
  [295] = {.lex_state = 95},
  [296] = {.lex_state = 30},
  [297] = {.lex_state = 95},
  [298] = {.lex_state = 95},
  [299] = {.lex_state = 95},
  [300] = {.lex_state = 30},
  [301] = {.lex_state = 95},
  [302] = {.lex_state = 95},
  [303] = {.lex_state = 95},
  [304] = {.lex_state = 9},
  [305] = {.lex_state = 43},
  [306] = {.lex_state = 9},
  [307] = {.lex_state = 30},
  [308] = {.lex_state = 30},
  [309] = {.lex_state = 30},
  [310] = {.lex_state = 30},
  [311] = {.lex_state = 30},
  [312] = {.lex_state = 30},
  [313] = {.lex_state = 30},
  [314] = {.lex_state = 30},
  [315] = {.lex_state = 30},
  [316] = {.lex_state = 30},
  [317] = {.lex_state = 30},
  [318] = {.lex_state = 30},
  [319] = {.lex_state = 30},
  [320] = {.lex_state = 48},
  [321] = {.lex_state = 30},
  [322] = {.lex_state = 30},
  [323] = {.lex_state = 95},
  [324] = {.lex_state = 43},
  [325] = {.lex_state = 95},
  [326] = {.lex_state = 95},
  [327] = {.lex_state = 47},
  [328] = {.lex_state = 47},
  [329] = {.lex_state = 95},
  [330] = {.lex_state = 47},
  [331] = {.lex_state = 95},
  [332] = {.lex_state = 47},
  [333] = {.lex_state = 95},
  [334] = {.lex_state = 95},
  [335] = {.lex_state = 30},
  [336] = {.lex_state = 95},
  [337] = {.lex_state = 95},
  [338] = {.lex_state = 95},
  [339] = {.lex_state = 95},
  [340] = {.lex_state = 95},
  [341] = {.lex_state = 30},
  [342] = {.lex_state = 30},
  [343] = {.lex_state = 30},
  [344] = {.lex_state = 30},
  [345] = {.lex_state = 95},
  [346] = {.lex_state = 95},
  [347] = {.lex_state = 95},
  [348] = {.lex_state = 95},
  [349] = {.lex_state = 39},
  [350] = {.lex_state = 46},
  [351] = {.lex_state = 95},
  [352] = {.lex_state = 47},
  [353] = {.lex_state = 95},
  [354] = {.lex_state = 47},
  [355] = {.lex_state = 95},
  [356] = {.lex_state = 95},
  [357] = {.lex_state = 95},
  [358] = {.lex_state = 95},
  [359] = {.lex_state = 95},
  [360] = {.lex_state = 95},
  [361] = {.lex_state = 95},
  [362] = {.lex_state = 95},
  [363] = {.lex_state = 95},
  [364] = {.lex_state = 95},
  [365] = {.lex_state = 95},
  [366] = {.lex_state = 47},
  [367] = {.lex_state = 30},
  [368] = {.lex_state = 30},
  [369] = {.lex_state = 47},
  [370] = {.lex_state = 95},
  [371] = {.lex_state = 30},
  [372] = {.lex_state = 30},
  [373] = {.lex_state = 30},
  [374] = {.lex_state = 30},
  [375] = {.lex_state = 30},
  [376] = {.lex_state = 30},
  [377] = {.lex_state = 30},
  [378] = {.lex_state = 30},
  [379] = {.lex_state = 30},
  [380] = {.lex_state = 95},
  [381] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SLASH_STAR_BANG] = ACTIONS(1),
    [anon_sym_re2c] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_rules] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_maxnmatch] = ACTIONS(1),
    [anon_sym_types] = ACTIONS(1),
    [anon_sym_getstate] = ACTIONS(1),
    [anon_sym_stags] = ACTIONS(1),
    [anon_sym_mtags] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [aux_sym_header_on_block_token1] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [sym_ignore_block] = ACTIONS(1),
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
    [aux_sym__code_in_braces_token2] = ACTIONS(1),
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
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [anon_sym_line] = ACTIONS(1),
  },
  [1] = {
    [sym_re2c] = STATE(380),
    [sym__block] = STATE(221),
    [sym_comment] = STATE(1),
    [aux_sym_re2c_repeat1] = STATE(201),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_host_lang] = ACTIONS(5),
    [anon_sym_SLASH_STAR_BANG] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(11),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 38,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(17), 1,
      anon_sym_COLON,
    ACTIONS(19), 1,
      anon_sym_re2c2,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_BANGuse,
    ACTIONS(31), 1,
      anon_sym_BANGinclude,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(45), 1,
      anon_sym_POUND,
    STATE(2), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_body_repeat1,
    STATE(13), 1,
      sym_condition,
    STATE(51), 1,
      aux_sym_alternation_repeat1,
    STATE(70), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(192), 1,
      sym_alternation,
    STATE(213), 1,
      sym__alt_expr,
    STATE(219), 1,
      sym_lookahead,
    STATE(225), 1,
      sym_regex,
    STATE(254), 1,
      sym__pattern_expr,
    STATE(255), 1,
      sym_pattern,
    STATE(331), 1,
      sym_body,
    STATE(364), 1,
      sym__branch,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
    STATE(141), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      sym_linedir,
  [128] = 38,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_re2c2,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_BANGuse,
    ACTIONS(31), 1,
      anon_sym_BANGinclude,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(49), 1,
      anon_sym_COLON,
    STATE(3), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_body_repeat1,
    STATE(13), 1,
      sym_condition,
    STATE(51), 1,
      aux_sym_alternation_repeat1,
    STATE(70), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(192), 1,
      sym_alternation,
    STATE(213), 1,
      sym__alt_expr,
    STATE(219), 1,
      sym_lookahead,
    STATE(225), 1,
      sym_regex,
    STATE(254), 1,
      sym__pattern_expr,
    STATE(255), 1,
      sym_pattern,
    STATE(329), 1,
      sym_body,
    STATE(364), 1,
      sym__branch,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
    STATE(141), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      sym_linedir,
  [256] = 38,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_re2c2,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_BANGuse,
    ACTIONS(31), 1,
      anon_sym_BANGinclude,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(53), 1,
      anon_sym_COLON,
    STATE(4), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_body_repeat1,
    STATE(13), 1,
      sym_condition,
    STATE(51), 1,
      aux_sym_alternation_repeat1,
    STATE(70), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(192), 1,
      sym_alternation,
    STATE(213), 1,
      sym__alt_expr,
    STATE(219), 1,
      sym_lookahead,
    STATE(225), 1,
      sym_regex,
    STATE(254), 1,
      sym__pattern_expr,
    STATE(255), 1,
      sym_pattern,
    STATE(364), 1,
      sym__branch,
    STATE(365), 1,
      sym_body,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
    STATE(141), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      sym_linedir,
  [384] = 37,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_re2c2,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_BANGuse,
    ACTIONS(31), 1,
      anon_sym_BANGinclude,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      anon_sym_STAR_SLASH,
    STATE(5), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_body_repeat1,
    STATE(13), 1,
      sym_condition,
    STATE(51), 1,
      aux_sym_alternation_repeat1,
    STATE(70), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(192), 1,
      sym_alternation,
    STATE(213), 1,
      sym__alt_expr,
    STATE(219), 1,
      sym_lookahead,
    STATE(225), 1,
      sym_regex,
    STATE(254), 1,
      sym__pattern_expr,
    STATE(255), 1,
      sym_pattern,
    STATE(274), 1,
      sym_body,
    STATE(364), 1,
      sym__branch,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
    STATE(141), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      sym_linedir,
  [509] = 37,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_re2c2,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_BANGuse,
    ACTIONS(31), 1,
      anon_sym_BANGinclude,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_STAR_SLASH,
    STATE(6), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_body_repeat1,
    STATE(13), 1,
      sym_condition,
    STATE(51), 1,
      aux_sym_alternation_repeat1,
    STATE(70), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(192), 1,
      sym_alternation,
    STATE(213), 1,
      sym__alt_expr,
    STATE(219), 1,
      sym_lookahead,
    STATE(225), 1,
      sym_regex,
    STATE(254), 1,
      sym__pattern_expr,
    STATE(255), 1,
      sym_pattern,
    STATE(275), 1,
      sym_body,
    STATE(364), 1,
      sym__branch,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
    STATE(141), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      sym_linedir,
  [634] = 37,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_re2c2,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_BANGuse,
    ACTIONS(31), 1,
      anon_sym_BANGinclude,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_STAR_SLASH,
    STATE(7), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_body_repeat1,
    STATE(13), 1,
      sym_condition,
    STATE(51), 1,
      aux_sym_alternation_repeat1,
    STATE(70), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(192), 1,
      sym_alternation,
    STATE(213), 1,
      sym__alt_expr,
    STATE(219), 1,
      sym_lookahead,
    STATE(225), 1,
      sym_regex,
    STATE(254), 1,
      sym__pattern_expr,
    STATE(255), 1,
      sym_pattern,
    STATE(345), 1,
      sym_body,
    STATE(364), 1,
      sym__branch,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
    STATE(141), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      sym_linedir,
  [759] = 35,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(66), 1,
      anon_sym_re2c2,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(72), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(78), 1,
      anon_sym_DOLLAR,
    ACTIONS(81), 1,
      anon_sym_BANGuse,
    ACTIONS(84), 1,
      anon_sym_BANGinclude,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      aux_sym_dstring_token1,
    ACTIONS(99), 1,
      aux_sym_sstring_token1,
    ACTIONS(102), 1,
      anon_sym_AT2,
    ACTIONS(105), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_condition,
    STATE(51), 1,
      aux_sym_alternation_repeat1,
    STATE(70), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(192), 1,
      sym_alternation,
    STATE(213), 1,
      sym__alt_expr,
    STATE(219), 1,
      sym_lookahead,
    STATE(225), 1,
      sym_regex,
    STATE(254), 1,
      sym__pattern_expr,
    STATE(255), 1,
      sym_pattern,
    STATE(364), 1,
      sym__branch,
    STATE(8), 2,
      sym_comment,
      aux_sym_body_repeat1,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
    STATE(141), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      sym_linedir,
  [879] = 36,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_re2c2,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_BANGuse,
    ACTIONS(31), 1,
      anon_sym_BANGinclude,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(108), 1,
      anon_sym_STAR_SLASH,
    STATE(8), 1,
      aux_sym_body_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(13), 1,
      sym_condition,
    STATE(51), 1,
      aux_sym_alternation_repeat1,
    STATE(70), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(192), 1,
      sym_alternation,
    STATE(213), 1,
      sym__alt_expr,
    STATE(219), 1,
      sym_lookahead,
    STATE(225), 1,
      sym_regex,
    STATE(254), 1,
      sym__pattern_expr,
    STATE(255), 1,
      sym_pattern,
    STATE(364), 1,
      sym__branch,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
    STATE(141), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      sym_linedir,
  [1001] = 16,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    STATE(10), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(112), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(110), 14,
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
  [1075] = 16,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(130), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(128), 14,
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
  [1149] = 16,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    STATE(12), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(112), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(110), 13,
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
  [1222] = 32,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    STATE(44), 1,
      sym__cat_expr,
    STATE(45), 1,
      aux_sym_alternation_repeat1,
    STATE(88), 1,
      sym__atom,
    STATE(129), 1,
      sym_shortcut,
    STATE(150), 1,
      sym_action,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(188), 1,
      sym__alt_expr,
    STATE(192), 1,
      sym_alternation,
    STATE(197), 1,
      sym_pattern,
    STATE(207), 1,
      sym__pattern_expr,
    STATE(219), 1,
      sym_lookahead,
    STATE(225), 1,
      sym_regex,
    STATE(364), 1,
      sym__branch,
    ACTIONS(136), 2,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [1327] = 16,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(130), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(128), 13,
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
  [1400] = 22,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(144), 1,
      anon_sym_flags,
    ACTIONS(146), 1,
      anon_sym_define,
    ACTIONS(148), 1,
      anon_sym_cond,
    ACTIONS(150), 1,
      anon_sym_label,
    ACTIONS(152), 1,
      anon_sym_variable,
    ACTIONS(154), 1,
      anon_sym_yych,
    ACTIONS(156), 1,
      anon_sym_state,
    ACTIONS(158), 1,
      anon_sym_yybm,
    ACTIONS(160), 1,
      anon_sym_cgoto,
    ACTIONS(162), 1,
      anon_sym_api,
    ACTIONS(164), 1,
      anon_sym_tags,
    ACTIONS(166), 1,
      anon_sym_indent,
    ACTIONS(168), 1,
      anon_sym_yyfill,
    ACTIONS(170), 1,
      anon_sym_eof,
    ACTIONS(172), 1,
      anon_sym_sentinel,
    ACTIONS(174), 1,
      anon_sym_condprefix,
    ACTIONS(176), 1,
      anon_sym_condenumprefix,
    ACTIONS(178), 1,
      anon_sym_startlabel,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    STATE(15), 1,
      sym_comment,
    STATE(340), 18,
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
  [1484] = 16,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(130), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(128), 12,
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
  [1556] = 16,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    STATE(17), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(112), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(110), 12,
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
  [1628] = 16,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(130), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(128), 12,
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
  [1700] = 16,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    STATE(19), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(112), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(110), 12,
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
  [1772] = 16,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(130), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(128), 11,
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
  [1843] = 16,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(130), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(128), 11,
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
  [1914] = 16,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    STATE(22), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(112), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(110), 11,
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
  [1985] = 16,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(130), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(128), 11,
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
  [2056] = 16,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    STATE(24), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(112), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(110), 11,
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
  [2127] = 16,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    STATE(25), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(112), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(110), 11,
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
  [2198] = 16,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    STATE(26), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(112), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(110), 10,
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
  [2268] = 16,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(130), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(128), 10,
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
  [2338] = 25,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_POUND,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_alternation_repeat1,
    STATE(67), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(192), 1,
      sym_alternation,
    STATE(208), 1,
      sym__alt_expr,
    STATE(219), 1,
      sym_lookahead,
    STATE(261), 1,
      sym__pattern_expr,
    STATE(336), 1,
      sym_regex,
    STATE(364), 1,
      sym__branch,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2421] = 23,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_POUND,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_alternation_repeat1,
    STATE(62), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(192), 1,
      sym_alternation,
    STATE(200), 1,
      sym__alt_expr,
    STATE(209), 1,
      sym__pattern_expr,
    STATE(364), 1,
      sym__branch,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2498] = 23,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_POUND,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_alternation_repeat1,
    STATE(71), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(192), 1,
      sym_alternation,
    STATE(209), 1,
      sym__pattern_expr,
    STATE(220), 1,
      sym__alt_expr,
    STATE(364), 1,
      sym__branch,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2575] = 23,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_POUND,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(192), 1,
      sym_alternation,
    STATE(209), 1,
      sym__pattern_expr,
    STATE(229), 1,
      sym__alt_expr,
    STATE(364), 1,
      sym__branch,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2652] = 23,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_POUND,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_alternation_repeat1,
    STATE(82), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(192), 1,
      sym_alternation,
    STATE(233), 1,
      sym__alt_expr,
    STATE(351), 1,
      sym__pattern_expr,
    STATE(364), 1,
      sym__branch,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2729] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_POUND,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_alternation_repeat1,
    STATE(87), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(185), 1,
      sym__branch,
    STATE(231), 1,
      sym__alt_expr,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [2800] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(34), 1,
      sym_comment,
    STATE(284), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2861] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(35), 1,
      sym_comment,
    STATE(271), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2922] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(36), 1,
      sym_comment,
    STATE(291), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [2983] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(37), 1,
      sym_comment,
    STATE(295), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3044] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(38), 1,
      sym_comment,
    STATE(298), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3105] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(39), 1,
      sym_comment,
    STATE(299), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3166] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(40), 1,
      sym_comment,
    STATE(279), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3227] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(41), 1,
      sym_comment,
    STATE(280), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3288] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_POUND,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_alternation_repeat1,
    STATE(82), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(185), 1,
      sym__branch,
    STATE(234), 1,
      sym__alt_expr,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3359] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(43), 1,
      sym_comment,
    STATE(281), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3420] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_concat_repeat1,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(218), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3485] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym__cat_expr,
    STATE(45), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_alternation_repeat1,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(185), 1,
      sym__branch,
    STATE(190), 1,
      sym__alt_expr,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3556] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(46), 1,
      sym_comment,
    STATE(290), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3617] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_concat_repeat1,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(230), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3682] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      aux_sym_dstring_token1,
    ACTIONS(253), 1,
      aux_sym_sstring_token1,
    ACTIONS(256), 1,
      anon_sym_AT2,
    ACTIONS(259), 1,
      anon_sym_POUND,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    STATE(48), 2,
      sym_comment,
      aux_sym_concat_repeat1,
    ACTIONS(240), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3745] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(49), 1,
      sym_comment,
    STATE(289), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3806] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(50), 1,
      sym_comment,
    STATE(282), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [3867] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_POUND,
    STATE(51), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_alternation_repeat1,
    STATE(70), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(185), 1,
      sym__branch,
    STATE(217), 1,
      sym__alt_expr,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [3938] = 20,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      aux_sym_dstring_token1,
    ACTIONS(280), 1,
      aux_sym_sstring_token1,
    ACTIONS(283), 1,
      anon_sym_AT2,
    ACTIONS(286), 1,
      anon_sym_POUND,
    STATE(88), 1,
      sym__atom,
    STATE(93), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(257), 1,
      sym__alt_expr,
    STATE(364), 1,
      sym__branch,
    STATE(52), 2,
      sym_comment,
      aux_sym_alternation_repeat1,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4007] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_POUND,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      aux_sym_alternation_repeat1,
    STATE(53), 1,
      sym_comment,
    STATE(67), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(185), 1,
      sym__branch,
    STATE(215), 1,
      sym__alt_expr,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4078] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(54), 1,
      sym_comment,
    STATE(288), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [4139] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(55), 1,
      sym_comment,
    STATE(287), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [4200] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(56), 1,
      sym_comment,
    STATE(283), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [4261] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_POUND,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      aux_sym_alternation_repeat1,
    STATE(57), 1,
      sym_comment,
    STATE(62), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(185), 1,
      sym__branch,
    STATE(199), 1,
      sym__alt_expr,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4332] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(58), 1,
      sym_comment,
    STATE(286), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [4393] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(59), 1,
      sym_comment,
    STATE(285), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [4454] = 21,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_dstring_token1,
    ACTIONS(41), 1,
      aux_sym_sstring_token1,
    ACTIONS(43), 1,
      anon_sym_AT2,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_POUND,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      aux_sym_alternation_repeat1,
    STATE(60), 1,
      sym_comment,
    STATE(71), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(176), 1,
      sym_concat,
    STATE(185), 1,
      sym__branch,
    STATE(232), 1,
      sym__alt_expr,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4525] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_error,
    ACTIONS(202), 1,
      anon_sym_functions,
    ACTIONS(204), 1,
      anon_sym_free_DASHform,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(212), 1,
      anon_sym_DASH,
    STATE(61), 1,
      sym_comment,
    STATE(294), 1,
      sym__conf_value,
    ACTIONS(196), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(198), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(210), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(194), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(293), 8,
      sym_field_expression,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_dstring,
      sym_sstring,
      sym_number,
  [4586] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
    STATE(62), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_concat_repeat1,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(218), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4648] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
    STATE(63), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_concat_repeat1,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(230), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4710] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      aux_sym_dstring_token1,
    ACTIONS(253), 1,
      aux_sym_sstring_token1,
    ACTIONS(256), 1,
      anon_sym_AT2,
    ACTIONS(259), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    STATE(64), 2,
      sym_comment,
      aux_sym_concat_repeat1,
    ACTIONS(240), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4770] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      aux_sym_dstring_token1,
    ACTIONS(253), 1,
      aux_sym_sstring_token1,
    ACTIONS(256), 1,
      anon_sym_AT2,
    ACTIONS(259), 1,
      anon_sym_POUND,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    STATE(65), 2,
      sym_comment,
      aux_sym_concat_repeat1,
    ACTIONS(240), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4831] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      anon_sym_SLASH,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    STATE(65), 1,
      aux_sym_concat_repeat1,
    STATE(66), 1,
      sym_comment,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(230), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4894] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      aux_sym_concat_repeat1,
    STATE(67), 1,
      sym_comment,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(218), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [4957] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      aux_sym_dstring_token1,
    ACTIONS(253), 1,
      aux_sym_sstring_token1,
    ACTIONS(256), 1,
      anon_sym_AT2,
    ACTIONS(259), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    STATE(68), 2,
      sym_comment,
      aux_sym_concat_repeat1,
    ACTIONS(240), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5018] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      anon_sym_SLASH,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    STATE(68), 1,
      aux_sym_concat_repeat1,
    STATE(69), 1,
      sym_comment,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(230), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5081] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      aux_sym_concat_repeat1,
    STATE(70), 1,
      sym_comment,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(218), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5144] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_concat_repeat1,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(218), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5204] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym__cat_expr,
    STATE(72), 1,
      sym_comment,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(170), 1,
      sym__alt_expr,
    STATE(176), 1,
      sym_concat,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5266] = 15,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(306), 1,
      anon_sym_re2c,
    ACTIONS(308), 1,
      anon_sym_local,
    ACTIONS(310), 1,
      anon_sym_rules,
    ACTIONS(312), 1,
      anon_sym_use,
    ACTIONS(314), 1,
      anon_sym_max,
    ACTIONS(316), 1,
      anon_sym_maxnmatch,
    ACTIONS(318), 1,
      anon_sym_getstate,
    ACTIONS(320), 1,
      anon_sym_stags,
    ACTIONS(322), 1,
      anon_sym_mtags,
    ACTIONS(324), 1,
      aux_sym_header_on_block_token1,
    ACTIONS(326), 1,
      sym_ignore_block,
    STATE(73), 1,
      sym_comment,
    STATE(370), 11,
      sym_global_block,
      sym_local_block,
      sym_rules_block,
      sym_use_block,
      sym_max_block,
      sym_maxnmatch_block,
      sym_getstate_block,
      sym_stags_block,
      sym_mtags_block,
      sym_header_on_block,
      sym_header_off_block,
  [5322] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      aux_sym_dstring_token1,
    ACTIONS(253), 1,
      aux_sym_sstring_token1,
    ACTIONS(256), 1,
      anon_sym_AT2,
    ACTIONS(259), 1,
      anon_sym_POUND,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    STATE(74), 2,
      sym_comment,
      aux_sym_concat_repeat1,
    ACTIONS(240), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5380] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    STATE(75), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_concat_repeat1,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(230), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5440] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
    STATE(62), 1,
      sym__cat_expr,
    STATE(76), 1,
      sym_comment,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(170), 1,
      sym__alt_expr,
    STATE(176), 1,
      sym_concat,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5502] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    STATE(74), 1,
      aux_sym_concat_repeat1,
    STATE(77), 1,
      sym_comment,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(230), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5562] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    STATE(67), 1,
      sym__cat_expr,
    STATE(78), 1,
      sym_comment,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(170), 1,
      sym__alt_expr,
    STATE(176), 1,
      sym_concat,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5624] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym_comment,
    STATE(88), 1,
      sym__atom,
    STATE(93), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    STATE(170), 1,
      sym__alt_expr,
    STATE(176), 1,
      sym_concat,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5686] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    STATE(80), 1,
      sym_comment,
    STATE(87), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(170), 1,
      sym__alt_expr,
    STATE(176), 1,
      sym_concat,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5748] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      aux_sym_dstring_token1,
    ACTIONS(253), 1,
      aux_sym_sstring_token1,
    ACTIONS(256), 1,
      anon_sym_AT2,
    ACTIONS(259), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    STATE(81), 2,
      sym_comment,
      aux_sym_concat_repeat1,
    ACTIONS(240), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5806] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(338), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_concat_repeat1,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(218), 3,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5866] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(338), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__cat_expr,
    STATE(83), 1,
      sym_comment,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(170), 1,
      sym__alt_expr,
    STATE(176), 1,
      sym_concat,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5928] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(338), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_concat_repeat1,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(230), 3,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [5988] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      aux_sym_dstring_token1,
    ACTIONS(253), 1,
      aux_sym_sstring_token1,
    ACTIONS(256), 1,
      anon_sym_AT2,
    ACTIONS(259), 1,
      anon_sym_POUND,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    STATE(85), 2,
      sym_comment,
      aux_sym_concat_repeat1,
    ACTIONS(240), 3,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [6046] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    STATE(70), 1,
      sym__cat_expr,
    STATE(86), 1,
      sym_comment,
    STATE(88), 1,
      sym__atom,
    STATE(152), 1,
      sym_repetition,
    STATE(170), 1,
      sym__alt_expr,
    STATE(176), 1,
      sym_concat,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [6108] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      aux_sym_concat_repeat1,
    STATE(87), 1,
      sym_comment,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(218), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [6168] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(349), 1,
      anon_sym_LBRACE2,
    STATE(88), 1,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
    STATE(144), 2,
      sym_close,
      sym_limits,
    ACTIONS(347), 3,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(343), 14,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
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
  [6210] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym__cat_expr,
    STATE(88), 1,
      sym__atom,
    STATE(89), 1,
      sym_comment,
    STATE(152), 1,
      sym_repetition,
    STATE(170), 1,
      sym__alt_expr,
    STATE(176), 1,
      sym_concat,
    STATE(175), 2,
      sym_difference,
      sym__dif_expr,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [6272] = 15,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(351), 1,
      anon_sym_CARET,
    ACTIONS(353), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6327] = 15,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(355), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6382] = 15,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(359), 1,
      anon_sym_CARET,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6437] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym__atom,
    STATE(93), 1,
      sym_comment,
    STATE(97), 1,
      aux_sym_concat_repeat1,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(218), 2,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [6496] = 15,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(363), 1,
      anon_sym_CARET,
    ACTIONS(365), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6551] = 15,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(367), 1,
      anon_sym_CARET,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6606] = 15,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(371), 1,
      anon_sym_CARET,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6661] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_AT2,
    ACTIONS(228), 1,
      anon_sym_POUND,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym__atom,
    STATE(97), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_concat_repeat1,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(230), 2,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [6720] = 15,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(375), 1,
      anon_sym_CARET,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6775] = 15,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(379), 1,
      anon_sym_CARET,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6830] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      aux_sym_dstring_token1,
    ACTIONS(253), 1,
      aux_sym_sstring_token1,
    ACTIONS(256), 1,
      anon_sym_AT2,
    ACTIONS(259), 1,
      anon_sym_POUND,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym__atom,
    STATE(147), 1,
      sym__cat_expr,
    STATE(152), 1,
      sym_repetition,
    ACTIONS(240), 2,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(100), 2,
      sym_comment,
      aux_sym_concat_repeat1,
    STATE(112), 7,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_dstring,
      sym_sstring,
      sym_stag,
      sym_mtag,
  [6887] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(101), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
    ACTIONS(386), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
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
  [6921] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(390), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      sym_comment,
    STATE(122), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6973] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(392), 1,
      anon_sym_RBRACK,
    STATE(103), 1,
      sym_comment,
    STATE(122), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [7025] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(394), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [7077] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(105), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
    ACTIONS(396), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
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
  [7111] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(400), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      sym_comment,
    STATE(122), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [7163] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(402), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_character_class_repeat1,
    STATE(107), 1,
      sym_comment,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [7215] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(108), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
    ACTIONS(404), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
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
  [7249] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(408), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_character_class_repeat1,
    STATE(109), 1,
      sym_comment,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [7301] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_character_class_repeat1,
    STATE(110), 1,
      sym_comment,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [7353] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(111), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
    ACTIONS(412), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
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
  [7387] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(112), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
    ACTIONS(416), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
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
  [7421] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(113), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
    ACTIONS(420), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
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
  [7455] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(114), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
    ACTIONS(424), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
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
  [7489] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(428), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_character_class_repeat1,
    STATE(115), 1,
      sym_comment,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [7541] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_character_class_repeat1,
    STATE(116), 1,
      sym_comment,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [7593] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(117), 1,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
    ACTIONS(432), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
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
  [7627] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_character_class_repeat1,
    STATE(118), 1,
      sym_comment,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [7679] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(119), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
    ACTIONS(438), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
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
  [7713] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      sym_comment,
    STATE(122), 1,
      aux_sym_character_class_repeat1,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [7765] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(121), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
    ACTIONS(444), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
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
  [7799] = 13,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
    ACTIONS(450), 1,
      aux_sym_range_token1,
    ACTIONS(453), 1,
      aux_sym_literal_token1,
    ACTIONS(465), 1,
      aux_sym__esc_oct_token2,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(456), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(122), 2,
      sym_comment,
      aux_sym_character_class_repeat1,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(462), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(459), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [7849] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(123), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
    ACTIONS(112), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
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
  [7883] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(124), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
    ACTIONS(468), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
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
  [7917] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(125), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
    ACTIONS(472), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
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
  [7951] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_character_class_repeat1,
    STATE(126), 1,
      sym_comment,
    STATE(153), 1,
      sym_code_unit,
    STATE(158), 1,
      sym_range,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(159), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [8003] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(127), 1,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
    ACTIONS(478), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
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
  [8037] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_comment,
    STATE(133), 1,
      sym_action,
    ACTIONS(482), 16,
      anon_sym_STAR_SLASH,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [8071] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_comment,
    STATE(143), 1,
      sym_action,
    ACTIONS(484), 16,
      anon_sym_STAR_SLASH,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [8105] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(130), 1,
      sym_comment,
    ACTIONS(486), 17,
      anon_sym_STAR_SLASH,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [8134] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      aux_sym_range_token1,
    ACTIONS(118), 1,
      aux_sym_literal_token1,
    ACTIONS(126), 1,
      aux_sym__esc_oct_token2,
    STATE(131), 1,
      sym_comment,
    STATE(153), 1,
      sym_code_unit,
    ACTIONS(120), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(155), 2,
      sym_literal,
      sym__escape,
    ACTIONS(124), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(122), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [8177] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(488), 1,
      anon_sym_EQ,
    STATE(132), 1,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
    ACTIONS(478), 14,
      anon_sym_DOT,
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
  [8210] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(133), 1,
      sym_comment,
    ACTIONS(490), 16,
      anon_sym_STAR_SLASH,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [8238] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(134), 1,
      sym_comment,
    ACTIONS(492), 16,
      anon_sym_STAR_SLASH,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [8266] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(135), 1,
      sym_comment,
    ACTIONS(494), 16,
      anon_sym_STAR_SLASH,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [8294] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(136), 1,
      sym_comment,
    ACTIONS(496), 16,
      anon_sym_STAR_SLASH,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [8322] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(500), 1,
      anon_sym_SLASH,
    STATE(137), 1,
      sym_comment,
    ACTIONS(498), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
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
  [8352] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(138), 1,
      sym_comment,
    ACTIONS(502), 16,
      anon_sym_STAR_SLASH,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [8380] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(139), 1,
      sym_comment,
    ACTIONS(504), 16,
      anon_sym_STAR_SLASH,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [8408] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(140), 1,
      sym_comment,
    ACTIONS(506), 16,
      anon_sym_STAR_SLASH,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [8436] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(141), 1,
      sym_comment,
    ACTIONS(508), 16,
      anon_sym_STAR_SLASH,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [8464] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(512), 1,
      anon_sym_SLASH,
    STATE(142), 1,
      sym_comment,
    ACTIONS(510), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
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
  [8494] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(143), 1,
      sym_comment,
    ACTIONS(482), 16,
      anon_sym_STAR_SLASH,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [8522] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(516), 1,
      anon_sym_SLASH,
    STATE(144), 1,
      sym_comment,
    ACTIONS(514), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
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
  [8552] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(520), 1,
      anon_sym_SLASH,
    STATE(145), 1,
      sym_comment,
    ACTIONS(518), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
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
  [8582] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(146), 1,
      sym_comment,
    ACTIONS(522), 16,
      anon_sym_STAR_SLASH,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [8610] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(526), 1,
      anon_sym_SLASH,
    STATE(147), 1,
      sym_comment,
    ACTIONS(524), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
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
  [8640] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(148), 1,
      sym_comment,
    ACTIONS(528), 16,
      anon_sym_STAR_SLASH,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [8668] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(149), 1,
      sym_comment,
    ACTIONS(530), 16,
      anon_sym_STAR_SLASH,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [8696] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(150), 1,
      sym_comment,
    ACTIONS(484), 16,
      anon_sym_STAR_SLASH,
      anon_sym_re2c2,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [8724] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(534), 1,
      anon_sym_SLASH,
    STATE(151), 1,
      sym_comment,
    ACTIONS(532), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
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
  [8754] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    STATE(152), 1,
      sym_comment,
    ACTIONS(343), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
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
  [8784] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(153), 1,
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
  [8813] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(154), 1,
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
  [8842] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(155), 1,
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
  [8871] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(156), 1,
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
  [8900] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(157), 1,
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
  [8929] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(158), 1,
      sym_comment,
    ACTIONS(556), 2,
      anon_sym_RBRACK,
      aux_sym_range_token1,
    ACTIONS(558), 13,
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
  [8958] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(556), 1,
      anon_sym_RBRACK,
    ACTIONS(560), 1,
      aux_sym_range_token1,
    STATE(159), 1,
      sym_comment,
    ACTIONS(558), 13,
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
  [8989] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(160), 1,
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
  [9015] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(161), 1,
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
  [9041] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(162), 1,
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
  [9067] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(163), 1,
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
  [9093] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(164), 1,
      sym_comment,
    ACTIONS(571), 14,
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
  [9119] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(165), 1,
      sym_comment,
    ACTIONS(573), 14,
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
  [9145] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(575), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(577), 1,
      anon_sym_COLON,
    ACTIONS(579), 1,
      anon_sym_format,
    ACTIONS(581), 1,
      anon_sym_separator,
    STATE(166), 1,
      sym_comment,
    STATE(182), 1,
      sym_block_list,
    STATE(183), 1,
      aux_sym_stags_block_repeat1,
    STATE(196), 1,
      aux_sym_block_list_repeat1,
    STATE(236), 1,
      sym__tag_directive,
    STATE(237), 2,
      sym_format_directive,
      sym_separator_directive,
  [9183] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(577), 1,
      anon_sym_COLON,
    ACTIONS(579), 1,
      anon_sym_format,
    ACTIONS(581), 1,
      anon_sym_separator,
    ACTIONS(583), 1,
      anon_sym_STAR_SLASH,
    STATE(167), 1,
      sym_comment,
    STATE(179), 1,
      sym_block_list,
    STATE(181), 1,
      aux_sym_stags_block_repeat1,
    STATE(196), 1,
      aux_sym_block_list_repeat1,
    STATE(236), 1,
      sym__tag_directive,
    STATE(237), 2,
      sym_format_directive,
      sym_separator_directive,
  [9221] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(168), 1,
      sym_comment,
    ACTIONS(585), 9,
      anon_sym_DOT,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_dstring_token1,
      aux_sym_sstring_token1,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [9242] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      sym_comment,
    STATE(174), 1,
      aux_sym_code_block_repeat1,
    STATE(186), 1,
      sym__code_in_braces,
    STATE(335), 1,
      sym_code_block,
    ACTIONS(591), 4,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token3,
      aux_sym__code_in_braces_token4,
  [9273] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(595), 1,
      anon_sym_SLASH,
    STATE(170), 1,
      sym_comment,
    ACTIONS(593), 7,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
  [9295] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(600), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      sym_comment,
    STATE(172), 1,
      aux_sym_code_block_repeat1,
    STATE(186), 1,
      sym__code_in_braces,
    ACTIONS(603), 4,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token3,
      aux_sym__code_in_braces_token4,
  [9323] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    ACTIONS(609), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      sym_comment,
    STATE(173), 1,
      aux_sym_code_block_repeat1,
    STATE(186), 1,
      sym__code_in_braces,
    ACTIONS(612), 4,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token3,
      aux_sym__code_in_braces_token4,
  [9351] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      sym__code_in_braces,
    STATE(173), 2,
      sym_comment,
      aux_sym_code_block_repeat1,
    ACTIONS(620), 4,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token3,
      aux_sym__code_in_braces_token4,
  [9377] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    STATE(173), 1,
      aux_sym_code_block_repeat1,
    STATE(174), 1,
      sym_comment,
    STATE(186), 1,
      sym__code_in_braces,
    ACTIONS(591), 4,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token3,
      aux_sym__code_in_braces_token4,
  [9405] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(627), 1,
      anon_sym_SLASH,
    STATE(175), 1,
      sym_comment,
    ACTIONS(625), 7,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
  [9427] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    STATE(176), 1,
      sym_comment,
    ACTIONS(218), 7,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
  [9449] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(629), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(631), 1,
      anon_sym_format,
    ACTIONS(634), 1,
      anon_sym_separator,
    STATE(236), 1,
      sym__tag_directive,
    STATE(177), 2,
      sym_comment,
      aux_sym_stags_block_repeat1,
    STATE(237), 2,
      sym_format_directive,
      sym_separator_directive,
  [9476] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(579), 1,
      anon_sym_format,
    ACTIONS(581), 1,
      anon_sym_separator,
    ACTIONS(637), 1,
      anon_sym_STAR_SLASH,
    STATE(177), 1,
      aux_sym_stags_block_repeat1,
    STATE(178), 1,
      sym_comment,
    STATE(236), 1,
      sym__tag_directive,
    STATE(237), 2,
      sym_format_directive,
      sym_separator_directive,
  [9505] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(579), 1,
      anon_sym_format,
    ACTIONS(581), 1,
      anon_sym_separator,
    ACTIONS(639), 1,
      anon_sym_STAR_SLASH,
    STATE(179), 1,
      sym_comment,
    STATE(180), 1,
      aux_sym_stags_block_repeat1,
    STATE(236), 1,
      sym__tag_directive,
    STATE(237), 2,
      sym_format_directive,
      sym_separator_directive,
  [9534] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(579), 1,
      anon_sym_format,
    ACTIONS(581), 1,
      anon_sym_separator,
    ACTIONS(641), 1,
      anon_sym_STAR_SLASH,
    STATE(177), 1,
      aux_sym_stags_block_repeat1,
    STATE(180), 1,
      sym_comment,
    STATE(236), 1,
      sym__tag_directive,
    STATE(237), 2,
      sym_format_directive,
      sym_separator_directive,
  [9563] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(579), 1,
      anon_sym_format,
    ACTIONS(581), 1,
      anon_sym_separator,
    ACTIONS(639), 1,
      anon_sym_STAR_SLASH,
    STATE(177), 1,
      aux_sym_stags_block_repeat1,
    STATE(181), 1,
      sym_comment,
    STATE(236), 1,
      sym__tag_directive,
    STATE(237), 2,
      sym_format_directive,
      sym_separator_directive,
  [9592] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(579), 1,
      anon_sym_format,
    ACTIONS(581), 1,
      anon_sym_separator,
    ACTIONS(643), 1,
      anon_sym_STAR_SLASH,
    STATE(178), 1,
      aux_sym_stags_block_repeat1,
    STATE(182), 1,
      sym_comment,
    STATE(236), 1,
      sym__tag_directive,
    STATE(237), 2,
      sym_format_directive,
      sym_separator_directive,
  [9621] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(579), 1,
      anon_sym_format,
    ACTIONS(581), 1,
      anon_sym_separator,
    ACTIONS(643), 1,
      anon_sym_STAR_SLASH,
    STATE(177), 1,
      aux_sym_stags_block_repeat1,
    STATE(183), 1,
      sym_comment,
    STATE(236), 1,
      sym__tag_directive,
    STATE(237), 2,
      sym_format_directive,
      sym_separator_directive,
  [9650] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(647), 1,
      anon_sym_SLASH,
    STATE(184), 1,
      sym_comment,
    ACTIONS(645), 6,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [9671] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(651), 1,
      anon_sym_SLASH,
    ACTIONS(653), 1,
      anon_sym_PIPE,
    STATE(185), 1,
      sym_comment,
    ACTIONS(649), 5,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [9694] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(186), 1,
      sym_comment,
    ACTIONS(655), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token3,
      aux_sym__code_in_braces_token4,
  [9712] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(187), 1,
      sym_comment,
    ACTIONS(657), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token3,
      aux_sym__code_in_braces_token4,
  [9730] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(645), 1,
      anon_sym_PIPE,
    ACTIONS(661), 1,
      anon_sym_SLASH,
    ACTIONS(663), 1,
      anon_sym_BSLASH,
    STATE(188), 1,
      sym_comment,
    ACTIONS(659), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [9754] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(189), 1,
      sym_comment,
    ACTIONS(665), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token3,
      aux_sym__code_in_braces_token4,
  [9772] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(647), 1,
      anon_sym_SLASH,
    ACTIONS(663), 1,
      anon_sym_BSLASH,
    STATE(190), 1,
      sym_comment,
    ACTIONS(645), 4,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [9794] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(191), 1,
      sym_comment,
    ACTIONS(667), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token3,
      aux_sym__code_in_braces_token4,
  [9812] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(661), 1,
      anon_sym_SLASH,
    STATE(192), 1,
      sym_comment,
    ACTIONS(659), 5,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [9832] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(671), 1,
      anon_sym_DASH,
    ACTIONS(673), 1,
      aux_sym_linedir_token1,
    STATE(193), 1,
      sym_comment,
    STATE(304), 1,
      sym_number,
    ACTIONS(669), 2,
      anon_sym_0,
      aux_sym_number_token2,
  [9855] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(675), 1,
      sym_identifier,
    ACTIONS(677), 1,
      anon_sym_GT,
    ACTIONS(679), 1,
      anon_sym_BANG,
    ACTIONS(681), 1,
      anon_sym_STAR,
    STATE(194), 1,
      sym_comment,
    STATE(253), 1,
      aux_sym__clist_repeat1,
  [9880] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(685), 1,
      anon_sym_COLON,
    STATE(195), 2,
      sym_comment,
      aux_sym_block_list_repeat1,
    ACTIONS(683), 3,
      anon_sym_STAR_SLASH,
      anon_sym_format,
      anon_sym_separator,
  [9899] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(577), 1,
      anon_sym_COLON,
    STATE(195), 1,
      aux_sym_block_list_repeat1,
    STATE(196), 1,
      sym_comment,
    ACTIONS(688), 3,
      anon_sym_STAR_SLASH,
      anon_sym_format,
      anon_sym_separator,
  [9920] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(692), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_shortcut,
    STATE(143), 1,
      sym_action,
    STATE(197), 1,
      sym_comment,
    ACTIONS(690), 2,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
  [9943] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(694), 1,
      ts_builtin_sym_end,
    ACTIONS(696), 1,
      sym_host_lang,
    ACTIONS(699), 1,
      anon_sym_SLASH_STAR_BANG,
    STATE(221), 1,
      sym__block,
    STATE(198), 2,
      sym_comment,
      aux_sym_re2c_repeat1,
  [9966] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(702), 1,
      anon_sym_BSLASH,
    STATE(199), 1,
      sym_comment,
    ACTIONS(645), 4,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [9985] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(645), 1,
      anon_sym_PIPE,
    ACTIONS(702), 1,
      anon_sym_BSLASH,
    STATE(200), 1,
      sym_comment,
    ACTIONS(659), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [10006] = 7,
    ACTIONS(9), 1,
      anon_sym_SLASH_STAR_BANG,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(704), 1,
      ts_builtin_sym_end,
    STATE(198), 1,
      aux_sym_re2c_repeat1,
    STATE(201), 1,
      sym_comment,
    STATE(221), 1,
      sym__block,
    ACTIONS(5), 2,
      sym_host_lang,
      aux_sym_comment_token2,
  [10029] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(706), 1,
      aux_sym_dstring_token1,
    ACTIONS(708), 1,
      aux_sym_sstring_token1,
    STATE(202), 1,
      sym_comment,
    STATE(193), 2,
      sym_dstring,
      sym_sstring,
  [10049] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(577), 1,
      anon_sym_COLON,
    ACTIONS(710), 1,
      anon_sym_STAR_SLASH,
    STATE(196), 1,
      aux_sym_block_list_repeat1,
    STATE(203), 1,
      sym_comment,
    STATE(326), 1,
      sym_block_list,
  [10071] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(204), 1,
      sym_comment,
    ACTIONS(470), 4,
      anon_sym_0,
      anon_sym_DASH,
      aux_sym_number_token2,
      aux_sym_linedir_token1,
  [10087] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    STATE(205), 1,
      sym_comment,
    ACTIONS(474), 4,
      anon_sym_0,
      anon_sym_DASH,
      aux_sym_number_token2,
      aux_sym_linedir_token1,
  [10103] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(712), 1,
      sym_identifier,
    ACTIONS(714), 1,
      anon_sym_GT,
    ACTIONS(716), 1,
      anon_sym_STAR,
    STATE(206), 1,
      sym_comment,
    STATE(245), 1,
      aux_sym__clist_repeat1,
  [10125] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(720), 1,
      anon_sym_SLASH,
    STATE(207), 1,
      sym_comment,
    ACTIONS(718), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [10143] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(645), 1,
      anon_sym_PIPE,
    ACTIONS(659), 1,
      anon_sym_SEMI,
    ACTIONS(661), 1,
      anon_sym_SLASH,
    ACTIONS(722), 1,
      anon_sym_BSLASH,
    STATE(208), 1,
      sym_comment,
  [10165] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    STATE(209), 1,
      sym_comment,
    ACTIONS(724), 4,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [10181] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    STATE(210), 1,
      sym_comment,
    STATE(277), 2,
      sym_dstring,
      sym_sstring,
  [10201] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    STATE(211), 1,
      sym_comment,
    STATE(276), 2,
      sym_dstring,
      sym_sstring,
  [10221] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(206), 1,
      aux_sym_dstring_token1,
    ACTIONS(208), 1,
      aux_sym_sstring_token1,
    STATE(212), 1,
      sym_comment,
    STATE(353), 2,
      sym_dstring,
      sym_sstring,
  [10241] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(645), 1,
      anon_sym_PIPE,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
    ACTIONS(661), 1,
      anon_sym_SLASH,
    ACTIONS(726), 1,
      anon_sym_BSLASH,
    STATE(213), 1,
      sym_comment,
  [10263] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    STATE(214), 1,
      sym_comment,
    ACTIONS(728), 4,
      anon_sym_STAR_SLASH,
      anon_sym_COLON,
      anon_sym_format,
      anon_sym_separator,
  [10279] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(647), 1,
      anon_sym_SLASH,
    ACTIONS(722), 1,
      anon_sym_BSLASH,
    STATE(215), 1,
      sym_comment,
    ACTIONS(645), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10299] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(577), 1,
      anon_sym_COLON,
    ACTIONS(730), 1,
      anon_sym_STAR_SLASH,
    STATE(196), 1,
      aux_sym_block_list_repeat1,
    STATE(216), 1,
      sym_comment,
    STATE(325), 1,
      sym_block_list,
  [10321] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(647), 1,
      anon_sym_SLASH,
    ACTIONS(726), 1,
      anon_sym_BSLASH,
    STATE(217), 1,
      sym_comment,
    ACTIONS(645), 2,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [10341] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(577), 1,
      anon_sym_COLON,
    ACTIONS(732), 1,
      anon_sym_STAR_SLASH,
    STATE(196), 1,
      aux_sym_block_list_repeat1,
    STATE(218), 1,
      sym_comment,
    STATE(323), 1,
      sym_block_list,
  [10363] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    STATE(219), 1,
      sym_comment,
    ACTIONS(718), 4,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [10379] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(645), 1,
      anon_sym_PIPE,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
    ACTIONS(734), 1,
      anon_sym_BSLASH,
    STATE(220), 1,
      sym_comment,
  [10398] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(736), 1,
      ts_builtin_sym_end,
    STATE(221), 1,
      sym_comment,
    ACTIONS(738), 2,
      sym_host_lang,
      anon_sym_SLASH_STAR_BANG,
  [10415] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    STATE(222), 1,
      sym_comment,
    ACTIONS(740), 3,
      anon_sym_STAR_SLASH,
      anon_sym_format,
      anon_sym_separator,
  [10430] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    STATE(223), 1,
      sym_comment,
    ACTIONS(742), 3,
      anon_sym_STAR_SLASH,
      anon_sym_format,
      anon_sym_separator,
  [10445] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(744), 1,
      aux_sym__mininum_token1,
    STATE(224), 1,
      sym_comment,
    STATE(333), 1,
      sym__exactly,
    STATE(334), 1,
      sym__mininum,
  [10464] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    STATE(225), 1,
      sym_comment,
    ACTIONS(746), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [10479] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(748), 1,
      anon_sym_SEMI,
    STATE(226), 1,
      sym_comment,
    ACTIONS(750), 2,
      anon_sym_DOT,
      anon_sym_DASH_GT,
  [10496] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    STATE(227), 1,
      sym_comment,
    ACTIONS(752), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [10511] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(754), 1,
      ts_builtin_sym_end,
    STATE(228), 1,
      sym_comment,
    ACTIONS(756), 2,
      sym_host_lang,
      anon_sym_SLASH_STAR_BANG,
  [10528] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(645), 1,
      anon_sym_PIPE,
    ACTIONS(659), 1,
      anon_sym_SEMI,
    ACTIONS(758), 1,
      anon_sym_BSLASH,
    STATE(229), 1,
      sym_comment,
  [10547] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(760), 1,
      anon_sym_RBRACE2,
    ACTIONS(762), 1,
      aux_sym__mininum_token1,
    STATE(230), 1,
      sym_comment,
    STATE(273), 1,
      sym__maximum,
  [10566] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(758), 1,
      anon_sym_BSLASH,
    STATE(231), 1,
      sym_comment,
    ACTIONS(645), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [10583] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(734), 1,
      anon_sym_BSLASH,
    STATE(232), 1,
      sym_comment,
    ACTIONS(645), 2,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [10600] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(645), 1,
      anon_sym_PIPE,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    ACTIONS(764), 1,
      anon_sym_BSLASH,
    STATE(233), 1,
      sym_comment,
  [10619] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(764), 1,
      anon_sym_BSLASH,
    STATE(234), 1,
      sym_comment,
    ACTIONS(645), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [10636] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(768), 1,
      anon_sym_EQ,
    STATE(235), 1,
      sym_comment,
    ACTIONS(766), 2,
      anon_sym_COLON,
      anon_sym_AT,
  [10653] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    STATE(236), 1,
      sym_comment,
    ACTIONS(770), 3,
      anon_sym_STAR_SLASH,
      anon_sym_format,
      anon_sym_separator,
  [10668] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    STATE(237), 1,
      sym_comment,
    ACTIONS(772), 3,
      anon_sym_STAR_SLASH,
      anon_sym_format,
      anon_sym_separator,
  [10683] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(774), 1,
      anon_sym_COLON,
    STATE(238), 1,
      sym_comment,
    STATE(311), 1,
      sym__option_name,
  [10699] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(774), 1,
      anon_sym_COLON,
    STATE(239), 1,
      sym_comment,
    STATE(314), 1,
      sym__option_name,
  [10715] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(774), 1,
      anon_sym_COLON,
    STATE(240), 1,
      sym_comment,
    STATE(309), 1,
      sym__option_name,
  [10731] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(774), 1,
      anon_sym_COLON,
    STATE(241), 1,
      sym_comment,
    STATE(265), 1,
      sym__option_name,
  [10747] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(774), 1,
      anon_sym_COLON,
    STATE(242), 1,
      sym_comment,
    STATE(315), 1,
      sym__option_name,
  [10763] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(774), 1,
      anon_sym_COLON,
    STATE(243), 1,
      sym_comment,
    STATE(310), 1,
      sym__option_name,
  [10779] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(776), 1,
      anon_sym_COMMA2,
    ACTIONS(778), 1,
      anon_sym_RBRACE2,
    STATE(244), 1,
      sym_comment,
  [10795] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(780), 1,
      sym_identifier,
    STATE(245), 1,
      sym_comment,
    STATE(249), 1,
      aux_sym__clist_repeat1,
  [10811] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(774), 1,
      anon_sym_COLON,
    STATE(246), 1,
      sym_comment,
    STATE(308), 1,
      sym__option_name,
  [10827] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(782), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(784), 1,
      anon_sym_COLON,
    STATE(247), 1,
      sym_comment,
  [10843] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(786), 1,
      aux_sym__block_name_token1,
    ACTIONS(788), 1,
      anon_sym_line,
    STATE(248), 1,
      sym_comment,
  [10859] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(790), 1,
      sym_identifier,
    STATE(249), 2,
      sym_comment,
      aux_sym__clist_repeat1,
  [10873] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(774), 1,
      anon_sym_COLON,
    STATE(250), 1,
      sym_comment,
    STATE(318), 1,
      sym__option_name,
  [10889] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(774), 1,
      anon_sym_COLON,
    STATE(251), 1,
      sym_comment,
    STATE(319), 1,
      sym__option_name,
  [10905] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(774), 1,
      anon_sym_COLON,
    STATE(252), 1,
      sym_comment,
    STATE(316), 1,
      sym__option_name,
  [10921] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(712), 1,
      sym_identifier,
    STATE(249), 1,
      aux_sym__clist_repeat1,
    STATE(253), 1,
      sym_comment,
  [10937] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(718), 1,
      anon_sym_LBRACE,
    ACTIONS(793), 1,
      anon_sym_SLASH,
    STATE(254), 1,
      sym_comment,
  [10953] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(692), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_action,
    STATE(255), 1,
      sym_comment,
  [10969] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(795), 1,
      anon_sym_GT,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      sym_comment,
  [10985] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(645), 1,
      anon_sym_PIPE,
    ACTIONS(799), 1,
      anon_sym_BSLASH,
    STATE(257), 1,
      sym_comment,
  [11001] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    ACTIONS(801), 1,
      anon_sym_GT,
    STATE(258), 1,
      sym_comment,
  [11017] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(803), 1,
      anon_sym_on,
    ACTIONS(805), 1,
      anon_sym_off,
    STATE(259), 1,
      sym_comment,
  [11033] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(774), 1,
      anon_sym_COLON,
    STATE(260), 1,
      sym_comment,
    STATE(317), 1,
      sym__option_name,
  [11049] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(718), 1,
      anon_sym_SEMI,
    ACTIONS(807), 1,
      anon_sym_SLASH,
    STATE(261), 1,
      sym_comment,
  [11065] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(774), 1,
      anon_sym_COLON,
    STATE(262), 1,
      sym_comment,
    STATE(312), 1,
      sym__option_name,
  [11081] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(774), 1,
      anon_sym_COLON,
    STATE(263), 1,
      sym_comment,
    STATE(313), 1,
      sym__option_name,
  [11097] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      anon_sym_GT,
    STATE(264), 1,
      sym_comment,
  [11113] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(811), 1,
      anon_sym_EQ,
    STATE(265), 1,
      sym_comment,
  [11126] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(813), 1,
      anon_sym_SEMI,
    STATE(266), 1,
      sym_comment,
  [11139] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    STATE(267), 1,
      sym_comment,
  [11152] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(817), 1,
      aux_sym_linedir_token1,
    STATE(268), 1,
      sym_comment,
  [11165] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(819), 1,
      anon_sym_SEMI,
    STATE(269), 1,
      sym_comment,
  [11178] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(821), 1,
      anon_sym_SEMI,
    STATE(270), 1,
      sym_comment,
  [11191] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(823), 1,
      anon_sym_SEMI,
    STATE(271), 1,
      sym_comment,
  [11204] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(825), 1,
      anon_sym_RBRACE2,
    STATE(272), 1,
      sym_comment,
  [11217] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(827), 1,
      anon_sym_RBRACE2,
    STATE(273), 1,
      sym_comment,
  [11230] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(829), 1,
      anon_sym_STAR_SLASH,
    STATE(274), 1,
      sym_comment,
  [11243] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(831), 1,
      anon_sym_STAR_SLASH,
    STATE(275), 1,
      sym_comment,
  [11256] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(833), 1,
      anon_sym_SEMI,
    STATE(276), 1,
      sym_comment,
  [11269] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(835), 1,
      anon_sym_SEMI,
    STATE(277), 1,
      sym_comment,
  [11282] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(837), 1,
      aux_sym__option_name_token1,
    STATE(278), 1,
      sym_comment,
  [11295] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(839), 1,
      anon_sym_SEMI,
    STATE(279), 1,
      sym_comment,
  [11308] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(841), 1,
      anon_sym_SEMI,
    STATE(280), 1,
      sym_comment,
  [11321] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(843), 1,
      anon_sym_SEMI,
    STATE(281), 1,
      sym_comment,
  [11334] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(845), 1,
      anon_sym_SEMI,
    STATE(282), 1,
      sym_comment,
  [11347] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(847), 1,
      anon_sym_SEMI,
    STATE(283), 1,
      sym_comment,
  [11360] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(849), 1,
      anon_sym_SEMI,
    STATE(284), 1,
      sym_comment,
  [11373] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(851), 1,
      anon_sym_SEMI,
    STATE(285), 1,
      sym_comment,
  [11386] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(853), 1,
      anon_sym_SEMI,
    STATE(286), 1,
      sym_comment,
  [11399] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(855), 1,
      anon_sym_SEMI,
    STATE(287), 1,
      sym_comment,
  [11412] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(857), 1,
      anon_sym_SEMI,
    STATE(288), 1,
      sym_comment,
  [11425] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(859), 1,
      anon_sym_SEMI,
    STATE(289), 1,
      sym_comment,
  [11438] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(861), 1,
      anon_sym_SEMI,
    STATE(290), 1,
      sym_comment,
  [11451] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(863), 1,
      anon_sym_SEMI,
    STATE(291), 1,
      sym_comment,
  [11464] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(865), 1,
      sym_identifier,
    STATE(292), 1,
      sym_comment,
  [11477] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(867), 1,
      anon_sym_SEMI,
    STATE(293), 1,
      sym_comment,
  [11490] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(869), 1,
      anon_sym_SEMI,
    STATE(294), 1,
      sym_comment,
  [11503] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(871), 1,
      anon_sym_SEMI,
    STATE(295), 1,
      sym_comment,
  [11516] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(873), 1,
      anon_sym_EQ,
    STATE(296), 1,
      sym_comment,
  [11529] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(875), 1,
      anon_sym_SEMI,
    STATE(297), 1,
      sym_comment,
  [11542] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(877), 1,
      anon_sym_SEMI,
    STATE(298), 1,
      sym_comment,
  [11555] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(879), 1,
      anon_sym_SEMI,
    STATE(299), 1,
      sym_comment,
  [11568] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(881), 1,
      anon_sym_EQ,
    STATE(300), 1,
      sym_comment,
  [11581] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(883), 1,
      anon_sym_STAR_SLASH,
    STATE(301), 1,
      sym_comment,
  [11594] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(885), 1,
      anon_sym_SEMI,
    STATE(302), 1,
      sym_comment,
  [11607] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(887), 1,
      anon_sym_SEMI,
    STATE(303), 1,
      sym_comment,
  [11620] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(889), 1,
      aux_sym_linedir_token1,
    STATE(304), 1,
      sym_comment,
  [11633] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(891), 1,
      aux_sym_number_token1,
    STATE(305), 1,
      sym_comment,
  [11646] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(893), 1,
      aux_sym_linedir_token1,
    STATE(306), 1,
      sym_comment,
  [11659] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      sym_comment,
  [11672] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(895), 1,
      anon_sym_EQ,
    STATE(308), 1,
      sym_comment,
  [11685] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(897), 1,
      anon_sym_EQ,
    STATE(309), 1,
      sym_comment,
  [11698] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(899), 1,
      anon_sym_EQ,
    STATE(310), 1,
      sym_comment,
  [11711] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(901), 1,
      anon_sym_EQ,
    STATE(311), 1,
      sym_comment,
  [11724] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(903), 1,
      anon_sym_EQ,
    STATE(312), 1,
      sym_comment,
  [11737] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(905), 1,
      anon_sym_EQ,
    STATE(313), 1,
      sym_comment,
  [11750] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(907), 1,
      anon_sym_EQ,
    STATE(314), 1,
      sym_comment,
  [11763] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(909), 1,
      anon_sym_EQ,
    STATE(315), 1,
      sym_comment,
  [11776] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(911), 1,
      anon_sym_EQ,
    STATE(316), 1,
      sym_comment,
  [11789] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(913), 1,
      anon_sym_EQ,
    STATE(317), 1,
      sym_comment,
  [11802] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(915), 1,
      anon_sym_EQ,
    STATE(318), 1,
      sym_comment,
  [11815] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(917), 1,
      anon_sym_EQ,
    STATE(319), 1,
      sym_comment,
  [11828] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(919), 1,
      aux_sym__option_name_token1,
    STATE(320), 1,
      sym_comment,
  [11841] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(921), 1,
      anon_sym_EQ,
    STATE(321), 1,
      sym_comment,
  [11854] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(923), 1,
      anon_sym_EQ,
    STATE(322), 1,
      sym_comment,
  [11867] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(925), 1,
      anon_sym_STAR_SLASH,
    STATE(323), 1,
      sym_comment,
  [11880] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(927), 1,
      aux_sym_number_token1,
    STATE(324), 1,
      sym_comment,
  [11893] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(929), 1,
      anon_sym_STAR_SLASH,
    STATE(325), 1,
      sym_comment,
  [11906] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(931), 1,
      anon_sym_STAR_SLASH,
    STATE(326), 1,
      sym_comment,
  [11919] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(933), 1,
      aux_sym__block_name_token1,
    STATE(327), 1,
      sym_comment,
  [11932] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(935), 1,
      aux_sym__block_name_token1,
    STATE(328), 1,
      sym_comment,
  [11945] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(937), 1,
      anon_sym_STAR_SLASH,
    STATE(329), 1,
      sym_comment,
  [11958] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(939), 1,
      aux_sym__block_name_token1,
    STATE(330), 1,
      sym_comment,
  [11971] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(941), 1,
      anon_sym_STAR_SLASH,
    STATE(331), 1,
      sym_comment,
  [11984] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(943), 1,
      aux_sym__block_name_token1,
    STATE(332), 1,
      sym_comment,
  [11997] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(945), 1,
      anon_sym_RBRACE2,
    STATE(333), 1,
      sym_comment,
  [12010] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(947), 1,
      anon_sym_COMMA2,
    STATE(334), 1,
      sym_comment,
  [12023] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(949), 1,
      anon_sym_RBRACE,
    STATE(335), 1,
      sym_comment,
  [12036] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(951), 1,
      anon_sym_SEMI,
    STATE(336), 1,
      sym_comment,
  [12049] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(953), 1,
      anon_sym_SEMI,
    STATE(337), 1,
      sym_comment,
  [12062] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(955), 1,
      sym_identifier,
    STATE(338), 1,
      sym_comment,
  [12075] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(957), 1,
      anon_sym_GT,
    STATE(339), 1,
      sym_comment,
  [12088] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(959), 1,
      anon_sym_SEMI,
    STATE(340), 1,
      sym_comment,
  [12101] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(961), 1,
      anon_sym_EQ,
    STATE(341), 1,
      sym_comment,
  [12114] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(963), 1,
      anon_sym_EQ,
    STATE(342), 1,
      sym_comment,
  [12127] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(965), 1,
      anon_sym_EQ,
    STATE(343), 1,
      sym_comment,
  [12140] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(967), 1,
      anon_sym_EQ,
    STATE(344), 1,
      sym_comment,
  [12153] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(969), 1,
      anon_sym_STAR_SLASH,
    STATE(345), 1,
      sym_comment,
  [12166] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(971), 1,
      anon_sym_STAR_SLASH,
    STATE(346), 1,
      sym_comment,
  [12179] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(973), 1,
      anon_sym_STAR_SLASH,
    STATE(347), 1,
      sym_comment,
  [12192] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(975), 1,
      sym_identifier,
    STATE(348), 1,
      sym_comment,
  [12205] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(977), 1,
      sym_oct_digit,
    STATE(349), 1,
      sym_comment,
  [12218] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(977), 1,
      sym_hex_digit,
    STATE(350), 1,
      sym_comment,
  [12231] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
      sym_comment,
  [12244] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(981), 1,
      aux_sym__block_name_token1,
    STATE(352), 1,
      sym_comment,
  [12257] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(983), 1,
      anon_sym_SEMI,
    STATE(353), 1,
      sym_comment,
  [12270] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(985), 1,
      aux_sym__block_name_token1,
    STATE(354), 1,
      sym_comment,
  [12283] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(714), 1,
      anon_sym_GT,
    STATE(355), 1,
      sym_comment,
  [12296] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(987), 1,
      anon_sym_re2c,
    STATE(356), 1,
      sym_comment,
  [12309] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(989), 1,
      anon_sym_re2c,
    STATE(357), 1,
      sym_comment,
  [12322] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(991), 1,
      anon_sym_re2c,
    STATE(358), 1,
      sym_comment,
  [12335] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(993), 1,
      anon_sym_re2c,
    STATE(359), 1,
      sym_comment,
  [12348] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(995), 1,
      anon_sym_re2c,
    STATE(360), 1,
      sym_comment,
  [12361] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(997), 1,
      anon_sym_re2c,
    STATE(361), 1,
      sym_comment,
  [12374] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(999), 1,
      anon_sym_re2c,
    STATE(362), 1,
      sym_comment,
  [12387] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1001), 1,
      anon_sym_re2c,
    STATE(363), 1,
      sym_comment,
  [12400] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(653), 1,
      anon_sym_PIPE,
    STATE(364), 1,
      sym_comment,
  [12413] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1003), 1,
      anon_sym_STAR_SLASH,
    STATE(365), 1,
      sym_comment,
  [12426] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1005), 1,
      aux_sym__block_name_token1,
    STATE(366), 1,
      sym_comment,
  [12439] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1007), 1,
      anon_sym_COLON,
    STATE(367), 1,
      sym_comment,
  [12452] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1009), 1,
      anon_sym_COLON,
    STATE(368), 1,
      sym_comment,
  [12465] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1011), 1,
      aux_sym__block_name_token1,
    STATE(369), 1,
      sym_comment,
  [12478] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1013), 1,
      anon_sym_STAR_SLASH,
    STATE(370), 1,
      sym_comment,
  [12491] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1015), 1,
      anon_sym_COLON,
    STATE(371), 1,
      sym_comment,
  [12504] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1017), 1,
      anon_sym_COLON,
    STATE(372), 1,
      sym_comment,
  [12517] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1019), 1,
      anon_sym_COLON,
    STATE(373), 1,
      sym_comment,
  [12530] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1021), 1,
      anon_sym_COLON,
    STATE(374), 1,
      sym_comment,
  [12543] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1023), 1,
      anon_sym_COLON,
    STATE(375), 1,
      sym_comment,
  [12556] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1025), 1,
      anon_sym_COLON,
    STATE(376), 1,
      sym_comment,
  [12569] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1027), 1,
      anon_sym_COLON,
    STATE(377), 1,
      sym_comment,
  [12582] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1029), 1,
      anon_sym_COLON,
    STATE(378), 1,
      sym_comment,
  [12595] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1031), 1,
      anon_sym_COLON,
    STATE(379), 1,
      sym_comment,
  [12608] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(1033), 1,
      ts_builtin_sym_end,
    STATE(380), 1,
      sym_comment,
  [12621] = 1,
    ACTIONS(1035), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 128,
  [SMALL_STATE(4)] = 256,
  [SMALL_STATE(5)] = 384,
  [SMALL_STATE(6)] = 509,
  [SMALL_STATE(7)] = 634,
  [SMALL_STATE(8)] = 759,
  [SMALL_STATE(9)] = 879,
  [SMALL_STATE(10)] = 1001,
  [SMALL_STATE(11)] = 1075,
  [SMALL_STATE(12)] = 1149,
  [SMALL_STATE(13)] = 1222,
  [SMALL_STATE(14)] = 1327,
  [SMALL_STATE(15)] = 1400,
  [SMALL_STATE(16)] = 1484,
  [SMALL_STATE(17)] = 1556,
  [SMALL_STATE(18)] = 1628,
  [SMALL_STATE(19)] = 1700,
  [SMALL_STATE(20)] = 1772,
  [SMALL_STATE(21)] = 1843,
  [SMALL_STATE(22)] = 1914,
  [SMALL_STATE(23)] = 1985,
  [SMALL_STATE(24)] = 2056,
  [SMALL_STATE(25)] = 2127,
  [SMALL_STATE(26)] = 2198,
  [SMALL_STATE(27)] = 2268,
  [SMALL_STATE(28)] = 2338,
  [SMALL_STATE(29)] = 2421,
  [SMALL_STATE(30)] = 2498,
  [SMALL_STATE(31)] = 2575,
  [SMALL_STATE(32)] = 2652,
  [SMALL_STATE(33)] = 2729,
  [SMALL_STATE(34)] = 2800,
  [SMALL_STATE(35)] = 2861,
  [SMALL_STATE(36)] = 2922,
  [SMALL_STATE(37)] = 2983,
  [SMALL_STATE(38)] = 3044,
  [SMALL_STATE(39)] = 3105,
  [SMALL_STATE(40)] = 3166,
  [SMALL_STATE(41)] = 3227,
  [SMALL_STATE(42)] = 3288,
  [SMALL_STATE(43)] = 3359,
  [SMALL_STATE(44)] = 3420,
  [SMALL_STATE(45)] = 3485,
  [SMALL_STATE(46)] = 3556,
  [SMALL_STATE(47)] = 3617,
  [SMALL_STATE(48)] = 3682,
  [SMALL_STATE(49)] = 3745,
  [SMALL_STATE(50)] = 3806,
  [SMALL_STATE(51)] = 3867,
  [SMALL_STATE(52)] = 3938,
  [SMALL_STATE(53)] = 4007,
  [SMALL_STATE(54)] = 4078,
  [SMALL_STATE(55)] = 4139,
  [SMALL_STATE(56)] = 4200,
  [SMALL_STATE(57)] = 4261,
  [SMALL_STATE(58)] = 4332,
  [SMALL_STATE(59)] = 4393,
  [SMALL_STATE(60)] = 4454,
  [SMALL_STATE(61)] = 4525,
  [SMALL_STATE(62)] = 4586,
  [SMALL_STATE(63)] = 4648,
  [SMALL_STATE(64)] = 4710,
  [SMALL_STATE(65)] = 4770,
  [SMALL_STATE(66)] = 4831,
  [SMALL_STATE(67)] = 4894,
  [SMALL_STATE(68)] = 4957,
  [SMALL_STATE(69)] = 5018,
  [SMALL_STATE(70)] = 5081,
  [SMALL_STATE(71)] = 5144,
  [SMALL_STATE(72)] = 5204,
  [SMALL_STATE(73)] = 5266,
  [SMALL_STATE(74)] = 5322,
  [SMALL_STATE(75)] = 5380,
  [SMALL_STATE(76)] = 5440,
  [SMALL_STATE(77)] = 5502,
  [SMALL_STATE(78)] = 5562,
  [SMALL_STATE(79)] = 5624,
  [SMALL_STATE(80)] = 5686,
  [SMALL_STATE(81)] = 5748,
  [SMALL_STATE(82)] = 5806,
  [SMALL_STATE(83)] = 5866,
  [SMALL_STATE(84)] = 5928,
  [SMALL_STATE(85)] = 5988,
  [SMALL_STATE(86)] = 6046,
  [SMALL_STATE(87)] = 6108,
  [SMALL_STATE(88)] = 6168,
  [SMALL_STATE(89)] = 6210,
  [SMALL_STATE(90)] = 6272,
  [SMALL_STATE(91)] = 6327,
  [SMALL_STATE(92)] = 6382,
  [SMALL_STATE(93)] = 6437,
  [SMALL_STATE(94)] = 6496,
  [SMALL_STATE(95)] = 6551,
  [SMALL_STATE(96)] = 6606,
  [SMALL_STATE(97)] = 6661,
  [SMALL_STATE(98)] = 6720,
  [SMALL_STATE(99)] = 6775,
  [SMALL_STATE(100)] = 6830,
  [SMALL_STATE(101)] = 6887,
  [SMALL_STATE(102)] = 6921,
  [SMALL_STATE(103)] = 6973,
  [SMALL_STATE(104)] = 7025,
  [SMALL_STATE(105)] = 7077,
  [SMALL_STATE(106)] = 7111,
  [SMALL_STATE(107)] = 7163,
  [SMALL_STATE(108)] = 7215,
  [SMALL_STATE(109)] = 7249,
  [SMALL_STATE(110)] = 7301,
  [SMALL_STATE(111)] = 7353,
  [SMALL_STATE(112)] = 7387,
  [SMALL_STATE(113)] = 7421,
  [SMALL_STATE(114)] = 7455,
  [SMALL_STATE(115)] = 7489,
  [SMALL_STATE(116)] = 7541,
  [SMALL_STATE(117)] = 7593,
  [SMALL_STATE(118)] = 7627,
  [SMALL_STATE(119)] = 7679,
  [SMALL_STATE(120)] = 7713,
  [SMALL_STATE(121)] = 7765,
  [SMALL_STATE(122)] = 7799,
  [SMALL_STATE(123)] = 7849,
  [SMALL_STATE(124)] = 7883,
  [SMALL_STATE(125)] = 7917,
  [SMALL_STATE(126)] = 7951,
  [SMALL_STATE(127)] = 8003,
  [SMALL_STATE(128)] = 8037,
  [SMALL_STATE(129)] = 8071,
  [SMALL_STATE(130)] = 8105,
  [SMALL_STATE(131)] = 8134,
  [SMALL_STATE(132)] = 8177,
  [SMALL_STATE(133)] = 8210,
  [SMALL_STATE(134)] = 8238,
  [SMALL_STATE(135)] = 8266,
  [SMALL_STATE(136)] = 8294,
  [SMALL_STATE(137)] = 8322,
  [SMALL_STATE(138)] = 8352,
  [SMALL_STATE(139)] = 8380,
  [SMALL_STATE(140)] = 8408,
  [SMALL_STATE(141)] = 8436,
  [SMALL_STATE(142)] = 8464,
  [SMALL_STATE(143)] = 8494,
  [SMALL_STATE(144)] = 8522,
  [SMALL_STATE(145)] = 8552,
  [SMALL_STATE(146)] = 8582,
  [SMALL_STATE(147)] = 8610,
  [SMALL_STATE(148)] = 8640,
  [SMALL_STATE(149)] = 8668,
  [SMALL_STATE(150)] = 8696,
  [SMALL_STATE(151)] = 8724,
  [SMALL_STATE(152)] = 8754,
  [SMALL_STATE(153)] = 8784,
  [SMALL_STATE(154)] = 8813,
  [SMALL_STATE(155)] = 8842,
  [SMALL_STATE(156)] = 8871,
  [SMALL_STATE(157)] = 8900,
  [SMALL_STATE(158)] = 8929,
  [SMALL_STATE(159)] = 8958,
  [SMALL_STATE(160)] = 8989,
  [SMALL_STATE(161)] = 9015,
  [SMALL_STATE(162)] = 9041,
  [SMALL_STATE(163)] = 9067,
  [SMALL_STATE(164)] = 9093,
  [SMALL_STATE(165)] = 9119,
  [SMALL_STATE(166)] = 9145,
  [SMALL_STATE(167)] = 9183,
  [SMALL_STATE(168)] = 9221,
  [SMALL_STATE(169)] = 9242,
  [SMALL_STATE(170)] = 9273,
  [SMALL_STATE(171)] = 9295,
  [SMALL_STATE(172)] = 9323,
  [SMALL_STATE(173)] = 9351,
  [SMALL_STATE(174)] = 9377,
  [SMALL_STATE(175)] = 9405,
  [SMALL_STATE(176)] = 9427,
  [SMALL_STATE(177)] = 9449,
  [SMALL_STATE(178)] = 9476,
  [SMALL_STATE(179)] = 9505,
  [SMALL_STATE(180)] = 9534,
  [SMALL_STATE(181)] = 9563,
  [SMALL_STATE(182)] = 9592,
  [SMALL_STATE(183)] = 9621,
  [SMALL_STATE(184)] = 9650,
  [SMALL_STATE(185)] = 9671,
  [SMALL_STATE(186)] = 9694,
  [SMALL_STATE(187)] = 9712,
  [SMALL_STATE(188)] = 9730,
  [SMALL_STATE(189)] = 9754,
  [SMALL_STATE(190)] = 9772,
  [SMALL_STATE(191)] = 9794,
  [SMALL_STATE(192)] = 9812,
  [SMALL_STATE(193)] = 9832,
  [SMALL_STATE(194)] = 9855,
  [SMALL_STATE(195)] = 9880,
  [SMALL_STATE(196)] = 9899,
  [SMALL_STATE(197)] = 9920,
  [SMALL_STATE(198)] = 9943,
  [SMALL_STATE(199)] = 9966,
  [SMALL_STATE(200)] = 9985,
  [SMALL_STATE(201)] = 10006,
  [SMALL_STATE(202)] = 10029,
  [SMALL_STATE(203)] = 10049,
  [SMALL_STATE(204)] = 10071,
  [SMALL_STATE(205)] = 10087,
  [SMALL_STATE(206)] = 10103,
  [SMALL_STATE(207)] = 10125,
  [SMALL_STATE(208)] = 10143,
  [SMALL_STATE(209)] = 10165,
  [SMALL_STATE(210)] = 10181,
  [SMALL_STATE(211)] = 10201,
  [SMALL_STATE(212)] = 10221,
  [SMALL_STATE(213)] = 10241,
  [SMALL_STATE(214)] = 10263,
  [SMALL_STATE(215)] = 10279,
  [SMALL_STATE(216)] = 10299,
  [SMALL_STATE(217)] = 10321,
  [SMALL_STATE(218)] = 10341,
  [SMALL_STATE(219)] = 10363,
  [SMALL_STATE(220)] = 10379,
  [SMALL_STATE(221)] = 10398,
  [SMALL_STATE(222)] = 10415,
  [SMALL_STATE(223)] = 10430,
  [SMALL_STATE(224)] = 10445,
  [SMALL_STATE(225)] = 10464,
  [SMALL_STATE(226)] = 10479,
  [SMALL_STATE(227)] = 10496,
  [SMALL_STATE(228)] = 10511,
  [SMALL_STATE(229)] = 10528,
  [SMALL_STATE(230)] = 10547,
  [SMALL_STATE(231)] = 10566,
  [SMALL_STATE(232)] = 10583,
  [SMALL_STATE(233)] = 10600,
  [SMALL_STATE(234)] = 10619,
  [SMALL_STATE(235)] = 10636,
  [SMALL_STATE(236)] = 10653,
  [SMALL_STATE(237)] = 10668,
  [SMALL_STATE(238)] = 10683,
  [SMALL_STATE(239)] = 10699,
  [SMALL_STATE(240)] = 10715,
  [SMALL_STATE(241)] = 10731,
  [SMALL_STATE(242)] = 10747,
  [SMALL_STATE(243)] = 10763,
  [SMALL_STATE(244)] = 10779,
  [SMALL_STATE(245)] = 10795,
  [SMALL_STATE(246)] = 10811,
  [SMALL_STATE(247)] = 10827,
  [SMALL_STATE(248)] = 10843,
  [SMALL_STATE(249)] = 10859,
  [SMALL_STATE(250)] = 10873,
  [SMALL_STATE(251)] = 10889,
  [SMALL_STATE(252)] = 10905,
  [SMALL_STATE(253)] = 10921,
  [SMALL_STATE(254)] = 10937,
  [SMALL_STATE(255)] = 10953,
  [SMALL_STATE(256)] = 10969,
  [SMALL_STATE(257)] = 10985,
  [SMALL_STATE(258)] = 11001,
  [SMALL_STATE(259)] = 11017,
  [SMALL_STATE(260)] = 11033,
  [SMALL_STATE(261)] = 11049,
  [SMALL_STATE(262)] = 11065,
  [SMALL_STATE(263)] = 11081,
  [SMALL_STATE(264)] = 11097,
  [SMALL_STATE(265)] = 11113,
  [SMALL_STATE(266)] = 11126,
  [SMALL_STATE(267)] = 11139,
  [SMALL_STATE(268)] = 11152,
  [SMALL_STATE(269)] = 11165,
  [SMALL_STATE(270)] = 11178,
  [SMALL_STATE(271)] = 11191,
  [SMALL_STATE(272)] = 11204,
  [SMALL_STATE(273)] = 11217,
  [SMALL_STATE(274)] = 11230,
  [SMALL_STATE(275)] = 11243,
  [SMALL_STATE(276)] = 11256,
  [SMALL_STATE(277)] = 11269,
  [SMALL_STATE(278)] = 11282,
  [SMALL_STATE(279)] = 11295,
  [SMALL_STATE(280)] = 11308,
  [SMALL_STATE(281)] = 11321,
  [SMALL_STATE(282)] = 11334,
  [SMALL_STATE(283)] = 11347,
  [SMALL_STATE(284)] = 11360,
  [SMALL_STATE(285)] = 11373,
  [SMALL_STATE(286)] = 11386,
  [SMALL_STATE(287)] = 11399,
  [SMALL_STATE(288)] = 11412,
  [SMALL_STATE(289)] = 11425,
  [SMALL_STATE(290)] = 11438,
  [SMALL_STATE(291)] = 11451,
  [SMALL_STATE(292)] = 11464,
  [SMALL_STATE(293)] = 11477,
  [SMALL_STATE(294)] = 11490,
  [SMALL_STATE(295)] = 11503,
  [SMALL_STATE(296)] = 11516,
  [SMALL_STATE(297)] = 11529,
  [SMALL_STATE(298)] = 11542,
  [SMALL_STATE(299)] = 11555,
  [SMALL_STATE(300)] = 11568,
  [SMALL_STATE(301)] = 11581,
  [SMALL_STATE(302)] = 11594,
  [SMALL_STATE(303)] = 11607,
  [SMALL_STATE(304)] = 11620,
  [SMALL_STATE(305)] = 11633,
  [SMALL_STATE(306)] = 11646,
  [SMALL_STATE(307)] = 11659,
  [SMALL_STATE(308)] = 11672,
  [SMALL_STATE(309)] = 11685,
  [SMALL_STATE(310)] = 11698,
  [SMALL_STATE(311)] = 11711,
  [SMALL_STATE(312)] = 11724,
  [SMALL_STATE(313)] = 11737,
  [SMALL_STATE(314)] = 11750,
  [SMALL_STATE(315)] = 11763,
  [SMALL_STATE(316)] = 11776,
  [SMALL_STATE(317)] = 11789,
  [SMALL_STATE(318)] = 11802,
  [SMALL_STATE(319)] = 11815,
  [SMALL_STATE(320)] = 11828,
  [SMALL_STATE(321)] = 11841,
  [SMALL_STATE(322)] = 11854,
  [SMALL_STATE(323)] = 11867,
  [SMALL_STATE(324)] = 11880,
  [SMALL_STATE(325)] = 11893,
  [SMALL_STATE(326)] = 11906,
  [SMALL_STATE(327)] = 11919,
  [SMALL_STATE(328)] = 11932,
  [SMALL_STATE(329)] = 11945,
  [SMALL_STATE(330)] = 11958,
  [SMALL_STATE(331)] = 11971,
  [SMALL_STATE(332)] = 11984,
  [SMALL_STATE(333)] = 11997,
  [SMALL_STATE(334)] = 12010,
  [SMALL_STATE(335)] = 12023,
  [SMALL_STATE(336)] = 12036,
  [SMALL_STATE(337)] = 12049,
  [SMALL_STATE(338)] = 12062,
  [SMALL_STATE(339)] = 12075,
  [SMALL_STATE(340)] = 12088,
  [SMALL_STATE(341)] = 12101,
  [SMALL_STATE(342)] = 12114,
  [SMALL_STATE(343)] = 12127,
  [SMALL_STATE(344)] = 12140,
  [SMALL_STATE(345)] = 12153,
  [SMALL_STATE(346)] = 12166,
  [SMALL_STATE(347)] = 12179,
  [SMALL_STATE(348)] = 12192,
  [SMALL_STATE(349)] = 12205,
  [SMALL_STATE(350)] = 12218,
  [SMALL_STATE(351)] = 12231,
  [SMALL_STATE(352)] = 12244,
  [SMALL_STATE(353)] = 12257,
  [SMALL_STATE(354)] = 12270,
  [SMALL_STATE(355)] = 12283,
  [SMALL_STATE(356)] = 12296,
  [SMALL_STATE(357)] = 12309,
  [SMALL_STATE(358)] = 12322,
  [SMALL_STATE(359)] = 12335,
  [SMALL_STATE(360)] = 12348,
  [SMALL_STATE(361)] = 12361,
  [SMALL_STATE(362)] = 12374,
  [SMALL_STATE(363)] = 12387,
  [SMALL_STATE(364)] = 12400,
  [SMALL_STATE(365)] = 12413,
  [SMALL_STATE(366)] = 12426,
  [SMALL_STATE(367)] = 12439,
  [SMALL_STATE(368)] = 12452,
  [SMALL_STATE(369)] = 12465,
  [SMALL_STATE(370)] = 12478,
  [SMALL_STATE(371)] = 12491,
  [SMALL_STATE(372)] = 12504,
  [SMALL_STATE(373)] = 12517,
  [SMALL_STATE(374)] = 12530,
  [SMALL_STATE(375)] = 12543,
  [SMALL_STATE(376)] = 12556,
  [SMALL_STATE(377)] = 12569,
  [SMALL_STATE(378)] = 12582,
  [SMALL_STATE(379)] = 12595,
  [SMALL_STATE(380)] = 12608,
  [SMALL_STATE(381)] = 12621,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_re2c, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_block, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rules_block, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_block, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_block, 5, .production_id = 24),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rules_block, 5, .production_id = 24),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_block, 3, .production_id = 5),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(132),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(368),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(113),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(194),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(227),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(225),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(367),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(212),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(184),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(32),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(99),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(124),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(125),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(366),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(248),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dif_expr, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dif_expr, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concat, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(127),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(113),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concat_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(32),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(90),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(124),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(125),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(366),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(352),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(127),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(113),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(184),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(32),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(92),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(124),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(125),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(366),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 8), SHIFT_REPEAT(352),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(95),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(91),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(99),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(98),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(96),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(94),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cat_expr, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cat_expr, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(92),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 3, .production_id = 12),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3, .production_id = 12),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 5, .production_id = 19),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 5, .production_id = 19),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1, .production_id = 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard, 1, .production_id = 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtag, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mtag, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stag, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stag, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4, .production_id = 12),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4, .production_id = 12),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4, .production_id = 19),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4, .production_id = 19),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(154),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(154),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(153),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(157),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(350),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(349),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dstring, 1),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dstring, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sstring, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sstring, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1, .production_id = 4),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1, .production_id = 4),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_rule, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_rule, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shortcut, 2, .production_id = 13),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_rule, 4),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_configuration, 4),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, .production_id = 5),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_linedir, 4, .production_id = 21),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 5, .production_id = 35),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limits, 5, .production_id = 35),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_definition, 4, .production_id = 22),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, .dynamic_precedence = 1),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, .dynamic_precedence = 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 3, .production_id = 23),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limits, 3, .production_id = 23),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repetition, 2),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repetition, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3, .production_id = 11),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concat_repeat1, 1),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_linedir, 5, .production_id = 31),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordinary_rule, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 4, .production_id = 32),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limits, 4, .production_id = 32),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape, 1),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 20),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 20),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_unit, 2),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_unit, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_unit, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_unit, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 1),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 1),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 1), SHIFT(131),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, .production_id = 30),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4, .production_id = 18),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, .production_id = 9),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtags_block, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stags_block, 3),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 6),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_difference, 3, .production_id = 15),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_difference, 3, .production_id = 15),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 1), SHIFT(171),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 1), SHIFT(189),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 1), SHIFT(187),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 2), SHIFT(171),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 2), SHIFT(191),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 2), SHIFT(187),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(171),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(187),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alt_expr, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alt_expr, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stags_block_repeat1, 2),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stags_block_repeat1, 2), SHIFT_REPEAT(322),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stags_block_repeat1, 2), SHIFT_REPEAT(321),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtags_block, 5),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stags_block, 4),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stags_block, 5),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtags_block, 4),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch, 1, .production_id = 3),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__branch, 1, .production_id = 3),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternation, 2, .production_id = 7),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternation, 2, .production_id = 7),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 1),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_in_braces, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern_expr, 1),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern_expr, 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_in_braces, 2),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_in_braces, 3),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(327),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_list, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_re2c_repeat1, 2),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_re2c_repeat1, 2), SHIFT_REPEAT(221),
  [699] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_re2c_repeat1, 2), SHIFT_REPEAT(73),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_re2c, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_block, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 1),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookahead, 3, .production_id = 14),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2, .production_id = 25),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maxnmatch_block, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getstate_block, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_re2c_repeat1, 1),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_re2c_repeat1, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_separator_directive, 4, .production_id = 37),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_directive, 4, .production_id = 36),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conf_value, 1, .production_id = 27),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, .production_id = 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block, 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 2, .production_id = 26),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stags_block_repeat1, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_directive, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mininum, 1, .production_id = 16),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exactly, 1, .production_id = 17),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_block, 3),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__clist_repeat1, 2), SHIFT_REPEAT(307),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_conf, 1),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_class_conf, 1),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api_style, 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding_policy, 1),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_eof, 3, .production_id = 28),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__maximum, 1, .production_id = 33),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_block, 6, .production_id = 24),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules_block, 6, .production_id = 24),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_flags, 4, .production_id = 34),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 4, .production_id = 34),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_cond, 4, .production_id = 34),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_label, 4, .production_id = 34),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_variable, 4, .production_id = 34),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_yych, 4, .production_id = 34),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_state, 4, .production_id = 34),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_yybm, 4, .production_id = 34),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_cgoto, 4, .production_id = 34),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_api, 4, .production_id = 34),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_tags, 4, .production_id = 34),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_indent, 4, .production_id = 34),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_yyfill, 4, .production_id = 34),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conf_value, 1, .production_id = 29),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_sentinel, 3, .production_id = 28),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_condprefix, 3, .production_id = 28),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 4, .production_id = 38),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, .production_id = 39),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_condenumprefix, 3, .production_id = 28),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_startlabel, 3, .production_id = 28),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_block, 5, .production_id = 24),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getstate_block, 4),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maxnmatch_block, 4),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_block, 4),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules_block, 4),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_block, 4),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__clist_repeat1, 2, .production_id = 10),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_block, 4, .production_id = 5),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_off_block, 3),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_on_block, 3),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_block, 2),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1033] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
