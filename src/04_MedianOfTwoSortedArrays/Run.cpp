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
  First* first = new First();

  for (auto example : examples->list) {
    auto actual = first->findMedianSortedArrays(example.nums1, example.nums2);
    if (actual != example.expected)
      throw std::runtime_error("\n\n MedianOfTwoSortedArrays::Solutions::First Error: Wrong Result \n\n");
  }

  delete first;
}

void Run::run() {
  std::cout << std::endl << " == 04_MedianOfTwoSortedArrays Start == " << std::endl << std::endl;

      First* first = new First;

      std::vector<Solution*> solutions;
      solutions.push_back(first);

      for (auto solution : solutions) {
        std::cout << " == MedianOfTwoSortedArrays Solution : " << solution->getTitle() << " : " << solution->getRuntimeComplexity() << " == "  << std::endl;
        for (auto example : examples->list) {
          auto actual = solution->findMedianSortedArrays(example.nums1, example.nums2);
          if (actual != example.expected) {
            std::cout << " == WRONG == expected : " << example.expected << " : actual : " << actual << std::endl << std::endl;
          } else {
            std::cout << " == Example SUCCESS == " << example.expected << " : " << actual << std::endl << std::endl;
          }
        }
      }

      delete first;

      std::cout << std::endl << " == 04_MedianOfTwoSortedArrays SUCCESS == " << std::endl;
      std::cout << " == 04_MedianOfTwoSortedArrays END == " << std::endl << std::endl;
}

} // MedianOfTwoSortedArrays