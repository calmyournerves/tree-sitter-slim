// Based on tree-sitter-python:
// https://github.com/tree-sitter/tree-sitter-python/blob/master/src/scanner.cc

// TODO: change to <...> after configuring clangd
#include "tree_sitter/parser.h"
#include <ostream>
#include <vector>
#include <iostream>
#include <cassert>

enum TokenType {
  INDENT,
  DEDENT,
  RUBY
};

class Scanner {
  std::vector<uint16_t> indents;
  int dedents_to_output = 0;

public:
  unsigned serialize(char *buffer) {
    std::vector<uint16_t>::iterator iter = indents.begin() + 1, end = indents.end();

    size_t i = 0;
    for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
      buffer[i++] = (char)*iter; // FIXME: write 16-bit values
    }
    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    indents.clear();
    indents.push_back(0);

    if (length == 0) {
      return;
    }

    size_t i = 0;
    for (; i < length; i++) {
      indents.push_back((uint16_t)buffer[i]); // FIXME: read 16-bit values
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    bool found_end_of_line = false;
    int indent_length = 0;

    // if(valid_symbols[RUBY]) {
    //   return scan_ruby(lexer, valid_symbols);
    // }

    if (valid_symbols[INDENT] || valid_symbols[DEDENT]) {
      for(;;) {
        // Skip and count spaces
        if (lexer->lookahead == ' ') {
          indent_length++;
          lexer->advance(lexer, true);
        } else if (lexer->lookahead == '\t') {
          // Tab size is configurable in slim, we support only tab size of 4
          indent_length += 4;
          lexer->advance(lexer, true);
        } else if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
          dedents_to_output = 0;
          return false;
        } else {
          break;
        }
      }

      assert(!indents.empty());

      if (!indents.empty()) {
        uint16_t current_indent_length = indents.back();

        if (valid_symbols[INDENT] && indent_length > current_indent_length) {
          indents.push_back(indent_length);
          lexer->result_symbol = INDENT;
          return true;
        }

        if (valid_symbols[DEDENT] && indent_length < current_indent_length) {
          auto indent = indents.end();
          for (;;) {
            if (indent == indents.begin()) {
              break;
            }
            indent--;

            if (indent_length == *indent) {
              break;
            } else if (indent_length > *indent) {
              // We didn't found matching indent
              dedents_to_output = 0;
              return false;
            }

            dedents_to_output++;
          }

          if (dedents_to_output > 0) {
            lexer->result_symbol = DEDENT;
            dedents_to_output--;
            return true;
          } else {
            // Shouldn't happen probably
            assert(false && "No dedents to output");
            return false;
          }
        }
      }
    }

    return false;
  }

  bool scan_ruby(TSLexer *lexer, const bool *valid_symbols) {
    bool ruby_continue_line = false;
    for(;;) {
      if (lexer->lookahead == '\n') {
        if (!ruby_continue_line) {
          lexer->result_symbol = RUBY;
          return true;
        } else {
          ruby_continue_line = false;
          lexer->advance(lexer, false); // TODO: maybe don't treat as space
        }
      } else if (lexer->lookahead == ',' || lexer->lookahead == '\\') {
        lexer->advance(lexer, false);
        ruby_continue_line = true;
      } else if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
        lexer->advance(lexer, false);  // TODO: maybe don't treat as space
      } else if (lexer->lookahead == 0) {
        lexer->result_symbol = RUBY;
        return true;
      } else {
        ruby_continue_line = false;
        lexer->advance(lexer, false);
      }
    }
  }
};

extern "C" {
  void * tree_sitter_slim_external_scanner_create() {
    return new Scanner();
  }

  void tree_sitter_slim_external_scanner_destroy(void *payload) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
  }

  unsigned tree_sitter_slim_external_scanner_serialize(
                                                       void *payload,
                                                       char *buffer
                                                       ) {
      Scanner *scanner = static_cast<Scanner *>(payload);
      return scanner->serialize(buffer);
  }

  void tree_sitter_slim_external_scanner_deserialize(
                                                     void *payload,
                                                     const char *buffer,
                                                     unsigned length
                                                     ) {
      Scanner *scanner = static_cast<Scanner *>(payload);
      scanner->deserialize(buffer, length);
  }

  bool tree_sitter_slim_external_scanner_scan(
                                              void *payload,
                                              TSLexer *lexer,
                                              const bool *valid_symbols
                                              ) {
      Scanner *scanner = static_cast<Scanner *>(payload);
      return scanner->scan(lexer, valid_symbols);
  }
}
