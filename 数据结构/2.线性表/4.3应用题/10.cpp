

LinkList D(LinkList &A) {
  int i = 0;
  B = (LinkList)malloc(sizeof(LNode));
  B->next = NULL;
  LNode *ra = A, *tb = B;
  p = A->next;
  A->next = NULL;
  while (p != NUL) {
    i++;
    if (i % 2 == 0) {
      rb->next = p;
      rb = p;
    } else {
      ra->next = p;
      ra = p;
    }
    p = p->next;
  }
  ra->next = NULL;
  rb->next = NULL;
  return B;
}