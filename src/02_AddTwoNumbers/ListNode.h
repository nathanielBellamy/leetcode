//
// Created by ns on 1/30/25.
//

#ifndef LISTNODE_H
#define LISTNODE_H

#include <iostream>
namespace AddTwoNumbers {

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}

    void print() const {
      std::cout << " === " << val << std::endl;
      if (next != nullptr)
        next->print();
    }

    // NOTE:
    // - up to the user to start the comparison at the correct nodes
    bool equals(ListNode *other) const {
      if (next == nullptr && other->next == nullptr) {
        return val == other->val;
      } else if ( (next == nullptr && other->next != nullptr) || (next != nullptr && other->next == nullptr) ) {
        return false;
      } else {
        // both have valid next
        if (val == other->val) {
          return next->equals(other->next);
        } else {
          return false;
        }
      }
    }
};

} // AddTwoNumbers

#endif //LISTNODE_H
