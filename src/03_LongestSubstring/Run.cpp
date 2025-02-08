//
// Created by ns on 2/1/25.
//

#include "Run.h"
#include "Examples.h"

namespace LongestSubstring {

using namespace Solutions;

Run::Run() : examples(new Examples) {}

Run::~Run() {
  delete examples;
}

void Run::first() {
  First* first = new First();

  for (auto example : examples->list) {
    auto actual = first->longestSubstring(example.s);
    if (actual != example.expected)
      throw std::runtime_error("\n\n LongestSubstring::Solutions::First Error: Wrong Result \n\n");
  }

  delete first;
}

void Run::second() {
  Second* second = new Second();

  for (auto example : examples->list) {
    auto actual = second->longestSubstring(example.s);
    if (actual != example.expected)
      throw std::runtime_error("\n\n LongestSubstring::Solutions::First Error: Wrong Result \n\n");
  }

  delete second;
}

void Run::run() {
  std::cout << std::endl << " == 03_LongestSubstring Start == " << std::endl << std::endl;

//      First* first = new First;
      Second* second = new Second;

      std::vector<Solution*> solutions;
      solutions.push_back(second);

      for (auto solution : solutions) {
        std::cout << " == LongestSubstring Solution : " << solution->getTitle() << " : " << solution->getRuntimeComplexity() << " == "  << std::endl;
        for (auto example : examples->list) {
          auto actual = solution->longestSubstring(example.s);
          if (actual != example.expected) {
            throw std::runtime_error("\n\n LongestSubstring Error: Wrong Result \n\n");
          } else {
            std::cout << " == Example SUCCESS == " << example.expected << " : " << actual << std::endl << std::endl;
          }
        }
      }

      delete second;

      std::cout << std::endl << " == 03_LongestSubstring SUCCESS == " << std::endl;
      std::cout << " == 03_LongestSubstring END == " << std::endl << std::endl;
}

} // LongestSubstring