//
// Created by ns on 2/10/25.
//

#ifndef ZIGZAGCONVERSION_RUN_H
#define ZIGZAGCONVERSION_RUN_H

#include <iostream>
#include "./Examples.h"
#include "./Solutions/First.h"

namespace ZigZagConversion {

class Run {
  public:
    Examples* examples;

    Run();
    ~Run();

    void run();
    void first();
};

} // ZigZagConversion


#endif //ZIGZAGCONVERSION_RUN_H
