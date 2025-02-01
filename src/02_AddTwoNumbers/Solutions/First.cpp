//
// Created by ns on 1/30/25.
//

#include "First.h"


namespace AddTwoNumbers {
namespace Solutions {

std::string First::getTitle() {
  return "First";
};

std::string First::getRuntimeComplexity() {
  return "TBD";
};

ListNode* First::addTwoNumbers(ListNode* l1, ListNode* l2) {
  ListNode* result = new ListNode(0);
  ListNode* resultStart = result;
  bool carry = false;
  int intermediate = 0;

  while (l1 != nullptr || l2 != nullptr && !carry) {
     if (l1 == nullptr && l2 == nullptr && carry) {
       l1 = new ListNode(0);
       l1->next = new ListNode(0);
       intermediate = 0;
     } else if (l1 == nullptr) {
       intermediate = l2->val;
     } else if (l2 == nullptr) {
       intermediate = l1->val;
     } else {
       intermediate = l1->val + l2->val;
     }

     if (carry == true) {
       intermediate += 1;
     }
     if (intermediate > 9) {
       carry = true;
       intermediate -= 10;
     } else {
       carry = false;
     }
     result->val = intermediate;
     std::cout << result->val << std::endl;
     result->next = new ListNode(0);
     result = result->next;
     l1 = l1->next;
     l2 = l2->next;
  }

  return resultStart;
};

} // Solutions
} // AddTwoNumbers