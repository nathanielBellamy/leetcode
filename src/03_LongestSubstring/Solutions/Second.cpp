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
//
//  std::unordered_map<char, std::vector<int>> charIndexMap = {};
//
//  // create char index map
//  for (int i = 0; i < s.length(); i++) {
//    char c = s[i];
//    if (charIndexMap.find(c) == charIndexMap.end()) {
//      // first instance of c in s
//      auto vec = std::vector<int>();
//      vec.push_back(i);
//      charIndexMap.insert( { c, vec } );
//    } else {
//      // not first instance of c in s
//      charIndexMap[c].push_back(i);
//    }
//  }

  return 1;
};

} // Solutions
} // LongestSubstring
