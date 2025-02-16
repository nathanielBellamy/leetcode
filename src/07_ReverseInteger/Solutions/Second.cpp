//
// Created by ns on 2/15/25.
//

#include "Second.h"

namespace ReverseInteger {
namespace Solutions {

std::string Second::getTitle() {
  return "Second";
};

std::string Second::getRuntimeComplexity() {
  return "TBD";
};

int Second::reverse(int32_t x) {
  long int num=0;
  while(x!=0){
    int rem=x%10;
    num=num*10+rem;
    x/=10;
  }

  // TODO:
  // - why doesn't this comparison break the constraint of assuming
  //   that the environment does not store 64 bit integers?
  // - doesn't this imply num, a 32-bit integer
  //   is outside the bounds of a 32-bit integer?
  // - A: it does use larger than 32 bit numbers
  //      but so did my original solution using doubles
  if (num<INT_MIN || num>INT_MAX)
    return 0;
  return num;
};

} // Solutions
} // ReverseInteger
