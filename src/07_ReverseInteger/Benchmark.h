//
// Created by ns on 02/11/25.
//

#ifndef BENCHMARKREVERSEINTEGER_H
#define BENCHMARKREVERSEINTEGER_H

#include <benchmark/benchmark.h>
#include "Run.h"

static void BM_07_ReverseInteger_First(benchmark::State& state) {
  ReverseInteger::Run* run = new ReverseInteger::Run();
  for (auto _ : state) {
    run->first();
  }
  delete run;
}

BENCHMARK(BM_07_ReverseInteger_First);

#endif //BENCHMARKREVERSEINTEGER_H
