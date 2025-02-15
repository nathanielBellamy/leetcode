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

  int max = 2147483647;
  int min = -2147483648;
  double max_f = (double) max;
  double min_f = (double) min;
  int count = 0;
  int result = 0;

  bool positive = x > 0;

  std::vector<int> digits;

  while (x != 0) {
    const int rem = x % 10;
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

  if (digits.size() > 10 && digits.back() != 0) {
    return 0;
  }

  int multiplier = 1;
  for (int i = digits.size() - 1; i >= 0; i--) {
    if (positive) {
      const double ratio1 = ((double)digits[i] * multiplier) / max_f;
      const double ratio2 = ((double)result / max_f) + ((double)digits[i] * (multiplier / max_f));

      if ( ratio1 >= 1.0 || ratio2 >= 1.0 ) {
        return 0;
      }
    } else {
      const double ratio1 = ((double) digits[i] * multiplier) / min_f;
      const double ratio2 = ((double) result / min_f) + ((double)digits[i] * (multiplier / min_f));

      if ( ratio1 <= -1.0 ||  ratio2 <= - 1.0 )
        return 0;
    }

    result += digits[i] * multiplier;

    if (i == 0)
      break;
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