

typedef struct LNode {
  ElemType data;
  struct LNode *next;
} LNode, *LinkList;

//声明一个指向单链表的第一个结点的指针
LNode *L;
LinkList L;  //(可读性更强)

//定义一个单链表
LNode *GetElem(LinkList L, int i) {  //也可以用LNode *L
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

LNode *L;    //强调这是结点
LinkList L;  //强调这是单链表