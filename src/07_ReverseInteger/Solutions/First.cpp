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

int First::reverse(int32_t x) {
  if (x < 10 && x > -10)
    return x;

  int result = 0;

  bool positive = x > 0;
  std::vector<int> digits;

  while (x != 0) {
    digits.push_back(x % 10);
    x /= 10;
  }

  if (digits.size() > 10 && digits.back() > 1) {
    return 0;
  }

  int multiplier = 1;
  for (int i = digits.size() - 1; i >= 0; i--) {
    if (positive) {
      if ( digits[i] > INT_MAX / multiplier || result > INT_MAX - digits[i] * multiplier )
        return 0;
    } else {
      if ( digits[i] < INT_MIN / multiplier || result < INT_MIN - digits[i] * multiplier )
        return 0;
    }

    result += digits[i] * multiplier;

    if (i == 0)
      break;
    multiplier *= 10;
  }

  return result;
};

} // Solutions
} // ReverseInteger