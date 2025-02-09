//
// Created by ns on 2/09/25.
//

#ifndef LONGESTPALINDROME_SOLUTIONS_FIRST_H
#define LONGESTPALINDROME_SOLUTIONS_FIRST_H

#include <iostream>
#include <vector>
#include <cmath>
#include "Solution.h"

namespace LongestPalindrome {
namespace Solutions {

class First : public Solution {
  public:
    std::string getTitle() override;
    std::string getRuntimeComplexity() override;
    std::string longestPalindrome(std::string s) override;

};

}  // Solutions
}  // LongestPalindrome



#endif //LONGESTPALINDROME_SOLUTIONS_FIRST_H
