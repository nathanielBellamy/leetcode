//
// Created by ns on 2/1/25.
//

#include "Run.h"
#include "Examples.h"

namespace MedianOfTwoSortedArrays {

using namespace Solutions;

Run::Run() : examples(new Examples) {}

Run::~Run() {
  delete examples;
}

void Run::first() {
  First first;

  for (auto example : examples->list) {
    auto actual = first.longestSubstring(example.s);
    if (actual != example.expected)
      throw std::runtime_error("\n\n MedianOfTwoSortedArrays::Solutions::First Error: Wrong Result \n\n");
  }

  delete examples;
}

void Run::run() {
  std::cout << std::endl << " == 03_MedianOfTwoSortedArrays Start == " << std::endl << std::endl;

//      First* first = new First;
      Second* second = new Second;

      std::vector<Solution*> solutions;
      solutions.push_back(second);

      for (auto solution : solutions) {
        std::cout << " == MedianOfTwoSortedArrays Solution : " << solution->getTitle() << " : " << solution->getRuntimeComplexity() << " == "  << std::endl;
        for (auto example : examples->list) {
          auto actual = solution->longestSubstring(example.s);
          if (actual != example.expected) {
            std::cout << " == WRONG == " << example.expected << " : " << actual << std::endl << std::endl;
          } else {
//            throw std::runtime_error("\n\n MedianOfTwoSortedArrays Error: Wrong Result \n\n");
            std::cout << " == Example SUCCESS == " << example.expected << " : " << actual << std::endl << std::endl;
          }
        }
      }

      delete second;
      delete examples;

      std::cout << std::endl << " == 03_MedianOfTwoSortedArrays SUCCESS == " << std::endl;
      std::cout << " == 03_MedianOfTwoSortedArrays END == " << std::endl << std::endl;
}

} // MedianOfTwoSortedArrays