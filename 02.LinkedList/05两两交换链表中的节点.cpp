// 时间复杂度：$O(n) $
// 空间复杂度：$O(1) $

class Solution {
 public:
  ListNode* swapPairs(ListNode* head) {
    ListNode* dummyHead = new ListNode(0);  // 设置一个虚拟头结点
    dummyHead->next = head;  // 将虚拟头结点指向head，这样方面后面做删除操作
    ListNode* cur = dummyHead;
    while (cur->next != nullptr && cur->next->next != nullptr) {
      ListNode* tmp = cur->next;               // 记录临时节点
      ListNode* tmp1 = cur->next->next->next;  // 记录临时节点

      cur->next = cur->next->next;   // step 1
      cur->next = tmp;               // step 2
      cur->next->next->next = tmp1;  // step 3
      cur = cur->next->next;
    }
    return dummyHead->next;
  }
};