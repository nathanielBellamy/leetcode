//
// Created by ns on 2/11/25.
//

#include "First.h"

namespace ReverseInteger {
namespace Solutions {

std::string First::getTitle() {
  return "First";
};

std::string First::getRuntimeComplexity() {
  return "TBD";
};

int32_t First::reverse(int32_t x) {

  if (x < 10 && x > -10)
    return x;

  int32_t count = 0;
  int32_t result = 0;

  bool positive = x > 0;

  std::vector<int32_t> digits;

  while (x != 0) {
    while (x % 10 != 0) {
      if (positive) {
        x--;
      } else {
        x++;
      }
      count++;
    }
    digits.push_back(count);
    x /= 10;
    count = 0;
  }

  int multiplier = 1;
  for (int32_t i = digits.size() - 1; i >= 0; i--) {
    result += digits[i] * multiplier;
    if (result < 0)
      return 0;
    multiplier *= 10;
  }

  if (positive) {
    return result;
  } else {
    return -result;
  }
};

} // Solutions
} // ReverseInteger