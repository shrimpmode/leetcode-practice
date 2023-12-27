#include <iostream>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
  ListNode *deleteDuplicatest(ListNode *head) {
    ListNode *current = head;

    while (current != nullptr && current->next != nullptr) {
      if (current->val == current->next->val) {
        current->next = current->next->next;
      } else {
        current = current->next;
      }
    }
    return head;
  }
};

int main() {

  ListNode *head = new ListNode(1);
  ListNode *current = head;

  current->next = new ListNode(1);
  current = current->next;

  current->next = new ListNode(2);
  current = current->next;

  current->next = new ListNode(3);
  current = current->next;

  current->next = new ListNode(3);
  current = current->next;

  Solution solution;

  ListNode *result = solution.deleteDuplicatest(head);

  while (result != nullptr) {
    std::cout << result->val << " ";
    result = result->next;
  }
  return 0;
}
