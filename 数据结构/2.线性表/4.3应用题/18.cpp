

LinkList Link(LinkList &h1, LinkList &h2) {
  LNode *p, *q;
  LNode *p, *q;
  p = h1;
  while (p->next != h1) p = p->next;
  q = h2;
  while (q->next != h2) q = q->next;
  p->next = h2;
  q->next = h1;
  return h1;
}