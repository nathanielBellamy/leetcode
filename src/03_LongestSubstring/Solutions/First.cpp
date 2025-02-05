//
// Created by ns on 2/01/25.
//

#include "First.h"


namespace LongestSubstring {
namespace Solutions {

std::string First::getTitle() {
  return "First";
};

std::string First::getRuntimeComplexity() {
  return "TBD - but too slow anyway";
};

int First::longestSubstring(std::string s) {
  const int sLength = s.length();
  if (sLength <= 1)
    return sLength;

  std::unordered_map<char, std::vector<int>> charIndexMap = {};

  // create char index map
  for (int i = 0; i < s.length(); i++) {
    char c = s[i];
    if (charIndexMap.find(c) == charIndexMap.end()) {
      // first instance of c in s
      auto vec = std::vector<int>();
      vec.push_back(i);
      charIndexMap.insert( { c, vec } );
    } else {
      // not first instance of c in s
      charIndexMap[c].push_back(i);
    }
  }


  std::unordered_map<char, bool> charMap = {};
  std::pair<int, int> indexBoundsInclusive;
  for (int i = sLength - 1; i > 0; i--) {
    for (int j = 0; j < sLength - i; j++) {
      charMap.clear();
      indexBoundsInclusive.first = j;
      indexBoundsInclusive.second = j + i;

      bool highestFreqIsOne = true;
      for (int k = indexBoundsInclusive.first; k < indexBoundsInclusive.second + 1; k++) {
        char c = s[k];
        if (charMap.find(c) == charMap.end()) {
          charMap[c] = true;
        } else {
          highestFreqIsOne = false;
          break;
        }
      }

      if (highestFreqIsOne)
        return i + 1;
    }
  }

  return 1;
};

} // Solutions
} // LongestSubstring