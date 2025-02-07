//
// Created by ns on 1/26/25.
//

#include "Main.h"


#if NSLC_BENCHMARK
#else
int main() {
  std::cout << " == NSLeetCode START ==" << std::endl;

  // 01_TwoSum
//  TwoSum::Run twoSumRun;
//  twoSumRun.run();

  // 02_AddTwoNumbers
//  AddTwoNumbers::Run addTwoNumbersRun;
//  addTwoNumbersRun.run();

//  // 03_LongestSubstring
//  LongestSubstring::Run longestSubstringRun;
//  longestSubstringRun.run();

  // 04_MedianOfTwoSortedArrays
  MedianOfTwoSortedArrays::Run medianOfTwoSortedArraysRun;
  medianOfTwoSortedArraysRun.run();

  std::cout << " == NSLeetCode END ==" << std::endl;
  return 0;
}
#endif
