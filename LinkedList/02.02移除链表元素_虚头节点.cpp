
// 设置一个虚拟头结点在进行移除节点操作：

class Solution {
 public:
  ListNode* removeElements(ListNode* head, int val) {
    ListNode* dummyHead = new ListNode(0);  //设置一个虚拟头节点
    dummyHead->next = head;  //将虚拟头节点指向head  方便后面做删除操作
    ListNode* cur = dummyHead;
    while (cur->next != NULL) {
      if (cur->next->val == val) {
        ListNode* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
      } else {
        cur = cur->next;
      }
    }
    head = dummyHead->next;
    delete dummyHead;
    return head;
  }
};