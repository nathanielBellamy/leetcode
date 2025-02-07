//
// Created by ns on 2/01/25.
//

#ifndef MEDIANOFTWOSORTEDARRAYS_SOLUTION_H
#define MEDIANOFTWOSORTEDARRAYS_SOLUTION_H

#include <string>

namespace MedianOfTwoSortedArrays {
namespace Solutions {

class Solution {
  public:
    virtual std::string getTitle() = 0;
    virtual std::string getRuntimeComplexity() = 0;
    virtual double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) = 0;
};


} // Solutions
} // MedianOfTwoSortedArrays


#endif //MEDIANOFTWOSORTEDARRAYS_SOLUTION_H
