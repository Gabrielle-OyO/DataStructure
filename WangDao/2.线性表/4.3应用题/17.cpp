

int S(DLinkList L) {
  DNode *p = L->next, *q = L->prior;
  while (p != q && q->next != p)
    if (p->data == q->data) {
      p = p->next;
      q = q->next;
    } else
      return 0;
  return 1;
}