

LinkList D(LinkList &A) {
  LinkList B = (LinkList)malloc(sizeof(LNode));
  B->next = NULL;
  LNode *p = A->next, *q;
  LNode *ra = A;
  while (p != NULL) {
    ra->next = p;
    ra = p;
    if (p != null) q = p->next;
    p->next = B->next;
    B->next = p;
    p = q;
  }
  ra->next = NULL;
  return B;
}