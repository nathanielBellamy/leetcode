//
// Created by ns on 1/27/25.
//

#ifndef OPTIMIZED_H
#define OPTIMIZED_H

#include <vector>
#include <string>
#include <iostream>
#include <unordered_map>

#include "./Solution.h"

namespace TwoSum {
namespace Solutions {

class Optimized : public Solution {
  public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) override;
};

} // Solutions
} // TwoSum


#endif //OPTIMIZED_H
