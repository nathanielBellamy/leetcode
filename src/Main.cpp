//
// Created by ns on 1/26/25.
//

#include "Main.h"


#if NSLC_BENCHMARK
#else
int main() {
  std::cout << " == NSLeetCode START ==" << std::endl;

  // 01_TwoSum
  TwoSum::Run twoSumRun;
  twoSumRun.first();
  twoSumRun.optimized();

  std::cout << " == NSLeetCode END ==" << std::endl;
  return 0;
}
#endif
