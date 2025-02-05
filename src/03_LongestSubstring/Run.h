//
// Created by ns on 2/01/25.
//

#ifndef LONGESTSUBSTRING_RUN_H
#define LONGESTSUBSTRING_RUN_H

#include <iostream>
#include "./Examples.h"
#include "./Solutions/First.h"
#include "./Solutions/Second.h"

namespace LongestSubstring {

class Run {
  public:
    Examples* examples;

    Run();
    ~Run();

    void run();
    void first();
};

} // LongestSubstring


#endif //LONGESTSUBSTRING_RUN_H
