//
// Created by ns on 2/11/25.
//

#ifndef REVERSEINTEGER_RUN_H
#define REVERSEINTEGER_RUN_H

#include <iostream>
#include "./Examples.h"
#include "./Solutions/First.h"
#include "./Solutions/Second.h"

namespace ReverseInteger {

class Run {
  public:
    Examples* examples;

    Run();
    ~Run();

    void run();
    void first();
    void second();
};

} // ReverseInteger


#endif //REVERSEINTEGER_RUN_H
