

bool InsertNextDNode(DNode *p, DNode *s) {
  p->next = q->next;
  q->next->prior = p;
  free(q);
}