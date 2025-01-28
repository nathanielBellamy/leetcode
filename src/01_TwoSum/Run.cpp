//
// Created by ns on 1/26/25.
//

#include "Run.h"


namespace TwoSum {

    using namespace Solutions;

    int Run::run() {
        std::cout << " == 01_TwoSum START == " << std::endl;

      Examples examples;

      std::vector<Solution> solutions;
      First first;
      solutions.push_back(first);
      Optimized optimized;
      solutions.push_back(optimized);

      for (auto solution : solutions) {
        std::cout << " == TwoSum Solution == " << std::endl;
        for (auto example : examples.list) {
          auto actual = first.twoSum(example.nums, example.target);
          if (actual != example.expected)
            throw std::runtime_error("\n\n TwoSum Error: Wrong Result \n\n");
          std::cout << "Example SUCCESS" << std::endl;
        }
      }

        std::cout << " == 01_TwoSum SUCCESS == " << std::endl;
        std::cout << " == 01_TwoSum END == " << std::endl;
        return 0;
    }

}
