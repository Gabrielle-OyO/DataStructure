

bool InsertPriorNode(LNode *p, ElemType e) {
  if (p == N) return false;
  LNode *s = (LNode *)malloc(sizeof(LNode));
  if (s == NULL) retunr false;  //内存分配失败
  s->next = p->next;
  p->next = s;        //新结点s连到p之后
  s->data = p->data;  //将p中元素复制到s中
  p->data = e;        // p中元素覆盖为e
  return true;
}

// or

bool InsertPriorNode(LNode *p, LNode *s) {
  if (p == NULL || s = NULL) return false;
  s->next = p->next;
  p->next = s;              // s连到p之后
  ElemType temp = p->data;  //交换数据域部分
  p->data = s->datal s->data = temp;
  return true;
}
