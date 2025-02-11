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

    Example fourth = {
      "ABCDEF",
      2,
      "ACEBDF"
    };

    Example fifth = {
      "PAYPALISHIRING",
      2,
      "PYAIHRNAPLSIIG"
    };

    Example sixth = {
      "AB",
      3,
      "AB"
    };

    Example seventh = {
      "ABC",
      2,
      "ACB",
    };

    list.push_back(first);
    list.push_back(second);
    list.push_back(third);
    list.push_back(fourth);
    list.push_back(fifth);
    list.push_back(sixth);
    list.push_back(seventh);
  }
};

} // ZigZagConversion

#endif //ZIGZAGCONVERSION_EXAMPLES_H
