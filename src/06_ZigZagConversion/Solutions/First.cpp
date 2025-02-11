//
// Created by ns on 2/09/25.
//

#include "First.h"

namespace ZigZagConversion {
namespace Solutions {

std::string First::getTitle() {
  return "First";
};

std::string First::getRuntimeComplexity() {
  return "TBD";
};

std::string First::convert(std::string s, int numRows) {
  std::string result = "";

  const int sLength = s.length();
  int modLength = std::ceil(sLength / numRows);
  if (numRows < 1)
    return result;
  if (sLength < 2 || numRows == 1 || (numRows > sLength))
    return s;

  const int diagModOffsetStep = numRows - 2;
  std::vector<std::vector<char>> rows(numRows, std::vector<char>());

  int diagModOffset = 0;
  for (int i = 0; i < modLength; i++) {
    const int modBase = i * numRows;
    // vertical down
    for (int j = 0; j < numRows; j++) {
      const int sIdx = modBase + diagModOffset + j;
      if (sIdx < sLength) {
        rows[j].push_back(s[sIdx]);
      }
    }

    // diagonal up
    for (int k = 0; k < diagModOffsetStep; k++) {
      const int sIdx = modBase + diagModOffset + numRows + k;
      if (sIdx < sLength) {
        rows[numRows - 2 - k].push_back(s[sIdx]);
      }
    }

    diagModOffset += diagModOffsetStep;
  }

  // format into final string
  for (std::vector<char> row : rows) {
    for (char c : row) {
      result += c;
    }
  }

  return result;
};

} // Solutions
} // ZigZagConversion