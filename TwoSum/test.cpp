
#include "TwoSum.h"
#include "gtest/gtest.h"

TEST(TwoSumTest, 4DVector_Indexes_0_1_meet_the_target) {
    TwoSum unit;
    std::vector input_vector{2, 7, 11, 15};
    int target{9};
    std::vector output_vector{unit.twoSum(input_vector, target)};
    std::vector expected_vector{0, 1};
    EXPECT_EQ(expected_vector, output_vector);
}

TEST(TwoSumTest, 3DVector_Indexes_1_2_meet_the_target) {
    TwoSum unit;
    std::vector input_vector{3, 2, 4};
    int target{6};
    std::vector output_vector{unit.twoSum(input_vector, target)};
    std::vector expected_vector{1, 2};
    EXPECT_EQ(expected_vector, output_vector);
}

TEST(TwoSumTest, 2DVector_Indexes_0_1_meet_the_target) {
    TwoSum unit;
    std::vector input_vector{3, 3};
    int target{6};
    std::vector output_vector{unit.twoSum(input_vector, target)};
    std::vector expected_vector{0, 1};
    EXPECT_EQ(expected_vector, output_vector);
}