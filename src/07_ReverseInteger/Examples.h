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

    Example fifth = {
      2147483647,
      0
    };

    Example sixth = {
      -2147483648,
      0
    };

    Example seventh = {
      -565656,
      -656565
    };

    Example eigth = {
      -7654321,
      -1234567
    };

    Example ninth = {
      1534236469,
      0
    };

    Example tenth = {
      -2147483412,
      -2143847412
    };

    Example eleventh = {
      1563847412,
      0
    };

    Example twelfth = {
      1463847412,
      2147483641
    };

    list.push_back(first);
    list.push_back(second);
    list.push_back(third);
    list.push_back(fourth);
    list.push_back(fifth);
    list.push_back(sixth);
    list.push_back(seventh);
    list.push_back(eigth);
    list.push_back(ninth);
    list.push_back(tenth);
    list.push_back(eleventh);
    list.push_back(twelfth);
  }
};

} // ReverseInteger

#endif //REVERSEINTEGER_EXAMPLES_H
