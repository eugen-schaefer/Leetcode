#include "LongestCommonPrefix.h"
#include "gtest/gtest.h"

TEST(LongestCommonPrefix, fl) {
    LongestCommonPrefix unit{};
    std::vector<std::string> any_array_of_strings{"flower", "flow", "flight"};
    EXPECT_EQ("fl", unit.longestCommonPrefix(any_array_of_strings));
}

TEST(LongestCommonPrefix, abcdefg) {
    LongestCommonPrefix unit{};
    std::vector<std::string> any_array_of_strings{
        "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg"};
    EXPECT_EQ("abcdefg", unit.longestCommonPrefix(any_array_of_strings));
}

TEST(LongestCommonPrefix, no_common_prefix) {
    LongestCommonPrefix unit{};
    std::vector<std::string> any_array_of_strings{"dog", "racecar", "car"};
    EXPECT_EQ("", unit.longestCommonPrefix(any_array_of_strings));
}

TEST(LongestCommonPrefix, no_common_prefix_because_of_empty_arg_list) {
    LongestCommonPrefix unit{};
    std::vector<std::string> any_array_of_strings{};
    EXPECT_EQ("", unit.longestCommonPrefix(any_array_of_strings));
}