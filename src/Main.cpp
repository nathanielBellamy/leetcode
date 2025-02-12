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
//  LongestPalindrome::Run* longestPalindromeRun = new LongestPalindrome::Run();
//  longestPalindromeRun->run();
//  delete longestPalindromeRun;

  // 06_ZigZagConversion
//  ZigZagConversion::Run* zigZagConversionRun = new ZigZagConversion::Run();
//  zigZagConversionRun->run();
//  delete zigZagConversionRun;

  // 07_ReverseInteger
  ReverseInteger::Run* reverseInteger = new ReverseInteger::Run();
  reverseInteger->run();
  delete reverseInteger;


  std::cout << " == NSLeetCode END ==" << std::endl;
  return 0;
}
#endif
