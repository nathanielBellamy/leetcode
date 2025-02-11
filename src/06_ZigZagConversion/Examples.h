//
// Created by ns on 2/09/25.
//

#ifndef ZIGZAGCONVERSION_EXAMPLES_H
#define ZIGZAGCONVERSION_EXAMPLES_H

#include <vector>
#include "./Example.h"

namespace ZigZagConversion {

struct Examples {
  std::vector<Example> list;

  Examples() : list(std::vector<Example>()) {
    Example first = {
      "PAYPALISHIRING",
      3,
      "PAHNAPLSIIGYIR"
    };

    Example second = {
      "PAYPALISHIRING",
      4,
      "PINALSIGYAHRPI"
    };

    Example third = {
      "A",
      1,
      "A"
    };

    list.push_back(first);
    list.push_back(second);
    list.push_back(third);
  }
};

} // ZigZagConversion

#endif //ZIGZAGCONVERSION_EXAMPLES_H
