//
// Created by ns on 2/01/25.
//

#ifndef MEDIANOFTWOSORTEDARRAYS_RUN_H
#define MEDIANOFTWOSORTEDARRAYS_RUN_H

#include <iostream>
#include "./Examples.h"
#include "./Solutions/First.h"

namespace MedianOfTwoSortedArrays {

class Run {
  public:
    Examples* examples;

    Run();
    ~Run();

    void run();
    void first();
};

} // MedianOfTwoSortedArrays


#endif //MEDIANOFTWOSORTEDARRAYS_RUN_H
