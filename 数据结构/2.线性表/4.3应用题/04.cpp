

LinkList Delet(LinkList &L) {
  LNode *pre = L, *p = p->next;
  LNode *minpre = pre, *minp = p;
  while (p != NULL) {
    if (p->data < minp->data) {
      minp = p;
      minpre = pre;
    }
    pre = p;
    p = p->next;
  }
  minpre->next = minp->next;
  free(minp);
  return L;
}