#ifndef PALINDROME_NUMBER_H
#define PALINDROME_NUMBER_H

#include <string>

class PalindromeNumber {
   public:
    bool isPalindrome(int x) {
        std::string str_number{std::to_string(x)};
        long unsigned int number_digits{str_number.length()};
        for (size_t i = 0; i < number_digits / 2; i++) {
            if (str_number.at(i) != str_number.at(number_digits - 1 - i)) {
                return false;
            }
        }
        return true;
    }
};

#endif  // PALINDROME_NUMBER_H