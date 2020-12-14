#ifndef ROMAN_TO_INTEGER_H
#define ROMAN_TO_INTEGER_H

#include <map>
#include <string>

class RomanToInteger {
   public:
    std::map<char, int> roman_to_integer_map{{'I', 1},   {'V', 5},   {'X', 10},
                                             {'L', 50},  {'C', 100}, {'D', 500},
                                             {'M', 1000}};
    int romanToInt(std::string s) {
        // The Roman numeral consists of 1 letter
        if (s.size() == 1) {
            return roman_to_integer_map[s.at(0)];
        }

        // The Roman numeral consists of more than 1 letter
        int return_value{};
        for (size_t i = 0; i < s.size(); ++i) {
            // corner case:
            // I is placed before V (5) and X (10) to make 4 and 9
            if (s.at(i) == 'I' && i < s.size() - 1) {
                if (s.at(i + 1) == 'V') {
                    return_value += 4;
                    ++i;
                    continue;
                } else if (s.at(i + 1) == 'X') {
                    return_value += 9;
                    ++i;
                    continue;
                }
            }
            // corner case:
            // X is placed before L (50) and C (100) to make 40 and 90
            else if (s.at(i) == 'X' && i < s.size() - 1) {
                if (s.at(i + 1) == 'L') {
                    return_value += 40;
                    ++i;
                    continue;
                } else if (s.at(i + 1) == 'C') {
                    return_value += 90;
                    ++i;
                    continue;
                }
            }
            // corner case:
            // C is placed before D (500) and M (1000) to make 400 and 900
            else if (s.at(i) == 'C' && i < s.size() - 1) {
                if (s.at(i + 1) == 'D') {
                    return_value += 400;
                    ++i;
                    continue;
                } else if (s.at(i + 1) == 'M') {
                    return_value += 900;
                    ++i;
                    continue;
                }
            }
            // normal case:
            // Roman numerals are usually written largest to smallest from left
            // to right
            return_value += roman_to_integer_map[s.at(i)];
        }
        return return_value;
    }
};

#endif  // ROMAN_TO_INTEGER_H