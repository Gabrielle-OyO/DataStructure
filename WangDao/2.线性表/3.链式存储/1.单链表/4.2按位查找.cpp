

//查找第i个元素
LNode *GetElem(LinkList L, int i) {
  if (i < 0) return NULL;
  LNode *p;   //指针p指向当前扫描到的结点
  int j = 0;  //当前p指向的是第几个结点
  p = L;      // L指向头结点 头结点是第0个结点（不存数据）
  while (p != NULL && j < i) {  //循环找到第i个结点
    p = p->next;
    j++;
  }
  return p;
}

LNode *GetElem(LinkList L, int i) {
  int j = 1;
  LNode *p = L->next;
  if (i == 0) return L;
  if (i < 1) return NULL;
  while (p != NULL && j < i) {
    p = p->next;
    j++;
  }
  return p;
}