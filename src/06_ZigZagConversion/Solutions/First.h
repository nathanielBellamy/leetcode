//
// Created by ns on 2/09/25.
//

#ifndef ZIGZAGCONVERSION_SOLUTIONS_FIRST_H
#define ZIGZAGCONVERSION_SOLUTIONS_FIRST_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <tuple>
#include <vector>
#include "Solution.h"

namespace ZigZagConversion {
namespace Solutions {

class First : public Solution {
  public:
    std::string getTitle() override;
    std::string getRuntimeComplexity() override;
    std::string zigZagConversione(std::string s) override;

};

}  // Solutions
}  // ZigZagConversion



#endif //ZIGZAGCONVERSION_SOLUTIONS_FIRST_H
