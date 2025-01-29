//
// Created by ns on 1/27/25.
//

#ifndef FIRST_H
#define FIRST_H

#include <vector>
#include <string>
#include "./Solution.h"

namespace TwoSum {
namespace Solutions {

class First : public Solution {
  public:
    std::string getTitle() override;
    std::string getRuntimeComplexity() override;
    std::vector<int> twoSum(std::vector<int>& nums, int target) override;
};

} // Solutions
} // TwoSum



#endif //FIRST_H
