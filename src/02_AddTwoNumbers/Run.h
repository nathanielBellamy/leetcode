//
// Created by ns on 1/30/25.
//

#ifndef ADDTWONUMBERS_RUN_H
#define ADDTWONUMBERS_RUN_H

#include <iostream>
#include "./Examples.h"
#include "./ListNode.h"

namespace AddTwoNumbers {

class Run {
  public:
    Examples* examples;

    Run();
    ~Run();

    void run();
};

} // AddTwoNumbers


#endif //ADDTWONUMBERS_RUN_H
