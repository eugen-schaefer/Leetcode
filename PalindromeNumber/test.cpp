#include "PalindromeNumber.h"
#include "gtest/gtest.h"

TEST(PalindromeNumberTest, OneDigitNumber) {
    PalindromeNumber unit;
    int input_number{1};
    EXPECT_TRUE(unit.isPalindrome(input_number));
}

TEST(PalindromeNumberTest, TwoDigitNumberNonPalindrome) {
    PalindromeNumber unit;
    int input_number{10};
    EXPECT_FALSE(unit.isPalindrome(input_number));
}

TEST(PalindromeNumberTest, TwoDigitNumberPalindrome) {
    PalindromeNumber unit;
    int input_number{11};
    EXPECT_TRUE(unit.isPalindrome(input_number));
}

TEST(PalindromeNumberTest, ThreeDigitNumberPalindrome) {
    PalindromeNumber unit;
    int input_number{121};
    EXPECT_TRUE(unit.isPalindrome(input_number));
}

TEST(PalindromeNumberTest, NegativeThreeDigitNumberNonPalindrome) {
    PalindromeNumber unit;
    int input_number{-121};
    EXPECT_FALSE(unit.isPalindrome(input_number));
}

TEST(PalindromeNumberTest, ThreeDigitNumberNonPalindrome) {
    PalindromeNumber unit;
    int input_number{123};
    EXPECT_FALSE(unit.isPalindrome(input_number));
}

TEST(PalindromeNumberTest, NineDigitNumberPalindrome) {
    PalindromeNumber unit;
    int input_number{123454321};
    EXPECT_TRUE(unit.isPalindrome(input_number));
}