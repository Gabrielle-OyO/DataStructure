

bool Listinsert(LinkList &L, int i, ElemType e) {
  if (i < 1) return false;
  LNode *p;   //指针p指向当前扫描到的结点
  int j = 0;  //当前p指向的是第几个结点
  p = L;      // L指向头结点 头结点是第0个结点（不存数据）
  while (p != NULL && j < i - 1) {  //循环找到第i-1个结点
    p = p->next;
    j++;
  }
  if (p == NULL) return false;  // i值不合法
  LNode *s = (LNode *)malloc(sizeof(LNode));
  s->data = e;
  s->next = p->next;
  p->next = s;  //将结点s连到p之后
  return ture;  //插入成功
}

typedef struct LNode {
  ElemType data;
  struct LNode *next;
} LNode, *LinkList;