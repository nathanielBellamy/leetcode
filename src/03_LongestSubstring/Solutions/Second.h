//
// Created by ns on 2/5/25.
//

#ifndef LONGESTSUBSTRING_SOLUTIONS_SECOND_H
#define LONGESTSUBSTRING_SOLUTIONS_SECOND_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <tuple>
#include "Solution.h"

namespace LongestSubstring {
namespace Solutions {

class Second : public Solution {
  public:
    std::string getTitle() override;
    std::string getRuntimeComplexity() override;
    int longestSubstring(std::string s) override;
};

}  // Solutions
}  // LongestSubstring



#endif //LONGESTSUBSTRING_SOLUTIONS_SECOND_H
