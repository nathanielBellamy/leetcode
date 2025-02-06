//
// Created by ns on 2/5/25.
//

#include "Second.h"


namespace LongestSubstring {
namespace Solutions {

std::string Second::getTitle() {
  return "Second";
};

std::string Second::getRuntimeComplexity() {
  return "TBD";
};

int Second::longestSubstring(std::string s) {
  const int sLength = s.length();
  if (sLength <= 1)
    return sLength;

  std::unordered_map<char, int> charMap = {};

  int longestSubstrLength = 1;
  std::pair<int, int> boundsInclusive = {0, 0};
  // abcabcbb
  for (int i = 0; i < sLength; i++) {
      char c = s[i];
      if (charMap.find(c) == charMap.end()) {
        // first time seing car within bounds
        boundsInclusive.second = i;
      } else {
        // collapse current bounds
        boundsInclusive.first = charMap[c] + 1;
      }
      charMap[c] = i;
      int boundsLength = boundsInclusive.second - boundsInclusive.first + 1;
      if (boundsLength > longestSubstrLength) {
        longestSubstrLength = boundsLength;
      }
  }

  return longestSubstrLength;
};

} // Solutions
} // LongestSubstring
