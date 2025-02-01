//
// Created by ns on 1/26/25.
//

#include "Run.h"


namespace TwoSum {

    using namespace Solutions;

    void Run::first() {
      First first;

      for (auto example : examples.list) {
        auto actual = first.twoSum(example.nums, example.target);
        if (actual != example.expected)
          throw std::runtime_error("\n\n TwoSum::Solutions::First Error: Wrong Result \n\n");
      }
    }

    void Run::second() {
      Second second;

      for (auto example : examples.list) {
        auto actual = second.twoSum(example.nums, example.target);
        if (actual != example.expected)
          throw std::runtime_error("\n\n TwoSum::Solutions::Second Error: Wrong Result \n\n");
      }
    }

    int Run::run() {
      std::cout << " == 01_TwoSum START == " << std::endl;

      Examples examples;

      First* first = new First;
      Second* second = new Second;

      std::vector<Solution*> solutions;
      solutions.push_back(first);
      solutions.push_back(second);

      for (auto solution : solutions) {
        std::cout << " == TwoSum Solution : " << solution->getTitle() << " : " << solution->getRuntimeComplexity() << " == "  << std::endl;
        for (auto example : examples.list) {
          auto actual = solution->twoSum(example.nums, example.target);
          if (actual != example.expected)
            throw std::runtime_error("\n\n TwoSum Error: Wrong Result \n\n");
          std::cout << "Example SUCCESS" << std::endl;
        }
      }

      delete first;
      delete second;

      std::cout << " == 01_TwoSum SUCCESS == " << std::endl;
      std::cout << " == 01_TwoSum END == " << std::endl;
      return 0;
    }
}
