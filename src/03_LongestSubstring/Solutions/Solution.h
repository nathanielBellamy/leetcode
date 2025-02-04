//
// Created by ns on 2/01/25.
//

#ifndef LONGESTSUBSTRING_SOLUTION_H
#define LONGESTSUBSTRING_SOLUTION_H

#include <string>

namespace LongestSubstring {
namespace Solutions {

class Solution {
  public:
    virtual std::string getTitle() = 0;
    virtual std::string getRuntimeComplexity() = 0;
    virtual int longestSubstring(std::string s) = 0;
};


} // Solutions
} // LongestSubstring


#endif //LONGESTSUBSTRING_SOLUTION_H
