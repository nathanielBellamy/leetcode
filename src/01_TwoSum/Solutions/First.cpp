//
// Created by ns on 1/27/25.
//

#include "First.h"
#include <iostream>

namespace TwoSum {
namespace Solutions {

std::string First::getTitle() {
  return "First";
}

std::string First::getRuntimeComplexity() {
  return "O(n^2)";
}

std::vector<int> First::twoSum(std::vector<int>& nums, int target) {
  std::vector<int> result;

  auto size = nums.size();
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (nums[i] + nums[j] == target) {
        result.push_back(i);
        result.push_back(j);
        return result;
      }
    }
  }

  return result;
}

} // Solutions
} // TwoSum