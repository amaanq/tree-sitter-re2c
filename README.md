
   Tree-sitter for re2c
   ====================

   The tree-sitter-re2c parser is intended to be injected into block comments of languagues supported by [re2c](https://re2c.org/).

   The parser assumes the block comments delimiters (`\*` and `*\`) are not included in the input.

   Injection query
   ----------------

   To inject re2c parser in a block comment of any languague, add the following code to the injection query of the languague you want it to be injected (not of re2c).
   ```scm
    ((comment) @re2c
     (#match? @re2c "\\\*!(.*:)?re2c") 
     (#offset! @re2c 0 2 0 -2))
   ```

   Some languagues may use another name for block comment rules.

   References
   ----------
   - [re2c manual](https://re2c.org/manual/manual_c.html)
   - [re2c lexer](https://github.com/skvadrik/re2c/blob/master/src/parse/lex.re)


