//
// Created by ns on 2/09/25.
//

#ifndef ZIGZAGCONVERSION_SOLUTION_H
#define ZIGZAGCONVERSION_SOLUTION_H

#include <string>

namespace ZigZagConversion {
namespace Solutions {

class Solution {
  public:
    virtual std::string getTitle() = 0;
    virtual std::string getRuntimeComplexity() = 0;
    virtual std::string convert(std::string s, int numRows) = 0;
};


} // Solutions
} // ZigZagConversion


#endif //ZIGZAGCONVERSION_SOLUTION_H
