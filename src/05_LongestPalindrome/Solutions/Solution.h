//
// Created by ns on 2/09/25.
//

#ifndef LONGESTPALINDROME_SOLUTION_H
#define LONGESTPALINDROME_SOLUTION_H

#include <string>

namespace LongestPalindrome {
namespace Solutions {

class Solution {
  public:
    virtual std::string getTitle() = 0;
    virtual std::string getRuntimeComplexity() = 0;
    virtual std::string longestPalindrome(std::string s) = 0;
};


} // Solutions
} // LongestPalindrome


#endif //LONGESTPALINDROME_SOLUTION_H
