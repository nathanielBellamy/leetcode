//
// Created by ns on 2/09/25.
//

#ifndef LONGESTPALINDROME_EXAMPLES_H
#define LONGESTPALINDROME_EXAMPLES_H

#include <vector>
#include "./Example.h"

namespace LongestPalindrome {

struct Examples {
  std::vector<Example> list;

  Examples() : list(std::vector<Example>()) {
    Example first = {
      "babad",
      "bab"
    };

    Example second = {
      "cbbd",
      "bb"
    };

    Example third = {
      "racecar",
      "racecar"
    };

    Example fourth = {
      "aaabbbbaa",
      "aabbbbaa"
    };

    list.push_back(first);
    list.push_back(second);
    list.push_back(third);
    list.push_back(fourth);
  }
};

} // LongestPalindrome

#endif //LONGESTPALINDROME_EXAMPLES_H
