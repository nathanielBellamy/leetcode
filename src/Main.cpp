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

    // 03_LongestSubstring
//  LongestSubstring::Run* RunlongestSubstringRun = new LongestSubstring::Run();
//  longestSubstringRun->run();
//  delete longestSubstringRun;

  // 04_MedianOfTwoSortedArrays
//  MedianOfTwoSortedArrays::Run* medianOfTwoSortedArraysRun = new MedianOfTwoSortedArrays::Run();
//  medianOfTwoSortedArraysRun->run();
//  delete medianOfTwoSortedArraysRun;

  // 05_LongestPalindrome
  LongestPalindrome::Run* longestPalindromeRun = new LongestPalindrome::Run();
  longestPalindromeRun->run();

  std::cout << " == NSLeetCode END ==" << std::endl;
  return 0;
}
#endif
