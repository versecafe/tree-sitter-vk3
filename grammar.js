/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "vk3",
  extras: ($) => [$.comment, /\s+/], // Allow whitespace
  rules: {
    program: ($) =>
      repeat(
        choice(
          $._command_or_entry,
          $.comment,
          $.variable_assignment,
          $.object_assignment,
        ),
      ),
    comment: ($) => token(seq("#", /.*/)),
    _command_or_entry: ($) => "@", // TODO: handle command
    variable_assignment: ($) => seq($.varname, "=", $.value),
    object_assignment: ($) =>
      seq($.varname, "=", "{", repeat($.key_value_pair), "}"),
    key_value_pair: ($) => seq($.varname, "=", $.value),
    varname: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    value: ($) => choice($.number, $.string, $.varname, $.boolean),
    number: ($) => /\d+(\.\d+)?/, // Matches integers and decimals
    string: ($) => seq('"', /[^"\n]*/, '"'), // Matches strings enclosed in double quotes
    boolean: ($) => choice("yes", "no"), // Matches boolean values
  },
});
