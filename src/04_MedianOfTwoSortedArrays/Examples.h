//
// Created by ns on 2/01/25.
//

#ifndef MEDIANOFTWOSORTEDARRAYS_EXAMPLES_H
#define MEDIANOFTWOSORTEDARRAYS_EXAMPLES_H

#include <vector>
#include "./Example.h"

namespace MedianOfTwoSortedArrays {

struct Examples {
  std::vector<Example> list;

  Examples() : list(std::vector<Example>()) {
    Example first = {
      { 1, 3 },
      { 2 },
       2
    };

    Example second = {
      { 1, 2 },
      { 3, 4 },
      2.5
    };

    Example third = {
      { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
      { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26 },
      13.5
    };

    list.push_back(first);
    list.push_back(second);
    list.push_back(third);
  }
};

} // MedianOfTwoSortedArrays

#endif //MEDIANOFTWOSORTEDARRAYS_EXAMPLES_H
