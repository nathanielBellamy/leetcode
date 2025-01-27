//
// Created by ns on 1/26/25.
//

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include "Example.h"

namespace TwoSum {

class Solution {
  public:
    std::vector<int> twoSum(std::vector<int>& nums, int target);

    std::vector<Example> examples = {
        {
            { 3, 2, 4 },
            6,
            { 1, 2 }
        },
        {
            { 2, 7, 11, 15 },
            9,
            { 0, 1 }
        },
        {
            { 3, 3 },
            6,
            { 0, 1 }
        }
    };
};

}



#endif //SOLUTION_H
