#ifndef VALID_PARENTHESES_H
#define VALID_PARENTHESES_H

#include <map>
#include <string>

class ValidParentheses {
 public:
  bool isValid(std::string s) {
    int number_brackets{static_cast<int>(s.size())};

    // Number of brackets is odd
    if (number_brackets % 2 != 0) {
      return false;
    }

    // Paired brackets
    bool is_valid{true};
    for (size_t i = 0; i < number_brackets - 1; i = i + 2) {
      auto left_bracket{s.at(i)};
      auto right_bracket{s.at(i + 1)};
      is_valid &= right_bracket == brackets[left_bracket];
      if (!is_valid) {
        break;
      }
    }
    if (is_valid) {
      return true;
    }

    // Nested brackets
    for (size_t i = 0; i < number_brackets / 2; ++i) {
      auto left_bracket{s.at(i)};
      auto right_bracket{s.at(number_brackets - i - 1)};
      if (right_bracket != brackets[left_bracket]) {
        return false;
      }
    }

    return true;
  }

 private:
  std::map<char, char> brackets{{'(', ')'}, {'{', '}'}, {'[', ']'}};
};

#endif  // VALID_PARENTHESES_H