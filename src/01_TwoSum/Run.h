//
// Created by ns on 1/26/25.
//

#ifndef RUN_H
#define RUN_H

#include <iostream>
#include <cassert>
#include <benchmark/benchmark.h>
#include "Examples.h"
#include "Solutions/First.h"
#include "Solutions/Optimized.h"

namespace TwoSum {

class Run {
  Examples examples;

  public:
//      int run();
    void first();
    void optimized();
};

}

#endif //RUN_H
