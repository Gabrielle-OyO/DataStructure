

int Pattern(LinkList A, LinkList B) {
  LNode *p = A;  // p为A链表的工作指针 本体假定A和B均无头结点
  LNode *pre = p;  // pre记住每趟比较中A链表的开始结点
  LNode *q = B;    // q是B链表的工作指针
  while (p && q)
    if (p->data == q->data) {  //结点值相同
      p = p->next;
      q = q->next;
    } else {
      pre = pre->next;
      p = pre;  // A链表新的开始比较结点
      q = B;    // q从B链表第一个结点开始
    }
  if (q == NULL)  // B已经结束比较
    return 1;     //说明B是A的子序列
  else
    return 0;  // B不是A的子序列
}