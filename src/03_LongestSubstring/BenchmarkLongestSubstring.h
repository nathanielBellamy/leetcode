//
// Created by ns on 1/30/25.
//

#ifndef BENCHMARKLONGESTSUBSTRING_H
#define BENCHMARKLONGESTSUBSTRING_H

#include <benchmark/benchmark.h>
#include "Run.h"

static void BM_02_LongestSubstring_First(benchmark::State& state) {
  LongestSubstring::Run run;
  for (auto _ : state) {
    run.first();
  }
}

BENCHMARK(BM_02_LongestSubstring_First);

#endif //BENCHMARKLONGESTSUBSTRING_H
