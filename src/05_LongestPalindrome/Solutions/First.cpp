//
// Created by ns on 2/09/25.
//

#include "First.h"

namespace LongestPalindrome {
namespace Solutions {

std::string First::getTitle() {
  return "First";
};

std::string First::getRuntimeComplexity() {
  return "TBD";
};

std::string First::longestPalindrome(std::string s) {
  std::string result = "";
  int sLength = s.length();
  if (sLength < 2) {
    return s;
  } else if (sLength == 2) {
    if (s[0] == s[1]) {
      return s;
    } else {
      return std::string (1, s[0]);
    }
  }

  auto isPalindrome = [](std::string& str) {
    int len = str.length();
    int bound;
    if (len % 2 == 0) {
      bound = len / 2;
    } else {
      bound = (len - 1) / 2;
    }
    bool isPalindrome = true;
    for (int i = 0; i < bound; i++) {
      int compliment = len - i;
      if (str[i] != str[compliment]) {
        isPalindrome = false;
        break;
      }
    }
    return isPalindrome;
  };

  // can assume sLength > 2
  std::string candidate = std::string(1, s[0]);
  int candidateLength = 1;
  bool previousCheckWasPalindrome = false;
  std::unordered_map<char, std::vector<int>> charIndexMap;
  charIndexMap.insert(std::make_pair(s[0], std::vector<int>(0)));
  for (int i = 1; i < sLength; i++) {
    char c = s[i];
    if (charIndexMap.find(c) == charIndexMap.end()) {
      // first occurence of letter
      // cannot be the end of a newly found palindrome
      charIndexMap.insert(std::make_pair(c, std::vector<int>(i)));
    } else {
      // TODO
    }
    std::string intermediate = ;
    if (isPalindrome(intermediate)) {

    }
  }


  return result;
};

} // Solutions
} // LongestPalindrome