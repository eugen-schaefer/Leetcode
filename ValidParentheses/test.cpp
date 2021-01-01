#include "ValidParentheses.h"
#include "gtest/gtest.h"

TEST(ValidParenthesesTest, invalid_odd_number_of_brackets) {
  ValidParentheses unit{};
  EXPECT_FALSE(unit.isValid("())"));
}

TEST(ValidParenthesesTest, valid_round_brackets) {
  ValidParentheses unit{};
  EXPECT_TRUE(unit.isValid("()"));
}

TEST(ValidParenthesesTest, valid_curly_brackets) {
  ValidParentheses unit{};
  EXPECT_TRUE(unit.isValid("{}"));
}

TEST(ValidParenthesesTest, valid_square_brackets) {
  ValidParentheses unit{};
  EXPECT_TRUE(unit.isValid("[]"));
}

TEST(ValidParenthesesTest, valid_round_curly_square_brackets_nested) {
  ValidParentheses unit{};
  EXPECT_TRUE(unit.isValid("({[]})"));
}

TEST(ValidParenthesesTest, valid_round_curly_square_brackets_not_nested) {
  ValidParentheses unit{};
  EXPECT_TRUE(unit.isValid("(){}[]"));
}

TEST(ValidParenthesesTest, invalid_round_square_brackets_one_pair) {
  ValidParentheses unit{};
  EXPECT_FALSE(unit.isValid("(]"));
}

TEST(ValidParenthesesTest, invalid_round_square_brackets_two_pairs) {
  ValidParentheses unit{};
  EXPECT_FALSE(unit.isValid("([)]"));
}

TEST(ValidParenthesesTest, valid_curly_square_brackets_two_pairs) {
  ValidParentheses unit{};
  EXPECT_TRUE(unit.isValid("{[]}"));
}

TEST(ValidParenthesesTest, valid_brackets_nested_and_pairs_mixed) {
  ValidParentheses unit{};
  EXPECT_TRUE(unit.isValid("(([]){})"));
}

