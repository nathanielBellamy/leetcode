//
// Created by ns on 1/30/25.
//

#ifndef ADDTWONUMBERS_SOLUTIONS_FIRST_H
#define ADDTWONUMBERS_SOLUTIONS_FIRST_H

#include <string>
#include "Solution.h"
#include "../ListNode.h"

namespace AddTwoNumbers {
namespace Solutions {

class First : public Solution {
  public:
    std::string getTitle() override;
    std::string getRuntimeComplexity() override;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) override;

};

}  // Solutions
}  // AddTwoNumbers



#endif //ADDTWONUMBERS_SOLUTIONS_FIRST_H
