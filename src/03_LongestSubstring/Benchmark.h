//
// Created by ns on 1/30/25.
//

#ifndef BENCHMARKLONGESTSUBSTRING_H
#define BENCHMARKLONGESTSUBSTRING_H

#include <benchmark/benchmark.h>
#include "Run.h"

static void BM_03_LongestSubstring_First(benchmark::State& state) {
  LongestSubstring::Run* run = new LongestSubstring::Run();
  for (auto _ : state) {
    run->first();
  }
  delete run;
}

static void BM_03_LongestSubstring_Second(benchmark::State& state) {
  LongestSubstring::Run* run = new LongestSubstring::Run();
  for (auto _ : state) {
    run->second();
  }
  delete run;
}

// NOTE:
// - benchmarking First here is skipped b/c we already know it is quite slow
// - Second is faster but also not the fastest
//BENCHMARK(BM_03_LongestSubstring_First);
BENCHMARK(BM_03_LongestSubstring_Second);

#endif //BENCHMARKLONGESTSUBSTRING_H
