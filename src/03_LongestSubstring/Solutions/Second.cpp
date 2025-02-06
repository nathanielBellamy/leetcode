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
//  std::cout << s << std::endl;
  const int sLength = s.length();
  if (sLength <= 1)
    return sLength;

  int longestSubstrLength = 1;
  std::unordered_map<char, int> charMap = {};
  std::pair<int, int> boundsInclusive = {0, 0};
  std::pair<int, int> longestBounds = {0, 0};
  // abcabcbb
  // aaaabaaabbbbabbbb
  for (int i = 0; i < sLength; i++) {
      char c = s[i];
      boundsInclusive.second = i;
      if (charMap.find(c) != charMap.end()) {
        // shift bounds to not include previous instance
        boundsInclusive.first = charMap[c] + 1;
        if (charMap[c] == i - 1) {
          // two of the same characters in a row
          // collapse current bounds
          boundsInclusive.first = i;
          boundsInclusive.second = i;
        }
        // recompute charMap
        charMap.clear();
        for (int k = boundsInclusive.first; k <= boundsInclusive.second; k++) {
          char x = s[k];
          charMap.insert({x, k});
        }
      }
      charMap[c] = i;
      int boundsLength = boundsInclusive.second - boundsInclusive.first + 1;
//      std::cout << " == c bounds == " << c << " : " << i << " : " << boundsInclusive.first << " : " << boundsInclusive.second << std::endl;
      if (boundsLength > longestSubstrLength) {
        longestSubstrLength = boundsLength;
        longestBounds.first = boundsInclusive.first;
        longestBounds.second = boundsInclusive.second;
      }
//      std::cout << " === bi === " << boundsInclusive.first << " " << boundsInclusive.second << std::endl << std::endl;
  }

  std::cout << " == longest bounds == " << longestBounds.first << " : " << longestBounds.second << std::endl;

  return longestSubstrLength;
};

} // Solutions
} // LongestSubstring
