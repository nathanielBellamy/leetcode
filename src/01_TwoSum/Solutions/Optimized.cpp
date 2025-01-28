//
// Created by ns on 1/27/25.
//

#include "Optimized.h"

namespace TwoSum {
namespace Solutions {

std::vector<int> Optimized::twoSum(std::vector<int>& nums, int target) {
  std::vector<int> result;
  std::unordered_map<int, int> map;

  auto size = nums.size();
  for (int i = 0; i < size; i++) {
    const auto compliment = target - nums[i];
    if (map.find(compliment) != map.end()) {
      result.push_back(map.at(compliment));
      result.push_back(i);
      return result;
    }

    map.insert({nums[i], i});
  }

  return result;
}

} // Solutions
} // TwoSum
