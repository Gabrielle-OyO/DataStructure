

bool InsertNextNode(LNode *p, ElemType e) {
  if (p == NULL) return false;
  LNode *s = (LNode *)malloc(sizeof(LNode));
  if (s == NULL) return false;  //内存分配失败
  s->data = e;                  //用结点s保存数据元素e
  s->next = p->next;
  p->next = s;  //将结点s连到p之后
  return true;
}

typedef struct LNode {
  ElemType data;
  struct LNode *next;
} LNode, *LinkList;