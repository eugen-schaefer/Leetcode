//
// Created by eugen on 10.07.20.
//

#ifndef TWOSUM_H
#define TWOSUM_H

#include <iostream>
#include <vector>

class TwoSum {
   public:
    std::vector<int> twoSum(std::vector<int> &nums, int target) {
        std::vector<int> retVal{};
        for (auto outer = nums.begin(); outer != nums.end(); ++outer) {
            for (auto inner = (outer + 1); inner != nums.end(); ++inner) {
                if ((*outer + *inner) == target) {
                    retVal.emplace_back(std::distance(nums.begin(), outer));
                    retVal.emplace_back(std::distance(nums.begin(), inner));
                    break;
                }
            }
        }
        return retVal;
    }
};

#endif  // TWOSUM_H
