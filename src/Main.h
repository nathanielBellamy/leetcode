//
// Created by ns on 1/26/25.
//

#ifndef MAIN_H
#define MAIN_H

#include <iostream>

// helpers
#include <benchmark/benchmark.h>

// problems
#include "./01_TwoSum/Run.h"
#include "./01_TwoSum/BenchmarkTwoSum.h"
#include "./02_AddTwoNumbers/Run.h"
#include "./02_AddTwoNumbers/BenchmarkAddTwoNumbers.h"

#define NSLC_BENCHMARK false

#if NSLC_BENCHMARK
BENCHMARK_MAIN();
#else
int main();
#endif


#endif //MAIN_H
