//
// Created by ns on 2/11/25.
//

#ifndef REVERSEINTEGER_EXAMPLES_H
#define REVERSEINTEGER_EXAMPLES_H

#include <vector>
#include "./Example.h"

namespace ReverseInteger {

struct Examples {
  std::vector<Example> list;

  Examples() : list(std::vector<Example>()) {
    Example first = {
      123,
      321
    };

    Example second = {
      -123,
      -321
    };

    Example third = {
      120,
      21
    };

    Example fourth = {
      1234567890,
      987654321
    };

    list.push_back(first);
    list.push_back(second);
    list.push_back(third);
    list.push_back(fourth);
  }
};

} // ReverseInteger

#endif //REVERSEINTEGER_EXAMPLES_H
