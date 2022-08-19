

LinkList U(LinkList &la, LinkList &lb) {
  pa = la->next;
  pb = lb->next;
  pc = la;
  while (pa && pb) {
    pc->next = pa;
    pc = pa;
    pa = pa->next;
    u = pb;
    pb = pb->next;
    free(u);
  }
  else if (pa->data < pb->data) {
    u = pa;
    pa = pa->next;
    free(u);
  }
  else {
    u = pb;
    pb = pb->next;
    free(u);
  }
  while (pb) {
    u = pb;
    pb = pb->next;
    free(u);
  }
  pc->next = NULL;
  free(la);
  return la;
}