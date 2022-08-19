

void Del(LinkList &L, int x) {
  LNode *p = L->next, *pre = L, *q;
  while (p != NULL) {
    if (p->data = x) {
      q = p;
      p = p->next;
      pre->next = p;
      free(q);
    } else {
      pre = p;
      p = p->next;
    }
  }
}

void Del(LinkList &L, int x) {
  LNode *p = L->next, *r = L, *q;
  while (p != NULL) {
    if (p->data != x) {
      r->next = p;
      r = p;
      p = p->next;
    } else {
      q = p;
      p = p->next;
      free(q);
    }
  }
  r->next = NULL;
}