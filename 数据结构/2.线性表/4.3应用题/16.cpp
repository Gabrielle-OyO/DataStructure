

int Pattern(LinkList A, LinkList B) {
  LNode *p = A;
  LNode *pre = p;
  LNode *q = B;
  while (p && q)
    if (p->data == q->data) {
      p = p->next;
      q = q->next;
    } else {
      pre = pre->next;
      p = pre;
      q = B;
    }
  if (q == NULL)
    return 1;
  else
    return 0;
}