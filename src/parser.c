#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 304
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

enum ts_symbol_identifiers {
  aux_sym__nested_inline_expansion_token1 = 1,
  sym__closed_tag = 2,
  sym_tag_name = 3,
  anon_sym_DOT = 4,
  anon_sym_POUND = 5,
  sym_attr_shortcut_custom = 6,
  anon_sym_STAR = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  sym__attr_name = 14,
  sym_attr_assignment = 15,
  sym_attr_assignment_noescape = 16,
  sym__element_rest_text = 17,
  sym_css_identifier = 18,
  anon_sym_doctype = 19,
  anon_sym_html = 20,
  anon_sym_5 = 21,
  anon_sym_1_DOT1 = 22,
  anon_sym_strict = 23,
  anon_sym_frameset = 24,
  anon_sym_mobile = 25,
  anon_sym_basic = 26,
  anon_sym_transitional = 27,
  anon_sym_xml = 28,
  sym_doctype_xml_encoding = 29,
  anon_sym_DASH = 30,
  anon_sym_EQ = 31,
  anon_sym_EQ_EQ = 32,
  sym_output_modifier_leading_whitespace = 33,
  sym_output_modifier_trailing_whitespace = 34,
  sym_output_modifier_legacy_trailing_whitespace = 35,
  anon_sym_COLON = 36,
  anon_sym_markdown = 37,
  anon_sym_textile = 38,
  anon_sym_rdoc = 39,
  anon_sym_coffee = 40,
  anon_sym_less = 41,
  anon_sym_sass = 42,
  anon_sym_scss = 43,
  anon_sym_javascript = 44,
  anon_sym_css = 45,
  anon_sym_ruby = 46,
  anon_sym_PIPE = 47,
  sym_verbatim_text_modifier_trailing_whitespace = 48,
  sym__text_line = 49,
  sym__html_comment_conditional_marker = 50,
  sym__html_comment_condition = 51,
  aux_sym_html_comment_token1 = 52,
  aux_sym_code_comment_token1 = 53,
  sym__space_or_newline = 54,
  sym__space = 55,
  sym__block_start = 56,
  sym__block_end = 57,
  sym__line_separator = 58,
  sym__attr_value_quoted = 59,
  sym__attr_value_ruby = 60,
  sym__attr_value_ruby_p = 61,
  sym__attr_value_ruby_s = 62,
  sym__attr_value_ruby_b = 63,
  sym_ruby = 64,
  sym__error_sentinel = 65,
  sym_source_file = 66,
  sym__block = 67,
  sym__line = 68,
  sym_element = 69,
  sym__inline = 70,
  sym_nested_inline = 71,
  sym__nested_inline_expansion = 72,
  sym_attr_shortcuts = 73,
  sym__attr_shortcut = 74,
  sym_attr_shortcut_class = 75,
  sym_attr_shortcut_id = 76,
  sym_nested = 77,
  sym_attrs = 78,
  sym__attrs_plain = 79,
  sym__attrs_delimited = 80,
  sym__attr_delimited_value_p = 81,
  sym__attr_delimited_splat_p = 82,
  sym__attr_delimited_p = 83,
  sym__attrs_delimited_p = 84,
  sym__attr_delimited_value_s = 85,
  sym__attr_delimited_splat_s = 86,
  sym__attr_delimited_s = 87,
  sym__attrs_delimited_s = 88,
  sym__attr_delimited_value_b = 89,
  sym__attr_delimited_splat_b = 90,
  sym__attr_delimited_b = 91,
  sym__attrs_delimited_b = 92,
  sym_attr = 93,
  sym_attr_name = 94,
  sym_attr_value = 95,
  sym_attr_boolean = 96,
  sym_element_text = 97,
  sym_doctype = 98,
  sym__doctype_html = 99,
  sym_doctype_html5 = 100,
  sym_doctype_xhtml = 101,
  sym__doctype_xml = 102,
  sym__ruby_block = 103,
  sym_ruby_block_control = 104,
  sym_ruby_block_output = 105,
  sym_ruby_block_output_noescape = 106,
  aux_sym__output_modifiers = 107,
  sym__output_modifier = 108,
  sym_embedded_engine = 109,
  sym_embedded_engine_name = 110,
  sym_verbatim_text = 111,
  sym__text = 112,
  sym__text_nested = 113,
  sym_html_comment_conditional = 114,
  sym_html_comment_condition = 115,
  sym__html_comment_conditional_incomplete = 116,
  sym_html_comment = 117,
  sym_code_comment = 118,
  aux_sym__block_repeat1 = 119,
  aux_sym_attr_shortcuts_repeat1 = 120,
  aux_sym__attrs_plain_repeat1 = 121,
  aux_sym__attrs_delimited_p_repeat1 = 122,
  aux_sym__attrs_delimited_s_repeat1 = 123,
  aux_sym__attrs_delimited_b_repeat1 = 124,
  aux_sym_element_text_repeat1 = 125,
  aux_sym__text_nested_repeat1 = 126,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__nested_inline_expansion_token1] = "_nested_inline_expansion_token1",
  [sym__closed_tag] = "_closed_tag",
  [sym_tag_name] = "tag_name",
  [anon_sym_DOT] = ".",
  [anon_sym_POUND] = "#",
  [sym_attr_shortcut_custom] = "attr_shortcut_custom",
  [anon_sym_STAR] = "*",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__attr_name] = "_attr_name",
  [sym_attr_assignment] = "attr_assignment",
  [sym_attr_assignment_noescape] = "attr_assignment_noescape",
  [sym__element_rest_text] = "_element_rest_text",
  [sym_css_identifier] = "css_identifier",
  [anon_sym_doctype] = "doctype",
  [anon_sym_html] = "html",
  [anon_sym_5] = "5",
  [anon_sym_1_DOT1] = "1.1",
  [anon_sym_strict] = "strict",
  [anon_sym_frameset] = "frameset",
  [anon_sym_mobile] = "mobile",
  [anon_sym_basic] = "basic",
  [anon_sym_transitional] = "transitional",
  [anon_sym_xml] = "xml",
  [sym_doctype_xml_encoding] = "doctype_xml_encoding",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_EQ] = "==",
  [sym_output_modifier_leading_whitespace] = "output_modifier_leading_whitespace",
  [sym_output_modifier_trailing_whitespace] = "output_modifier_trailing_whitespace",
  [sym_output_modifier_legacy_trailing_whitespace] = "output_modifier_legacy_trailing_whitespace",
  [anon_sym_COLON] = ":",
  [anon_sym_markdown] = "markdown",
  [anon_sym_textile] = "textile",
  [anon_sym_rdoc] = "rdoc",
  [anon_sym_coffee] = "coffee",
  [anon_sym_less] = "less",
  [anon_sym_sass] = "sass",
  [anon_sym_scss] = "scss",
  [anon_sym_javascript] = "javascript",
  [anon_sym_css] = "css",
  [anon_sym_ruby] = "ruby",
  [anon_sym_PIPE] = "|",
  [sym_verbatim_text_modifier_trailing_whitespace] = "verbatim_text_modifier_trailing_whitespace",
  [sym__text_line] = "_text_line",
  [sym__html_comment_conditional_marker] = "_html_comment_conditional_marker",
  [sym__html_comment_condition] = "_html_comment_condition",
  [aux_sym_html_comment_token1] = "html_comment_token1",
  [aux_sym_code_comment_token1] = "code_comment_token1",
  [sym__space_or_newline] = "_space_or_newline",
  [sym__space] = "_space",
  [sym__block_start] = "_block_start",
  [sym__block_end] = "_block_end",
  [sym__line_separator] = "_line_separator",
  [sym__attr_value_quoted] = "_attr_value_quoted",
  [sym__attr_value_ruby] = "attr_splat",
  [sym__attr_value_ruby_p] = "ruby_expr",
  [sym__attr_value_ruby_s] = "ruby_expr",
  [sym__attr_value_ruby_b] = "ruby_expr",
  [sym_ruby] = "ruby",
  [sym__error_sentinel] = "_error_sentinel",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym__line] = "_line",
  [sym_element] = "element",
  [sym__inline] = "_inline",
  [sym_nested_inline] = "nested_inline",
  [sym__nested_inline_expansion] = "_nested_inline_expansion",
  [sym_attr_shortcuts] = "attr_shortcuts",
  [sym__attr_shortcut] = "_attr_shortcut",
  [sym_attr_shortcut_class] = "attr_shortcut_class",
  [sym_attr_shortcut_id] = "attr_shortcut_id",
  [sym_nested] = "nested",
  [sym_attrs] = "attrs",
  [sym__attrs_plain] = "_attrs_plain",
  [sym__attrs_delimited] = "_attrs_delimited",
  [sym__attr_delimited_value_p] = "attr_value",
  [sym__attr_delimited_splat_p] = "attr_splat",
  [sym__attr_delimited_p] = "attr",
  [sym__attrs_delimited_p] = "_attrs_delimited_p",
  [sym__attr_delimited_value_s] = "attr_value",
  [sym__attr_delimited_splat_s] = "attr_splat",
  [sym__attr_delimited_s] = "attr",
  [sym__attrs_delimited_s] = "_attrs_delimited_s",
  [sym__attr_delimited_value_b] = "attr_value",
  [sym__attr_delimited_splat_b] = "attr_splat",
  [sym__attr_delimited_b] = "attr",
  [sym__attrs_delimited_b] = "_attrs_delimited_b",
  [sym_attr] = "attr",
  [sym_attr_name] = "attr_name",
  [sym_attr_value] = "attr_value",
  [sym_attr_boolean] = "attr_boolean",
  [sym_element_text] = "element_text",
  [sym_doctype] = "doctype",
  [sym__doctype_html] = "_doctype_html",
  [sym_doctype_html5] = "doctype_html5",
  [sym_doctype_xhtml] = "doctype_xhtml",
  [sym__doctype_xml] = "_doctype_xml",
  [sym__ruby_block] = "_ruby_block",
  [sym_ruby_block_control] = "ruby_block_control",
  [sym_ruby_block_output] = "ruby_block_output",
  [sym_ruby_block_output_noescape] = "ruby_block_output_noescape",
  [aux_sym__output_modifiers] = "_output_modifiers",
  [sym__output_modifier] = "_output_modifier",
  [sym_embedded_engine] = "embedded_engine",
  [sym_embedded_engine_name] = "embedded_engine_name",
  [sym_verbatim_text] = "verbatim_text",
  [sym__text] = "_text",
  [sym__text_nested] = "_text_nested",
  [sym_html_comment_conditional] = "html_comment_conditional",
  [sym_html_comment_condition] = "html_comment_condition",
  [sym__html_comment_conditional_incomplete] = "_html_comment_conditional_incomplete",
  [sym_html_comment] = "html_comment",
  [sym_code_comment] = "code_comment",
  [aux_sym__block_repeat1] = "_block_repeat1",
  [aux_sym_attr_shortcuts_repeat1] = "attr_shortcuts_repeat1",
  [aux_sym__attrs_plain_repeat1] = "_attrs_plain_repeat1",
  [aux_sym__attrs_delimited_p_repeat1] = "_attrs_delimited_p_repeat1",
  [aux_sym__attrs_delimited_s_repeat1] = "_attrs_delimited_s_repeat1",
  [aux_sym__attrs_delimited_b_repeat1] = "_attrs_delimited_b_repeat1",
  [aux_sym_element_text_repeat1] = "element_text_repeat1",
  [aux_sym__text_nested_repeat1] = "_text_nested_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__nested_inline_expansion_token1] = aux_sym__nested_inline_expansion_token1,
  [sym__closed_tag] = sym__closed_tag,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_attr_shortcut_custom] = sym_attr_shortcut_custom,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__attr_name] = sym__attr_name,
  [sym_attr_assignment] = sym_attr_assignment,
  [sym_attr_assignment_noescape] = sym_attr_assignment_noescape,
  [sym__element_rest_text] = sym__element_rest_text,
  [sym_css_identifier] = sym_css_identifier,
  [anon_sym_doctype] = anon_sym_doctype,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_1_DOT1] = anon_sym_1_DOT1,
  [anon_sym_strict] = anon_sym_strict,
  [anon_sym_frameset] = anon_sym_frameset,
  [anon_sym_mobile] = anon_sym_mobile,
  [anon_sym_basic] = anon_sym_basic,
  [anon_sym_transitional] = anon_sym_transitional,
  [anon_sym_xml] = anon_sym_xml,
  [sym_doctype_xml_encoding] = sym_doctype_xml_encoding,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [sym_output_modifier_leading_whitespace] = sym_output_modifier_leading_whitespace,
  [sym_output_modifier_trailing_whitespace] = sym_output_modifier_trailing_whitespace,
  [sym_output_modifier_legacy_trailing_whitespace] = sym_output_modifier_legacy_trailing_whitespace,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_markdown] = anon_sym_markdown,
  [anon_sym_textile] = anon_sym_textile,
  [anon_sym_rdoc] = anon_sym_rdoc,
  [anon_sym_coffee] = anon_sym_coffee,
  [anon_sym_less] = anon_sym_less,
  [anon_sym_sass] = anon_sym_sass,
  [anon_sym_scss] = anon_sym_scss,
  [anon_sym_javascript] = anon_sym_javascript,
  [anon_sym_css] = anon_sym_css,
  [anon_sym_ruby] = anon_sym_ruby,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_verbatim_text_modifier_trailing_whitespace] = sym_verbatim_text_modifier_trailing_whitespace,
  [sym__text_line] = sym__text_line,
  [sym__html_comment_conditional_marker] = sym__html_comment_conditional_marker,
  [sym__html_comment_condition] = sym__html_comment_condition,
  [aux_sym_html_comment_token1] = aux_sym_html_comment_token1,
  [aux_sym_code_comment_token1] = aux_sym_code_comment_token1,
  [sym__space_or_newline] = sym__space_or_newline,
  [sym__space] = sym__space,
  [sym__block_start] = sym__block_start,
  [sym__block_end] = sym__block_end,
  [sym__line_separator] = sym__line_separator,
  [sym__attr_value_quoted] = sym__attr_value_quoted,
  [sym__attr_value_ruby] = sym__attr_value_ruby,
  [sym__attr_value_ruby_p] = sym__attr_value_ruby_p,
  [sym__attr_value_ruby_s] = sym__attr_value_ruby_p,
  [sym__attr_value_ruby_b] = sym__attr_value_ruby_p,
  [sym_ruby] = sym_ruby,
  [sym__error_sentinel] = sym__error_sentinel,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym__line] = sym__line,
  [sym_element] = sym_element,
  [sym__inline] = sym__inline,
  [sym_nested_inline] = sym_nested_inline,
  [sym__nested_inline_expansion] = sym__nested_inline_expansion,
  [sym_attr_shortcuts] = sym_attr_shortcuts,
  [sym__attr_shortcut] = sym__attr_shortcut,
  [sym_attr_shortcut_class] = sym_attr_shortcut_class,
  [sym_attr_shortcut_id] = sym_attr_shortcut_id,
  [sym_nested] = sym_nested,
  [sym_attrs] = sym_attrs,
  [sym__attrs_plain] = sym__attrs_plain,
  [sym__attrs_delimited] = sym__attrs_delimited,
  [sym__attr_delimited_value_p] = sym_attr_value,
  [sym__attr_delimited_splat_p] = sym__attr_value_ruby,
  [sym__attr_delimited_p] = sym_attr,
  [sym__attrs_delimited_p] = sym__attrs_delimited_p,
  [sym__attr_delimited_value_s] = sym_attr_value,
  [sym__attr_delimited_splat_s] = sym__attr_value_ruby,
  [sym__attr_delimited_s] = sym_attr,
  [sym__attrs_delimited_s] = sym__attrs_delimited_s,
  [sym__attr_delimited_value_b] = sym_attr_value,
  [sym__attr_delimited_splat_b] = sym__attr_value_ruby,
  [sym__attr_delimited_b] = sym_attr,
  [sym__attrs_delimited_b] = sym__attrs_delimited_b,
  [sym_attr] = sym_attr,
  [sym_attr_name] = sym_attr_name,
  [sym_attr_value] = sym_attr_value,
  [sym_attr_boolean] = sym_attr_boolean,
  [sym_element_text] = sym_element_text,
  [sym_doctype] = sym_doctype,
  [sym__doctype_html] = sym__doctype_html,
  [sym_doctype_html5] = sym_doctype_html5,
  [sym_doctype_xhtml] = sym_doctype_xhtml,
  [sym__doctype_xml] = sym__doctype_xml,
  [sym__ruby_block] = sym__ruby_block,
  [sym_ruby_block_control] = sym_ruby_block_control,
  [sym_ruby_block_output] = sym_ruby_block_output,
  [sym_ruby_block_output_noescape] = sym_ruby_block_output_noescape,
  [aux_sym__output_modifiers] = aux_sym__output_modifiers,
  [sym__output_modifier] = sym__output_modifier,
  [sym_embedded_engine] = sym_embedded_engine,
  [sym_embedded_engine_name] = sym_embedded_engine_name,
  [sym_verbatim_text] = sym_verbatim_text,
  [sym__text] = sym__text,
  [sym__text_nested] = sym__text_nested,
  [sym_html_comment_conditional] = sym_html_comment_conditional,
  [sym_html_comment_condition] = sym_html_comment_condition,
  [sym__html_comment_conditional_incomplete] = sym__html_comment_conditional_incomplete,
  [sym_html_comment] = sym_html_comment,
  [sym_code_comment] = sym_code_comment,
  [aux_sym__block_repeat1] = aux_sym__block_repeat1,
  [aux_sym_attr_shortcuts_repeat1] = aux_sym_attr_shortcuts_repeat1,
  [aux_sym__attrs_plain_repeat1] = aux_sym__attrs_plain_repeat1,
  [aux_sym__attrs_delimited_p_repeat1] = aux_sym__attrs_delimited_p_repeat1,
  [aux_sym__attrs_delimited_s_repeat1] = aux_sym__attrs_delimited_s_repeat1,
  [aux_sym__attrs_delimited_b_repeat1] = aux_sym__attrs_delimited_b_repeat1,
  [aux_sym_element_text_repeat1] = aux_sym_element_text_repeat1,
  [aux_sym__text_nested_repeat1] = aux_sym__text_nested_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__nested_inline_expansion_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__closed_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_attr_shortcut_custom] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
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
  [anon_sym_RBRACK] = {
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
  [sym__attr_name] = {
    .visible = false,
    .named = true,
  },
  [sym_attr_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_assignment_noescape] = {
    .visible = true,
    .named = true,
  },
  [sym__element_rest_text] = {
    .visible = false,
    .named = true,
  },
  [sym_css_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_html] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1_DOT1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_frameset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mobile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_basic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transitional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [sym_doctype_xml_encoding] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_output_modifier_leading_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_output_modifier_trailing_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_output_modifier_legacy_trailing_whitespace] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_markdown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rdoc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coffee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_less] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_javascript] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_css] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ruby] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_verbatim_text_modifier_trailing_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym__text_line] = {
    .visible = false,
    .named = true,
  },
  [sym__html_comment_conditional_marker] = {
    .visible = false,
    .named = true,
  },
  [sym__html_comment_condition] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_html_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__space_or_newline] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__block_start] = {
    .visible = false,
    .named = true,
  },
  [sym__block_end] = {
    .visible = false,
    .named = true,
  },
  [sym__line_separator] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_value_quoted] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_value_ruby] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_value_ruby_p] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_value_ruby_s] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_value_ruby_b] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby] = {
    .visible = true,
    .named = true,
  },
  [sym__error_sentinel] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym__inline] = {
    .visible = false,
    .named = true,
  },
  [sym_nested_inline] = {
    .visible = true,
    .named = true,
  },
  [sym__nested_inline_expansion] = {
    .visible = false,
    .named = true,
  },
  [sym_attr_shortcuts] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_shortcut] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_attr_shortcut_class] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_shortcut_id] = {
    .visible = true,
    .named = true,
  },
  [sym_nested] = {
    .visible = true,
    .named = true,
  },
  [sym_attrs] = {
    .visible = true,
    .named = true,
  },
  [sym__attrs_plain] = {
    .visible = false,
    .named = true,
  },
  [sym__attrs_delimited] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_delimited_value_p] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_splat_p] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_p] = {
    .visible = true,
    .named = true,
  },
  [sym__attrs_delimited_p] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_delimited_value_s] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_splat_s] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_s] = {
    .visible = true,
    .named = true,
  },
  [sym__attrs_delimited_s] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_delimited_value_b] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_splat_b] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_b] = {
    .visible = true,
    .named = true,
  },
  [sym__attrs_delimited_b] = {
    .visible = false,
    .named = true,
  },
  [sym_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_value] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_element_text] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__doctype_html] = {
    .visible = false,
    .named = true,
  },
  [sym_doctype_html5] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype_xhtml] = {
    .visible = true,
    .named = true,
  },
  [sym__doctype_xml] = {
    .visible = false,
    .named = true,
  },
  [sym__ruby_block] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_ruby_block_control] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_block_output] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_block_output_noescape] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__output_modifiers] = {
    .visible = false,
    .named = false,
  },
  [sym__output_modifier] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_embedded_engine] = {
    .visible = true,
    .named = true,
  },
  [sym_embedded_engine_name] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_text] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__text_nested] = {
    .visible = false,
    .named = true,
  },
  [sym_html_comment_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_html_comment_condition] = {
    .visible = true,
    .named = true,
  },
  [sym__html_comment_conditional_incomplete] = {
    .visible = false,
    .named = true,
  },
  [sym_html_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_code_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_shortcuts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attrs_plain_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attrs_delimited_p_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attrs_delimited_s_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attrs_delimited_b_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_nested_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_assignment = 1,
  field_attr_shortcuts = 2,
  field_attrs = 3,
  field_name = 4,
  field_nested = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_assignment] = "assignment",
  [field_attr_shortcuts] = "attr_shortcuts",
  [field_attrs] = "attrs",
  [field_name] = "name",
  [field_nested] = "nested",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 1},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 3},
  [13] = {.index = 25, .length = 1},
  [14] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_attr_shortcuts, 0},
  [2] =
    {field_attr_shortcuts, 1},
    {field_name, 0},
  [4] =
    {field_attrs, 1},
    {field_name, 0},
  [6] =
    {field_attr_shortcuts, 0},
    {field_attrs, 1},
  [8] =
    {field_assignment, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [11] =
    {field_attr_shortcuts, 1},
    {field_attrs, 2},
    {field_name, 0},
  [14] =
    {field_attrs, 2},
    {field_name, 0},
  [16] =
    {field_nested, 2},
  [17] =
    {field_attr_shortcuts, 0},
    {field_attrs, 2},
  [19] =
    {field_assignment, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [22] =
    {field_attr_shortcuts, 1},
    {field_attrs, 3},
    {field_name, 0},
  [25] =
    {field_nested, 3},
  [26] =
    {field_assignment, 1},
    {field_name, 0},
    {field_value, 2},
  [29] =
    {field_nested, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [15] = {
    [0] = sym__attr_value_ruby_p,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
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
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 65,
  [74] = 70,
  [75] = 75,
  [76] = 76,
  [77] = 72,
  [78] = 64,
  [79] = 79,
  [80] = 76,
  [81] = 69,
  [82] = 68,
  [83] = 71,
  [84] = 75,
  [85] = 66,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 88,
  [90] = 87,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 95,
  [99] = 99,
  [100] = 99,
  [101] = 101,
  [102] = 102,
  [103] = 102,
  [104] = 104,
  [105] = 96,
  [106] = 93,
  [107] = 36,
  [108] = 35,
  [109] = 104,
  [110] = 101,
  [111] = 97,
  [112] = 94,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 30,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 137,
  [145] = 142,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 168,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 40,
  [182] = 39,
  [183] = 38,
  [184] = 184,
  [185] = 41,
  [186] = 42,
  [187] = 187,
  [188] = 34,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 197,
  [200] = 196,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 201,
  [206] = 206,
  [207] = 207,
  [208] = 193,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 215,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 194,
  [226] = 222,
  [227] = 227,
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
  [238] = 195,
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
  [254] = 234,
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
  [273] = 46,
  [274] = 57,
  [275] = 56,
  [276] = 52,
  [277] = 277,
  [278] = 278,
  [279] = 249,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 54,
  [284] = 44,
  [285] = 61,
  [286] = 243,
  [287] = 50,
  [288] = 48,
  [289] = 53,
  [290] = 51,
  [291] = 59,
  [292] = 47,
  [293] = 293,
  [294] = 257,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 277,
  [303] = 281,
};

static TSCharacterRange sym__attr_name_character_set_1[] = {
  {0, 0x08}, {0x0b, 0x1f}, {'!', '!'}, {'#', '&'}, {'*', '.'}, {'1', ';'}, {'?', 'Z'}, {'^', 'z'},
  {'|', '|'}, {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      ADVANCE_MAP(
        '\n', 256,
        '#', 112,
        '\'', 230,
        '(', 118,
        ')', 119,
        '*', 117,
        '-', 223,
        '.', 111,
        '/', 61,
        '0', 209,
        '5', 214,
        ':', 231,
        '<', 228,
        '=', 224,
        '>', 229,
        '[', 120,
        ']', 121,
        'b', 124,
        'c', 171,
        'd', 172,
        'f', 179,
        'h', 198,
        'j', 125,
        'l', 147,
        'm', 127,
        'r', 140,
        's', 131,
        't', 141,
        'x', 165,
        '{', 122,
        '|', 242,
        '}', 123,
        '\t', 254,
        ' ', 254,
        '"', 116,
        '\\', 116,
      );
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 257,
        ')', 119,
        '*', 117,
        '=', 206,
        ']', 121,
        '}', 123,
        '\t', 255,
        ' ', 255,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != '/' &&
          lookahead != '0' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{') ADVANCE(205);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 112,
        '\'', 230,
        '(', 118,
        '.', 111,
        '/', 62,
        ':', 60,
        '<', 228,
        '=', 225,
        '>', 229,
        '[', 120,
        '{', 122,
        '\t', 258,
        ' ', 258,
        '\n', 209,
        '0', 209,
        '"', 116,
        ')', 116,
        '\\', 116,
        ']', 116,
        '}', 116,
      );
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '#', 112,
        '\'', 243,
        '-', 223,
        '.', 111,
        '/', 250,
        '=', 225,
        'c', 86,
        'd', 87,
        'j', 63,
        'l', 77,
        'm', 64,
        'r', 72,
        's', 66,
        't', 75,
        '|', 242,
        '\t', 260,
        ' ', 260,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '#', 112,
        '.', 111,
        'c', 86,
        'j', 63,
        'l', 77,
        'm', 64,
        'r', 72,
        's', 66,
        't', 75,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(116);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\'', 230,
        '(', 118,
        '/', 62,
        ':', 60,
        '<', 228,
        '=', 225,
        '>', 229,
        '[', 120,
        '{', 122,
        '\t', 258,
        ' ', 258,
        '\n', 209,
        '"', 209,
        ')', 209,
        '0', 209,
        '\\', 209,
        ']', 209,
        '}', 209,
      );
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '(', 118,
        '*', 117,
        '=', 225,
        '[', 120,
        '{', 122,
        '\t', 260,
        ' ', 260,
        '\n', 209,
        '"', 209,
        '\'', 209,
        ')', 209,
        '/', 209,
        '0', 209,
        '<', 209,
        '>', 209,
        '\\', 209,
        ']', 209,
        '}', 209,
      );
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '(', 118,
        '1', 11,
        '5', 214,
        ':', 231,
        '[', 120,
        ']', 121,
        'b', 17,
        'f', 43,
        'h', 53,
        'm', 41,
        's', 51,
        't', 44,
        'x', 36,
        '{', 122,
        '\t', 260,
        ' ', 260,
      );
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '0' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(209);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '0' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(209);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(215);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '/' ||
          lookahead == '0' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(205);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 55:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 56:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 58:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__nested_inline_expansion_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__closed_tag);
      if (lookahead == '[') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__closed_tag);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_attr_shortcut_custom);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(116);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_attr_shortcut_custom);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_attr_shortcut_custom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_attr_shortcut_custom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(182);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(200);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(170);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(133);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(167);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(162);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(188);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 't') ADVANCE(180);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'b') ADVANCE(203);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'b') ADVANCE(155);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(234);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(219);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(196);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(193);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(181);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'd') ADVANCE(173);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(132);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'r') ADVANCE(126);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(235);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(218);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(211);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(233);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(142);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(187);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(194);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(191);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'f') ADVANCE(146);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'f') ADVANCE(150);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(177);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(175);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(135);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(163);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(197);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(137);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(164);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'k') ADVANCE(139);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(221);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(213);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(220);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(143);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(145);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(160);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(161);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(149);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(232);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(129);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(189);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == 's') ADVANCE(183);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(136);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(201);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(134);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(169);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'p') ADVANCE(144);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'p') ADVANCE(195);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(159);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(128);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(157);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(152);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(154);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(240);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(236);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(237);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(238);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(184);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(138);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(156);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(185);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(148);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(186);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(216);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(217);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(239);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(204);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(153);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(166);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(158);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'v') ADVANCE(130);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'w') ADVANCE(168);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'x') ADVANCE(199);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'y') ADVANCE(241);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'y') ADVANCE(176);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__attr_name);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_attr_assignment);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_attr_assignment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_attr_assignment_noescape);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__element_rest_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_css_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_1_DOT1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_frameset);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_mobile);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_basic);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_transitional);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_doctype_xml_encoding);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_output_modifier_leading_whitespace);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_output_modifier_trailing_whitespace);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_output_modifier_legacy_trailing_whitespace);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_markdown);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_textile);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_rdoc);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_coffee);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_less);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_sass);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_scss);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_javascript);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_css);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_ruby);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_verbatim_text_modifier_trailing_whitespace);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__html_comment_conditional_marker);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__html_comment_condition);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_code_comment_token1);
      if (lookahead == '!') ADVANCE(247);
      if (lookahead == '[') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_code_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_code_comment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_code_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__space_or_newline);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__space_or_newline);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__space_or_newline);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__space_or_newline);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 3, .external_lex_state = 3},
  [3] = {.lex_state = 3, .external_lex_state = 3},
  [4] = {.lex_state = 3, .external_lex_state = 3},
  [5] = {.lex_state = 3, .external_lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 2, .external_lex_state = 4},
  [10] = {.lex_state = 5, .external_lex_state = 4},
  [11] = {.lex_state = 5, .external_lex_state = 4},
  [12] = {.lex_state = 5, .external_lex_state = 4},
  [13] = {.lex_state = 5, .external_lex_state = 4},
  [14] = {.lex_state = 5, .external_lex_state = 4},
  [15] = {.lex_state = 2, .external_lex_state = 4},
  [16] = {.lex_state = 2, .external_lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 12, .external_lex_state = 4},
  [19] = {.lex_state = 12, .external_lex_state = 4},
  [20] = {.lex_state = 2, .external_lex_state = 4},
  [21] = {.lex_state = 12, .external_lex_state = 4},
  [22] = {.lex_state = 2, .external_lex_state = 4},
  [23] = {.lex_state = 2, .external_lex_state = 4},
  [24] = {.lex_state = 12, .external_lex_state = 4},
  [25] = {.lex_state = 12, .external_lex_state = 4},
  [26] = {.lex_state = 12, .external_lex_state = 4},
  [27] = {.lex_state = 6, .external_lex_state = 4},
  [28] = {.lex_state = 6, .external_lex_state = 4},
  [29] = {.lex_state = 6, .external_lex_state = 4},
  [30] = {.lex_state = 5, .external_lex_state = 4},
  [31] = {.lex_state = 6, .external_lex_state = 4},
  [32] = {.lex_state = 6, .external_lex_state = 4},
  [33] = {.lex_state = 6, .external_lex_state = 4},
  [34] = {.lex_state = 5, .external_lex_state = 4},
  [35] = {.lex_state = 8, .external_lex_state = 4},
  [36] = {.lex_state = 8, .external_lex_state = 4},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 8, .external_lex_state = 4},
  [39] = {.lex_state = 8, .external_lex_state = 4},
  [40] = {.lex_state = 8, .external_lex_state = 4},
  [41] = {.lex_state = 8, .external_lex_state = 4},
  [42] = {.lex_state = 8, .external_lex_state = 4},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 12, .external_lex_state = 4},
  [45] = {.lex_state = 15, .external_lex_state = 4},
  [46] = {.lex_state = 12, .external_lex_state = 4},
  [47] = {.lex_state = 12, .external_lex_state = 4},
  [48] = {.lex_state = 12, .external_lex_state = 4},
  [49] = {.lex_state = 15, .external_lex_state = 4},
  [50] = {.lex_state = 12, .external_lex_state = 4},
  [51] = {.lex_state = 12, .external_lex_state = 4},
  [52] = {.lex_state = 12, .external_lex_state = 4},
  [53] = {.lex_state = 12, .external_lex_state = 4},
  [54] = {.lex_state = 12, .external_lex_state = 4},
  [55] = {.lex_state = 15, .external_lex_state = 4},
  [56] = {.lex_state = 12, .external_lex_state = 4},
  [57] = {.lex_state = 12, .external_lex_state = 4},
  [58] = {.lex_state = 15, .external_lex_state = 4},
  [59] = {.lex_state = 12, .external_lex_state = 4},
  [60] = {.lex_state = 15, .external_lex_state = 4},
  [61] = {.lex_state = 12, .external_lex_state = 4},
  [62] = {.lex_state = 15, .external_lex_state = 4},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 14, .external_lex_state = 4},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 2, .external_lex_state = 5},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 2, .external_lex_state = 5},
  [118] = {.lex_state = 2, .external_lex_state = 5},
  [119] = {.lex_state = 2, .external_lex_state = 5},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 54, .external_lex_state = 4},
  [122] = {.lex_state = 54, .external_lex_state = 4},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 54, .external_lex_state = 4},
  [125] = {.lex_state = 54, .external_lex_state = 4},
  [126] = {.lex_state = 54, .external_lex_state = 4},
  [127] = {.lex_state = 2, .external_lex_state = 5},
  [128] = {.lex_state = 2, .external_lex_state = 5},
  [129] = {.lex_state = 2, .external_lex_state = 5},
  [130] = {.lex_state = 16, .external_lex_state = 4},
  [131] = {.lex_state = 54, .external_lex_state = 4},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 2, .external_lex_state = 5},
  [134] = {.lex_state = 2, .external_lex_state = 5},
  [135] = {.lex_state = 54, .external_lex_state = 4},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 4},
  [140] = {.lex_state = 54, .external_lex_state = 4},
  [141] = {.lex_state = 0, .external_lex_state = 4},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 54, .external_lex_state = 4},
  [151] = {.lex_state = 54, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 4},
  [153] = {.lex_state = 54, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 58, .external_lex_state = 6},
  [159] = {.lex_state = 0, .external_lex_state = 4},
  [160] = {.lex_state = 0, .external_lex_state = 4},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 0, .external_lex_state = 4},
  [170] = {.lex_state = 0, .external_lex_state = 4},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 0, .external_lex_state = 4},
  [175] = {.lex_state = 7, .external_lex_state = 4},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 0, .external_lex_state = 4},
  [178] = {.lex_state = 0, .external_lex_state = 4},
  [179] = {.lex_state = 0, .external_lex_state = 4},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 2, .external_lex_state = 5},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 0, .external_lex_state = 4},
  [192] = {.lex_state = 0, .external_lex_state = 6},
  [193] = {.lex_state = 0, .external_lex_state = 4},
  [194] = {.lex_state = 0, .external_lex_state = 4},
  [195] = {.lex_state = 0, .external_lex_state = 4},
  [196] = {.lex_state = 0, .external_lex_state = 6},
  [197] = {.lex_state = 0, .external_lex_state = 6},
  [198] = {.lex_state = 57, .external_lex_state = 6},
  [199] = {.lex_state = 0, .external_lex_state = 6},
  [200] = {.lex_state = 0, .external_lex_state = 6},
  [201] = {.lex_state = 0, .external_lex_state = 7},
  [202] = {.lex_state = 0, .external_lex_state = 8},
  [203] = {.lex_state = 0, .external_lex_state = 9},
  [204] = {.lex_state = 0, .external_lex_state = 10},
  [205] = {.lex_state = 0, .external_lex_state = 7},
  [206] = {.lex_state = 0, .external_lex_state = 4},
  [207] = {.lex_state = 0, .external_lex_state = 6},
  [208] = {.lex_state = 0, .external_lex_state = 6},
  [209] = {.lex_state = 0, .external_lex_state = 6},
  [210] = {.lex_state = 0, .external_lex_state = 6},
  [211] = {.lex_state = 0, .external_lex_state = 6},
  [212] = {.lex_state = 0, .external_lex_state = 6},
  [213] = {.lex_state = 0, .external_lex_state = 6},
  [214] = {.lex_state = 0, .external_lex_state = 6},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 0, .external_lex_state = 6},
  [217] = {.lex_state = 0, .external_lex_state = 6},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 0, .external_lex_state = 6},
  [220] = {.lex_state = 0, .external_lex_state = 6},
  [221] = {.lex_state = 0, .external_lex_state = 6},
  [222] = {.lex_state = 58, .external_lex_state = 3},
  [223] = {.lex_state = 0, .external_lex_state = 6},
  [224] = {.lex_state = 0, .external_lex_state = 6},
  [225] = {.lex_state = 0, .external_lex_state = 6},
  [226] = {.lex_state = 58, .external_lex_state = 3},
  [227] = {.lex_state = 0, .external_lex_state = 6},
  [228] = {.lex_state = 0, .external_lex_state = 6},
  [229] = {.lex_state = 0, .external_lex_state = 6},
  [230] = {.lex_state = 0, .external_lex_state = 6},
  [231] = {.lex_state = 0, .external_lex_state = 6},
  [232] = {.lex_state = 0, .external_lex_state = 6},
  [233] = {.lex_state = 0, .external_lex_state = 6},
  [234] = {.lex_state = 58, .external_lex_state = 3},
  [235] = {.lex_state = 0, .external_lex_state = 6},
  [236] = {.lex_state = 0, .external_lex_state = 6},
  [237] = {.lex_state = 0, .external_lex_state = 6},
  [238] = {.lex_state = 0, .external_lex_state = 6},
  [239] = {.lex_state = 0, .external_lex_state = 6},
  [240] = {.lex_state = 0, .external_lex_state = 6},
  [241] = {.lex_state = 0, .external_lex_state = 6},
  [242] = {.lex_state = 0, .external_lex_state = 6},
  [243] = {.lex_state = 0, .external_lex_state = 6},
  [244] = {.lex_state = 0, .external_lex_state = 6},
  [245] = {.lex_state = 3},
  [246] = {.lex_state = 0, .external_lex_state = 6},
  [247] = {.lex_state = 0, .external_lex_state = 6},
  [248] = {.lex_state = 0, .external_lex_state = 6},
  [249] = {.lex_state = 0, .external_lex_state = 6},
  [250] = {.lex_state = 0, .external_lex_state = 6},
  [251] = {.lex_state = 0, .external_lex_state = 6},
  [252] = {.lex_state = 0, .external_lex_state = 6},
  [253] = {.lex_state = 0, .external_lex_state = 6},
  [254] = {.lex_state = 58, .external_lex_state = 3},
  [255] = {.lex_state = 0, .external_lex_state = 6},
  [256] = {.lex_state = 0, .external_lex_state = 6},
  [257] = {.lex_state = 0, .external_lex_state = 6},
  [258] = {.lex_state = 0, .external_lex_state = 6},
  [259] = {.lex_state = 0, .external_lex_state = 6},
  [260] = {.lex_state = 0, .external_lex_state = 6},
  [261] = {.lex_state = 0, .external_lex_state = 6},
  [262] = {.lex_state = 0, .external_lex_state = 6},
  [263] = {.lex_state = 0, .external_lex_state = 6},
  [264] = {.lex_state = 0, .external_lex_state = 6},
  [265] = {.lex_state = 0, .external_lex_state = 6},
  [266] = {.lex_state = 0, .external_lex_state = 6},
  [267] = {.lex_state = 0, .external_lex_state = 6},
  [268] = {.lex_state = 0, .external_lex_state = 6},
  [269] = {.lex_state = 0, .external_lex_state = 6},
  [270] = {.lex_state = 0, .external_lex_state = 6},
  [271] = {.lex_state = 0, .external_lex_state = 6},
  [272] = {.lex_state = 0, .external_lex_state = 11},
  [273] = {.lex_state = 7},
  [274] = {.lex_state = 7},
  [275] = {.lex_state = 7},
  [276] = {.lex_state = 7},
  [277] = {.lex_state = 58},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 7},
  [281] = {.lex_state = 0, .external_lex_state = 12},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 7},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 7},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 7},
  [288] = {.lex_state = 7},
  [289] = {.lex_state = 7},
  [290] = {.lex_state = 7},
  [291] = {.lex_state = 7},
  [292] = {.lex_state = 7},
  [293] = {.lex_state = 58},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0, .external_lex_state = 13},
  [296] = {.lex_state = 0, .external_lex_state = 5},
  [297] = {.lex_state = 3},
  [298] = {.lex_state = 10},
  [299] = {.lex_state = 10},
  [300] = {.lex_state = 0, .external_lex_state = 14},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 58},
  [303] = {.lex_state = 0, .external_lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__closed_tag] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_attr_shortcut_custom] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__attr_name] = ACTIONS(1),
    [sym_attr_assignment] = ACTIONS(1),
    [sym_attr_assignment_noescape] = ACTIONS(1),
    [sym__element_rest_text] = ACTIONS(1),
    [anon_sym_doctype] = ACTIONS(1),
    [anon_sym_html] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_strict] = ACTIONS(1),
    [anon_sym_frameset] = ACTIONS(1),
    [anon_sym_mobile] = ACTIONS(1),
    [anon_sym_basic] = ACTIONS(1),
    [anon_sym_transitional] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [sym_output_modifier_leading_whitespace] = ACTIONS(1),
    [sym_output_modifier_trailing_whitespace] = ACTIONS(1),
    [sym_output_modifier_legacy_trailing_whitespace] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_markdown] = ACTIONS(1),
    [anon_sym_textile] = ACTIONS(1),
    [anon_sym_rdoc] = ACTIONS(1),
    [anon_sym_coffee] = ACTIONS(1),
    [anon_sym_less] = ACTIONS(1),
    [anon_sym_sass] = ACTIONS(1),
    [anon_sym_scss] = ACTIONS(1),
    [anon_sym_javascript] = ACTIONS(1),
    [anon_sym_css] = ACTIONS(1),
    [anon_sym_ruby] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_verbatim_text_modifier_trailing_whitespace] = ACTIONS(1),
    [sym__html_comment_conditional_marker] = ACTIONS(1),
    [sym__space_or_newline] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [sym__block_start] = ACTIONS(1),
    [sym__block_end] = ACTIONS(1),
    [sym__line_separator] = ACTIONS(1),
    [sym__attr_value_quoted] = ACTIONS(1),
    [sym__attr_value_ruby] = ACTIONS(1),
    [sym__attr_value_ruby_p] = ACTIONS(1),
    [sym__attr_value_ruby_s] = ACTIONS(1),
    [sym__attr_value_ruby_b] = ACTIONS(1),
    [sym_ruby] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(282),
    [sym__block] = STATE(301),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__block_start] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(35), 1,
      sym__block_end,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(169), 1,
      sym__html_comment_conditional_incomplete,
    STATE(252), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(15), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(23), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(250), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(248), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [91] = 23,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(37), 1,
      sym__block_end,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(169), 1,
      sym__html_comment_conditional_incomplete,
    STATE(252), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(15), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(23), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(250), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(248), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [182] = 23,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(39), 1,
      sym__block_end,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(169), 1,
      sym__html_comment_conditional_incomplete,
    STATE(252), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(15), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(23), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(250), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(248), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [273] = 23,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(41), 1,
      sym__block_end,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(169), 1,
      sym__html_comment_conditional_incomplete,
    STATE(252), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(15), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(23), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(250), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(248), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [364] = 22,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(169), 1,
      sym__html_comment_conditional_incomplete,
    STATE(200), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(15), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(23), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(250), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(248), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [452] = 22,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(169), 1,
      sym__html_comment_conditional_incomplete,
    STATE(196), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(15), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(23), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(250), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(248), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [540] = 22,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(169), 1,
      sym__html_comment_conditional_incomplete,
    STATE(252), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(15), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(23), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(250), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(248), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [628] = 26,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(45), 1,
      sym__closed_tag,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(59), 1,
      sym__space,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(12), 1,
      sym_attr_shortcuts,
    STATE(26), 1,
      sym_attrs,
    STATE(121), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(63), 2,
      sym__block_end,
      sym__line_separator,
    STATE(11), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    STATE(15), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(23), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(259), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(258), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(47), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [722] = 20,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(65), 1,
      sym__closed_tag,
    ACTIONS(67), 1,
      sym__space,
    STATE(24), 1,
      sym_attrs,
    STATE(121), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(69), 2,
      sym__block_end,
      sym__line_separator,
    STATE(30), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(259), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(227), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(47), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [796] = 20,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(71), 1,
      sym__closed_tag,
    ACTIONS(73), 1,
      sym__space,
    STATE(21), 1,
      sym_attrs,
    STATE(121), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(75), 2,
      sym__block_end,
      sym__line_separator,
    STATE(30), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(259), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(216), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(47), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [870] = 20,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(77), 1,
      sym__closed_tag,
    ACTIONS(79), 1,
      sym__space,
    STATE(18), 1,
      sym_attrs,
    STATE(121), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(81), 2,
      sym__block_end,
      sym__line_separator,
    STATE(13), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(259), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(214), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(47), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [944] = 20,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(83), 1,
      sym__closed_tag,
    ACTIONS(85), 1,
      sym__space,
    STATE(25), 1,
      sym_attrs,
    STATE(121), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(87), 2,
      sym__block_end,
      sym__line_separator,
    STATE(30), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(259), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(244), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(47), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [1018] = 20,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(89), 1,
      sym__closed_tag,
    ACTIONS(91), 1,
      sym__space,
    STATE(19), 1,
      sym_attrs,
    STATE(121), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(93), 2,
      sym__block_end,
      sym__line_separator,
    STATE(10), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(259), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(271), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(47), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [1092] = 7,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(23), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    ACTIONS(97), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(95), 12,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1130] = 7,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      sym_attr_shortcut_custom,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(23), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    ACTIONS(110), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(99), 12,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1168] = 10,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(15), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(23), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(255), 2,
      sym_element,
      sym_embedded_engine,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [1211] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(112), 1,
      sym__closed_tag,
    ACTIONS(114), 1,
      sym__space,
    STATE(121), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(116), 2,
      sym__block_end,
      sym__line_separator,
    STATE(259), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(246), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1257] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(118), 1,
      sym__closed_tag,
    ACTIONS(120), 1,
      sym__space,
    STATE(121), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(122), 2,
      sym__block_end,
      sym__line_separator,
    STATE(259), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(235), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1303] = 2,
    ACTIONS(126), 5,
      sym_attr_shortcut_custom,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(124), 14,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1327] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(128), 1,
      sym__closed_tag,
    ACTIONS(130), 1,
      sym__space,
    STATE(121), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(132), 2,
      sym__block_end,
      sym__line_separator,
    STATE(259), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(268), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1373] = 2,
    ACTIONS(136), 5,
      sym_attr_shortcut_custom,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(134), 14,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1397] = 2,
    ACTIONS(140), 5,
      sym_attr_shortcut_custom,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(138), 14,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1421] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(142), 1,
      sym__closed_tag,
    ACTIONS(144), 1,
      sym__space,
    STATE(121), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(146), 2,
      sym__block_end,
      sym__line_separator,
    STATE(259), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(209), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1467] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(148), 1,
      sym__closed_tag,
    ACTIONS(150), 1,
      sym__space,
    STATE(121), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(152), 2,
      sym__block_end,
      sym__line_separator,
    STATE(259), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(223), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1513] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(154), 1,
      sym__closed_tag,
    ACTIONS(156), 1,
      sym__space,
    STATE(121), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(158), 2,
      sym__block_end,
      sym__line_separator,
    STATE(259), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(213), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1559] = 16,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(160), 1,
      anon_sym_STAR,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      sym__attr_name,
    ACTIONS(170), 1,
      sym__element_rest_text,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      anon_sym_EQ_EQ,
    ACTIONS(176), 1,
      sym__space,
    STATE(126), 1,
      aux_sym_element_text_repeat1,
    STATE(215), 1,
      sym_attr_name,
    STATE(230), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(178), 2,
      sym__block_end,
      sym__line_separator,
    STATE(35), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1610] = 16,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(160), 1,
      anon_sym_STAR,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      sym__attr_name,
    ACTIONS(170), 1,
      sym__element_rest_text,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      anon_sym_EQ_EQ,
    ACTIONS(176), 1,
      sym__space,
    STATE(126), 1,
      aux_sym_element_text_repeat1,
    STATE(215), 1,
      sym_attr_name,
    STATE(216), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(75), 2,
      sym__block_end,
      sym__line_separator,
    STATE(35), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1661] = 16,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(160), 1,
      anon_sym_STAR,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      sym__attr_name,
    ACTIONS(170), 1,
      sym__element_rest_text,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      anon_sym_EQ_EQ,
    ACTIONS(176), 1,
      sym__space,
    STATE(126), 1,
      aux_sym_element_text_repeat1,
    STATE(215), 1,
      sym_attr_name,
    STATE(221), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(180), 2,
      sym__block_end,
      sym__line_separator,
    STATE(35), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1712] = 4,
    STATE(30), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(186), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    ACTIONS(184), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(182), 9,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
  [1739] = 16,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(160), 1,
      anon_sym_STAR,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      sym__attr_name,
    ACTIONS(170), 1,
      sym__element_rest_text,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      anon_sym_EQ_EQ,
    ACTIONS(176), 1,
      sym__space,
    STATE(126), 1,
      aux_sym_element_text_repeat1,
    STATE(215), 1,
      sym_attr_name,
    STATE(244), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(87), 2,
      sym__block_end,
      sym__line_separator,
    STATE(35), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1790] = 16,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(160), 1,
      anon_sym_STAR,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      sym__attr_name,
    ACTIONS(170), 1,
      sym__element_rest_text,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      anon_sym_EQ_EQ,
    ACTIONS(176), 1,
      sym__space,
    STATE(126), 1,
      aux_sym_element_text_repeat1,
    STATE(215), 1,
      sym_attr_name,
    STATE(227), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(69), 2,
      sym__block_end,
      sym__line_separator,
    STATE(35), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1841] = 16,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(160), 1,
      anon_sym_STAR,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      sym__attr_name,
    ACTIONS(170), 1,
      sym__element_rest_text,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      anon_sym_EQ_EQ,
    ACTIONS(176), 1,
      sym__space,
    STATE(126), 1,
      aux_sym_element_text_repeat1,
    STATE(215), 1,
      sym_attr_name,
    STATE(251), 1,
      sym__block,
    STATE(270), 1,
      sym_nested,
    ACTIONS(189), 2,
      sym__block_end,
      sym__line_separator,
    STATE(35), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1892] = 2,
    ACTIONS(193), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(191), 12,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1913] = 7,
    ACTIONS(160), 1,
      anon_sym_STAR,
    ACTIONS(197), 1,
      sym__attr_name,
    ACTIONS(202), 1,
      sym__space,
    STATE(215), 1,
      sym_attr_name,
    ACTIONS(200), 2,
      sym__element_rest_text,
      anon_sym_EQ,
    STATE(36), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
    ACTIONS(195), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [1942] = 7,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(210), 1,
      sym__attr_name,
    ACTIONS(215), 1,
      sym__space,
    STATE(215), 1,
      sym_attr_name,
    ACTIONS(213), 2,
      sym__element_rest_text,
      anon_sym_EQ,
    STATE(36), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
    ACTIONS(205), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [1971] = 4,
    ACTIONS(222), 1,
      anon_sym_xml,
    ACTIONS(218), 2,
      anon_sym_html,
      anon_sym_5,
    STATE(256), 4,
      sym__doctype_html,
      sym_doctype_html5,
      sym_doctype_xhtml,
      sym__doctype_xml,
    ACTIONS(220), 6,
      anon_sym_1_DOT1,
      anon_sym_strict,
      anon_sym_frameset,
      anon_sym_mobile,
      anon_sym_basic,
      anon_sym_transitional,
  [1993] = 2,
    ACTIONS(226), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(224), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
  [2009] = 2,
    ACTIONS(230), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(228), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
  [2025] = 2,
    ACTIONS(234), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(232), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
  [2041] = 2,
    ACTIONS(213), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(205), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
  [2057] = 2,
    ACTIONS(238), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(236), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
  [2073] = 7,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_COLON,
    ACTIONS(248), 1,
      sym__space,
    STATE(280), 1,
      sym_attrs,
    STATE(292), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [2099] = 2,
    ACTIONS(252), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(250), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2114] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(170), 1,
      sym__element_rest_text,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      anon_sym_EQ_EQ,
    ACTIONS(254), 1,
      sym__attr_name,
    STATE(126), 1,
      aux_sym_element_text_repeat1,
    STATE(224), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(256), 2,
      sym__block_end,
      sym__line_separator,
  [2143] = 2,
    ACTIONS(260), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(258), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2158] = 2,
    ACTIONS(264), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(262), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2173] = 2,
    ACTIONS(268), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(266), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2188] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(170), 1,
      sym__element_rest_text,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      anon_sym_EQ_EQ,
    ACTIONS(254), 1,
      sym__attr_name,
    STATE(126), 1,
      aux_sym_element_text_repeat1,
    STATE(237), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(270), 2,
      sym__block_end,
      sym__line_separator,
  [2217] = 2,
    ACTIONS(274), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(272), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2232] = 2,
    ACTIONS(278), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(276), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2247] = 2,
    ACTIONS(282), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(280), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2262] = 2,
    ACTIONS(286), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(284), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2277] = 2,
    ACTIONS(290), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(288), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2292] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(170), 1,
      sym__element_rest_text,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      anon_sym_EQ_EQ,
    ACTIONS(254), 1,
      sym__attr_name,
    STATE(126), 1,
      aux_sym_element_text_repeat1,
    STATE(220), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(292), 2,
      sym__block_end,
      sym__line_separator,
  [2321] = 2,
    ACTIONS(296), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(294), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2336] = 2,
    ACTIONS(300), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(298), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2351] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(170), 1,
      sym__element_rest_text,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      anon_sym_EQ_EQ,
    ACTIONS(254), 1,
      sym__attr_name,
    STATE(126), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    STATE(267), 1,
      sym_nested,
    ACTIONS(302), 2,
      sym__block_end,
      sym__line_separator,
  [2380] = 2,
    ACTIONS(306), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(304), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2395] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(170), 1,
      sym__element_rest_text,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      anon_sym_EQ_EQ,
    ACTIONS(254), 1,
      sym__attr_name,
    STATE(126), 1,
      aux_sym_element_text_repeat1,
    STATE(232), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(308), 2,
      sym__block_end,
      sym__line_separator,
  [2424] = 2,
    ACTIONS(312), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(310), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2439] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(170), 1,
      sym__element_rest_text,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      anon_sym_EQ_EQ,
    ACTIONS(254), 1,
      sym__attr_name,
    STATE(126), 1,
      aux_sym_element_text_repeat1,
    STATE(207), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(314), 2,
      sym__block_end,
      sym__line_separator,
  [2468] = 8,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    ACTIONS(321), 1,
      sym__attr_name,
    ACTIONS(324), 1,
      sym__space_or_newline,
    STATE(63), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(171), 1,
      sym__attr_delimited_b,
    STATE(157), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2494] = 8,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(333), 1,
      sym__space_or_newline,
    STATE(63), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(171), 1,
      sym__attr_delimited_b,
    STATE(157), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2520] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(339), 1,
      sym__space_or_newline,
    STATE(72), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(132), 1,
      sym_attr_name,
    STATE(189), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2546] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(343), 1,
      sym__space_or_newline,
    STATE(68), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(132), 1,
      sym_attr_name,
    STATE(189), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2572] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(345), 1,
      anon_sym_STAR,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    ACTIONS(353), 1,
      sym__space,
    STATE(218), 1,
      sym_attr_name,
    STATE(108), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [2598] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    ACTIONS(357), 1,
      sym__space_or_newline,
    STATE(79), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(132), 1,
      sym_attr_name,
    STATE(189), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2624] = 8,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    ACTIONS(361), 1,
      sym__space_or_newline,
    STATE(78), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(171), 1,
      sym__attr_delimited_b,
    STATE(157), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2650] = 8,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    ACTIONS(365), 1,
      sym__space_or_newline,
    STATE(63), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(171), 1,
      sym__attr_delimited_b,
    STATE(157), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2676] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    ACTIONS(371), 1,
      sym__space_or_newline,
    STATE(86), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(123), 1,
      sym_attr_name,
    STATE(156), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2702] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(343), 1,
      sym__space_or_newline,
    STATE(79), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(132), 1,
      sym_attr_name,
    STATE(189), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2728] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    ACTIONS(375), 1,
      sym__space_or_newline,
    STATE(77), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(132), 1,
      sym_attr_name,
    STATE(189), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2754] = 8,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    ACTIONS(379), 1,
      sym__space_or_newline,
    STATE(63), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(171), 1,
      sym__attr_delimited_b,
    STATE(157), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2780] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    ACTIONS(383), 1,
      sym__space_or_newline,
    STATE(86), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(123), 1,
      sym_attr_name,
    STATE(156), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2806] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    ACTIONS(387), 1,
      sym__space_or_newline,
    STATE(75), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(123), 1,
      sym_attr_name,
    STATE(156), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2832] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    ACTIONS(391), 1,
      sym__space_or_newline,
    STATE(79), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(132), 1,
      sym_attr_name,
    STATE(189), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2858] = 8,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    ACTIONS(395), 1,
      sym__space_or_newline,
    STATE(63), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(171), 1,
      sym__attr_delimited_b,
    STATE(157), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2884] = 8,
    ACTIONS(397), 1,
      anon_sym_STAR,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    ACTIONS(402), 1,
      sym__attr_name,
    ACTIONS(405), 1,
      sym__space_or_newline,
    STATE(79), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(132), 1,
      sym_attr_name,
    STATE(189), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2910] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(408), 1,
      anon_sym_RBRACK,
    ACTIONS(410), 1,
      sym__space_or_newline,
    STATE(84), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(123), 1,
      sym_attr_name,
    STATE(156), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2936] = 8,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    ACTIONS(414), 1,
      sym__space_or_newline,
    STATE(64), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(171), 1,
      sym__attr_delimited_b,
    STATE(157), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2962] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    ACTIONS(418), 1,
      sym__space_or_newline,
    STATE(79), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(132), 1,
      sym_attr_name,
    STATE(189), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2988] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(420), 1,
      anon_sym_RBRACK,
    ACTIONS(422), 1,
      sym__space_or_newline,
    STATE(86), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(123), 1,
      sym_attr_name,
    STATE(156), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3014] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(424), 1,
      anon_sym_RBRACK,
    ACTIONS(426), 1,
      sym__space_or_newline,
    STATE(86), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(123), 1,
      sym_attr_name,
    STATE(156), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3040] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    ACTIONS(391), 1,
      sym__space_or_newline,
    STATE(82), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(132), 1,
      sym_attr_name,
    STATE(189), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3066] = 8,
    ACTIONS(428), 1,
      anon_sym_STAR,
    ACTIONS(431), 1,
      anon_sym_RBRACK,
    ACTIONS(433), 1,
      sym__attr_name,
    ACTIONS(436), 1,
      sym__space_or_newline,
    STATE(86), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(123), 1,
      sym_attr_name,
    STATE(156), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3092] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(424), 1,
      anon_sym_RBRACK,
    ACTIONS(426), 1,
      sym__space_or_newline,
    STATE(83), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(123), 1,
      sym_attr_name,
    STATE(156), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3118] = 8,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    ACTIONS(395), 1,
      sym__space_or_newline,
    STATE(74), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(171), 1,
      sym__attr_delimited_b,
    STATE(157), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3144] = 8,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(333), 1,
      sym__space_or_newline,
    STATE(70), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(171), 1,
      sym__attr_delimited_b,
    STATE(157), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3170] = 8,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    ACTIONS(383), 1,
      sym__space_or_newline,
    STATE(71), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(123), 1,
      sym_attr_name,
    STATE(156), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3196] = 7,
    ACTIONS(439), 1,
      sym_attr_assignment,
    ACTIONS(441), 1,
      sym_attr_assignment_noescape,
    ACTIONS(443), 1,
      sym__element_rest_text,
    ACTIONS(445), 1,
      sym__space,
    ACTIONS(447), 1,
      sym__block_start,
    STATE(242), 1,
      sym__text_nested,
    ACTIONS(449), 2,
      sym__block_end,
      sym__line_separator,
  [3219] = 2,
    ACTIONS(439), 3,
      sym__attr_name,
      sym_attr_assignment,
      sym__space_or_newline,
    ACTIONS(441), 5,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_attr_assignment_noescape,
  [3232] = 6,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      sym_attr_name,
    STATE(155), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3252] = 6,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(420), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      sym_attr_name,
    STATE(155), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3272] = 6,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(451), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      sym_attr_name,
    STATE(155), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3292] = 6,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_attr_name,
    STATE(167), 1,
      sym__attr_delimited_b,
    STATE(157), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3312] = 6,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym_attr_name,
    STATE(162), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3332] = 6,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(455), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      sym_attr_name,
    STATE(155), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3352] = 6,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym_attr_name,
    STATE(162), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3372] = 6,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym_attr_name,
    STATE(162), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3392] = 6,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_attr_name,
    STATE(167), 1,
      sym__attr_delimited_b,
    STATE(157), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3412] = 6,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_attr_name,
    STATE(167), 1,
      sym__attr_delimited_b,
    STATE(157), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3432] = 6,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_attr_name,
    STATE(167), 1,
      sym__attr_delimited_b,
    STATE(157), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3452] = 6,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym_attr_name,
    STATE(162), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3472] = 6,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_attr_name,
    STATE(167), 1,
      sym__attr_delimited_b,
    STATE(157), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3492] = 6,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(424), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      sym_attr_name,
    STATE(155), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3512] = 6,
    ACTIONS(205), 1,
      anon_sym_COLON,
    ACTIONS(210), 1,
      sym__attr_name,
    ACTIONS(463), 1,
      anon_sym_STAR,
    ACTIONS(466), 1,
      sym__space,
    STATE(218), 1,
      sym_attr_name,
    STATE(107), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [3532] = 6,
    ACTIONS(195), 1,
      anon_sym_COLON,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(345), 1,
      anon_sym_STAR,
    ACTIONS(353), 1,
      sym__space,
    STATE(218), 1,
      sym_attr_name,
    STATE(107), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [3552] = 6,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym_attr_name,
    STATE(162), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3572] = 6,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    ACTIONS(331), 1,
      sym__attr_name,
    STATE(116), 1,
      sym_attr_name,
    STATE(167), 1,
      sym__attr_delimited_b,
    STATE(157), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3592] = 6,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym_attr_name,
    STATE(162), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3612] = 6,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      sym_attr_name,
    STATE(155), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3632] = 3,
    ACTIONS(471), 1,
      sym_ruby,
    STATE(119), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(469), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3645] = 5,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(367), 1,
      anon_sym_STAR,
    STATE(123), 1,
      sym_attr_name,
    STATE(155), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3662] = 5,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    STATE(132), 1,
      sym_attr_name,
    STATE(162), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3679] = 4,
    ACTIONS(477), 1,
      sym_attr_assignment,
    ACTIONS(479), 1,
      sym_attr_assignment_noescape,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_RBRACE,
    ACTIONS(475), 2,
      sym__attr_name,
      sym__space_or_newline,
  [3694] = 3,
    ACTIONS(481), 1,
      sym_ruby,
    STATE(118), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(469), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3707] = 3,
    ACTIONS(182), 1,
      sym_ruby,
    STATE(118), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(483), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3720] = 3,
    ACTIONS(486), 1,
      sym_ruby,
    STATE(118), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(469), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3733] = 5,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(331), 1,
      sym__attr_name,
    STATE(116), 1,
      sym_attr_name,
    STATE(167), 1,
      sym__attr_delimited_b,
    STATE(157), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3750] = 5,
    ACTIONS(447), 1,
      sym__block_start,
    ACTIONS(488), 1,
      sym__element_rest_text,
    STATE(153), 1,
      aux_sym_element_text_repeat1,
    STATE(219), 1,
      sym__text_nested,
    ACTIONS(490), 2,
      sym__block_end,
      sym__line_separator,
  [3767] = 5,
    ACTIONS(447), 1,
      sym__block_start,
    ACTIONS(492), 1,
      sym__element_rest_text,
    ACTIONS(494), 1,
      sym__space,
    STATE(210), 1,
      sym__text_nested,
    ACTIONS(496), 2,
      sym__block_end,
      sym__line_separator,
  [3784] = 4,
    ACTIONS(498), 1,
      sym_attr_assignment,
    ACTIONS(500), 1,
      sym_attr_assignment_noescape,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_RBRACK,
    ACTIONS(475), 2,
      sym__attr_name,
      sym__space_or_newline,
  [3799] = 5,
    ACTIONS(447), 1,
      sym__block_start,
    ACTIONS(502), 1,
      sym__element_rest_text,
    ACTIONS(504), 1,
      sym__space,
    STATE(219), 1,
      sym__text_nested,
    ACTIONS(490), 2,
      sym__block_end,
      sym__line_separator,
  [3816] = 5,
    ACTIONS(447), 1,
      sym__block_start,
    ACTIONS(506), 1,
      sym__element_rest_text,
    ACTIONS(508), 1,
      sym__space,
    STATE(242), 1,
      sym__text_nested,
    ACTIONS(449), 2,
      sym__block_end,
      sym__line_separator,
  [3833] = 5,
    ACTIONS(447), 1,
      sym__block_start,
    ACTIONS(488), 1,
      sym__element_rest_text,
    STATE(153), 1,
      aux_sym_element_text_repeat1,
    STATE(242), 1,
      sym__text_nested,
    ACTIONS(449), 2,
      sym__block_end,
      sym__line_separator,
  [3850] = 3,
    ACTIONS(510), 1,
      sym_ruby,
    STATE(117), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(469), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3863] = 3,
    ACTIONS(512), 1,
      sym_ruby,
    STATE(118), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(469), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3876] = 3,
    ACTIONS(514), 1,
      sym_ruby,
    STATE(118), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(469), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3889] = 4,
    ACTIONS(516), 1,
      anon_sym_RBRACK,
    ACTIONS(518), 1,
      sym__html_comment_condition,
    STATE(278), 1,
      sym_html_comment_condition,
    ACTIONS(520), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3904] = 5,
    ACTIONS(447), 1,
      sym__block_start,
    ACTIONS(522), 1,
      sym__element_rest_text,
    ACTIONS(524), 1,
      sym__space,
    STATE(239), 1,
      sym__text_nested,
    ACTIONS(526), 2,
      sym__block_end,
      sym__line_separator,
  [3921] = 4,
    ACTIONS(528), 1,
      sym_attr_assignment,
    ACTIONS(530), 1,
      sym_attr_assignment_noescape,
    ACTIONS(473), 2,
      anon_sym_STAR,
      anon_sym_RPAREN,
    ACTIONS(475), 2,
      sym__attr_name,
      sym__space_or_newline,
  [3936] = 3,
    ACTIONS(486), 1,
      sym_ruby,
    STATE(129), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(469), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3949] = 3,
    ACTIONS(481), 1,
      sym_ruby,
    STATE(128), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(469), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3962] = 4,
    ACTIONS(447), 1,
      sym__block_start,
    ACTIONS(532), 1,
      sym__element_rest_text,
    STATE(217), 1,
      sym__text_nested,
    ACTIONS(534), 2,
      sym__block_end,
      sym__line_separator,
  [3976] = 1,
    ACTIONS(536), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym__space,
  [3984] = 4,
    ACTIONS(538), 1,
      sym__block_start,
    ACTIONS(540), 1,
      sym__block_end,
    ACTIONS(542), 1,
      sym__line_separator,
    STATE(142), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3998] = 4,
    ACTIONS(544), 1,
      sym__block_start,
    ACTIONS(547), 1,
      sym__block_end,
    ACTIONS(549), 1,
      sym__line_separator,
    STATE(138), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [4012] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(251), 1,
      sym__block,
    STATE(261), 1,
      sym_nested,
    ACTIONS(552), 2,
      sym__block_end,
      sym__line_separator,
  [4026] = 4,
    ACTIONS(447), 1,
      sym__block_start,
    ACTIONS(492), 1,
      sym__element_rest_text,
    STATE(210), 1,
      sym__text_nested,
    ACTIONS(496), 2,
      sym__block_end,
      sym__line_separator,
  [4040] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(251), 1,
      sym__block,
    STATE(262), 1,
      sym_nested,
    ACTIONS(554), 2,
      sym__block_end,
      sym__line_separator,
  [4054] = 4,
    ACTIONS(538), 1,
      sym__block_start,
    ACTIONS(556), 1,
      sym__block_end,
    ACTIONS(558), 1,
      sym__line_separator,
    STATE(138), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [4068] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(251), 1,
      sym__block,
    STATE(269), 1,
      sym_nested,
    ACTIONS(560), 2,
      sym__block_end,
      sym__line_separator,
  [4082] = 4,
    ACTIONS(538), 1,
      sym__block_start,
    ACTIONS(562), 1,
      sym__block_end,
    ACTIONS(564), 1,
      sym__line_separator,
    STATE(145), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [4096] = 4,
    ACTIONS(538), 1,
      sym__block_start,
    ACTIONS(566), 1,
      sym__block_end,
    ACTIONS(568), 1,
      sym__line_separator,
    STATE(138), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [4110] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(251), 1,
      sym__block,
    STATE(263), 1,
      sym_nested,
    ACTIONS(570), 2,
      sym__block_end,
      sym__line_separator,
  [4124] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(228), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(572), 2,
      sym__block_end,
      sym__line_separator,
  [4138] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(229), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(574), 2,
      sym__block_end,
      sym__line_separator,
  [4152] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(247), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(576), 2,
      sym__block_end,
      sym__line_separator,
  [4166] = 4,
    ACTIONS(447), 1,
      sym__block_start,
    ACTIONS(578), 1,
      sym__element_rest_text,
    STATE(231), 1,
      sym__text_nested,
    ACTIONS(580), 2,
      sym__block_end,
      sym__line_separator,
  [4180] = 4,
    ACTIONS(447), 1,
      sym__block_start,
    ACTIONS(506), 1,
      sym__element_rest_text,
    STATE(242), 1,
      sym__text_nested,
    ACTIONS(449), 2,
      sym__block_end,
      sym__line_separator,
  [4194] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(241), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(582), 2,
      sym__block_end,
      sym__line_separator,
  [4208] = 3,
    ACTIONS(584), 1,
      sym__element_rest_text,
    STATE(153), 1,
      aux_sym_element_text_repeat1,
    ACTIONS(587), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4220] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(233), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(589), 2,
      sym__block_end,
      sym__line_separator,
  [4234] = 2,
    ACTIONS(593), 1,
      sym__attr_name,
    ACTIONS(591), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4243] = 2,
    ACTIONS(597), 1,
      sym__attr_name,
    ACTIONS(595), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4252] = 2,
    ACTIONS(601), 1,
      sym__attr_name,
    ACTIONS(599), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4261] = 3,
    ACTIONS(603), 1,
      sym__text_line,
    STATE(260), 1,
      sym__text,
    ACTIONS(605), 2,
      sym__block_end,
      sym__line_separator,
  [4272] = 3,
    ACTIONS(447), 1,
      sym__block_start,
    STATE(210), 1,
      sym__text_nested,
    ACTIONS(496), 2,
      sym__block_end,
      sym__line_separator,
  [4283] = 3,
    ACTIONS(447), 1,
      sym__block_start,
    STATE(265), 1,
      sym__text_nested,
    ACTIONS(607), 2,
      sym__block_end,
      sym__line_separator,
  [4294] = 2,
    ACTIONS(611), 1,
      sym__attr_name,
    ACTIONS(609), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4303] = 2,
    ACTIONS(615), 1,
      sym__attr_name,
    ACTIONS(613), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4312] = 2,
    ACTIONS(619), 1,
      sym__attr_name,
    ACTIONS(617), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4321] = 2,
    ACTIONS(623), 1,
      sym__attr_name,
    ACTIONS(621), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4330] = 2,
    ACTIONS(627), 1,
      sym__attr_name,
    ACTIONS(625), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4339] = 2,
    ACTIONS(631), 1,
      sym__attr_name,
    ACTIONS(629), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4348] = 2,
    ACTIONS(635), 1,
      sym__attr_name,
    ACTIONS(633), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4357] = 4,
    ACTIONS(160), 1,
      anon_sym_STAR,
    ACTIONS(331), 1,
      sym__attr_name,
    STATE(41), 1,
      sym_attr,
    STATE(215), 1,
      sym_attr_name,
  [4370] = 3,
    ACTIONS(447), 1,
      sym__block_start,
    STATE(266), 1,
      sym__text_nested,
    ACTIONS(637), 2,
      sym__block_end,
      sym__line_separator,
  [4381] = 3,
    ACTIONS(447), 1,
      sym__block_start,
    STATE(217), 1,
      sym__text_nested,
    ACTIONS(534), 2,
      sym__block_end,
      sym__line_separator,
  [4392] = 2,
    ACTIONS(641), 1,
      sym__attr_name,
    ACTIONS(639), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4401] = 2,
    ACTIONS(645), 1,
      sym__attr_name,
    ACTIONS(643), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4410] = 4,
    ACTIONS(331), 1,
      sym__attr_name,
    ACTIONS(345), 1,
      anon_sym_STAR,
    STATE(185), 1,
      sym_attr,
    STATE(218), 1,
      sym_attr_name,
  [4423] = 3,
    ACTIONS(447), 1,
      sym__block_start,
    STATE(253), 1,
      sym__text_nested,
    ACTIONS(647), 2,
      sym__block_end,
      sym__line_separator,
  [4434] = 2,
    ACTIONS(649), 1,
      anon_sym_RBRACK,
    ACTIONS(651), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4443] = 2,
    ACTIONS(655), 1,
      sym__attr_name,
    ACTIONS(653), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4452] = 3,
    ACTIONS(447), 1,
      sym__block_start,
    STATE(231), 1,
      sym__text_nested,
    ACTIONS(580), 2,
      sym__block_end,
      sym__line_separator,
  [4463] = 3,
    ACTIONS(447), 1,
      sym__block_start,
    STATE(242), 1,
      sym__text_nested,
    ACTIONS(449), 2,
      sym__block_end,
      sym__line_separator,
  [4474] = 3,
    ACTIONS(447), 1,
      sym__block_start,
    STATE(236), 1,
      sym__text_nested,
    ACTIONS(657), 2,
      sym__block_end,
      sym__line_separator,
  [4485] = 2,
    ACTIONS(661), 1,
      sym__attr_name,
    ACTIONS(659), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4494] = 2,
    ACTIONS(234), 1,
      sym__attr_name,
    ACTIONS(232), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [4503] = 2,
    ACTIONS(230), 1,
      sym__attr_name,
    ACTIONS(228), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [4512] = 2,
    ACTIONS(226), 1,
      sym__attr_name,
    ACTIONS(224), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [4521] = 2,
    ACTIONS(665), 1,
      sym__attr_name,
    ACTIONS(663), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4530] = 2,
    ACTIONS(213), 1,
      sym__attr_name,
    ACTIONS(205), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [4539] = 2,
    ACTIONS(238), 1,
      sym__attr_name,
    ACTIONS(236), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [4548] = 2,
    ACTIONS(669), 1,
      sym__attr_name,
    ACTIONS(667), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4557] = 1,
    ACTIONS(191), 4,
      sym_ruby,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [4564] = 2,
    ACTIONS(673), 1,
      sym__attr_name,
    ACTIONS(671), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4573] = 2,
    ACTIONS(677), 1,
      sym__attr_name,
    ACTIONS(675), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4582] = 3,
    ACTIONS(447), 1,
      sym__block_start,
    STATE(240), 1,
      sym__text_nested,
    ACTIONS(679), 2,
      sym__block_end,
      sym__line_separator,
  [4593] = 3,
    ACTIONS(681), 1,
      sym__block_end,
    ACTIONS(683), 1,
      sym__line_separator,
    STATE(192), 1,
      aux_sym__block_repeat1,
  [4603] = 1,
    ACTIONS(686), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4609] = 1,
    ACTIONS(688), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4615] = 1,
    ACTIONS(690), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4621] = 3,
    ACTIONS(692), 1,
      sym__block_end,
    ACTIONS(694), 1,
      sym__line_separator,
    STATE(199), 1,
      aux_sym__block_repeat1,
  [4631] = 3,
    ACTIONS(37), 1,
      sym__block_end,
    ACTIONS(696), 1,
      sym__line_separator,
    STATE(192), 1,
      aux_sym__block_repeat1,
  [4641] = 2,
    ACTIONS(698), 1,
      sym_doctype_xml_encoding,
    ACTIONS(700), 2,
      sym__block_end,
      sym__line_separator,
  [4649] = 3,
    ACTIONS(35), 1,
      sym__block_end,
    ACTIONS(702), 1,
      sym__line_separator,
    STATE(192), 1,
      aux_sym__block_repeat1,
  [4659] = 3,
    ACTIONS(704), 1,
      sym__block_end,
    ACTIONS(706), 1,
      sym__line_separator,
    STATE(197), 1,
      aux_sym__block_repeat1,
  [4669] = 3,
    ACTIONS(708), 1,
      sym__attr_value_quoted,
    ACTIONS(710), 1,
      sym__attr_value_ruby,
    STATE(40), 1,
      sym_attr_value,
  [4679] = 2,
    STATE(180), 1,
      sym__attr_delimited_value_b,
    ACTIONS(712), 2,
      sym__attr_value_quoted,
      sym__attr_value_ruby_b,
  [4687] = 2,
    STATE(163), 1,
      sym__attr_delimited_value_s,
    ACTIONS(714), 2,
      sym__attr_value_quoted,
      sym__attr_value_ruby_s,
  [4695] = 2,
    STATE(172), 1,
      sym__attr_delimited_value_p,
    ACTIONS(716), 2,
      sym__attr_value_quoted,
      sym__attr_value_ruby_p,
  [4703] = 3,
    ACTIONS(718), 1,
      sym__attr_value_quoted,
    ACTIONS(720), 1,
      sym__attr_value_ruby,
    STATE(181), 1,
      sym_attr_value,
  [4713] = 1,
    ACTIONS(547), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4719] = 1,
    ACTIONS(722), 2,
      sym__block_end,
      sym__line_separator,
  [4724] = 1,
    ACTIONS(686), 2,
      sym__block_end,
      sym__line_separator,
  [4729] = 1,
    ACTIONS(314), 2,
      sym__block_end,
      sym__line_separator,
  [4734] = 1,
    ACTIONS(580), 2,
      sym__block_end,
      sym__line_separator,
  [4739] = 1,
    ACTIONS(724), 2,
      sym__block_end,
      sym__line_separator,
  [4744] = 1,
    ACTIONS(726), 2,
      sym__block_end,
      sym__line_separator,
  [4749] = 1,
    ACTIONS(302), 2,
      sym__block_end,
      sym__line_separator,
  [4754] = 1,
    ACTIONS(87), 2,
      sym__block_end,
      sym__line_separator,
  [4759] = 2,
    ACTIONS(728), 1,
      sym_attr_assignment,
    ACTIONS(730), 1,
      sym_attr_assignment_noescape,
  [4766] = 1,
    ACTIONS(189), 2,
      sym__block_end,
      sym__line_separator,
  [4771] = 1,
    ACTIONS(657), 2,
      sym__block_end,
      sym__line_separator,
  [4776] = 2,
    ACTIONS(732), 1,
      sym_attr_assignment,
    ACTIONS(734), 1,
      sym_attr_assignment_noescape,
  [4783] = 1,
    ACTIONS(449), 2,
      sym__block_end,
      sym__line_separator,
  [4788] = 1,
    ACTIONS(736), 2,
      sym__block_end,
      sym__line_separator,
  [4793] = 1,
    ACTIONS(738), 2,
      sym__block_end,
      sym__line_separator,
  [4798] = 2,
    ACTIONS(740), 1,
      sym__text_line,
    ACTIONS(742), 1,
      sym__block_end,
  [4805] = 1,
    ACTIONS(270), 2,
      sym__block_end,
      sym__line_separator,
  [4810] = 1,
    ACTIONS(744), 2,
      sym__block_end,
      sym__line_separator,
  [4815] = 1,
    ACTIONS(688), 2,
      sym__block_end,
      sym__line_separator,
  [4820] = 2,
    ACTIONS(740), 1,
      sym__text_line,
    ACTIONS(746), 1,
      sym__block_end,
  [4827] = 1,
    ACTIONS(178), 2,
      sym__block_end,
      sym__line_separator,
  [4832] = 1,
    ACTIONS(748), 2,
      sym__block_end,
      sym__line_separator,
  [4837] = 1,
    ACTIONS(750), 2,
      sym__block_end,
      sym__line_separator,
  [4842] = 1,
    ACTIONS(752), 2,
      sym__block_end,
      sym__line_separator,
  [4847] = 1,
    ACTIONS(679), 2,
      sym__block_end,
      sym__line_separator,
  [4852] = 1,
    ACTIONS(754), 2,
      sym__block_end,
      sym__line_separator,
  [4857] = 1,
    ACTIONS(756), 2,
      sym__block_end,
      sym__line_separator,
  [4862] = 2,
    ACTIONS(566), 1,
      sym__block_end,
    ACTIONS(740), 1,
      sym__text_line,
  [4869] = 1,
    ACTIONS(308), 2,
      sym__block_end,
      sym__line_separator,
  [4874] = 1,
    ACTIONS(758), 2,
      sym__block_end,
      sym__line_separator,
  [4879] = 1,
    ACTIONS(760), 2,
      sym__block_end,
      sym__line_separator,
  [4884] = 1,
    ACTIONS(690), 2,
      sym__block_end,
      sym__line_separator,
  [4889] = 1,
    ACTIONS(496), 2,
      sym__block_end,
      sym__line_separator,
  [4894] = 1,
    ACTIONS(762), 2,
      sym__block_end,
      sym__line_separator,
  [4899] = 1,
    ACTIONS(764), 2,
      sym__block_end,
      sym__line_separator,
  [4904] = 1,
    ACTIONS(534), 2,
      sym__block_end,
      sym__line_separator,
  [4909] = 1,
    ACTIONS(766), 2,
      sym__block_end,
      sym__line_separator,
  [4914] = 1,
    ACTIONS(180), 2,
      sym__block_end,
      sym__line_separator,
  [4919] = 2,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      anon_sym_EQ_EQ,
  [4926] = 1,
    ACTIONS(292), 2,
      sym__block_end,
      sym__line_separator,
  [4931] = 1,
    ACTIONS(768), 2,
      sym__block_end,
      sym__line_separator,
  [4936] = 1,
    ACTIONS(770), 2,
      sym__block_end,
      sym__line_separator,
  [4941] = 1,
    ACTIONS(772), 2,
      sym__block_end,
      sym__line_separator,
  [4946] = 1,
    ACTIONS(774), 2,
      sym__block_end,
      sym__line_separator,
  [4951] = 1,
    ACTIONS(776), 2,
      sym__block_end,
      sym__line_separator,
  [4956] = 1,
    ACTIONS(681), 2,
      sym__block_end,
      sym__line_separator,
  [4961] = 1,
    ACTIONS(778), 2,
      sym__block_end,
      sym__line_separator,
  [4966] = 2,
    ACTIONS(556), 1,
      sym__block_end,
    ACTIONS(740), 1,
      sym__text_line,
  [4973] = 1,
    ACTIONS(780), 2,
      sym__block_end,
      sym__line_separator,
  [4978] = 1,
    ACTIONS(782), 2,
      sym__block_end,
      sym__line_separator,
  [4983] = 1,
    ACTIONS(784), 2,
      sym__block_end,
      sym__line_separator,
  [4988] = 1,
    ACTIONS(75), 2,
      sym__block_end,
      sym__line_separator,
  [4993] = 1,
    ACTIONS(786), 2,
      sym__block_end,
      sym__line_separator,
  [4998] = 1,
    ACTIONS(788), 2,
      sym__block_end,
      sym__line_separator,
  [5003] = 1,
    ACTIONS(790), 2,
      sym__block_end,
      sym__line_separator,
  [5008] = 1,
    ACTIONS(792), 2,
      sym__block_end,
      sym__line_separator,
  [5013] = 1,
    ACTIONS(794), 2,
      sym__block_end,
      sym__line_separator,
  [5018] = 1,
    ACTIONS(796), 2,
      sym__block_end,
      sym__line_separator,
  [5023] = 1,
    ACTIONS(798), 2,
      sym__block_end,
      sym__line_separator,
  [5028] = 1,
    ACTIONS(800), 2,
      sym__block_end,
      sym__line_separator,
  [5033] = 1,
    ACTIONS(802), 2,
      sym__block_end,
      sym__line_separator,
  [5038] = 1,
    ACTIONS(256), 2,
      sym__block_end,
      sym__line_separator,
  [5043] = 1,
    ACTIONS(804), 2,
      sym__block_end,
      sym__line_separator,
  [5048] = 1,
    ACTIONS(806), 2,
      sym__block_end,
      sym__line_separator,
  [5053] = 1,
    ACTIONS(69), 2,
      sym__block_end,
      sym__line_separator,
  [5058] = 1,
    ACTIONS(808), 1,
      sym__attr_value_ruby_p,
  [5062] = 1,
    ACTIONS(258), 1,
      anon_sym_COLON,
  [5066] = 1,
    ACTIONS(298), 1,
      anon_sym_COLON,
  [5070] = 1,
    ACTIONS(294), 1,
      anon_sym_COLON,
  [5074] = 1,
    ACTIONS(280), 1,
      anon_sym_COLON,
  [5078] = 1,
    ACTIONS(810), 1,
      sym__text_line,
  [5082] = 1,
    ACTIONS(812), 1,
      anon_sym_RBRACK,
  [5086] = 1,
    ACTIONS(772), 1,
      ts_builtin_sym_end,
  [5090] = 1,
    ACTIONS(814), 1,
      anon_sym_COLON,
  [5094] = 1,
    ACTIONS(816), 1,
      sym__attr_value_ruby,
  [5098] = 1,
    ACTIONS(818), 1,
      ts_builtin_sym_end,
  [5102] = 1,
    ACTIONS(288), 1,
      anon_sym_COLON,
  [5106] = 1,
    ACTIONS(250), 1,
      anon_sym_COLON,
  [5110] = 1,
    ACTIONS(310), 1,
      anon_sym_COLON,
  [5114] = 1,
    ACTIONS(766), 1,
      ts_builtin_sym_end,
  [5118] = 1,
    ACTIONS(272), 1,
      anon_sym_COLON,
  [5122] = 1,
    ACTIONS(266), 1,
      anon_sym_COLON,
  [5126] = 1,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [5130] = 1,
    ACTIONS(276), 1,
      anon_sym_COLON,
  [5134] = 1,
    ACTIONS(304), 1,
      anon_sym_COLON,
  [5138] = 1,
    ACTIONS(262), 1,
      anon_sym_COLON,
  [5142] = 1,
    ACTIONS(740), 1,
      sym__text_line,
  [5146] = 1,
    ACTIONS(784), 1,
      ts_builtin_sym_end,
  [5150] = 1,
    ACTIONS(820), 1,
      sym__attr_value_ruby_s,
  [5154] = 1,
    ACTIONS(822), 1,
      sym_ruby,
  [5158] = 1,
    ACTIONS(824), 1,
      sym__space,
  [5162] = 1,
    ACTIONS(826), 1,
      sym_css_identifier,
  [5166] = 1,
    ACTIONS(828), 1,
      sym_css_identifier,
  [5170] = 1,
    ACTIONS(830), 1,
      sym__attr_value_ruby_b,
  [5174] = 1,
    ACTIONS(832), 1,
      ts_builtin_sym_end,
  [5178] = 1,
    ACTIONS(834), 1,
      sym__text_line,
  [5182] = 1,
    ACTIONS(836), 1,
      sym__attr_value_ruby,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 273,
  [SMALL_STATE(6)] = 364,
  [SMALL_STATE(7)] = 452,
  [SMALL_STATE(8)] = 540,
  [SMALL_STATE(9)] = 628,
  [SMALL_STATE(10)] = 722,
  [SMALL_STATE(11)] = 796,
  [SMALL_STATE(12)] = 870,
  [SMALL_STATE(13)] = 944,
  [SMALL_STATE(14)] = 1018,
  [SMALL_STATE(15)] = 1092,
  [SMALL_STATE(16)] = 1130,
  [SMALL_STATE(17)] = 1168,
  [SMALL_STATE(18)] = 1211,
  [SMALL_STATE(19)] = 1257,
  [SMALL_STATE(20)] = 1303,
  [SMALL_STATE(21)] = 1327,
  [SMALL_STATE(22)] = 1373,
  [SMALL_STATE(23)] = 1397,
  [SMALL_STATE(24)] = 1421,
  [SMALL_STATE(25)] = 1467,
  [SMALL_STATE(26)] = 1513,
  [SMALL_STATE(27)] = 1559,
  [SMALL_STATE(28)] = 1610,
  [SMALL_STATE(29)] = 1661,
  [SMALL_STATE(30)] = 1712,
  [SMALL_STATE(31)] = 1739,
  [SMALL_STATE(32)] = 1790,
  [SMALL_STATE(33)] = 1841,
  [SMALL_STATE(34)] = 1892,
  [SMALL_STATE(35)] = 1913,
  [SMALL_STATE(36)] = 1942,
  [SMALL_STATE(37)] = 1971,
  [SMALL_STATE(38)] = 1993,
  [SMALL_STATE(39)] = 2009,
  [SMALL_STATE(40)] = 2025,
  [SMALL_STATE(41)] = 2041,
  [SMALL_STATE(42)] = 2057,
  [SMALL_STATE(43)] = 2073,
  [SMALL_STATE(44)] = 2099,
  [SMALL_STATE(45)] = 2114,
  [SMALL_STATE(46)] = 2143,
  [SMALL_STATE(47)] = 2158,
  [SMALL_STATE(48)] = 2173,
  [SMALL_STATE(49)] = 2188,
  [SMALL_STATE(50)] = 2217,
  [SMALL_STATE(51)] = 2232,
  [SMALL_STATE(52)] = 2247,
  [SMALL_STATE(53)] = 2262,
  [SMALL_STATE(54)] = 2277,
  [SMALL_STATE(55)] = 2292,
  [SMALL_STATE(56)] = 2321,
  [SMALL_STATE(57)] = 2336,
  [SMALL_STATE(58)] = 2351,
  [SMALL_STATE(59)] = 2380,
  [SMALL_STATE(60)] = 2395,
  [SMALL_STATE(61)] = 2424,
  [SMALL_STATE(62)] = 2439,
  [SMALL_STATE(63)] = 2468,
  [SMALL_STATE(64)] = 2494,
  [SMALL_STATE(65)] = 2520,
  [SMALL_STATE(66)] = 2546,
  [SMALL_STATE(67)] = 2572,
  [SMALL_STATE(68)] = 2598,
  [SMALL_STATE(69)] = 2624,
  [SMALL_STATE(70)] = 2650,
  [SMALL_STATE(71)] = 2676,
  [SMALL_STATE(72)] = 2702,
  [SMALL_STATE(73)] = 2728,
  [SMALL_STATE(74)] = 2754,
  [SMALL_STATE(75)] = 2780,
  [SMALL_STATE(76)] = 2806,
  [SMALL_STATE(77)] = 2832,
  [SMALL_STATE(78)] = 2858,
  [SMALL_STATE(79)] = 2884,
  [SMALL_STATE(80)] = 2910,
  [SMALL_STATE(81)] = 2936,
  [SMALL_STATE(82)] = 2962,
  [SMALL_STATE(83)] = 2988,
  [SMALL_STATE(84)] = 3014,
  [SMALL_STATE(85)] = 3040,
  [SMALL_STATE(86)] = 3066,
  [SMALL_STATE(87)] = 3092,
  [SMALL_STATE(88)] = 3118,
  [SMALL_STATE(89)] = 3144,
  [SMALL_STATE(90)] = 3170,
  [SMALL_STATE(91)] = 3196,
  [SMALL_STATE(92)] = 3219,
  [SMALL_STATE(93)] = 3232,
  [SMALL_STATE(94)] = 3252,
  [SMALL_STATE(95)] = 3272,
  [SMALL_STATE(96)] = 3292,
  [SMALL_STATE(97)] = 3312,
  [SMALL_STATE(98)] = 3332,
  [SMALL_STATE(99)] = 3352,
  [SMALL_STATE(100)] = 3372,
  [SMALL_STATE(101)] = 3392,
  [SMALL_STATE(102)] = 3412,
  [SMALL_STATE(103)] = 3432,
  [SMALL_STATE(104)] = 3452,
  [SMALL_STATE(105)] = 3472,
  [SMALL_STATE(106)] = 3492,
  [SMALL_STATE(107)] = 3512,
  [SMALL_STATE(108)] = 3532,
  [SMALL_STATE(109)] = 3552,
  [SMALL_STATE(110)] = 3572,
  [SMALL_STATE(111)] = 3592,
  [SMALL_STATE(112)] = 3612,
  [SMALL_STATE(113)] = 3632,
  [SMALL_STATE(114)] = 3645,
  [SMALL_STATE(115)] = 3662,
  [SMALL_STATE(116)] = 3679,
  [SMALL_STATE(117)] = 3694,
  [SMALL_STATE(118)] = 3707,
  [SMALL_STATE(119)] = 3720,
  [SMALL_STATE(120)] = 3733,
  [SMALL_STATE(121)] = 3750,
  [SMALL_STATE(122)] = 3767,
  [SMALL_STATE(123)] = 3784,
  [SMALL_STATE(124)] = 3799,
  [SMALL_STATE(125)] = 3816,
  [SMALL_STATE(126)] = 3833,
  [SMALL_STATE(127)] = 3850,
  [SMALL_STATE(128)] = 3863,
  [SMALL_STATE(129)] = 3876,
  [SMALL_STATE(130)] = 3889,
  [SMALL_STATE(131)] = 3904,
  [SMALL_STATE(132)] = 3921,
  [SMALL_STATE(133)] = 3936,
  [SMALL_STATE(134)] = 3949,
  [SMALL_STATE(135)] = 3962,
  [SMALL_STATE(136)] = 3976,
  [SMALL_STATE(137)] = 3984,
  [SMALL_STATE(138)] = 3998,
  [SMALL_STATE(139)] = 4012,
  [SMALL_STATE(140)] = 4026,
  [SMALL_STATE(141)] = 4040,
  [SMALL_STATE(142)] = 4054,
  [SMALL_STATE(143)] = 4068,
  [SMALL_STATE(144)] = 4082,
  [SMALL_STATE(145)] = 4096,
  [SMALL_STATE(146)] = 4110,
  [SMALL_STATE(147)] = 4124,
  [SMALL_STATE(148)] = 4138,
  [SMALL_STATE(149)] = 4152,
  [SMALL_STATE(150)] = 4166,
  [SMALL_STATE(151)] = 4180,
  [SMALL_STATE(152)] = 4194,
  [SMALL_STATE(153)] = 4208,
  [SMALL_STATE(154)] = 4220,
  [SMALL_STATE(155)] = 4234,
  [SMALL_STATE(156)] = 4243,
  [SMALL_STATE(157)] = 4252,
  [SMALL_STATE(158)] = 4261,
  [SMALL_STATE(159)] = 4272,
  [SMALL_STATE(160)] = 4283,
  [SMALL_STATE(161)] = 4294,
  [SMALL_STATE(162)] = 4303,
  [SMALL_STATE(163)] = 4312,
  [SMALL_STATE(164)] = 4321,
  [SMALL_STATE(165)] = 4330,
  [SMALL_STATE(166)] = 4339,
  [SMALL_STATE(167)] = 4348,
  [SMALL_STATE(168)] = 4357,
  [SMALL_STATE(169)] = 4370,
  [SMALL_STATE(170)] = 4381,
  [SMALL_STATE(171)] = 4392,
  [SMALL_STATE(172)] = 4401,
  [SMALL_STATE(173)] = 4410,
  [SMALL_STATE(174)] = 4423,
  [SMALL_STATE(175)] = 4434,
  [SMALL_STATE(176)] = 4443,
  [SMALL_STATE(177)] = 4452,
  [SMALL_STATE(178)] = 4463,
  [SMALL_STATE(179)] = 4474,
  [SMALL_STATE(180)] = 4485,
  [SMALL_STATE(181)] = 4494,
  [SMALL_STATE(182)] = 4503,
  [SMALL_STATE(183)] = 4512,
  [SMALL_STATE(184)] = 4521,
  [SMALL_STATE(185)] = 4530,
  [SMALL_STATE(186)] = 4539,
  [SMALL_STATE(187)] = 4548,
  [SMALL_STATE(188)] = 4557,
  [SMALL_STATE(189)] = 4564,
  [SMALL_STATE(190)] = 4573,
  [SMALL_STATE(191)] = 4582,
  [SMALL_STATE(192)] = 4593,
  [SMALL_STATE(193)] = 4603,
  [SMALL_STATE(194)] = 4609,
  [SMALL_STATE(195)] = 4615,
  [SMALL_STATE(196)] = 4621,
  [SMALL_STATE(197)] = 4631,
  [SMALL_STATE(198)] = 4641,
  [SMALL_STATE(199)] = 4649,
  [SMALL_STATE(200)] = 4659,
  [SMALL_STATE(201)] = 4669,
  [SMALL_STATE(202)] = 4679,
  [SMALL_STATE(203)] = 4687,
  [SMALL_STATE(204)] = 4695,
  [SMALL_STATE(205)] = 4703,
  [SMALL_STATE(206)] = 4713,
  [SMALL_STATE(207)] = 4719,
  [SMALL_STATE(208)] = 4724,
  [SMALL_STATE(209)] = 4729,
  [SMALL_STATE(210)] = 4734,
  [SMALL_STATE(211)] = 4739,
  [SMALL_STATE(212)] = 4744,
  [SMALL_STATE(213)] = 4749,
  [SMALL_STATE(214)] = 4754,
  [SMALL_STATE(215)] = 4759,
  [SMALL_STATE(216)] = 4766,
  [SMALL_STATE(217)] = 4771,
  [SMALL_STATE(218)] = 4776,
  [SMALL_STATE(219)] = 4783,
  [SMALL_STATE(220)] = 4788,
  [SMALL_STATE(221)] = 4793,
  [SMALL_STATE(222)] = 4798,
  [SMALL_STATE(223)] = 4805,
  [SMALL_STATE(224)] = 4810,
  [SMALL_STATE(225)] = 4815,
  [SMALL_STATE(226)] = 4820,
  [SMALL_STATE(227)] = 4827,
  [SMALL_STATE(228)] = 4832,
  [SMALL_STATE(229)] = 4837,
  [SMALL_STATE(230)] = 4842,
  [SMALL_STATE(231)] = 4847,
  [SMALL_STATE(232)] = 4852,
  [SMALL_STATE(233)] = 4857,
  [SMALL_STATE(234)] = 4862,
  [SMALL_STATE(235)] = 4869,
  [SMALL_STATE(236)] = 4874,
  [SMALL_STATE(237)] = 4879,
  [SMALL_STATE(238)] = 4884,
  [SMALL_STATE(239)] = 4889,
  [SMALL_STATE(240)] = 4894,
  [SMALL_STATE(241)] = 4899,
  [SMALL_STATE(242)] = 4904,
  [SMALL_STATE(243)] = 4909,
  [SMALL_STATE(244)] = 4914,
  [SMALL_STATE(245)] = 4919,
  [SMALL_STATE(246)] = 4926,
  [SMALL_STATE(247)] = 4931,
  [SMALL_STATE(248)] = 4936,
  [SMALL_STATE(249)] = 4941,
  [SMALL_STATE(250)] = 4946,
  [SMALL_STATE(251)] = 4951,
  [SMALL_STATE(252)] = 4956,
  [SMALL_STATE(253)] = 4961,
  [SMALL_STATE(254)] = 4966,
  [SMALL_STATE(255)] = 4973,
  [SMALL_STATE(256)] = 4978,
  [SMALL_STATE(257)] = 4983,
  [SMALL_STATE(258)] = 4988,
  [SMALL_STATE(259)] = 4993,
  [SMALL_STATE(260)] = 4998,
  [SMALL_STATE(261)] = 5003,
  [SMALL_STATE(262)] = 5008,
  [SMALL_STATE(263)] = 5013,
  [SMALL_STATE(264)] = 5018,
  [SMALL_STATE(265)] = 5023,
  [SMALL_STATE(266)] = 5028,
  [SMALL_STATE(267)] = 5033,
  [SMALL_STATE(268)] = 5038,
  [SMALL_STATE(269)] = 5043,
  [SMALL_STATE(270)] = 5048,
  [SMALL_STATE(271)] = 5053,
  [SMALL_STATE(272)] = 5058,
  [SMALL_STATE(273)] = 5062,
  [SMALL_STATE(274)] = 5066,
  [SMALL_STATE(275)] = 5070,
  [SMALL_STATE(276)] = 5074,
  [SMALL_STATE(277)] = 5078,
  [SMALL_STATE(278)] = 5082,
  [SMALL_STATE(279)] = 5086,
  [SMALL_STATE(280)] = 5090,
  [SMALL_STATE(281)] = 5094,
  [SMALL_STATE(282)] = 5098,
  [SMALL_STATE(283)] = 5102,
  [SMALL_STATE(284)] = 5106,
  [SMALL_STATE(285)] = 5110,
  [SMALL_STATE(286)] = 5114,
  [SMALL_STATE(287)] = 5118,
  [SMALL_STATE(288)] = 5122,
  [SMALL_STATE(289)] = 5126,
  [SMALL_STATE(290)] = 5130,
  [SMALL_STATE(291)] = 5134,
  [SMALL_STATE(292)] = 5138,
  [SMALL_STATE(293)] = 5142,
  [SMALL_STATE(294)] = 5146,
  [SMALL_STATE(295)] = 5150,
  [SMALL_STATE(296)] = 5154,
  [SMALL_STATE(297)] = 5158,
  [SMALL_STATE(298)] = 5162,
  [SMALL_STATE(299)] = 5166,
  [SMALL_STATE(300)] = 5170,
  [SMALL_STATE(301)] = 5174,
  [SMALL_STATE(302)] = 5178,
  [SMALL_STATE(303)] = 5182,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcuts, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcuts, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 7),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcut_id, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcut_id, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 8),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcut_class, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcut_class, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_shortcut, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_shortcut, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 10),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 12),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__output_modifiers, 2, 0, 0),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2, 0, 0), SHIFT_REPEAT(34),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_modifier, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_modifier, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_plain, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__attrs_plain, 2, 0, 0), SHIFT(92),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_plain, 2, 0, 0),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__attrs_plain, 2, 0, 0), SHIFT(168),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1, 0, 15),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1, 0, 15),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3, 0, 14),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 3, 0, 14),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 4, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 8),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrs, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attrs, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 4, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 4, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 12),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 5, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 5, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 4, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 4, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 7),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 5, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 5, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 5, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 5, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 5),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 3, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 10),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 0),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 0),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 0),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_name, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_name, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_boolean, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_boolean, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2, 0, 0), SHIFT_REPEAT(188),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 1, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 3, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment_conditional_incomplete, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 2, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 3, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine_name, 1, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2, 0, 0),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 3, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 3, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 2, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 3, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 4, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 4, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 2, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 4, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 2, 0, 0),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_text_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_text_repeat1, 2, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_control, 2, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 11),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 11),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 1, 0, 6),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 1, 0, 6),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_b, 1, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_b, 1, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_text, 1, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 1, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_splat_p, 2, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_splat_p, 2, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 11),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 11),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_s, 3, 0, 14),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_s, 3, 0, 14),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_splat_s, 2, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_splat_s, 2, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_value_s, 1, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_value_s, 1, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_splat_b, 2, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_splat_b, 2, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 11),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 11),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_comment, 1, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 1, 0, 6),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 1, 0, 6),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_p, 3, 0, 14),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_p, 3, 0, 14),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_condition, 1, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment_conditional_incomplete, 2, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_value_p, 1, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_value_p, 1, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 4, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_b, 3, 0, 14),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_b, 3, 0, 14),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_value_b, 1, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_value_b, 1, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_p, 1, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_p, 1, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 1, 0, 6),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 1, 0, 6),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_s, 1, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_s, 1, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 5, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 3, 0, 0),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 4, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 5, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype_xml, 1, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 10),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_xhtml, 1, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_html5, 1, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 7),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 8),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 5, 0, 16),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 5, 0, 16),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 5),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_control, 3, 0, 9),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 5, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, 0, 12),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 6, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 3, 0, 9),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 3, 0, 9),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 4, 0, 0),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ruby_block, 1, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested, 1, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 2, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_inline_expansion, 2, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 3, 0, 0),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 5, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_inline, 1, 0, 0),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_text, 2, 0, 0),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 4, 0, 13),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 4, 0, 13),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 4, 0, 13),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype_xml, 2, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 2, 0, 0),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_comment, 2, 0, 0),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 4),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 3, 0, 9),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [818] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__block_start = 0,
  ts_external_token__block_end = 1,
  ts_external_token__line_separator = 2,
  ts_external_token__attr_value_quoted = 3,
  ts_external_token__attr_value_ruby = 4,
  ts_external_token__attr_value_ruby_p = 5,
  ts_external_token__attr_value_ruby_s = 6,
  ts_external_token__attr_value_ruby_b = 7,
  ts_external_token_ruby = 8,
  ts_external_token__error_sentinel = 9,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__block_start] = sym__block_start,
  [ts_external_token__block_end] = sym__block_end,
  [ts_external_token__line_separator] = sym__line_separator,
  [ts_external_token__attr_value_quoted] = sym__attr_value_quoted,
  [ts_external_token__attr_value_ruby] = sym__attr_value_ruby,
  [ts_external_token__attr_value_ruby_p] = sym__attr_value_ruby_p,
  [ts_external_token__attr_value_ruby_s] = sym__attr_value_ruby_s,
  [ts_external_token__attr_value_ruby_b] = sym__attr_value_ruby_b,
  [ts_external_token_ruby] = sym_ruby,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[15][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__block_start] = true,
    [ts_external_token__block_end] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token__attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby] = true,
    [ts_external_token__attr_value_ruby_p] = true,
    [ts_external_token__attr_value_ruby_s] = true,
    [ts_external_token__attr_value_ruby_b] = true,
    [ts_external_token_ruby] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token__block_start] = true,
  },
  [3] = {
    [ts_external_token__block_end] = true,
  },
  [4] = {
    [ts_external_token__block_start] = true,
    [ts_external_token__block_end] = true,
    [ts_external_token__line_separator] = true,
  },
  [5] = {
    [ts_external_token_ruby] = true,
  },
  [6] = {
    [ts_external_token__block_end] = true,
    [ts_external_token__line_separator] = true,
  },
  [7] = {
    [ts_external_token__attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby] = true,
  },
  [8] = {
    [ts_external_token__attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_b] = true,
  },
  [9] = {
    [ts_external_token__attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_s] = true,
  },
  [10] = {
    [ts_external_token__attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_p] = true,
  },
  [11] = {
    [ts_external_token__attr_value_ruby_p] = true,
  },
  [12] = {
    [ts_external_token__attr_value_ruby] = true,
  },
  [13] = {
    [ts_external_token__attr_value_ruby_s] = true,
  },
  [14] = {
    [ts_external_token__attr_value_ruby_b] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_slim_external_scanner_create(void);
void tree_sitter_slim_external_scanner_destroy(void *);
bool tree_sitter_slim_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_slim_external_scanner_serialize(void *, char *);
void tree_sitter_slim_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_slim(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_slim_external_scanner_create,
      tree_sitter_slim_external_scanner_destroy,
      tree_sitter_slim_external_scanner_scan,
      tree_sitter_slim_external_scanner_serialize,
      tree_sitter_slim_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
