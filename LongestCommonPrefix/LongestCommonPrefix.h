#ifndef LONGEST_COMMON_PREFIX_H
#define LONGEST_COMMON_PREFIX_H

#include <string>
#include <vector>

class LongestCommonPrefix {
   public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string ret_string{};
        if (strs.size() == 0) {
            return ret_string;
        }

        std::string first_str_element{strs.at(0)};
        for (size_t letter_idx = 0; letter_idx < first_str_element.size();
             ++letter_idx) {
            int count{1};
            std::string letter_first_str{first_str_element.at(letter_idx)};
            for (size_t i = 1; i < strs.size(); ++i) {
                std::string next_str_element{strs.at(i)};
                if (letter_idx < next_str_element.size()) {
                    std::string letter_next_str{
                        next_str_element.at(letter_idx)};
                    if (letter_first_str == letter_next_str) {
                        ++count;
                        continue;
                    } else {
                        return ret_string;
                    }
                } else {
                    return ret_string;
                }
            }
            if (count == strs.size()) {
                ret_string.append(letter_first_str);
            }
        }
        return ret_string;
    }
};

#endif  // LONGEST_COMMON_PREFIX_H