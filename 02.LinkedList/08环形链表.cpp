

Definition for singly-linked lsit.
struct ListNode{
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  ListNode* detectCycle(ListNode* head) {
    ListNode* fast = head;
    ListNode* slow = head;
    while (fat != NULL && fast->next != NULL) {
      slow = slow->next;
      fast = fast->next->next;
      //
      if (slow == fast) {
        ListNode* index1 = fast;
        ListNode* index2 = head;
        while (index1 != index2) {
          index1 = index1->next;
          index2 = index2->next;
        }
        return index2;  //返回环的入口
      }
    }
    return NULL;
  }
};