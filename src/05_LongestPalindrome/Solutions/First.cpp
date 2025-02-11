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
    if (len == 2) {
      return str[0] == str[1];
    } else if (len % 2 == 0) {
      bound = len / 2;
    } else {
      bound = (len - 1) / 2;
    }
    bool isPalindrome = true;
    for (int i = 0; i < bound; i++) {
      int compliment = len - i - 1;
      if (str[i] != str[compliment]) {
        isPalindrome = false;
        break;
      }
    }
    return isPalindrome;
  };

  // can assume sLength > 2
  int resultLength = 0;
  bool previousCheckWasPalindrome = false;
  std::unordered_map<char, std::vector<int>> charIndexMap;
  for (int i = 0; i < sLength; i++) {
    char c = s[i];
    if (charIndexMap.find(c) == charIndexMap.end()) {
      // first occurence of letter
      // cannot be the end of a newly found palindrome of length > 1
      if (resultLength == 0) {
        result = s.substr(i, 1);
        resultLength = 1;
      }
    } else {
      for (auto idx : charIndexMap[c]) {
        int substrLength = i - idx + 1;
        std::string subStr = s.substr(idx, substrLength);
        if (isPalindrome(subStr) == 1 && substrLength > resultLength) {
        	result = subStr;
            resultLength = substrLength;
            break;
        }
      }
    }
    charIndexMap[c].push_back(i);
  }


  return result;
};

} // Solutions
} // LongestPalindrome