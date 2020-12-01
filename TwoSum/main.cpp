#include <iostream>
#include <limits>
#include <vector>

#include "Solution_TwoSum.h"

int main() {
    std::cout << "Execution of Two Sum" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    
    std::vector<int> myVec{};
    myVec.push_back(5);
    myVec.push_back(2);
    myVec.push_back(7);
    myVec.push_back(6);
    myVec.push_back(9);
    myVec.push_back(13);


    for (auto const &elem : myVec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "Nested Loop" << std::endl;
    for (auto outer = myVec.begin(); outer != myVec.end(); ++outer) {
        for (auto inner = outer; inner != myVec.end(); ++inner) {
            std::cout << *inner << " ";
        }
        std::cout << std::endl;
    }


    std::vector<int> RetValSol1{};
    std::cout << "Solution 1" << std::endl;
    Solution_TwoSum sol{};
    RetValSol1 = sol.twoSum(myVec, 7);
    for (auto const &elem : RetValSol1) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "=======================================" << std::endl;
    return 0;
}
