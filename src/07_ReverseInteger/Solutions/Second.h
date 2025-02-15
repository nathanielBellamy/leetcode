//
// Created by ns on 2/15/25.
//

#ifndef REVERSEINTEGER_SOLUTIONS_SECOND_H
#define REVERSEINTEGER_SOLUTIONS_SECOND_H

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "Solution.h"

namespace ReverseInteger {
namespace Solutions {

class Second : public Solution {
  public:
    std::string getTitle() override;
    std::string getRuntimeComplexity() override;
    int reverse(int x) override;

};

}  // Solutions
}  // ReverseInteger



#endif //REVERSEINTEGER_SOLUTIONS_SECOND_H
