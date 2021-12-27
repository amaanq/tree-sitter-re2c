;;
;; Punctuations
;; ============
[
  ":"
  ";"
  ","
  "-"
] @punctuation.delimiter

[
  "="
  "=>"
  ":=>"
  "/"
  "|"
  "\\"
  "->"
  "^"
] @operator

[
  "*"
  "+"
  "?"
] @repeat

[
  "{" "}"
  "[" "]"
  "(" ")"
  "<" ">"
] @punctuation.bracket

(repetition
  (limits
    ["{" "}"] @clean @repeat))

[
  "!"
  "@"
  "#"
] @punctuation.special

;;
;; Keywords
;; ========
[
  "re2c"
  "!re2c"
  "!local"
  "!rules"
] @namespace

[
  "!max"
  "!maxnmatch"
  "!mtags"
  "!stags"
  "!getstate"
  "!header"
] @keyword

[
  "!use"
  "!include"
] @include

;;
;; Constants
;; =========
[
  "ignore"
  "substitute"
  "fail"
  "default"
  "custom"
  "match-empty"
  "match-none"
  "error"
  "functions"
  "free-form"
  "format"
  "separator"
] @constant.builtin

[
  "." @clean
  (default)
  (end_of_input)
] @constant.macro

(field_expression
  "." @clean @operator)

(condition
  (any) @clean @constant.macro)

[
  "flags"
  "define"
  "cond"
  "label"
  "variable"
  "yych"
  "state"
  "yybm"
  "cgoto"
  "api"
  "tags"
  "indent"
  "yyfill"
  "eof"
  "sentinel"
  "condprefix"
  "condenumprefix"
  "labelprefix"
  "startlabel"
] @keyword

;;
;; Names
;; =============
(name) @type

(block_name) @constant

(label) @label

(option_name) @constant.builtin

((option_name) @clean @constant.macro
 (#match? @clean "^YY" ))

(field_expression
  argument: (identifier) @variable)

(field_identifier) @property

;;
;; Literals
;; -------
(regex) @string.regex

[
  (dstring) ; case   sensitive
  (sstring) ; case insensitive
] @string

[
  (quote)
  (ctrl_code)
  (code_unit)
] @string.escape

(number) @number

[
  "on"
  "off"
] @boolean

[
  (stag)
  (mtag)
] @property

;;
;; Comments and error
;; ==================
[
  (comment)
  (ignore_block)
] @comment

(ERROR) @error
