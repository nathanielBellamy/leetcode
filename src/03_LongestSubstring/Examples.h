//
// Created by ns on 2/01/25.
//

#ifndef LONGESTSUBSTRING_EXAMPLES_H
#define LONGESTSUBSTRING_EXAMPLES_H

#include <vector>
#include "./Example.h"

namespace LongestSubstring {

struct Examples {
  std::vector<Example> list;

  Examples() : list(std::vector<Example>()) {
    Example first = {
      "abcabcbb",
       3
    };

    Example second = {
      "bbbbb",
      1
    };

    Example third = {
      "pwwkew",
      3
    };

    Example fourth = {
      "thelazybrownfox",
       13
    };

    Example fifth = {
      "abcdefghijklmnopqrst",
      20
    };

    list.push_back(first);
//    list.push_back(second);
//    list.push_back(third);
//    list.push_back(fourth);
//    list.push_back(fifth);
  }
};

} // LongestSubstring

#endif //LONGESTSUBSTRING_EXAMPLES_H
