//
// Created by ns on 02/09/25.
//

#ifndef BENCHMARKLONGESTPALINDROME_H
#define BENCHMARKLONGESTPALINDROME_H

#include <benchmark/benchmark.h>
#include "Run.h"

static void BM_05_LongestPalindrome_First(benchmark::State& state) {
  LongestPalindrome::Run* run = new LongestPalindrome::Run();
  for (auto _ : state) {
    run->first();
  }
  delete run;
}

BENCHMARK(BM_05_LongestPalindrome_First);

#endif //BENCHMARKLONGESTPALINDROME_H
