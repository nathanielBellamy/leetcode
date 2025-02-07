//
// Created by ns on 1/30/25.
//

#ifndef BENCHMARKMEDIANOFTWOSORTEDARRAYS_H
#define BENCHMARKMEDIANOFTWOSORTEDARRAYS_H

#include <benchmark/benchmark.h>
#include "Run.h"

static void BM_02_MedianOfTwoSortedArrays_First(benchmark::State& state) {
  MedianOfTwoSortedArrays::Run run;
  for (auto _ : state) {
    run.first();
  }
}

BENCHMARK(BM_02_MedianOfTwoSortedArrays_First);

#endif //BENCHMARKMEDIANOFTWOSORTEDARRAYS_H
