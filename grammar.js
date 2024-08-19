/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "vk3",
  extras: ($) => [$.comment, /\s+/], // Allow whitespace
  rules: {
    program: ($) =>
      repeat(choice($.comment, $.variable_assignment, $.comparison_operation)),
    comment: ($) => token(seq("#", /.*/)),
    variable_assignment: ($) =>
      choice(seq($.varname, $.assignment, $.value), $.object_assignment),
    assignment: ($) => "=",
    object_assignment: ($) =>
      seq($.varname, $.assignment, "{", repeat($.key_value_pair), "}"),
    key_value_pair: ($) => seq($.varname, "=", $.value),
    varname: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    value: ($) => choice($.number, $.string, $.varname, $.boolean),
    number: ($) => /\d+(\.\d+)?/, // Matches integers and decimals
    string: ($) => seq('"', /[^"\n]*/, '"'), // Matches strings enclosed in double quotes
    boolean: ($) => choice("yes", "no"), // Matches boolean values
    eol: ($) => choice($.comment, "\n"), // Matches end of line with optional comment
    comparison: ($) => choice("<=", ">="),
    comparison_operation: ($) => choice(seq($.varname, $.comparison, $.value)),
  },
});
