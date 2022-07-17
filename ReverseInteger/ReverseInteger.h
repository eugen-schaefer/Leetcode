//
// Created by eugen on 12.07.20.
//

#ifndef REVERSEINTEGER_H
#define REVERSEINTEGER_H

#include <limits>
#include <math.h>
#include <vector>

class ReverseInteger {
   public:
    int reverse(int x) {
        std::vector<int> reverse_integer_vector{};
        while (x != 0) {
            reverse_integer_vector.push_back(x % 10);
            x /= 10;
        }

        int reverse_integer{};
        int place_value{static_cast<int>(reverse_integer_vector.size() - 1)};
        for (const auto elem : reverse_integer_vector) {
            if (place_value > 8 && abs(elem) > 2) {
                reverse_integer = 0;
                break;
            }

            int delta = elem * pow(10, place_value--);

            if (elem < 0) {
                if (reverse_integer <
                    (std::numeric_limits<int>::min() - delta)) {
                    reverse_integer = 0;
                    break;
                }
            } else {
                if (reverse_integer >
                    (std::numeric_limits<int>::max() - delta)) {
                    reverse_integer = 0;
                    break;
                }
            }

            reverse_integer += delta;
        }
        return reverse_integer;
    }
};

#endif  // REVERSEINTEGER_H
