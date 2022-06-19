

DLinkList Locate(DLinkList &L, int x) {
  DNode *p = L->next, *q;
  while (p && p->data != x) p = p->next;
  if (!p) {
    printf("不存在值为x的结点\n");
    exit(0);
  } else {
    p->fred++;
    if (p->next != NULL) p->next->pred = p->pred;
    p->pred->next = p->next;
    q = q->pred;
    while (q != L && q->fred <= p->fred) q = q->pred;
    p->next = q->next;
    q->next->pred = p;
    p->pred = q;
    q->next = p;
  }
  return p;
}