//
// Created by ns on 2/09/25.
//

#include "Run.h"
#include "Examples.h"

namespace LongestPalindrome {

using namespace Solutions;

Run::Run() : examples(new Examples) {}

Run::~Run() {
  delete examples;
}

void Run::first() {
  First* first = new First();

  for (auto example : examples->list) {
    auto actual = first->longestPalindrome(example.s);
    if (actual != example.expected)
      throw std::runtime_error("\n\n LongestPalindrome::Solutions::First Error: Wrong Result \n\n");
  }

  delete first;
}

void Run::run() {
  std::cout << std::endl << " == 05_LongestPalindrome Start == " << std::endl << std::endl;

      First* first = new First;

      std::vector<Solution*> solutions;
      solutions.push_back(first);

      for (auto solution : solutions) {
        std::cout << " == LongestPalindrome Solution : " << solution->getTitle() << " : " << solution->getRuntimeComplexity() << " == "  << std::endl;
        for (auto example : examples->list) {
          auto actual = solution->longestPalindrome(example.s);
          if (actual != example.expected) {
            std::cout << " == WRONG == expected : " << example.expected << " : actual : " << actual << std::endl << std::endl;
          } else {
            std::cout << " == Example SUCCESS == " << example.expected << " : " << actual << std::endl << std::endl;
          }
        }
      }

      delete first;

      std::cout << std::endl << " == 05_LongestPalindrome SUCCESS == " << std::endl;
      std::cout << " == 05_LongestPalindrome END == " << std::endl << std::endl;
}

} // LongestPalindrome