//
// Created by ns on 1/27/25.
//

#ifndef OPTIMIZED_H
#define OPTIMIZED_H

#include <vector>
#include <string>
#include <unordered_map>

#include <benchmark/benchmark.h>

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
