

void D(LinkList &L, int min, int max) {
  LNode *pr = L, *p = L->link;
  while (p != NULL) {
    if (p->data > min && p->data < max) {
      pr->link = p->link;
      free(p);
      p = pr->link;
    } else {
      pr = p;
      p = p->link;
    }
  }
}