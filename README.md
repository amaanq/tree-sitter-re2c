
   Tree-sitter for re2c
   ====================

   The tree-sitter-re2c is a [re2c](https://re2c.org/) parser for tree-sitter.

   Injection
   ---------

   The host languague shall be injected in the `host_lang` rule of this grammar.

   Example of how this can be done with nvim-tree-sitter:

   On the re2c/queries/injections.scm:
   ```scm
   ((host_lang) @c @combined
    (#match? @c "^#include"))

   ((host_lang) @go @combined
    (#match? @go "^package main$"))
   ```

   References
   ----------
   - [re2c manual](https://re2c.org/manual/manual_c.html)
   - [re2c lexer](https://github.com/skvadrik/re2c/blob/master/src/parse/lex.re)
