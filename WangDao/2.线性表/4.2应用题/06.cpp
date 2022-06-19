

void Sort(LinkList &L) {
  LNode *p = L->next, *pre;
  LNode *r = p->next;  // r保持*p后继结点指针，以保证不断链
  p->next = NULL;      //构造只含一个数据结点的有序表
  p = r;
  while (p != NULL) {
    r = p->next;  //保存*p的后继结点指针
    pre = L;
    while (pre->next != NULL && pre->next->data < p->data) {
      pre = pre->next;  //在有序表中查找插入*p的前驱结点*pre
    }
    p->next = pre->next;  //将*p插入到*pre之后
    pre->next = p;
    p = r;  //扫描原单链表中剩下的结点
  }
}