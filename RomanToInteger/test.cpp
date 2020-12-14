#include "RomanToInteger.h"
#include "gtest/gtest.h"

class RomanToIntegerTest : public ::testing::Test {
   public:
    RomanToInteger unit;
};

TEST_F(RomanToIntegerTest, One) { EXPECT_EQ(1, unit.romanToInt("I")); }

TEST_F(RomanToIntegerTest, Five) { EXPECT_EQ(5, unit.romanToInt("V")); }

TEST_F(RomanToIntegerTest, Ten) { EXPECT_EQ(10, unit.romanToInt("X")); }

TEST_F(RomanToIntegerTest, Fifty) { EXPECT_EQ(50, unit.romanToInt("L")); }

TEST_F(RomanToIntegerTest, Hundred) { EXPECT_EQ(100, unit.romanToInt("C")); }

TEST_F(RomanToIntegerTest, FiveHundred) {
    EXPECT_EQ(500, unit.romanToInt("D"));
}

TEST_F(RomanToIntegerTest, Thousand) { EXPECT_EQ(1000, unit.romanToInt("M")); }

TEST_F(RomanToIntegerTest, Four) { EXPECT_EQ(4, unit.romanToInt("IV")); }

TEST_F(RomanToIntegerTest, Six) { EXPECT_EQ(6, unit.romanToInt("VI")); }

TEST_F(RomanToIntegerTest, Nine) { EXPECT_EQ(9, unit.romanToInt("IX")); }

TEST_F(RomanToIntegerTest, Eleven) { EXPECT_EQ(11, unit.romanToInt("XI")); }

TEST_F(RomanToIntegerTest, Fourty) { EXPECT_EQ(40, unit.romanToInt("XL")); }

TEST_F(RomanToIntegerTest, Sixty) { EXPECT_EQ(60, unit.romanToInt("LX")); }

TEST_F(RomanToIntegerTest, Ninety) { EXPECT_EQ(90, unit.romanToInt("XC")); }

TEST_F(RomanToIntegerTest, HundredTen) {
    EXPECT_EQ(110, unit.romanToInt("CX"));
}

TEST_F(RomanToIntegerTest, FourHundred) {
    EXPECT_EQ(400, unit.romanToInt("CD"));
}

TEST_F(RomanToIntegerTest, SixHundred) {
    EXPECT_EQ(600, unit.romanToInt("DC"));
}

TEST_F(RomanToIntegerTest, NineHundred) {
    EXPECT_EQ(900, unit.romanToInt("CM"));
}

TEST_F(RomanToIntegerTest, ElevenHundtred) {
    EXPECT_EQ(1100, unit.romanToInt("MC"));
}

TEST_F(RomanToIntegerTest, TwentySeven) {
    EXPECT_EQ(27, unit.romanToInt("XXVII"));
}

TEST_F(RomanToIntegerTest, Three) { EXPECT_EQ(3, unit.romanToInt("III")); }

TEST_F(RomanToIntegerTest, FiftyEight) {
    EXPECT_EQ(58, unit.romanToInt("LVIII"));
}

TEST_F(RomanToIntegerTest, ThousandNineHundredNinetyFour) {
    EXPECT_EQ(1994, unit.romanToInt("MCMXCIV"));
}

TEST_F(RomanToIntegerTest, ThousandNineHundredSeventyNine) {
    EXPECT_EQ(1979, unit.romanToInt("MCMLXXIX"));
}