#include <iostream>
#include <limits>

#include "Solution_ReverseInteger.h"

int main() {
    std::cout << "Execution of Reverse Integer" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    int any_integer = 2147483621;
    Solution_ReverseInteger RevInt{};
    std::cout << any_integer << " <<<<<<<<<<>>>>>>>>>>> "
              << RevInt.reverse(any_integer) << std::endl;
    std::cout << "=======================================" << std::endl;

    return 0;
}
