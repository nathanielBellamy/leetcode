//
// Created by ns on 2/01/25.
//

#ifndef MEDIANOFTWOSORTEDARRAYS_SOLUTION_H
#define MEDIANOFTWOSORTEDARRAYS_SOLUTION_H

#include <string>

namespace MedianOfTwoSortedArrays {
namespace Solutions {

class Solution {
  public:
    virtual std::string getTitle() = 0;
    virtual std::string getRuntimeComplexity() = 0;
    virtual int longestSubstring(std::string s) = 0;
};


} // Solutions
} // MedianOfTwoSortedArrays


#endif //MEDIANOFTWOSORTEDARRAYS_SOLUTION_H
