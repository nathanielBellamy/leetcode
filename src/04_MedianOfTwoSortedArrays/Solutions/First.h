//
// Created by ns on 2/01/25.
//

#ifndef MEDIANOFTWOSORTEDARRAYS_SOLUTIONS_FIRST_H
#define MEDIANOFTWOSORTEDARRAYS_SOLUTIONS_FIRST_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <tuple>
#include "Solution.h"

namespace MedianOfTwoSortedArrays {
namespace Solutions {

class First : public Solution {
  public:
    std::string getTitle() override;
    std::string getRuntimeComplexity() override;
    int longestSubstring(std::string s) override;

};

}  // Solutions
}  // MedianOfTwoSortedArrays



#endif //MEDIANOFTWOSORTEDARRAYS_SOLUTIONS_FIRST_H
