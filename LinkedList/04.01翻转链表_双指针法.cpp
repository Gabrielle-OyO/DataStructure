

class Solution {
 public:
  ListNode* reverseList(ListNode* head) {
    ListNode* temp;  // 保存cur的下一个节点
    ListNode* cur = head;
    LiseNode* pre = NULL;
    while (cur) {
      temp = cur->next;  // 保存一下 cur的下一个节点，因为接下来要改变cur->next
      cur->next = pre;  // 翻转操作
      // 更新pre 和 cur指针
      pre = cur;
      cur = temp;
    }
  }
};