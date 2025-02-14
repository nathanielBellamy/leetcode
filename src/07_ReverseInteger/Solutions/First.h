//
// Created by ns on 2/09/25.
//

#ifndef REVERSEINTEGER_SOLUTIONS_FIRST_H
#define REVERSEINTEGER_SOLUTIONS_FIRST_H

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "Solution.h"

namespace ReverseInteger {
namespace Solutions {

class First : public Solution {
  public:
    std::string getTitle() override;
    std::string getRuntimeComplexity() override;
    int32_t reverse(int32_t x) override;

};

}  // Solutions
}  // ReverseInteger



#endif //REVERSEINTEGER_SOLUTIONS_FIRST_H
