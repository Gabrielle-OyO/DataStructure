

void D(LinkList &L) {
  LNode *p, *pre, *minpre;
  while (L->next != L) {
    p = L->next;
    pre = L;
    minp = p;
    minpre = pre;
    while (p != L) {
      if (p->data < minp->data) {
        minp = p;
        minpre = pre;
      }
      pre = p;
      p = p->next;
    }
    print("%d", minnp->data);
    minpre->next = minp->next;
    free(minp);
  }
  free(L);
}