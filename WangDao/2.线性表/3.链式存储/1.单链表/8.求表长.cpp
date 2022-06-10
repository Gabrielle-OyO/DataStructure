

int ListLength(LinkList *L) {
  int n = 0;
  LinkList *p = L;
  while (p->next != NULL) {
    n++;
    p = p->next;
  }
  return (n);
}