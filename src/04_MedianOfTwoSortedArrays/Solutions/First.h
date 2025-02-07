//
// Created by ns on 2/01/25.
//

#ifndef MEDIANOFTWOSORTEDARRAYS_SOLUTIONS_FIRST_H
#define MEDIANOFTWOSORTEDARRAYS_SOLUTIONS_FIRST_H

#include <iostream>
#include <vector>
#include <cmath>
#include "Solution.h"

namespace MedianOfTwoSortedArrays {
namespace Solutions {

class First : public Solution {
  public:
    std::string getTitle() override;
    std::string getRuntimeComplexity() override;
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) override;

};

}  // Solutions
}  // MedianOfTwoSortedArrays



#endif //MEDIANOFTWOSORTEDARRAYS_SOLUTIONS_FIRST_H
