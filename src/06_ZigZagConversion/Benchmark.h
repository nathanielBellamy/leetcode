//
// Created by ns on 02/09/25.
//

#ifndef BENCHMARKZIGZAGCONVERSION_H
#define BENCHMARKZIGZAGCONVERSION_H

#include <benchmark/benchmark.h>
#include "Run.h"

static void BM_06_ZigZagConversion_First(benchmark::State& state) {
  ZigZagConversion::Run* run = new ZigZagConversion::Run();
  for (auto _ : state) {
    run->first();
  }
  delete run;
}

BENCHMARK(BM_06_ZigZagConversion_First);

#endif //BENCHMARKZIGZAGCONVERSION_H
