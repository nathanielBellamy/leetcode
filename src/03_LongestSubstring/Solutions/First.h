//
// Created by ns on 2/01/25.
//

#ifndef LONGESTSUBSTRING_SOLUTIONS_FIRST_H
#define LONGESTSUBSTRING_SOLUTIONS_FIRST_H

#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
#include <tuple>
#include "Solution.h"

namespace LongestSubstring {
namespace Solutions {

class First : public Solution {
  public:
    std::string getTitle() override;
    std::string getRuntimeComplexity() override;
    int longestSubstring(std::string s) override;

};

}  // Solutions
}  // LongestSubstring



#endif //LONGESTSUBSTRING_SOLUTIONS_FIRST_H
