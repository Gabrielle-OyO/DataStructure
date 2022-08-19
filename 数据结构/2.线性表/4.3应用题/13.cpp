

void M(LinkList &La, LinkList &Lb) {
  LNode *r, *pa = La->next, *pb = Lb->next;
  La->next = NULL;
  while (pa && pb)
    if (pa->data <= pb - data) {
      r = pa->next;
      pa->next = La->next;
      La->next = pa;
      pa = r;
    } else {
      r = pb->next;
      pb->next = La->next;
      La->next = pb;
      pb = r;
    }
  if (pa) pb = pa;
  while (pb) {
    r = pb->next;
    pb->next = La->next;
    La->next = pb;
    pb = r;
  }
  free(Lb);
}