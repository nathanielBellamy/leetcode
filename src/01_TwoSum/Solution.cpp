//
// Created by ns on 1/26/25.
//

#include "Solution.h"

namespace TwoSum {

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
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

} // TwoSum