
#include "Solution_ReverseInteger.h"
#include "gtest/gtest.h"

TEST(ReverseIntegerTest, OneDigitNumber){
    Solution_ReverseInteger unit;
    int input_number{1};
    int output_number{unit.reverse(input_number)};
    int expected_number{1};
    EXPECT_EQ(expected_number, output_number);
}

TEST(ReverseIntegerTest, TwoDigitNumber){
    Solution_ReverseInteger unit;
    int input_number{12};
    int output_number{unit.reverse(input_number)};
    int expected_number{21};
    EXPECT_EQ(expected_number, output_number);
}

TEST(ReverseIntegerTest, ThreeDigitNumber){
    Solution_ReverseInteger unit;
    int input_number{123};
    int output_number{unit.reverse(input_number)};
    int expected_number{321};
    EXPECT_EQ(expected_number, output_number);
}

TEST(ReverseIntegerTest, NineDigitNumber){
    Solution_ReverseInteger unit;
    int input_number{123456789};
    int output_number{unit.reverse(input_number)};
    int expected_number{987654321};
    EXPECT_EQ(expected_number, output_number);
}