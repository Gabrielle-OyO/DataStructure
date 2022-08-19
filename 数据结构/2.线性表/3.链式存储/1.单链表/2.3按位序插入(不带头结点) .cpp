

bool ListInsert(LinkList &L, int i, ElemType e) {
  if (i < 1) return false;
  if (i == 1) {  //插入第1个结点的操作与其他结点的操作不同
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = L;
    L = s;  //头指针指向新结点
    return false;
  }
  LNode *p;                         //指针p指向当前扫描到的结点
  int j = 1;                        //当前p指向的是第几个结点
  p = L;                            // p指向第1个结点（不是头结点）
  while (p != NULL && j < i - 1) {  //循环找到第i-1个结点
    p = p->next;
    j++;
  }
  if (p == NULL) return false;  // i值不合法
  LNode *s = (LNOde *)malloc(sizeof(LNode));
  s->data = e;
  s->next = p->next;
  p->next = s;
  return true;  //插入成功
}