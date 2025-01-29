//
// Created by ns on 1/27/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <string>

namespace TwoSum {
namespace Solutions {

class Solution {
  public:
    virtual std::string getTitle() = 0;
    virtual std::string getRuntimeComplexity() = 0;
    virtual std::vector<int> twoSum(std::vector<int>& nums, int target) = 0;
};


} // Solutions
} // TwoSum


#endif //SOLUTION_H
