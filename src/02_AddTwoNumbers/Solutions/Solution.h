//
// Created by ns on 1/30/25.
//

#ifndef ADDTWONUMBERS_SOLUTION_H
#define ADDTWONUMBERS_SOLUTION_H

#include "../ListNode.h"

namespace AddTwoNumbers {
namespace Solutions {

class Solution {
  public:
    virtual std::string getTitle() = 0;
    virtual std::string getRuntimeComplexity() = 0;
    virtual std::vector<int> addTwoNumbers(ListNode* l1, ListNode* l2) = 0;
};


} // Solutions
} // AddTwoNumbers


#endif //ADDTWONUMBERS_SOLUTION_H
