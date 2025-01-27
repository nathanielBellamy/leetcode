//
// Created by ns on 1/26/25.
//

#include "Run.h"

namespace TwoSum {

    int Run::run() {
        std::cout << " == 01_TwoSum START == " << std::endl;

      Solution solution;

      for (auto example : solution.examples) {
        auto actual = solution.twoSum(example.nums, example.target);
        if (actual != example.expected)
          throw std::runtime_error("\n\n TwoSum Error: Wrong Result \n\n");
        std::cout << "Example SUCCESS" << std::endl;
      }

        std::cout << " == 01_TwoSum SUCCESS == " << std::endl;
        std::cout << " == 01_TwoSum END == " << std::endl;
        return 0;
    }

}
