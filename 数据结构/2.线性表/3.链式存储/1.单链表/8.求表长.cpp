

int ListLength(LinkList *L) {
  int n = 0;
  LinkList *p = L;
  while (p->next != NULL) {
    n++;
    p = p->next;
  }
  return (n);
}

//带头结点
int Length(LinkList L) {
  int len = 0;
  LNode *p = L;
  while (p->next != NULL) {
    p = p->next;
    len++;
  }
  return len;
}