

void Del_Same(LinkList &L) {
  LNode *p = L->next, *q;  // p为工作指针
  if (p == NULL) return;
  while (p->next != NULL) {
    q = p->next;               // q指向p的后继结点
    if (p->data == q->data) {  //找到重复值的结点
      p->next = q->next;       //释放*q结点
      free(q);                 //释放相同元素值的结点
    } else {
      p = p->next;
    }
  }
}