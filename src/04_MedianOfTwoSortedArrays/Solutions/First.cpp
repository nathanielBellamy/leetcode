//
// Created by ns on 2/01/25.
//

#include "First.h"


namespace MedianOfTwoSortedArrays {
namespace Solutions {

std::string First::getTitle() {
  return "First";
};

std::string First::getRuntimeComplexity() {
  // TODO:
  // - a constraint on this problem is O(log(m+n))
  // - but this passed the leetcode submit with 3ms runtime so...maybe it is?
  // - so far, the leetcode runtime and the results from local benchmarking
  //   have been pretty different
  // - TODO: MedianOfTwoSortedArrays::Solutions::Second
  return "O(m+n)";
};

double First::findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
  std::vector<int> mergedVec;
  int nums1Size = nums1.size();
  int nums2Size = nums2.size();

  int numsOneIndex = 0;
  int numsTwoIndex = 0;
  bool nums1End = false;
  bool nums2End = false;

  if (nums1Size == 0)
    nums1End = true;
  if (nums2Size == 0)
    nums2End = true;

  while (!nums1End || !nums2End) {
    if (!nums1End && !nums2End) {
      int num1 = nums1[numsOneIndex];
      int num2 = nums2[numsTwoIndex];
      if (num1 < num2) {
        mergedVec.push_back(num1);
        numsOneIndex++;
      } else if (num1 > num2) {
        mergedVec.push_back(num2);
        numsTwoIndex++;
      } else { // equal
        mergedVec.push_back(num1);
        mergedVec.push_back(num2);
        numsOneIndex++;
        numsTwoIndex++;
      }
    } else if (nums1End) {
      mergedVec.push_back( nums2[numsTwoIndex] );
      numsTwoIndex++;
    } else if (nums2End) {
      mergedVec.push_back( nums1[numsOneIndex] );
      numsOneIndex++;
    }

    if (numsOneIndex == nums1Size) {
      nums1End = true;
    }

    if (numsTwoIndex == nums2Size) {
      nums2End = true;
    }
  }

  int mergedSize = mergedVec.size();
  if (mergedSize == 0)
    return 0.0;

  double result;
  if (mergedSize % 2 == 0) {
     int idx = mergedSize / 2;
     result = (mergedVec[idx] + mergedVec[idx - 1]) / 2.0;
  } else {
    int idx = std::ceil(mergedSize / 2);
    result = mergedVec[idx];
  }

  return result;
};

} // Solutions
} // MedianOfTwoSortedArrays