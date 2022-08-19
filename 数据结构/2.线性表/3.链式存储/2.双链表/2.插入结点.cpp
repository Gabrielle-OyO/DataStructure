
// p结点后插入s

bool InsertNextDNode(DNode *p, DNode *s) {
  s->next = p->next;   //将*s结点插入到结点*p之后
  p->next->prior = s;  //可能会有空指针的错误
  s->prior = p;
  p->next = s;
}

//严谨版本
bool InsertNextDNode(DNode *p, DNode *s) {
  if (p == NULL || s == NULL) return false;  //非法参数
  s->next = p->next;
  if (p->next != NULL) p->next - prior = s;  //如果p结点有后继结点
  s->prior = p;
  p->next = s;
  return true;
}
