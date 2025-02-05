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
  return "TBD";
};

int First::longestSubstring(std::string s) {
  std::cout << "=== s === " << s << std::endl << std::endl;
  const int sLength = s.length();
  if (sLength <= 1) {
    return sLength;
  }

  struct LongestSubstringWithUniqueInstance {
    int charIndex;
    int length;
    std::pair<int, int> indexBoundsInclusive;
  };

  std::unordered_map<char, std::vector<int>> charIndexMap = {};
  std::unordered_map<char, LongestSubstringWithUniqueInstance> charLongestSubstringWithUniqueInstanceMap = {};

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

      const int instanceCount = charIndexMap[c].size();
      LongestSubstringWithUniqueInstance lswui;
      if (instanceCount == 2) {
        lswui = {
          charIndexMap[c].back(), i, std::pair<int, int>(0, i - 1)
        };
        charLongestSubstringWithUniqueInstanceMap.insert( { c, lswui } );
      } else {
        // instanceCount > 2
        // charLongesSubstringWithUniqueInstanceMap[c] is populated
        const int startingIndex = charIndexMap[c].at(instanceCount - 3) + 1; // c following two instances before this one
        const int endingIndex = i - 1; // char just before current instance
        const int length = endingIndex - startingIndex + 1; // +1 b/c lswui.indexBoundsInclusive
        if (charLongestSubstringWithUniqueInstanceMap[c].length < length) {
          // we found a longer substring with a unique instance of c
          lswui = {
            charIndexMap[c].at(instanceCount - 2), length, std::pair<int, int>(startingIndex, endingIndex)
          };
          charLongestSubstringWithUniqueInstanceMap[c] = lswui;
        }
      }
    }
  }

  // shortcut to save processing
  int highestFrequency = 0; // empty string
  int charCount = 0;
  for (auto kv : charIndexMap) {
    charCount++;
    auto instanceCount = kv.second.size(); // count indicies of c appearing in s
    std::cout << " == instance count == " << kv.first << " : " << instanceCount << std::endl << std::endl;
    if (instanceCount > highestFrequency) {
      highestFrequency = instanceCount;
    }
  }
  if (charCount < 2) {
    std::cout << " === char count result === " << charCount << std::endl;
    return charCount;
  }
  if (highestFrequency == 1) {
    std::cout << " === freq result === " << s.length() << std::endl;
    // all characters appeared at most once
    return s.length();
  }

  // check for tail as possible longest substring not containing char
  // for each char in s, put longest substring with unique instance in vector
  const int sLenMinusOne = s.length() - 1;
  std::vector<LongestSubstringWithUniqueInstance> longestSubstringWithUniqueInstanceVector = {};
  for (auto kv : charIndexMap) {
    const char c = kv.first;
    const int instanceCount = kv.second.size();
    const int startIndex = kv.second.at(instanceCount - 2) + 1;
    const int endIndex = sLength - 1; // from second to last instance of c to end of s
    const int tailLength = endIndex - startIndex + 1;
    if (charLongestSubstringWithUniqueInstanceMap[c].length < tailLength) {
      charLongestSubstringWithUniqueInstanceMap[c] = {
        charIndexMap[c].back(), tailLength, std::pair<int, int>(startIndex, endIndex)
      };
    }
    std::cout << " == clswui == " << c << " : len-> " << charLongestSubstringWithUniqueInstanceMap[c].length << " : si-> " << charLongestSubstringWithUniqueInstanceMap[c].indexBoundsInclusive.first << " : ei-> " << charLongestSubstringWithUniqueInstanceMap[c].indexBoundsInclusive.second << std::endl  << std::endl;
    longestSubstringWithUniqueInstanceVector.push_back(charLongestSubstringWithUniqueInstanceMap[c]);
  }


  // sort vector by length
  std::sort(
      longestSubstringWithUniqueInstanceVector.begin(),
      longestSubstringWithUniqueInstanceVector.end(),
      [](LongestSubstringWithUniqueInstance& a, LongestSubstringWithUniqueInstance& b) { return a.length > b.length; } // sort descending by length
  );

  LongestSubstringWithUniqueInstance winner = {};
  for (auto candidate : longestSubstringWithUniqueInstanceVector) {
    bool largestFrequenceyWithinIsOne = true;
    for (auto kv : charIndexMap) {
      if (kv.second.size() < 2)
        break;
      int charCountWithin = 0;
      for (auto i : kv.second) {
        if ( i >= candidate.indexBoundsInclusive.first || i <= candidate.indexBoundsInclusive.second )
          charCountWithin++;
      }
      if (charCountWithin > 1) {
        largestFrequenceyWithinIsOne = false;
        break;
      }
    }
    if (largestFrequenceyWithinIsOne) {
      winner = candidate;
      break;
    }
  }

  return winner.length;
};

} // Solutions
} // LongestSubstring