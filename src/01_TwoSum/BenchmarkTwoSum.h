//
// Created by ns on 1/27/25.
//

#ifndef BENCHMARKTWOSUM_H
#define BENCHMARKTWOSUM_H

#include <benchmark/benchmark.h>
#include "./Run.h"


static void BM_01_TwoSum_First(benchmark::State& state) {
  TwoSum::Run run;
  for (auto _ : state) {
    run.first();
  }
}

static void BM_01_TwoSum_Optimized(benchmark::State& state) {
  TwoSum::Run run;
  for (auto _ : state) {
    run.optimized();
  }
}

BENCHMARK(BM_01_TwoSum_First);
BENCHMARK(BM_01_TwoSum_Optimized);



#endif //BENCHMARKTWOSUM_H
