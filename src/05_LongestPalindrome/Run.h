//
// Created by ns on 2/09/25.
//

#ifndef LONGESTPALINDROME_RUN_H
#define LONGESTPALINDROME_RUN_H

#include <iostream>
#include "./Examples.h"
#include "./Solutions/First.h"

namespace LongestPalindrome {

class Run {
  public:
    Examples* examples;

    Run();
    ~Run();

    void run();
    void first();
};

} // LongestPalindrome


#endif //LONGESTPALINDROME_RUN_H
