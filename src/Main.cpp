//
// Created by ns on 1/26/25.
//

#include "Main.h"


int NSLC_main() {
  std::cout << " == NSLeetCode START ==" << std::endl;

  // 01_TwoSum
  TwoSum::Run twoSumRun;
  twoSumRun.run();

  std::cout << " == NSLeetCode END ==" << std::endl;
  return 0;
}

BENCHMARK_MAIN();
