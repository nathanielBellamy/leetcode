//
// Created by ns on 1/30/25.
//

#include "Run.h"

namespace AddTwoNumbers {

Run::Run() : examples(new Examples) {}

Run::~Run() {
  delete examples;
}

void Run::run() {
  std::cout << "AddTwoNumbers::Run::run()" << std::endl;
}


}