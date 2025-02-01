//
// Created by ns on 1/30/25.
//

#include "Run.h"

namespace AddTwoNumbers {

using namespace Solutions;

Run::Run() : examples(new Examples) {}

Run::~Run() {
  delete examples;
}

void Run::run() {
  std::cout << std::endl << " == 02_AddTwoNumbers Start == " << std::endl << std::endl;

      Examples examples;

      First* first = new First;

      std::vector<Solution*> solutions;
      solutions.push_back(first);

      for (auto solution : solutions) {
        std::cout << " == AddTwoNumbers Solution : " << solution->getTitle() << " : " << solution->getRuntimeComplexity() << " == "  << std::endl;
        for (auto example : examples.list) {
          auto actual = solution->addTwoNumbers(example.l1, example.l2);
//          actual->print();
          if (!actual->equals(example.expected))
            throw std::runtime_error("\n\n AddTwoNumbers Error: Wrong Result \n\n");
          std::cout << "Example SUCCESS" << std::endl;
        }
      }

      delete first;

      std::cout << std::endl << " == 02_AddTwoNumbers SUCCESS == " << std::endl;
      std::cout << " == 02_AddTwoNumbers END == " << std::endl << std::endl;
}


}