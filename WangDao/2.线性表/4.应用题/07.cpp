

void RangeDelete(LinkList &L, int min, int max) {
  LNode *pre = L, *p = L->link;
  while (p != NULL)
    if (p->data > min && p->data < max) {
      pre->link = p->link;
      free(p);
      p = pre->link;
    } else {
      pre = p;
      p = p->link;
    }
}