//
// Created by ns on 2/11/25.
//

#ifndef REVERSEINTEGER_SOLUTION_H
#define REVERSEINTEGER_SOLUTION_H

#include <string>

namespace ReverseInteger {
namespace Solutions {

class Solution {
  public:
    virtual std::string getTitle() = 0;
    virtual std::string getRuntimeComplexity() = 0;
    virtual int reverse(int x) = 0;
};


} // Solutions
} // ReverseInteger


#endif //REVERSEINTEGER_SOLUTION_H
