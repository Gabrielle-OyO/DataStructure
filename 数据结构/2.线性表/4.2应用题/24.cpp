

LNode *FindLoopStrart(LNode *head) {
  LNode *fast = head, *slow = head;  //设置快慢两个指针
  while (slow != NULL && fast->next != NULL) {
    slow = slow->next;        //每次走一步
    fast = fast->next->next;  //每次走两步
    if (slow == fast) break;  //相遇
  }
  if (slow == NULL || fast->next == NULL) return NULL;
  LNode *p1 = head, *p2 = slow;  //没有环 返回NULL
  while (p1 != p2) {             //分别指向开始点相遇点
    p1 = p1->next;
    p2 = p2->next;
  }
  return p1;  //返回入口点
}