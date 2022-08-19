

LinkList Reverse(LinkList L) {
  LNode *p, *r;
  p = L->next;
  L->next = NULL;
  while (p != NULL) {
    r = p->next;
    p->next = L->next;
    L->next = p;
    p = r;
  }
  return L;
}

LinkList P(LinkList L) {
  LNode *pre, *p = L->next, *r = p->next;
  p->next = NULL;
  while (r != NULL) {
    pre = p;
    p = r;
    r = r->next;
    p->next = pre;
  }
  L->next = p;
  return L;
}