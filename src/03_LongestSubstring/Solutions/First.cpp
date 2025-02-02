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

std::string First::longestSubstring(std::string s) {
  std::string result;
  std::unordered_map<char, std::vector<int>> charIndexMap = {};
  std::unordered_map<char, int> charFrequencyMap = {};
  std::unordered_map<char, int> charLargestGapMap = {};
  std::unordered_map<char, std::string> charLargestSubstringMap = {};
  std::unordered_map<int, std::vector<char>> largestGapBetween = {};

  for (int i = 0; i < s.length(); i++) {
    char c = s[i];
    if (charIndexMap.find(c) == charIndexMap.end()) {
      // first instance of c in s
      auto vec = std::vector<int>();
      vec.push_back(i);
      charIndexMap.insert( { c, vec } );
      charFrequencyMap.insert( { c, 1 } );
      charLargestGapMap.insert( { c, 0 } );
    } else {
      // not first instance of c in s
      charFrequencyMap[c]++;
      int newGapLength = i - charIndexMap[c].back();
      if (newGapLength > charLargestGapMap[c]) {
        charLargestGapMap[c] = newGapLength;
      }
      if (charLargestSubstringMap.find(c) == charLargestSubstringMap.end()) {
        // TODO:
        // charLargestSubstringMap.insert( { c, "" } );
      }
      charIndexMap[c].push_back(i);
    }
  }

  int highestFrequency = 1;
  for (auto kv : charFrequencyMap) {
    if (kv.second > highestFrequency) {
      highestFrequency = kv.second;
    }
  }
  if (highestFrequency == 1) {
    // all characters appeared at most once
    return s;
  }

  char largestGapChar;
  int largestGap = 0;
  for (auto kv : charLargestGapMap) {
    if (kv.second > largestGap) {
      largestGapChar = kv.first;
      largestGap = kv.second;
    }
  }



  return result;
};

} // Solutions
} // LongestSubstring