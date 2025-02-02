//
// Created by ns on 2/1/25.
//

#ifndef BENCHMARKADDTWONUMBERS_H
#define BENCHMARKADDTWONUMBERS_H

#include <benchmark/benchmark.h>
#include "Run.h"

static void BM_02_AddTwoNumbers_First(benchmark::State& state) {
  AddTwoNumbers::Run run;
  for (auto _ : state) {
    run.first();
  }
}

BENCHMARK(BM_02_AddTwoNumbers_First);

#endif //BENCHMARKADDTWONUMBERS_H
