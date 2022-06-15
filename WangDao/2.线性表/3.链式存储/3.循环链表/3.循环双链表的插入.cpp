

bool InsertNextDNode(DNode *p, DNode *s) {
  s->next = p->next;  //将结点*s插入到结点*p之后
  p->next->prior = s;
  s->prior = p;
  p->next = s;
}