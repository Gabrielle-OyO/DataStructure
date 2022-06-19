
void Del(LinkList &L, int x) {
  LNode *p;
  if (L == NULL) return;
  if (L->data = x) {
    p = L;
    L = L->next;
    free(p);
    Del(L, x);
  } else
    Del(L, x);
}