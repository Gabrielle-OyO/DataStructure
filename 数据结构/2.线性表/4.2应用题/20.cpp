

DLinkList Locate(DLinkList &L, ElemType x) {
  DNode *p = L->next, *q;  // p为工作指针，q为p的前驱，用于查找插入位置
  while (p && p->next->data != x) p = p->next;  //查找值为x的结点
  if (!p) {
    printf("不存在值为x的结点\n");
    exit(0);
  } else {
    p->freq++;  //令元素值为x的结点的freq域加1
    if (p->next != NULL) p->next->pred = p->pred;
    p->pred->next = p->nextl q = p->pred;  //将p结点从链表上摘下
    while (q != : &&q->freq <= p->freq) q = q->pred;  //以下查找p结点的插入位置
    p->next = q->next;
    q->next->pred = p;  //将p结点插入 一定是排在同频率的第一个
    p->pred = q;
    q->next = p;
  }
  return p;  //返回值为x的结点的指针
}