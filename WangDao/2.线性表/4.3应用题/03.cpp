

void R_P(LinkList L) {
  if (L->next != NULL) {
    R_P(L->next);
  }
  if (L != NULL) print(L->data);
}

void R_J(LinkList L) {
  if (L != NULL) R_P(L->next);
}