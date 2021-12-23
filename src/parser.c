#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 352
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 200
#define ALIAS_COUNT 3
#define TOKEN_COUNT 112
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 33

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
  anon_sym_BANGstags = 11,
  anon_sym_BANGmtags = 12,
  anon_sym_BANGgetstate = 13,
  anon_sym_BANGheader = 14,
  anon_sym_on = 15,
  anon_sym_off = 16,
  anon_sym_BANGinclude = 17,
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
  anon_sym_ignore = 45,
  anon_sym_substitute = 46,
  anon_sym_fail = 47,
  anon_sym_default = 48,
  anon_sym_custom = 49,
  anon_sym_match_DASHempty = 50,
  anon_sym_match_DASHnone = 51,
  anon_sym_error = 52,
  anon_sym_functions = 53,
  anon_sym_free_DASHform = 54,
  anon_sym_EQ_GT = 55,
  anon_sym_COLON_EQ_GT = 56,
  anon_sym_LT = 57,
  anon_sym_GT = 58,
  anon_sym_BANG = 59,
  anon_sym_COMMA = 60,
  anon_sym_STAR = 61,
  anon_sym_DOLLAR = 62,
  anon_sym_LBRACE = 63,
  anon_sym_RBRACE = 64,
  aux_sym__code_in_braces_token1 = 65,
  aux_sym__code_in_braces_token2 = 66,
  aux_sym__code_in_braces_token3 = 67,
  aux_sym__code_in_braces_token4 = 68,
  anon_sym_SLASH = 69,
  anon_sym_PIPE = 70,
  anon_sym_ = 71,
  anon_sym_BSLASH = 72,
  anon_sym_STAR2 = 73,
  anon_sym_PLUS = 74,
  anon_sym_QMARK = 75,
  anon_sym_LBRACE2 = 76,
  anon_sym_COMMA2 = 77,
  anon_sym_RBRACE2 = 78,
  aux_sym__mininum_token1 = 79,
  anon_sym_LPAREN = 80,
  anon_sym_RPAREN = 81,
  anon_sym_LBRACK = 82,
  anon_sym_CARET = 83,
  anon_sym_RBRACK = 84,
  aux_sym_range_token1 = 85,
  anon_sym_DOT = 86,
  aux_sym_literal_token1 = 87,
  sym_dstring = 88,
  sym_sstring = 89,
  sym_quote = 90,
  sym_ctrl_code = 91,
  aux_sym__esc_hex_token1 = 92,
  aux_sym__esc_hex_token2 = 93,
  aux_sym__esc_hex_token3 = 94,
  aux_sym__esc_hex_token4 = 95,
  aux_sym__esc_hex_token5 = 96,
  aux_sym__esc_hex_token6 = 97,
  aux_sym__esc_hex_token7 = 98,
  aux_sym__esc_hex_token8 = 99,
  aux_sym__esc_oct_token1 = 100,
  aux_sym__esc_oct_token2 = 101,
  sym_hex_digit = 102,
  sym_oct_digit = 103,
  anon_sym_AT2 = 104,
  anon_sym_POUND = 105,
  anon_sym_0 = 106,
  anon_sym_DASH = 107,
  aux_sym_number_token1 = 108,
  aux_sym_number_token2 = 109,
  sym_comment = 110,
  sym_linedir = 111,
  sym_re2c = 112,
  sym__block = 113,
  sym_global_block = 114,
  sym_local_block = 115,
  sym_rules_block = 116,
  sym_use_block = 117,
  sym_max_block = 118,
  sym_maxnmatch_block = 119,
  sym_stags_block = 120,
  sym_mtags_block = 121,
  sym_getstate_block = 122,
  sym_header_on_block = 123,
  sym_header_off_block = 124,
  sym_block_list = 125,
  sym__tag_directive = 126,
  sym_format_directive = 127,
  sym_separator_directive = 128,
  sym_body = 129,
  sym_named_definition = 130,
  sym_configuration = 131,
  sym__option_name = 132,
  sym_set_flags = 133,
  sym_define = 134,
  sym_set_cond = 135,
  sym_set_label = 136,
  sym_set_variable = 137,
  sym_set_yych = 138,
  sym_set_state = 139,
  sym_set_yybm = 140,
  sym_set_cgoto = 141,
  sym_set_api = 142,
  sym_set_tags = 143,
  sym_set_indent = 144,
  sym_set_yyfill = 145,
  sym_set_eof = 146,
  sym_set_sentinel = 147,
  sym_set_condprefix = 148,
  sym_set_condenumprefix = 149,
  sym_set_startlabel = 150,
  sym__conf_rhs = 151,
  sym_encoding_policy = 152,
  sym_input_conf = 153,
  sym_empty_class_conf = 154,
  sym_api_style = 155,
  sym_ordinary_rule = 156,
  sym_conditional_rule = 157,
  sym_shortcut = 158,
  sym_condition = 159,
  sym_pattern = 160,
  sym_action = 161,
  sym_code_block = 162,
  sym__code_in_braces = 163,
  sym_use = 164,
  sym_include = 165,
  sym_regex = 166,
  sym_lookahead = 167,
  sym__pattern_expr = 168,
  sym_alternation = 169,
  sym__branch = 170,
  sym__alt_expr = 171,
  sym_difference = 172,
  sym__dif_expr = 173,
  sym_concat = 174,
  sym__cat_expr = 175,
  sym_repetition = 176,
  sym_close = 177,
  sym_limits = 178,
  sym__mininum = 179,
  sym__maximum = 180,
  sym__exactly = 181,
  sym__atom = 182,
  sym_parenthesized = 183,
  sym_character_class = 184,
  sym_range = 185,
  sym_wildcard = 186,
  sym_literal = 187,
  sym__escape = 188,
  sym_code_unit = 189,
  sym_stag = 190,
  sym_mtag = 191,
  sym_number = 192,
  aux_sym_block_list_repeat1 = 193,
  aux_sym_body_repeat1 = 194,
  aux_sym__clist_repeat1 = 195,
  aux_sym_code_block_repeat1 = 196,
  aux_sym_alternation_repeat1 = 197,
  aux_sym_concat_repeat1 = 198,
  aux_sym_character_class_repeat1 = 199,
  alias_sym_block_name = 200,
  alias_sym_default = 201,
  alias_sym_label = 202,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "name",
  [anon_sym_BANGre2c] = "!re2c",
  [anon_sym_BANGlocal] = "!local",
  [anon_sym_COLON] = ":",
  [anon_sym_re2c] = "re2c",
  [anon_sym_BANGrules] = "!rules",
  [aux_sym__block_name_token1] = "_block_name_token1",
  [anon_sym_BANGuse] = "!use",
  [anon_sym_BANGmax] = "!max",
  [anon_sym_BANGmaxnmatch] = "!maxnmatch",
  [anon_sym_BANGstags] = "!stags",
  [anon_sym_BANGmtags] = "!mtags",
  [anon_sym_BANGgetstate] = "!getstate",
  [anon_sym_BANGheader] = "!header",
  [anon_sym_on] = "on",
  [anon_sym_off] = "off",
  [anon_sym_BANGinclude] = "!include",
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
  [anon_sym_DOT] = ".",
  [aux_sym_literal_token1] = "literal_token1",
  [sym_dstring] = "dstring",
  [sym_sstring] = "sstring",
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
  [sym_stags_block] = "stags_block",
  [sym_mtags_block] = "mtags_block",
  [sym_getstate_block] = "getstate_block",
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
  [sym__conf_rhs] = "_conf_rhs",
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
  [sym__escape] = "_escape",
  [sym_code_unit] = "code_unit",
  [sym_stag] = "stag",
  [sym_mtag] = "mtag",
  [sym_number] = "number",
  [aux_sym_block_list_repeat1] = "block_list_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym__clist_repeat1] = "_clist_repeat1",
  [aux_sym_code_block_repeat1] = "code_block_repeat1",
  [aux_sym_alternation_repeat1] = "alternation_repeat1",
  [aux_sym_concat_repeat1] = "concat_repeat1",
  [aux_sym_character_class_repeat1] = "character_class_repeat1",
  [alias_sym_block_name] = "block_name",
  [alias_sym_default] = "default",
  [alias_sym_label] = "label",
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
  [anon_sym_BANGstags] = anon_sym_BANGstags,
  [anon_sym_BANGmtags] = anon_sym_BANGmtags,
  [anon_sym_BANGgetstate] = anon_sym_BANGgetstate,
  [anon_sym_BANGheader] = anon_sym_BANGheader,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_off] = anon_sym_off,
  [anon_sym_BANGinclude] = anon_sym_BANGinclude,
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
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [sym_dstring] = sym_dstring,
  [sym_sstring] = sym_sstring,
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
  [sym_stags_block] = sym_stags_block,
  [sym_mtags_block] = sym_mtags_block,
  [sym_getstate_block] = sym_getstate_block,
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
  [sym__conf_rhs] = sym__conf_rhs,
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
  [sym__escape] = sym__escape,
  [sym_code_unit] = sym_code_unit,
  [sym_stag] = sym_stag,
  [sym_mtag] = sym_mtag,
  [sym_number] = sym_number,
  [aux_sym_block_list_repeat1] = aux_sym_block_list_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym__clist_repeat1] = aux_sym__clist_repeat1,
  [aux_sym_code_block_repeat1] = aux_sym_code_block_repeat1,
  [aux_sym_alternation_repeat1] = aux_sym_alternation_repeat1,
  [aux_sym_concat_repeat1] = aux_sym_concat_repeat1,
  [aux_sym_character_class_repeat1] = aux_sym_character_class_repeat1,
  [alias_sym_block_name] = alias_sym_block_name,
  [alias_sym_default] = alias_sym_default,
  [alias_sym_label] = alias_sym_label,
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
  [anon_sym_BANGstags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGmtags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGgetstate] = {
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
  [anon_sym_BANGinclude] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dstring] = {
    .visible = true,
    .named = true,
  },
  [sym_sstring] = {
    .visible = true,
    .named = true,
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
  [sym_stags_block] = {
    .visible = true,
    .named = true,
  },
  [sym_mtags_block] = {
    .visible = true,
    .named = true,
  },
  [sym_getstate_block] = {
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
  [sym__conf_rhs] = {
    .visible = false,
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
  [alias_sym_label] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_branch = 1,
  field_condition = 2,
  field_exactly = 3,
  field_expr = 4,
  field_field = 5,
  field_filename = 6,
  field_format = 7,
  field_from = 8,
  field_left = 9,
  field_lookahead = 10,
  field_maximum = 11,
  field_minimum = 12,
  field_name = 13,
  field_operator = 14,
  field_option = 15,
  field_right = 16,
  field_separator = 17,
  field_to = 18,
  field_value = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
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
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 2},
  [5] = {.index = 3, .length = 3},
  [6] = {.index = 6, .length = 4},
  [7] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 1},
  [12] = {.index = 12, .length = 3},
  [13] = {.index = 15, .length = 3},
  [14] = {.index = 18, .length = 1},
  [15] = {.index = 19, .length = 1},
  [18] = {.index = 20, .length = 2},
  [19] = {.index = 22, .length = 2},
  [20] = {.index = 24, .length = 1},
  [23] = {.index = 25, .length = 1},
  [24] = {.index = 26, .length = 1},
  [26] = {.index = 27, .length = 1},
  [27] = {.index = 28, .length = 1},
  [28] = {.index = 29, .length = 3},
  [29] = {.index = 32, .length = 2},
  [30] = {.index = 34, .length = 1},
  [31] = {.index = 35, .length = 1},
  [32] = {.index = 36, .length = 2},
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
    {field_value, 2},
  [27] =
    {field_minimum, 1, .inherited = true},
  [28] =
    {field_maximum, 0},
  [29] =
    {field_field, 1, .inherited = true},
    {field_option, 1, .inherited = true},
    {field_value, 3},
  [32] =
    {field_maximum, 3, .inherited = true},
    {field_minimum, 1, .inherited = true},
  [34] =
    {field_format, 2},
  [35] =
    {field_separator, 2},
  [36] =
    {field_field, 3},
    {field_option, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_default,
  },
  [3] = {
    [2] = alias_sym_block_name,
  },
  [8] = {
    [1] = alias_sym_label,
  },
  [9] = {
    [0] = alias_sym_label,
  },
  [10] = {
    [1] = sym_literal,
  },
  [11] = {
    [1] = alias_sym_label,
  },
  [16] = {
    [2] = alias_sym_label,
  },
  [17] = {
    [2] = sym_literal,
  },
  [18] = {
    [1] = anon_sym_DASH,
  },
  [21] = {
    [4] = alias_sym_block_name,
  },
  [22] = {
    [1] = alias_sym_block_name,
  },
  [25] = {
    [3] = alias_sym_label,
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
      if (lookahead == '!') ADVANCE(155);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '+') ADVANCE(175);
      if (lookahead == ',') ADVANCE(178);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '0') ADVANCE(253);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '<') ADVANCE(153);
      if (lookahead == '=') ADVANCE(143);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '?') ADVANCE(176);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '^') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '}') ADVANCE(179);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(121)
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (('G' <= lookahead && lookahead <= '_') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '+') ADVANCE(175);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '?') ADVANCE(176);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '+') ADVANCE(175);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '?') ADVANCE(176);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '+') ADVANCE(175);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '?') ADVANCE(176);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '+') ADVANCE(175);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '?') ADVANCE(176);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '+') ADVANCE(175);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '?') ADVANCE(176);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '^') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '+') ADVANCE(175);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '?') ADVANCE(176);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '+') ADVANCE(175);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '?') ADVANCE(176);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '+') ADVANCE(175);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '?') ADVANCE(176);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '}') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '+') ADVANCE(175);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '?') ADVANCE(176);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '+') ADVANCE(175);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == '?') ADVANCE(176);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(258);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(141);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '}') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '}') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(235);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(100);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(151);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(152);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 113:
      if (lookahead == 'x') ADVANCE(134);
      END_STATE();
    case 114:
      if (lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 115:
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
    case 116:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 117:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 118:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 119:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 120:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(258);
      if (lookahead == '\r') ADVANCE(259);
      END_STATE();
    case 121:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(155);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '0') ADVANCE(252);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '<') ADVANCE(153);
      if (lookahead == '=') ADVANCE(143);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '}') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(121)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 122:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(155);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == ',') ADVANCE(178);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '}') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 123:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(155);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 124:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '0') ADVANCE(252);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '}') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(125)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 125:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '0') ADVANCE(252);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(125)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
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
      if (lookahead == '=') ADVANCE(46);
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
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_BANGmaxnmatch);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_BANGstags);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BANGmtags);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BANGgetstate);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_BANGheader);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ignore_block);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(151);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_re2c2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
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
      ACCEPT_TOKEN(anon_sym_match_DASHempty);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_match_DASHnone);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_free_DASHform);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_GT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__code_in_braces_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__code_in_braces_token2);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__code_in_braces_token3);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__code_in_braces_token3);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(167)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(168)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '<') ADVANCE(153);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(171)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '<') ADVANCE(153);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '<') ADVANCE(153);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(171)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 173:
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
    case 174:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__mininum_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_range_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(182);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(258);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '>') ADVANCE(151);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 203:
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
    case 204:
      ACCEPT_TOKEN(sym_dstring);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_sstring);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
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
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(120);
      END_STATE();
    case 260:
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
  [1] = {.lex_state = 124},
  [2] = {.lex_state = 169},
  [3] = {.lex_state = 169},
  [4] = {.lex_state = 169},
  [5] = {.lex_state = 171},
  [6] = {.lex_state = 171},
  [7] = {.lex_state = 171},
  [8] = {.lex_state = 171},
  [9] = {.lex_state = 171},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 124},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 167},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 168},
  [29] = {.lex_state = 168},
  [30] = {.lex_state = 168},
  [31] = {.lex_state = 168},
  [32] = {.lex_state = 168},
  [33] = {.lex_state = 168},
  [34] = {.lex_state = 168},
  [35] = {.lex_state = 168},
  [36] = {.lex_state = 168},
  [37] = {.lex_state = 168},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 168},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 168},
  [43] = {.lex_state = 168},
  [44] = {.lex_state = 124},
  [45] = {.lex_state = 124},
  [46] = {.lex_state = 124},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 124},
  [49] = {.lex_state = 124},
  [50] = {.lex_state = 124},
  [51] = {.lex_state = 124},
  [52] = {.lex_state = 124},
  [53] = {.lex_state = 124},
  [54] = {.lex_state = 124},
  [55] = {.lex_state = 124},
  [56] = {.lex_state = 124},
  [57] = {.lex_state = 124},
  [58] = {.lex_state = 124},
  [59] = {.lex_state = 124},
  [60] = {.lex_state = 124},
  [61] = {.lex_state = 124},
  [62] = {.lex_state = 124},
  [63] = {.lex_state = 124},
  [64] = {.lex_state = 124},
  [65] = {.lex_state = 124},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 17},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 124},
  [82] = {.lex_state = 124},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 124},
  [86] = {.lex_state = 124},
  [87] = {.lex_state = 124},
  [88] = {.lex_state = 124},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 124},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 124},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 124},
  [95] = {.lex_state = 124},
  [96] = {.lex_state = 124},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 16},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 124},
  [101] = {.lex_state = 124},
  [102] = {.lex_state = 124},
  [103] = {.lex_state = 16},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 124},
  [106] = {.lex_state = 124},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 16},
  [110] = {.lex_state = 16},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 16},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 16},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 124},
  [119] = {.lex_state = 16},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 170},
  [122] = {.lex_state = 124},
  [123] = {.lex_state = 124},
  [124] = {.lex_state = 170},
  [125] = {.lex_state = 124},
  [126] = {.lex_state = 170},
  [127] = {.lex_state = 171},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 171},
  [130] = {.lex_state = 171},
  [131] = {.lex_state = 171},
  [132] = {.lex_state = 171},
  [133] = {.lex_state = 171},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 171},
  [136] = {.lex_state = 171},
  [137] = {.lex_state = 171},
  [138] = {.lex_state = 171},
  [139] = {.lex_state = 17},
  [140] = {.lex_state = 17},
  [141] = {.lex_state = 17},
  [142] = {.lex_state = 17},
  [143] = {.lex_state = 17},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 167},
  [151] = {.lex_state = 167},
  [152] = {.lex_state = 167},
  [153] = {.lex_state = 167},
  [154] = {.lex_state = 167},
  [155] = {.lex_state = 167},
  [156] = {.lex_state = 122},
  [157] = {.lex_state = 168},
  [158] = {.lex_state = 122},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 17},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 17},
  [166] = {.lex_state = 17},
  [167] = {.lex_state = 124},
  [168] = {.lex_state = 17},
  [169] = {.lex_state = 124},
  [170] = {.lex_state = 124},
  [171] = {.lex_state = 124},
  [172] = {.lex_state = 124},
  [173] = {.lex_state = 13},
  [174] = {.lex_state = 124},
  [175] = {.lex_state = 17},
  [176] = {.lex_state = 13},
  [177] = {.lex_state = 122},
  [178] = {.lex_state = 124},
  [179] = {.lex_state = 124},
  [180] = {.lex_state = 122},
  [181] = {.lex_state = 124},
  [182] = {.lex_state = 122},
  [183] = {.lex_state = 17},
  [184] = {.lex_state = 17},
  [185] = {.lex_state = 122},
  [186] = {.lex_state = 122},
  [187] = {.lex_state = 124},
  [188] = {.lex_state = 122},
  [189] = {.lex_state = 122},
  [190] = {.lex_state = 17},
  [191] = {.lex_state = 17},
  [192] = {.lex_state = 124},
  [193] = {.lex_state = 17},
  [194] = {.lex_state = 124},
  [195] = {.lex_state = 124},
  [196] = {.lex_state = 124},
  [197] = {.lex_state = 124},
  [198] = {.lex_state = 124},
  [199] = {.lex_state = 124},
  [200] = {.lex_state = 124},
  [201] = {.lex_state = 124},
  [202] = {.lex_state = 122},
  [203] = {.lex_state = 122},
  [204] = {.lex_state = 122},
  [205] = {.lex_state = 124},
  [206] = {.lex_state = 124},
  [207] = {.lex_state = 124},
  [208] = {.lex_state = 122},
  [209] = {.lex_state = 124},
  [210] = {.lex_state = 124},
  [211] = {.lex_state = 122},
  [212] = {.lex_state = 124},
  [213] = {.lex_state = 122},
  [214] = {.lex_state = 122},
  [215] = {.lex_state = 122},
  [216] = {.lex_state = 122},
  [217] = {.lex_state = 122},
  [218] = {.lex_state = 122},
  [219] = {.lex_state = 122},
  [220] = {.lex_state = 122},
  [221] = {.lex_state = 122},
  [222] = {.lex_state = 124},
  [223] = {.lex_state = 122},
  [224] = {.lex_state = 17},
  [225] = {.lex_state = 124},
  [226] = {.lex_state = 124},
  [227] = {.lex_state = 122},
  [228] = {.lex_state = 124},
  [229] = {.lex_state = 124},
  [230] = {.lex_state = 124},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 122},
  [233] = {.lex_state = 122},
  [234] = {.lex_state = 124},
  [235] = {.lex_state = 124},
  [236] = {.lex_state = 124},
  [237] = {.lex_state = 122},
  [238] = {.lex_state = 124},
  [239] = {.lex_state = 124},
  [240] = {.lex_state = 124},
  [241] = {.lex_state = 124},
  [242] = {.lex_state = 124},
  [243] = {.lex_state = 124},
  [244] = {.lex_state = 124},
  [245] = {.lex_state = 124},
  [246] = {.lex_state = 124},
  [247] = {.lex_state = 124},
  [248] = {.lex_state = 124},
  [249] = {.lex_state = 124},
  [250] = {.lex_state = 124},
  [251] = {.lex_state = 124},
  [252] = {.lex_state = 124},
  [253] = {.lex_state = 124},
  [254] = {.lex_state = 36},
  [255] = {.lex_state = 124},
  [256] = {.lex_state = 124},
  [257] = {.lex_state = 124},
  [258] = {.lex_state = 124},
  [259] = {.lex_state = 124},
  [260] = {.lex_state = 124},
  [261] = {.lex_state = 124},
  [262] = {.lex_state = 124},
  [263] = {.lex_state = 124},
  [264] = {.lex_state = 124},
  [265] = {.lex_state = 124},
  [266] = {.lex_state = 124},
  [267] = {.lex_state = 124},
  [268] = {.lex_state = 124},
  [269] = {.lex_state = 124},
  [270] = {.lex_state = 39},
  [271] = {.lex_state = 124},
  [272] = {.lex_state = 122},
  [273] = {.lex_state = 124},
  [274] = {.lex_state = 124},
  [275] = {.lex_state = 124},
  [276] = {.lex_state = 124},
  [277] = {.lex_state = 124},
  [278] = {.lex_state = 124},
  [279] = {.lex_state = 124},
  [280] = {.lex_state = 122},
  [281] = {.lex_state = 122},
  [282] = {.lex_state = 122},
  [283] = {.lex_state = 122},
  [284] = {.lex_state = 122},
  [285] = {.lex_state = 122},
  [286] = {.lex_state = 122},
  [287] = {.lex_state = 122},
  [288] = {.lex_state = 122},
  [289] = {.lex_state = 122},
  [290] = {.lex_state = 122},
  [291] = {.lex_state = 122},
  [292] = {.lex_state = 36},
  [293] = {.lex_state = 124},
  [294] = {.lex_state = 122},
  [295] = {.lex_state = 122},
  [296] = {.lex_state = 124},
  [297] = {.lex_state = 124},
  [298] = {.lex_state = 39},
  [299] = {.lex_state = 39},
  [300] = {.lex_state = 124},
  [301] = {.lex_state = 39},
  [302] = {.lex_state = 124},
  [303] = {.lex_state = 39},
  [304] = {.lex_state = 124},
  [305] = {.lex_state = 122},
  [306] = {.lex_state = 36},
  [307] = {.lex_state = 122},
  [308] = {.lex_state = 124},
  [309] = {.lex_state = 124},
  [310] = {.lex_state = 124},
  [311] = {.lex_state = 122},
  [312] = {.lex_state = 122},
  [313] = {.lex_state = 122},
  [314] = {.lex_state = 122},
  [315] = {.lex_state = 122},
  [316] = {.lex_state = 124},
  [317] = {.lex_state = 124},
  [318] = {.lex_state = 122},
  [319] = {.lex_state = 124},
  [320] = {.lex_state = 38},
  [321] = {.lex_state = 40},
  [322] = {.lex_state = 124},
  [323] = {.lex_state = 124},
  [324] = {.lex_state = 124},
  [325] = {.lex_state = 39},
  [326] = {.lex_state = 124},
  [327] = {.lex_state = 124},
  [328] = {.lex_state = 124},
  [329] = {.lex_state = 124},
  [330] = {.lex_state = 124},
  [331] = {.lex_state = 124},
  [332] = {.lex_state = 124},
  [333] = {.lex_state = 124},
  [334] = {.lex_state = 124},
  [335] = {.lex_state = 124},
  [336] = {.lex_state = 124},
  [337] = {.lex_state = 39},
  [338] = {.lex_state = 39},
  [339] = {.lex_state = 122},
  [340] = {.lex_state = 122},
  [341] = {.lex_state = 39},
  [342] = {.lex_state = 124},
  [343] = {.lex_state = 124},
  [344] = {.lex_state = 122},
  [345] = {.lex_state = 122},
  [346] = {.lex_state = 122},
  [347] = {.lex_state = 122},
  [348] = {.lex_state = 122},
  [349] = {.lex_state = 122},
  [350] = {.lex_state = 122},
  [351] = {.lex_state = 122},
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
    [anon_sym_DOT] = ACTIONS(1),
    [sym_dstring] = ACTIONS(1),
    [sym_sstring] = ACTIONS(1),
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
    [sym_re2c] = STATE(343),
    [sym__block] = STATE(342),
    [sym_global_block] = STATE(342),
    [sym_local_block] = STATE(342),
    [sym_rules_block] = STATE(342),
    [sym_use_block] = STATE(342),
    [sym_max_block] = STATE(342),
    [sym_maxnmatch_block] = STATE(342),
    [sym_stags_block] = STATE(342),
    [sym_mtags_block] = STATE(342),
    [sym_getstate_block] = STATE(342),
    [sym_header_on_block] = STATE(342),
    [sym_header_off_block] = STATE(342),
    [anon_sym_BANGre2c] = ACTIONS(5),
    [anon_sym_BANGlocal] = ACTIONS(7),
    [anon_sym_BANGrules] = ACTIONS(9),
    [anon_sym_BANGuse] = ACTIONS(11),
    [anon_sym_BANGmax] = ACTIONS(13),
    [anon_sym_BANGmaxnmatch] = ACTIONS(15),
    [anon_sym_BANGstags] = ACTIONS(17),
    [anon_sym_BANGmtags] = ACTIONS(19),
    [anon_sym_BANGgetstate] = ACTIONS(21),
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
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_linedir,
    STATE(23), 1,
      sym_condition,
    STATE(34), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(192), 1,
      sym_lookahead,
    STATE(201), 1,
      sym_regex,
    STATE(226), 1,
      sym_pattern,
    STATE(335), 1,
      sym__branch,
    STATE(336), 1,
      sym_body,
    ACTIONS(55), 2,
      sym_dstring,
      sym_sstring,
    STATE(79), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(224), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(193), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
    STATE(9), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      aux_sym_body_repeat1,
  [110] = 31,
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
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_linedir,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      anon_sym_COLON,
    STATE(23), 1,
      sym_condition,
    STATE(34), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(192), 1,
      sym_lookahead,
    STATE(201), 1,
      sym_regex,
    STATE(226), 1,
      sym_pattern,
    STATE(302), 1,
      sym_body,
    STATE(335), 1,
      sym__branch,
    ACTIONS(55), 2,
      sym_dstring,
      sym_sstring,
    STATE(79), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(224), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(193), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
    STATE(9), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      aux_sym_body_repeat1,
  [220] = 31,
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
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_linedir,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_COLON,
    STATE(23), 1,
      sym_condition,
    STATE(34), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(192), 1,
      sym_lookahead,
    STATE(201), 1,
      sym_regex,
    STATE(226), 1,
      sym_pattern,
    STATE(300), 1,
      sym_body,
    STATE(335), 1,
      sym__branch,
    ACTIONS(55), 2,
      sym_dstring,
      sym_sstring,
    STATE(79), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(224), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(193), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
    STATE(9), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      aux_sym_body_repeat1,
  [330] = 30,
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
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_linedir,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_condition,
    STATE(34), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(192), 1,
      sym_lookahead,
    STATE(201), 1,
      sym_regex,
    STATE(226), 1,
      sym_pattern,
    STATE(249), 1,
      sym_body,
    STATE(335), 1,
      sym__branch,
    ACTIONS(55), 2,
      sym_dstring,
      sym_sstring,
    STATE(79), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(224), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(193), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
    STATE(9), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      aux_sym_body_repeat1,
  [437] = 30,
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
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_linedir,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_condition,
    STATE(34), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(192), 1,
      sym_lookahead,
    STATE(201), 1,
      sym_regex,
    STATE(226), 1,
      sym_pattern,
    STATE(317), 1,
      sym_body,
    STATE(335), 1,
      sym__branch,
    ACTIONS(55), 2,
      sym_dstring,
      sym_sstring,
    STATE(79), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(224), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(193), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
    STATE(9), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      aux_sym_body_repeat1,
  [544] = 30,
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
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_linedir,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_condition,
    STATE(34), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(192), 1,
      sym_lookahead,
    STATE(201), 1,
      sym_regex,
    STATE(226), 1,
      sym_pattern,
    STATE(248), 1,
      sym_body,
    STATE(335), 1,
      sym__branch,
    ACTIONS(55), 2,
      sym_dstring,
      sym_sstring,
    STATE(79), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(224), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(193), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
    STATE(9), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      aux_sym_body_repeat1,
  [651] = 29,
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
      anon_sym_LT,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 1,
      anon_sym_,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_AT2,
    ACTIONS(118), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      sym_linedir,
    STATE(23), 1,
      sym_condition,
    STATE(34), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(192), 1,
      sym_lookahead,
    STATE(201), 1,
      sym_regex,
    STATE(226), 1,
      sym_pattern,
    STATE(335), 1,
      sym__branch,
    ACTIONS(112), 2,
      sym_dstring,
      sym_sstring,
    STATE(79), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(224), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(193), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
    STATE(8), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      aux_sym_body_repeat1,
  [755] = 29,
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
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      sym_linedir,
    STATE(23), 1,
      sym_condition,
    STATE(34), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(192), 1,
      sym_lookahead,
    STATE(201), 1,
      sym_regex,
    STATE(226), 1,
      sym_pattern,
    STATE(335), 1,
      sym__branch,
    ACTIONS(55), 2,
      sym_dstring,
      sym_sstring,
    STATE(79), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(224), 2,
      sym__pattern_expr,
      sym_alternation,
    STATE(193), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
    STATE(8), 7,
      sym_named_definition,
      sym_configuration,
      sym_ordinary_rule,
      sym_conditional_rule,
      sym_use,
      sym_include,
      aux_sym_body_repeat1,
  [859] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(111), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(130), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(128), 14,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [925] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(120), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(148), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(146), 14,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [991] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(120), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(148), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(146), 13,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1056] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(111), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(130), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(128), 13,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1121] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(111), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(130), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(128), 12,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1185] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(120), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(148), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(146), 12,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1249] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(111), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(130), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(128), 12,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1313] = 20,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_flags,
    ACTIONS(154), 1,
      anon_sym_define,
    ACTIONS(156), 1,
      anon_sym_cond,
    ACTIONS(158), 1,
      anon_sym_label,
    ACTIONS(160), 1,
      anon_sym_variable,
    ACTIONS(162), 1,
      anon_sym_yych,
    ACTIONS(164), 1,
      anon_sym_state,
    ACTIONS(166), 1,
      anon_sym_yybm,
    ACTIONS(168), 1,
      anon_sym_cgoto,
    ACTIONS(170), 1,
      anon_sym_api,
    ACTIONS(172), 1,
      anon_sym_tags,
    ACTIONS(174), 1,
      anon_sym_indent,
    ACTIONS(176), 1,
      anon_sym_yyfill,
    ACTIONS(178), 1,
      anon_sym_eof,
    ACTIONS(180), 1,
      anon_sym_sentinel,
    ACTIONS(182), 1,
      anon_sym_condprefix,
    ACTIONS(184), 1,
      anon_sym_condenumprefix,
    ACTIONS(186), 1,
      anon_sym_startlabel,
    STATE(310), 18,
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
  [1391] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(120), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(148), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(146), 12,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1455] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(120), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(148), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(146), 11,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1518] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(111), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(130), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(128), 11,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1581] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(120), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(148), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(146), 11,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1644] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(111), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(130), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(128), 11,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1707] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(121), 1,
      sym_shortcut,
    STATE(130), 1,
      sym_action,
    STATE(181), 1,
      sym_pattern,
    STATE(192), 1,
      sym_lookahead,
    STATE(201), 1,
      sym_regex,
    STATE(335), 1,
      sym__branch,
    ACTIONS(188), 2,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
    STATE(41), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(184), 2,
      sym__pattern_expr,
      sym_alternation,
    ACTIONS(55), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(175), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [1792] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(111), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(130), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(128), 11,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1855] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(120), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(148), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(146), 11,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1918] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(120), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(148), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(146), 10,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [1980] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(111), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(130), 4,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
    ACTIONS(128), 10,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [2042] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(192), 1,
      sym_lookahead,
    STATE(273), 1,
      sym_regex,
    STATE(335), 1,
      sym__branch,
    STATE(72), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(231), 2,
      sym__pattern_expr,
      sym_alternation,
    ACTIONS(55), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(190), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [2105] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(335), 1,
      sym__branch,
    STATE(82), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(322), 2,
      sym__pattern_expr,
      sym_alternation,
    ACTIONS(55), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(198), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [2162] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(335), 1,
      sym__branch,
    STATE(105), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(187), 2,
      sym__pattern_expr,
      sym_alternation,
    ACTIONS(55), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(195), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [2219] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(335), 1,
      sym__branch,
    STATE(118), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(187), 2,
      sym__pattern_expr,
      sym_alternation,
    ACTIONS(55), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(200), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [2276] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(335), 1,
      sym__branch,
    STATE(54), 2,
      sym__cat_expr,
      sym_repetition,
    STATE(187), 2,
      sym__pattern_expr,
      sym_alternation,
    ACTIONS(55), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(179), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [2333] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(166), 1,
      sym__branch,
    STATE(54), 2,
      sym__cat_expr,
      sym_repetition,
    ACTIONS(55), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(178), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [2386] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    STATE(36), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(166), 1,
      sym__branch,
    STATE(79), 2,
      sym__cat_expr,
      sym_repetition,
    ACTIONS(55), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(183), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [2439] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(166), 1,
      sym__branch,
    STATE(118), 2,
      sym__cat_expr,
      sym_repetition,
    ACTIONS(55), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(197), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [2492] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      anon_sym_AT2,
    ACTIONS(222), 1,
      anon_sym_POUND,
    STATE(36), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(335), 1,
      sym__branch,
    STATE(122), 2,
      sym__cat_expr,
      sym_repetition,
    ACTIONS(204), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(222), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [2545] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(166), 1,
      sym__branch,
    STATE(72), 2,
      sym__cat_expr,
      sym_repetition,
    ACTIONS(55), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(191), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [2598] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_AT2,
    ACTIONS(242), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym__atom,
    ACTIONS(225), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(38), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
    ACTIONS(228), 6,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
  [2645] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym__atom,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(38), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
    ACTIONS(247), 6,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
  [2692] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(166), 1,
      sym__branch,
    STATE(41), 2,
      sym__cat_expr,
      sym_repetition,
    ACTIONS(55), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(168), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [2745] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym__atom,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(39), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
    ACTIONS(259), 6,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
  [2792] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(166), 1,
      sym__branch,
    STATE(82), 2,
      sym__cat_expr,
      sym_repetition,
    ACTIONS(55), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(196), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [2845] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT2,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      aux_sym_alternation_repeat1,
    STATE(47), 1,
      sym__atom,
    STATE(166), 1,
      sym__branch,
    STATE(105), 2,
      sym__cat_expr,
      sym_repetition,
    ACTIONS(55), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(205), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [2898] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(275), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(241), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [2946] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(283), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(267), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [2994] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(287), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(266), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [3042] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_LBRACE2,
    STATE(143), 2,
      sym_close,
      sym_limits,
    ACTIONS(293), 3,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(289), 15,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [3078] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(299), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(257), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [3126] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(301), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(303), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(265), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [3174] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_AT2,
    ACTIONS(242), 1,
      anon_sym_POUND,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(225), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(50), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(228), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [3220] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(50), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(247), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [3266] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(312), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(256), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [3314] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(314), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(316), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(255), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [3362] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(51), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(259), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [3408] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(320), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(264), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [3456] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(324), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(263), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [3504] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(326), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(328), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(240), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [3552] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(332), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(239), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [3600] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(336), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(238), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [3648] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(340), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(271), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [3696] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(344), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(258), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [3744] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(348), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(262), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [3792] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(352), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(261), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [3840] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(356), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(259), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [3888] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_error,
    ACTIONS(271), 1,
      anon_sym_functions,
    ACTIONS(273), 1,
      anon_sym_free_DASHform,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(265), 2,
      anon_sym_default,
      anon_sym_custom,
    ACTIONS(267), 2,
      anon_sym_match_DASHempty,
      anon_sym_match_DASHnone,
    ACTIONS(277), 2,
      anon_sym_0,
      aux_sym_number_token2,
    ACTIONS(360), 2,
      sym_dstring,
      sym_sstring,
    ACTIONS(263), 3,
      anon_sym_ignore,
      anon_sym_substitute,
      anon_sym_fail,
    STATE(260), 6,
      sym__conf_rhs,
      sym_encoding_policy,
      sym_input_conf,
      sym_empty_class_conf,
      sym_api_style,
      sym_number,
  [3936] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(362), 1,
      anon_sym_CARET,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(97), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [3983] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(366), 1,
      anon_sym_CARET,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(97), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [4030] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(370), 1,
      anon_sym_CARET,
    ACTIONS(372), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(97), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [4077] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(374), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(76), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(247), 4,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [4122] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(376), 1,
      anon_sym_CARET,
    ACTIONS(378), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(97), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [4169] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(380), 1,
      anon_sym_CARET,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(97), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [4216] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(374), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(69), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(259), 4,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [4261] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_AT2,
    ACTIONS(242), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(225), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(73), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(228), 4,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [4306] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(387), 1,
      anon_sym_CARET,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(97), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [4353] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(391), 1,
      anon_sym_CARET,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(97), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [4400] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_AT2,
    ACTIONS(242), 1,
      anon_sym_POUND,
    ACTIONS(395), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(225), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(76), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(228), 4,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [4445] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(398), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(73), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(247), 4,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [4490] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(400), 1,
      anon_sym_CARET,
    ACTIONS(402), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(97), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [4537] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(398), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(77), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    ACTIONS(259), 4,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [4582] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
    ACTIONS(406), 1,
      aux_sym_range_token1,
    ACTIONS(409), 1,
      aux_sym_literal_token1,
    ACTIONS(421), 1,
      aux_sym__esc_oct_token2,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(412), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(80), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(418), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(415), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [4626] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(374), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    STATE(72), 2,
      sym__cat_expr,
      sym_repetition,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(160), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [4670] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    ACTIONS(259), 3,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
    STATE(86), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [4714] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(113), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [4758] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(428), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(113), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [4802] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    STATE(82), 2,
      sym__cat_expr,
      sym_repetition,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(160), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [4846] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    ACTIONS(247), 3,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
    STATE(90), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [4890] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_AT2,
    ACTIONS(242), 1,
      anon_sym_POUND,
    ACTIONS(430), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(225), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    ACTIONS(228), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(87), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [4934] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(398), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    STATE(79), 2,
      sym__cat_expr,
      sym_repetition,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(160), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [4978] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(433), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(113), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5022] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_AT2,
    ACTIONS(242), 1,
      anon_sym_POUND,
    ACTIONS(435), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(225), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    ACTIONS(228), 3,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
    STATE(90), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [5066] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(113), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5110] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym__atom,
    STATE(41), 2,
      sym__cat_expr,
      sym_repetition,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(160), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [5154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LBRACE,
    ACTIONS(440), 19,
      anon_sym_SEMI,
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
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [5182] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(444), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    STATE(122), 2,
      sym__cat_expr,
      sym_repetition,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(160), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [5226] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_AT2,
    ACTIONS(242), 1,
      anon_sym_POUND,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(225), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    ACTIONS(228), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(95), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [5270] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    ACTIONS(247), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(95), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [5314] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(451), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(80), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    ACTIONS(453), 19,
      anon_sym_SEMI,
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
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [5386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
    ACTIONS(457), 19,
      anon_sym_SEMI,
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
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [5414] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    STATE(105), 2,
      sym__cat_expr,
      sym_repetition,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(160), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [5458] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    ACTIONS(247), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(87), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [5502] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    STATE(118), 2,
      sym__cat_expr,
      sym_repetition,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(160), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [5546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_LBRACE,
    ACTIONS(463), 19,
      anon_sym_SEMI,
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
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [5574] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(113), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5618] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    ACTIONS(259), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(96), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [5662] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    STATE(54), 2,
      sym__cat_expr,
      sym_repetition,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(160), 4,
      sym__alt_expr,
      sym_difference,
      sym__dif_expr,
      sym_concat,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [5706] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(113), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5750] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(113), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
    ACTIONS(473), 19,
      anon_sym_SEMI,
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
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [5822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 19,
      anon_sym_SEMI,
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
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [5850] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(477), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(80), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    ACTIONS(479), 19,
      anon_sym_SEMI,
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
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [5922] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(483), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(80), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [5966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(485), 19,
      anon_sym_SEMI,
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
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [5994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 19,
      anon_sym_SEMI,
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
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    ACTIONS(493), 19,
      anon_sym_SEMI,
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
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6050] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(497), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(113), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6094] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    ACTIONS(259), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    STATE(101), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [6138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 19,
      anon_sym_SEMI,
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
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6166] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(80), 2,
      sym_range,
      aux_sym_character_class_repeat1,
    STATE(149), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6210] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
    STATE(138), 1,
      sym_action,
    ACTIONS(507), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6241] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(444), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(259), 2,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(123), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [6284] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_AT2,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(444), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(247), 2,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    ACTIONS(245), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(125), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [6327] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      sym_action,
    ACTIONS(511), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6358] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_AT2,
    ACTIONS(242), 1,
      anon_sym_POUND,
    ACTIONS(513), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym__atom,
    ACTIONS(228), 2,
      anon_sym_PIPE,
      anon_sym_BSLASH,
    ACTIONS(225), 3,
      sym_dstring,
      sym_sstring,
      sym_identifier,
    STATE(125), 3,
      sym__cat_expr,
      sym_repetition,
      aux_sym_concat_repeat1,
    STATE(103), 5,
      sym_parenthesized,
      sym_character_class,
      sym_wildcard,
      sym_stag,
      sym_mtag,
  [6401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
    ACTIONS(518), 17,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    ACTIONS(522), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_LBRACE,
    ACTIONS(524), 1,
      anon_sym_EQ,
    ACTIONS(463), 15,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_STAR2,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
    ACTIONS(528), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
    ACTIONS(507), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      ts_builtin_sym_end,
    ACTIONS(532), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
    ACTIONS(536), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    ACTIONS(540), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6604] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_range_token1,
    ACTIONS(136), 1,
      aux_sym_literal_token1,
    ACTIONS(144), 1,
      aux_sym__esc_oct_token2,
    STATE(148), 1,
      sym_code_unit,
    ACTIONS(138), 2,
      sym_quote,
      sym_ctrl_code,
    STATE(144), 2,
      sym_literal,
      sym__escape,
    ACTIONS(142), 4,
      aux_sym__esc_hex_token5,
      aux_sym__esc_hex_token6,
      aux_sym__esc_hex_token7,
      aux_sym__esc_hex_token8,
    ACTIONS(140), 5,
      aux_sym__esc_hex_token1,
      aux_sym__esc_hex_token2,
      aux_sym__esc_hex_token3,
      aux_sym__esc_hex_token4,
      aux_sym__esc_oct_token1,
  [6641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
    ACTIONS(544), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
    ACTIONS(548), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
    ACTIONS(552), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
    ACTIONS(511), 16,
      anon_sym_BANGuse,
      anon_sym_BANGinclude,
      anon_sym_re2c2,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
      sym_linedir,
  [6741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 16,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 16,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 16,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 16,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 16,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [6851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 2,
      anon_sym_RBRACK,
      aux_sym_range_token1,
    ACTIONS(566), 13,
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
  [6874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 2,
      anon_sym_RBRACK,
      aux_sym_range_token1,
    ACTIONS(570), 13,
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
  [6897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_RBRACK,
      aux_sym_range_token1,
    ACTIONS(574), 13,
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
  [6920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 2,
      anon_sym_RBRACK,
      aux_sym_range_token1,
    ACTIONS(578), 13,
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
  [6943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 2,
      anon_sym_RBRACK,
      aux_sym_range_token1,
    ACTIONS(582), 13,
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
  [6966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACK,
    ACTIONS(586), 1,
      aux_sym_range_token1,
    ACTIONS(589), 13,
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
  [6991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 14,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 14,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 14,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 14,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 14,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 14,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7111] = 8,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(603), 1,
      ts_builtin_sym_end,
    ACTIONS(605), 1,
      anon_sym_COLON,
    ACTIONS(607), 1,
      anon_sym_format,
    ACTIONS(609), 1,
      anon_sym_separator,
    STATE(167), 1,
      sym_block_list,
    STATE(182), 1,
      aux_sym_block_list_repeat1,
    STATE(170), 3,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
  [7138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 9,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_dstring,
      sym_sstring,
      anon_sym_AT2,
      anon_sym_POUND,
      sym_identifier,
  [7153] = 8,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COLON,
    ACTIONS(607), 1,
      anon_sym_format,
    ACTIONS(609), 1,
      anon_sym_separator,
    ACTIONS(613), 1,
      ts_builtin_sym_end,
    STATE(169), 1,
      sym_block_list,
    STATE(182), 1,
      aux_sym_block_list_repeat1,
    STATE(171), 3,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
  [7180] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
    ACTIONS(621), 1,
      aux_sym__code_in_braces_token3,
    STATE(306), 1,
      sym_code_block,
    STATE(161), 2,
      sym__code_in_braces,
      aux_sym_code_block_repeat1,
    ACTIONS(619), 3,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [7205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 8,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BSLASH,
      anon_sym_RPAREN,
  [7219] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
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
  [7241] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_LBRACE,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
    ACTIONS(640), 1,
      aux_sym__code_in_braces_token3,
    STATE(164), 2,
      sym__code_in_braces,
      aux_sym_code_block_repeat1,
    ACTIONS(637), 3,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [7263] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_LBRACE,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    ACTIONS(651), 1,
      aux_sym__code_in_braces_token3,
    STATE(163), 2,
      sym__code_in_braces,
      aux_sym_code_block_repeat1,
    ACTIONS(648), 3,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [7285] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_LBRACE,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    ACTIONS(663), 1,
      aux_sym__code_in_braces_token3,
    STATE(163), 2,
      sym__code_in_braces,
      aux_sym_code_block_repeat1,
    ACTIONS(660), 3,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [7307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 7,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [7320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_PIPE,
    ACTIONS(668), 6,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [7335] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_format,
    ACTIONS(609), 1,
      anon_sym_separator,
    ACTIONS(672), 1,
      ts_builtin_sym_end,
    STATE(174), 3,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
  [7353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_BSLASH,
    ACTIONS(666), 5,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [7367] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_format,
    ACTIONS(609), 1,
      anon_sym_separator,
    ACTIONS(676), 1,
      ts_builtin_sym_end,
    STATE(172), 3,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
  [7385] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_format,
    ACTIONS(609), 1,
      anon_sym_separator,
    ACTIONS(672), 1,
      ts_builtin_sym_end,
    STATE(277), 3,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
  [7403] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_format,
    ACTIONS(609), 1,
      anon_sym_separator,
    ACTIONS(676), 1,
      ts_builtin_sym_end,
    STATE(276), 3,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
  [7421] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_format,
    ACTIONS(609), 1,
      anon_sym_separator,
    ACTIONS(678), 1,
      ts_builtin_sym_end,
    STATE(253), 3,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
  [7439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      aux_sym__code_in_braces_token3,
    ACTIONS(680), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [7453] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_format,
    ACTIONS(609), 1,
      anon_sym_separator,
    ACTIONS(684), 1,
      ts_builtin_sym_end,
    STATE(252), 3,
      sym__tag_directive,
      sym_format_directive,
      sym_separator_directive,
  [7471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(674), 1,
      anon_sym_BSLASH,
    ACTIONS(686), 4,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_SLASH,
  [7487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      aux_sym__code_in_braces_token3,
    ACTIONS(688), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__code_in_braces_token1,
      aux_sym__code_in_braces_token2,
      aux_sym__code_in_braces_token4,
  [7501] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_COLON,
    STATE(177), 1,
      aux_sym_block_list_repeat1,
    ACTIONS(692), 3,
      ts_builtin_sym_end,
      anon_sym_format,
      anon_sym_separator,
  [7516] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_BSLASH,
    ACTIONS(666), 4,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [7529] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(697), 1,
      anon_sym_BSLASH,
    ACTIONS(686), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [7544] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(699), 1,
      sym_identifier,
    ACTIONS(701), 1,
      anon_sym_GT,
    ACTIONS(703), 1,
      anon_sym_BANG,
    ACTIONS(705), 1,
      anon_sym_STAR,
    STATE(236), 1,
      aux_sym__clist_repeat1,
  [7563] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_shortcut,
    STATE(138), 1,
      sym_action,
    ACTIONS(707), 2,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
  [7580] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COLON,
    STATE(177), 1,
      aux_sym_block_list_repeat1,
    ACTIONS(711), 3,
      ts_builtin_sym_end,
      anon_sym_format,
      anon_sym_separator,
  [7595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_BSLASH,
    ACTIONS(666), 3,
      anon_sym_LBRACE,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [7607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_SLASH,
    ACTIONS(715), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [7619] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(719), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_format,
      anon_sym_separator,
  [7629] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COLON,
    ACTIONS(721), 1,
      ts_builtin_sym_end,
    STATE(182), 1,
      aux_sym_block_list_repeat1,
    STATE(297), 1,
      sym_block_list,
  [7645] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(723), 4,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [7655] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COLON,
    ACTIONS(725), 1,
      ts_builtin_sym_end,
    STATE(182), 1,
      aux_sym_block_list_repeat1,
    STATE(296), 1,
      sym_block_list,
  [7671] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COLON,
    ACTIONS(727), 1,
      ts_builtin_sym_end,
    STATE(182), 1,
      aux_sym_block_list_repeat1,
    STATE(293), 1,
      sym_block_list,
  [7687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(729), 1,
      anon_sym_BSLASH,
    ACTIONS(686), 2,
      anon_sym_SEMI,
      anon_sym_SLASH,
  [7701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_BSLASH,
    ACTIONS(666), 3,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PIPE,
  [7713] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(715), 4,
      anon_sym_SEMI,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [7723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(713), 1,
      anon_sym_BSLASH,
    ACTIONS(686), 2,
      anon_sym_LBRACE,
      anon_sym_SLASH,
  [7737] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym_identifier,
    ACTIONS(733), 1,
      anon_sym_GT,
    ACTIONS(735), 1,
      anon_sym_STAR,
    STATE(228), 1,
      aux_sym__clist_repeat1,
  [7753] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(686), 1,
      anon_sym_SEMI,
    ACTIONS(737), 1,
      anon_sym_BSLASH,
  [7766] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_BSLASH,
    ACTIONS(666), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [7777] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_BSLASH,
    ACTIONS(666), 2,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [7788] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    ACTIONS(739), 1,
      anon_sym_BSLASH,
  [7801] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(743), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [7810] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(686), 1,
      anon_sym_LBRACE,
    ACTIONS(741), 1,
      anon_sym_BSLASH,
  [7823] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(745), 3,
      anon_sym_EQ_GT,
      anon_sym_COLON_EQ_GT,
      anon_sym_LBRACE,
  [7832] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_RBRACE2,
    ACTIONS(749), 1,
      aux_sym__mininum_token1,
    STATE(247), 1,
      sym__maximum,
  [7845] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym__mininum_token1,
    STATE(304), 1,
      sym__exactly,
    STATE(305), 1,
      sym__mininum,
  [7858] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_EQ,
    ACTIONS(753), 2,
      anon_sym_COLON,
      anon_sym_AT,
  [7869] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_BSLASH,
    ACTIONS(666), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [7880] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(757), 3,
      ts_builtin_sym_end,
      anon_sym_format,
      anon_sym_separator,
  [7889] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(759), 3,
      ts_builtin_sym_end,
      anon_sym_format,
      anon_sym_separator,
  [7898] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(284), 1,
      sym__option_name,
  [7908] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(763), 2,
      sym_dstring,
      sym_sstring,
  [7916] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(765), 2,
      sym_dstring,
      sym_sstring,
  [7924] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(285), 1,
      sym__option_name,
  [7934] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_on,
    ACTIONS(769), 1,
      anon_sym_off,
  [7944] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(237), 1,
      sym__option_name,
  [7954] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(283), 1,
      sym__option_name,
  [7964] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(282), 1,
      sym__option_name,
  [7974] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(281), 1,
      sym__option_name,
  [7984] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(280), 1,
      sym__option_name,
  [7994] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(286), 1,
      sym__option_name,
  [8004] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(287), 1,
      sym__option_name,
  [8014] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(288), 1,
      sym__option_name,
  [8024] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(289), 1,
      sym__option_name,
  [8034] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_PIPE,
    ACTIONS(771), 1,
      anon_sym_BSLASH,
  [8044] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(290), 1,
      sym__option_name,
  [8054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_LBRACE,
    ACTIONS(773), 1,
      anon_sym_SLASH,
  [8064] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_GT,
    ACTIONS(777), 1,
      anon_sym_COMMA,
  [8074] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_action,
  [8084] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(291), 1,
      sym__option_name,
  [8094] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_identifier,
    STATE(229), 1,
      aux_sym__clist_repeat1,
  [8104] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(781), 1,
      sym_identifier,
    STATE(229), 1,
      aux_sym__clist_repeat1,
  [8114] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    ACTIONS(784), 1,
      anon_sym_GT,
  [8124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_SEMI,
    ACTIONS(786), 1,
      anon_sym_SLASH,
  [8134] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(788), 1,
      ts_builtin_sym_end,
    ACTIONS(790), 1,
      anon_sym_COLON,
  [8144] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_COMMA2,
    ACTIONS(794), 1,
      anon_sym_RBRACE2,
  [8154] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    ACTIONS(796), 1,
      anon_sym_GT,
  [8164] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(798), 2,
      sym_dstring,
      sym_sstring,
  [8172] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym_identifier,
    STATE(229), 1,
      aux_sym__clist_repeat1,
  [8182] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_EQ,
  [8189] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_SEMI,
  [8196] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SEMI,
  [8203] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_SEMI,
  [8210] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_SEMI,
  [8217] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_SEMI,
  [8224] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_SEMI,
  [8231] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_SEMI,
  [8238] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_SEMI,
  [8245] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_RBRACE2,
  [8252] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RBRACE2,
  [8259] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(822), 1,
      ts_builtin_sym_end,
  [8266] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(824), 1,
      ts_builtin_sym_end,
  [8273] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_SEMI,
  [8280] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_SEMI,
  [8287] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(830), 1,
      ts_builtin_sym_end,
  [8294] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(832), 1,
      ts_builtin_sym_end,
  [8301] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(834), 1,
      aux_sym__option_name_token1,
  [8308] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SEMI,
  [8315] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_SEMI,
  [8322] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_SEMI,
  [8329] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_SEMI,
  [8336] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_SEMI,
  [8343] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_SEMI,
  [8350] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_SEMI,
  [8357] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_SEMI,
  [8364] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_SEMI,
  [8371] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_SEMI,
  [8378] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_SEMI,
  [8385] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_SEMI,
  [8392] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_SEMI,
  [8399] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_SEMI,
  [8406] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_SEMI,
  [8413] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(866), 1,
      aux_sym_number_token1,
  [8420] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_SEMI,
  [8427] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_EQ,
  [8434] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_SEMI,
  [8441] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(874), 1,
      ts_builtin_sym_end,
  [8448] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(876), 1,
      ts_builtin_sym_end,
  [8455] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(678), 1,
      ts_builtin_sym_end,
  [8462] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(684), 1,
      ts_builtin_sym_end,
  [8469] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(878), 1,
      ts_builtin_sym_end,
  [8476] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_COMMA,
  [8483] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_EQ,
  [8490] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_EQ,
  [8497] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_EQ,
  [8504] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_EQ,
  [8511] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_EQ,
  [8518] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_EQ,
  [8525] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_EQ,
  [8532] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_EQ,
  [8539] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_EQ,
  [8546] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_EQ,
  [8553] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_EQ,
  [8560] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_EQ,
  [8567] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(904), 1,
      aux_sym__option_name_token1,
  [8574] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(906), 1,
      ts_builtin_sym_end,
  [8581] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_EQ,
  [8588] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_EQ,
  [8595] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(912), 1,
      ts_builtin_sym_end,
  [8602] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(914), 1,
      ts_builtin_sym_end,
  [8609] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(916), 1,
      aux_sym__block_name_token1,
  [8616] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(918), 1,
      aux_sym__block_name_token1,
  [8623] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(920), 1,
      ts_builtin_sym_end,
  [8630] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(922), 1,
      aux_sym__block_name_token1,
  [8637] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(924), 1,
      ts_builtin_sym_end,
  [8644] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(926), 1,
      aux_sym__block_name_token1,
  [8651] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_RBRACE2,
  [8658] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_COMMA2,
  [8665] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_RBRACE,
  [8672] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_COLON,
  [8679] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym_identifier,
  [8686] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_GT,
  [8693] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_SEMI,
  [8700] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_EQ,
  [8707] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_EQ,
  [8714] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_EQ,
  [8721] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_EQ,
  [8728] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_EQ,
  [8735] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_SEMI,
  [8742] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(954), 1,
      ts_builtin_sym_end,
  [8749] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_COLON,
  [8756] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(958), 1,
      sym_identifier,
  [8763] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(960), 1,
      sym_oct_digit,
  [8770] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(960), 1,
      sym_hex_digit,
  [8777] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_RPAREN,
  [8784] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_GT,
  [8791] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_SEMI,
  [8798] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(966), 1,
      aux_sym__block_name_token1,
  [8805] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_re2c,
  [8812] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_re2c,
  [8819] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_re2c,
  [8826] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_re2c,
  [8833] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_re2c,
  [8840] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_re2c,
  [8847] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_re2c,
  [8854] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_re2c,
  [8861] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_re2c,
  [8868] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_PIPE,
  [8875] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(986), 1,
      ts_builtin_sym_end,
  [8882] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(988), 1,
      aux_sym__block_name_token1,
  [8889] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(990), 1,
      aux_sym__block_name_token1,
  [8896] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_COLON,
  [8903] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_COLON,
  [8910] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(996), 1,
      aux_sym__block_name_token1,
  [8917] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(998), 1,
      ts_builtin_sym_end,
  [8924] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(1000), 1,
      ts_builtin_sym_end,
  [8931] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_COLON,
  [8938] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_COLON,
  [8945] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_COLON,
  [8952] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_COLON,
  [8959] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_COLON,
  [8966] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_COLON,
  [8973] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_COLON,
  [8980] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 110,
  [SMALL_STATE(4)] = 220,
  [SMALL_STATE(5)] = 330,
  [SMALL_STATE(6)] = 437,
  [SMALL_STATE(7)] = 544,
  [SMALL_STATE(8)] = 651,
  [SMALL_STATE(9)] = 755,
  [SMALL_STATE(10)] = 859,
  [SMALL_STATE(11)] = 925,
  [SMALL_STATE(12)] = 991,
  [SMALL_STATE(13)] = 1056,
  [SMALL_STATE(14)] = 1121,
  [SMALL_STATE(15)] = 1185,
  [SMALL_STATE(16)] = 1249,
  [SMALL_STATE(17)] = 1313,
  [SMALL_STATE(18)] = 1391,
  [SMALL_STATE(19)] = 1455,
  [SMALL_STATE(20)] = 1518,
  [SMALL_STATE(21)] = 1581,
  [SMALL_STATE(22)] = 1644,
  [SMALL_STATE(23)] = 1707,
  [SMALL_STATE(24)] = 1792,
  [SMALL_STATE(25)] = 1855,
  [SMALL_STATE(26)] = 1918,
  [SMALL_STATE(27)] = 1980,
  [SMALL_STATE(28)] = 2042,
  [SMALL_STATE(29)] = 2105,
  [SMALL_STATE(30)] = 2162,
  [SMALL_STATE(31)] = 2219,
  [SMALL_STATE(32)] = 2276,
  [SMALL_STATE(33)] = 2333,
  [SMALL_STATE(34)] = 2386,
  [SMALL_STATE(35)] = 2439,
  [SMALL_STATE(36)] = 2492,
  [SMALL_STATE(37)] = 2545,
  [SMALL_STATE(38)] = 2598,
  [SMALL_STATE(39)] = 2645,
  [SMALL_STATE(40)] = 2692,
  [SMALL_STATE(41)] = 2745,
  [SMALL_STATE(42)] = 2792,
  [SMALL_STATE(43)] = 2845,
  [SMALL_STATE(44)] = 2898,
  [SMALL_STATE(45)] = 2946,
  [SMALL_STATE(46)] = 2994,
  [SMALL_STATE(47)] = 3042,
  [SMALL_STATE(48)] = 3078,
  [SMALL_STATE(49)] = 3126,
  [SMALL_STATE(50)] = 3174,
  [SMALL_STATE(51)] = 3220,
  [SMALL_STATE(52)] = 3266,
  [SMALL_STATE(53)] = 3314,
  [SMALL_STATE(54)] = 3362,
  [SMALL_STATE(55)] = 3408,
  [SMALL_STATE(56)] = 3456,
  [SMALL_STATE(57)] = 3504,
  [SMALL_STATE(58)] = 3552,
  [SMALL_STATE(59)] = 3600,
  [SMALL_STATE(60)] = 3648,
  [SMALL_STATE(61)] = 3696,
  [SMALL_STATE(62)] = 3744,
  [SMALL_STATE(63)] = 3792,
  [SMALL_STATE(64)] = 3840,
  [SMALL_STATE(65)] = 3888,
  [SMALL_STATE(66)] = 3936,
  [SMALL_STATE(67)] = 3983,
  [SMALL_STATE(68)] = 4030,
  [SMALL_STATE(69)] = 4077,
  [SMALL_STATE(70)] = 4122,
  [SMALL_STATE(71)] = 4169,
  [SMALL_STATE(72)] = 4216,
  [SMALL_STATE(73)] = 4261,
  [SMALL_STATE(74)] = 4306,
  [SMALL_STATE(75)] = 4353,
  [SMALL_STATE(76)] = 4400,
  [SMALL_STATE(77)] = 4445,
  [SMALL_STATE(78)] = 4490,
  [SMALL_STATE(79)] = 4537,
  [SMALL_STATE(80)] = 4582,
  [SMALL_STATE(81)] = 4626,
  [SMALL_STATE(82)] = 4670,
  [SMALL_STATE(83)] = 4714,
  [SMALL_STATE(84)] = 4758,
  [SMALL_STATE(85)] = 4802,
  [SMALL_STATE(86)] = 4846,
  [SMALL_STATE(87)] = 4890,
  [SMALL_STATE(88)] = 4934,
  [SMALL_STATE(89)] = 4978,
  [SMALL_STATE(90)] = 5022,
  [SMALL_STATE(91)] = 5066,
  [SMALL_STATE(92)] = 5110,
  [SMALL_STATE(93)] = 5154,
  [SMALL_STATE(94)] = 5182,
  [SMALL_STATE(95)] = 5226,
  [SMALL_STATE(96)] = 5270,
  [SMALL_STATE(97)] = 5314,
  [SMALL_STATE(98)] = 5358,
  [SMALL_STATE(99)] = 5386,
  [SMALL_STATE(100)] = 5414,
  [SMALL_STATE(101)] = 5458,
  [SMALL_STATE(102)] = 5502,
  [SMALL_STATE(103)] = 5546,
  [SMALL_STATE(104)] = 5574,
  [SMALL_STATE(105)] = 5618,
  [SMALL_STATE(106)] = 5662,
  [SMALL_STATE(107)] = 5706,
  [SMALL_STATE(108)] = 5750,
  [SMALL_STATE(109)] = 5794,
  [SMALL_STATE(110)] = 5822,
  [SMALL_STATE(111)] = 5850,
  [SMALL_STATE(112)] = 5894,
  [SMALL_STATE(113)] = 5922,
  [SMALL_STATE(114)] = 5966,
  [SMALL_STATE(115)] = 5994,
  [SMALL_STATE(116)] = 6022,
  [SMALL_STATE(117)] = 6050,
  [SMALL_STATE(118)] = 6094,
  [SMALL_STATE(119)] = 6138,
  [SMALL_STATE(120)] = 6166,
  [SMALL_STATE(121)] = 6210,
  [SMALL_STATE(122)] = 6241,
  [SMALL_STATE(123)] = 6284,
  [SMALL_STATE(124)] = 6327,
  [SMALL_STATE(125)] = 6358,
  [SMALL_STATE(126)] = 6401,
  [SMALL_STATE(127)] = 6427,
  [SMALL_STATE(128)] = 6452,
  [SMALL_STATE(129)] = 6479,
  [SMALL_STATE(130)] = 6504,
  [SMALL_STATE(131)] = 6529,
  [SMALL_STATE(132)] = 6554,
  [SMALL_STATE(133)] = 6579,
  [SMALL_STATE(134)] = 6604,
  [SMALL_STATE(135)] = 6641,
  [SMALL_STATE(136)] = 6666,
  [SMALL_STATE(137)] = 6691,
  [SMALL_STATE(138)] = 6716,
  [SMALL_STATE(139)] = 6741,
  [SMALL_STATE(140)] = 6763,
  [SMALL_STATE(141)] = 6785,
  [SMALL_STATE(142)] = 6807,
  [SMALL_STATE(143)] = 6829,
  [SMALL_STATE(144)] = 6851,
  [SMALL_STATE(145)] = 6874,
  [SMALL_STATE(146)] = 6897,
  [SMALL_STATE(147)] = 6920,
  [SMALL_STATE(148)] = 6943,
  [SMALL_STATE(149)] = 6966,
  [SMALL_STATE(150)] = 6991,
  [SMALL_STATE(151)] = 7011,
  [SMALL_STATE(152)] = 7031,
  [SMALL_STATE(153)] = 7051,
  [SMALL_STATE(154)] = 7071,
  [SMALL_STATE(155)] = 7091,
  [SMALL_STATE(156)] = 7111,
  [SMALL_STATE(157)] = 7138,
  [SMALL_STATE(158)] = 7153,
  [SMALL_STATE(159)] = 7180,
  [SMALL_STATE(160)] = 7205,
  [SMALL_STATE(161)] = 7219,
  [SMALL_STATE(162)] = 7241,
  [SMALL_STATE(163)] = 7263,
  [SMALL_STATE(164)] = 7285,
  [SMALL_STATE(165)] = 7307,
  [SMALL_STATE(166)] = 7320,
  [SMALL_STATE(167)] = 7335,
  [SMALL_STATE(168)] = 7353,
  [SMALL_STATE(169)] = 7367,
  [SMALL_STATE(170)] = 7385,
  [SMALL_STATE(171)] = 7403,
  [SMALL_STATE(172)] = 7421,
  [SMALL_STATE(173)] = 7439,
  [SMALL_STATE(174)] = 7453,
  [SMALL_STATE(175)] = 7471,
  [SMALL_STATE(176)] = 7487,
  [SMALL_STATE(177)] = 7501,
  [SMALL_STATE(178)] = 7516,
  [SMALL_STATE(179)] = 7529,
  [SMALL_STATE(180)] = 7544,
  [SMALL_STATE(181)] = 7563,
  [SMALL_STATE(182)] = 7580,
  [SMALL_STATE(183)] = 7595,
  [SMALL_STATE(184)] = 7607,
  [SMALL_STATE(185)] = 7619,
  [SMALL_STATE(186)] = 7629,
  [SMALL_STATE(187)] = 7645,
  [SMALL_STATE(188)] = 7655,
  [SMALL_STATE(189)] = 7671,
  [SMALL_STATE(190)] = 7687,
  [SMALL_STATE(191)] = 7701,
  [SMALL_STATE(192)] = 7713,
  [SMALL_STATE(193)] = 7723,
  [SMALL_STATE(194)] = 7737,
  [SMALL_STATE(195)] = 7753,
  [SMALL_STATE(196)] = 7766,
  [SMALL_STATE(197)] = 7777,
  [SMALL_STATE(198)] = 7788,
  [SMALL_STATE(199)] = 7801,
  [SMALL_STATE(200)] = 7810,
  [SMALL_STATE(201)] = 7823,
  [SMALL_STATE(202)] = 7832,
  [SMALL_STATE(203)] = 7845,
  [SMALL_STATE(204)] = 7858,
  [SMALL_STATE(205)] = 7869,
  [SMALL_STATE(206)] = 7880,
  [SMALL_STATE(207)] = 7889,
  [SMALL_STATE(208)] = 7898,
  [SMALL_STATE(209)] = 7908,
  [SMALL_STATE(210)] = 7916,
  [SMALL_STATE(211)] = 7924,
  [SMALL_STATE(212)] = 7934,
  [SMALL_STATE(213)] = 7944,
  [SMALL_STATE(214)] = 7954,
  [SMALL_STATE(215)] = 7964,
  [SMALL_STATE(216)] = 7974,
  [SMALL_STATE(217)] = 7984,
  [SMALL_STATE(218)] = 7994,
  [SMALL_STATE(219)] = 8004,
  [SMALL_STATE(220)] = 8014,
  [SMALL_STATE(221)] = 8024,
  [SMALL_STATE(222)] = 8034,
  [SMALL_STATE(223)] = 8044,
  [SMALL_STATE(224)] = 8054,
  [SMALL_STATE(225)] = 8064,
  [SMALL_STATE(226)] = 8074,
  [SMALL_STATE(227)] = 8084,
  [SMALL_STATE(228)] = 8094,
  [SMALL_STATE(229)] = 8104,
  [SMALL_STATE(230)] = 8114,
  [SMALL_STATE(231)] = 8124,
  [SMALL_STATE(232)] = 8134,
  [SMALL_STATE(233)] = 8144,
  [SMALL_STATE(234)] = 8154,
  [SMALL_STATE(235)] = 8164,
  [SMALL_STATE(236)] = 8172,
  [SMALL_STATE(237)] = 8182,
  [SMALL_STATE(238)] = 8189,
  [SMALL_STATE(239)] = 8196,
  [SMALL_STATE(240)] = 8203,
  [SMALL_STATE(241)] = 8210,
  [SMALL_STATE(242)] = 8217,
  [SMALL_STATE(243)] = 8224,
  [SMALL_STATE(244)] = 8231,
  [SMALL_STATE(245)] = 8238,
  [SMALL_STATE(246)] = 8245,
  [SMALL_STATE(247)] = 8252,
  [SMALL_STATE(248)] = 8259,
  [SMALL_STATE(249)] = 8266,
  [SMALL_STATE(250)] = 8273,
  [SMALL_STATE(251)] = 8280,
  [SMALL_STATE(252)] = 8287,
  [SMALL_STATE(253)] = 8294,
  [SMALL_STATE(254)] = 8301,
  [SMALL_STATE(255)] = 8308,
  [SMALL_STATE(256)] = 8315,
  [SMALL_STATE(257)] = 8322,
  [SMALL_STATE(258)] = 8329,
  [SMALL_STATE(259)] = 8336,
  [SMALL_STATE(260)] = 8343,
  [SMALL_STATE(261)] = 8350,
  [SMALL_STATE(262)] = 8357,
  [SMALL_STATE(263)] = 8364,
  [SMALL_STATE(264)] = 8371,
  [SMALL_STATE(265)] = 8378,
  [SMALL_STATE(266)] = 8385,
  [SMALL_STATE(267)] = 8392,
  [SMALL_STATE(268)] = 8399,
  [SMALL_STATE(269)] = 8406,
  [SMALL_STATE(270)] = 8413,
  [SMALL_STATE(271)] = 8420,
  [SMALL_STATE(272)] = 8427,
  [SMALL_STATE(273)] = 8434,
  [SMALL_STATE(274)] = 8441,
  [SMALL_STATE(275)] = 8448,
  [SMALL_STATE(276)] = 8455,
  [SMALL_STATE(277)] = 8462,
  [SMALL_STATE(278)] = 8469,
  [SMALL_STATE(279)] = 8476,
  [SMALL_STATE(280)] = 8483,
  [SMALL_STATE(281)] = 8490,
  [SMALL_STATE(282)] = 8497,
  [SMALL_STATE(283)] = 8504,
  [SMALL_STATE(284)] = 8511,
  [SMALL_STATE(285)] = 8518,
  [SMALL_STATE(286)] = 8525,
  [SMALL_STATE(287)] = 8532,
  [SMALL_STATE(288)] = 8539,
  [SMALL_STATE(289)] = 8546,
  [SMALL_STATE(290)] = 8553,
  [SMALL_STATE(291)] = 8560,
  [SMALL_STATE(292)] = 8567,
  [SMALL_STATE(293)] = 8574,
  [SMALL_STATE(294)] = 8581,
  [SMALL_STATE(295)] = 8588,
  [SMALL_STATE(296)] = 8595,
  [SMALL_STATE(297)] = 8602,
  [SMALL_STATE(298)] = 8609,
  [SMALL_STATE(299)] = 8616,
  [SMALL_STATE(300)] = 8623,
  [SMALL_STATE(301)] = 8630,
  [SMALL_STATE(302)] = 8637,
  [SMALL_STATE(303)] = 8644,
  [SMALL_STATE(304)] = 8651,
  [SMALL_STATE(305)] = 8658,
  [SMALL_STATE(306)] = 8665,
  [SMALL_STATE(307)] = 8672,
  [SMALL_STATE(308)] = 8679,
  [SMALL_STATE(309)] = 8686,
  [SMALL_STATE(310)] = 8693,
  [SMALL_STATE(311)] = 8700,
  [SMALL_STATE(312)] = 8707,
  [SMALL_STATE(313)] = 8714,
  [SMALL_STATE(314)] = 8721,
  [SMALL_STATE(315)] = 8728,
  [SMALL_STATE(316)] = 8735,
  [SMALL_STATE(317)] = 8742,
  [SMALL_STATE(318)] = 8749,
  [SMALL_STATE(319)] = 8756,
  [SMALL_STATE(320)] = 8763,
  [SMALL_STATE(321)] = 8770,
  [SMALL_STATE(322)] = 8777,
  [SMALL_STATE(323)] = 8784,
  [SMALL_STATE(324)] = 8791,
  [SMALL_STATE(325)] = 8798,
  [SMALL_STATE(326)] = 8805,
  [SMALL_STATE(327)] = 8812,
  [SMALL_STATE(328)] = 8819,
  [SMALL_STATE(329)] = 8826,
  [SMALL_STATE(330)] = 8833,
  [SMALL_STATE(331)] = 8840,
  [SMALL_STATE(332)] = 8847,
  [SMALL_STATE(333)] = 8854,
  [SMALL_STATE(334)] = 8861,
  [SMALL_STATE(335)] = 8868,
  [SMALL_STATE(336)] = 8875,
  [SMALL_STATE(337)] = 8882,
  [SMALL_STATE(338)] = 8889,
  [SMALL_STATE(339)] = 8896,
  [SMALL_STATE(340)] = 8903,
  [SMALL_STATE(341)] = 8910,
  [SMALL_STATE(342)] = 8917,
  [SMALL_STATE(343)] = 8924,
  [SMALL_STATE(344)] = 8931,
  [SMALL_STATE(345)] = 8938,
  [SMALL_STATE(346)] = 8945,
  [SMALL_STATE(347)] = 8952,
  [SMALL_STATE(348)] = 8959,
  [SMALL_STATE(349)] = 8966,
  [SMALL_STATE(350)] = 8973,
  [SMALL_STATE(351)] = 8980,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_block, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_block, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules_block, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules_block, 5, .production_id = 21),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_block, 3, .production_id = 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_block, 5, .production_id = 21),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(128),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(340),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(235),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(339),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(180),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(199),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(201),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(165),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(29),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(68),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(109),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(103),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(338),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(337),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(8),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 6), SHIFT_REPEAT(103),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 6), SHIFT_REPEAT(165),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 6), SHIFT_REPEAT(29),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 6), SHIFT_REPEAT(70),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 6), SHIFT_REPEAT(109),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 6), SHIFT_REPEAT(338),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 6), SHIFT_REPEAT(337),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(103),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(29),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(66),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(109),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(338),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(337),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dif_expr, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cat_expr, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cat_expr, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(74),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(68),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(71),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(147),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(147),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(148),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(145),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(321),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 2), SHIFT_REPEAT(320),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(75),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(67),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 5, .production_id = 17),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 5, .production_id = 17),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(78),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stag, 2),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stag, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtag, 2),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mtag, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 3, .production_id = 10),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 3, .production_id = 10),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4, .production_id = 17),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4, .production_id = 17),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4, .production_id = 10),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4, .production_id = 10),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_class, 4),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_class, 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_rule, 2),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_rule, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_rule, 3),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_rule, 3),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(70),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shortcut, 2, .production_id = 11),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shortcut, 2, .production_id = 11),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 4),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_configuration, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_definition, 4, .production_id = 19),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_definition, 4, .production_id = 19),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, .dynamic_precedence = 1),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, .dynamic_precedence = 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 4, .production_id = 3),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 4, .production_id = 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordinary_rule, 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordinary_rule, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_rule, 4),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_rule, 4),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, .dynamic_precedence = 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, .dynamic_precedence = 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, .production_id = 7),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3, .production_id = 7),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 5, .production_id = 29),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 3, .production_id = 20),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 4, .production_id = 26),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repetition, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 18),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 18),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_unit, 1),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_unit, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_unit, 2),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_unit, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape, 1),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 1),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_character_class_repeat1, 1), SHIFT(134),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_character_class_repeat1, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, .production_id = 25),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4, .production_id = 16),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 2),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, .production_id = 8),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stags_block, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternation_repeat1, 2, .production_id = 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtags_block, 3),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_difference, 3, .production_id = 13),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 1), SHIFT(162),
  [634] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 1), SHIFT(173),
  [637] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 1), SHIFT(164),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__code_in_braces, 1), SHIFT(164),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(162),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2),
  [648] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(163),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2), SHIFT_REPEAT(163),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 2), SHIFT(162),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 2), SHIFT(176),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__code_in_braces, 2), SHIFT(163),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__code_in_braces, 2), SHIFT(163),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch, 1, .production_id = 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternation, 2, .production_id = 5),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stags_block, 4),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtags_block, 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtags_block, 5),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_in_braces, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__code_in_braces, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stags_block, 5),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern_expr, 1),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_in_braces, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__code_in_braces, 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(298),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_list, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2, .production_id = 22),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_block, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookahead, 3, .production_id = 12),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maxnmatch_block, 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getstate_block, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, .production_id = 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 2, .production_id = 23),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_directive, 4, .production_id = 30),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_separator_directive, 4, .production_id = 31),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__clist_repeat1, 2), SHIFT_REPEAT(279),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_block, 3),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mininum, 1, .production_id = 14),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exactly, 1, .production_id = 15),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_sentinel, 3, .production_id = 24),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_condprefix, 3, .production_id = 24),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_condenumprefix, 3, .production_id = 24),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_startlabel, 3, .production_id = 24),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding_policy, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_conf, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_class_conf, 1),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api_style, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__maximum, 1, .production_id = 27),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_block, 6, .production_id = 21),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules_block, 6, .production_id = 21),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stags_block, 6),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtags_block, 6),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_flags, 4, .production_id = 28),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 4, .production_id = 28),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_cond, 4, .production_id = 28),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_label, 4, .production_id = 28),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_variable, 4, .production_id = 28),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_yych, 4, .production_id = 28),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_state, 4, .production_id = 28),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_yybm, 4, .production_id = 28),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_cgoto, 4, .production_id = 28),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_api, 4, .production_id = 28),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_tags, 4, .production_id = 28),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_indent, 4, .production_id = 28),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_yyfill, 4, .production_id = 28),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_eof, 3, .production_id = 24),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 4, .production_id = 32),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_off_block, 5),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_on_block, 5),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_block, 5, .production_id = 21),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_getstate_block, 4),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maxnmatch_block, 4),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_block, 4),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules_block, 4),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_block, 4),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__clist_repeat1, 2, .production_id = 9),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_block, 4, .production_id = 3),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_block, 2),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_re2c, 1),
  [1000] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
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
