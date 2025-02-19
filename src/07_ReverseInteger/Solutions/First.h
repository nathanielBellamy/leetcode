//
// Created by ns on 2/11/25.
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
    int reverse(int x) override;

};

}  // Solutions
}  // ReverseInteger



#endif //REVERSEINTEGER_SOLUTIONS_FIRST_H
