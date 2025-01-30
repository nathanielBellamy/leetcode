//
// Created by ns on 1/27/25.
//

#include "Second.h"

namespace TwoSum {
namespace Solutions {

std::string Second::getTitle() {
  return "Second";
}

std::string Second::getRuntimeComplexity() {
  return "O(n)";
}

std::vector<int> Second::twoSum(std::vector<int>& nums, int target) {
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
