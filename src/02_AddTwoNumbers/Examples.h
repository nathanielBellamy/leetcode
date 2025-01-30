//
// Created by ns on 1/30/25.
//

#ifndef ADDTWONUMBERS_EXAMPLES_H
#define ADDTWONUMBERS_EXAMPLES_H

#include <vector>
#include "./Example.h"
#include "./ListNode.h"

namespace AddTwoNumbers {

struct Examples {
  std::vector<Example> list;

  Examples() : list(std::vector<Example>()) {
    ListNode* firstL1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* firstL2 = new ListNode(5, new ListNode(6, new ListNode(4)));
    ListNode* firstExpected = new ListNode(7, new ListNode(0, new ListNode(8)));
    Example first = {
        firstL1,
        firstL2,
        firstExpected
    };

    ListNode* secondL1 = new ListNode(0);
    ListNode* secondL2 = new ListNode(0);
    ListNode* secondExpected = new ListNode(0);

    Example second = {
      secondL1,
      secondL2,
      secondExpected
    };

    ListNode* thirdL1 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9)));
    ListNode* thirdL2 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9))));
    ListNode* thirdExpected = new ListNode(8, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(0, new ListNode(0, new ListNode(0, new ListNode(1))))))));

    Example third = {
      thirdL1,
      thirdL2,
      thirdExpected
    };

    list.push_back(first);
    list.push_back(second);
    list.push_back(third);
  }
};

} // AddTwoNumbers

#endif //ADDTWONUMBERS_EXAMPLES_H
