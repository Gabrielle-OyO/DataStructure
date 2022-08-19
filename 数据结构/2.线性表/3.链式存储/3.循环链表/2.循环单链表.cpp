
typedef struct DNode {
  ElemType data;
  struct DNode *prior, *next;
} DNode, *DLinklist;

//主函数
void testDLinkList() {
  DLinklist L;
  InitDLinkList(L);
}

//初始化空电脑循环双链表
bool InitDLinkList(DLinklist &L) {
  L = (DNode *)malloc(sizeof(DNode));  //分配一个头结点
  if (L == NULL) return false;         //内存不足，分配失败
  L->prior = L;                        //头结点的prior指向头结点
  L->next = L;                         //头结点的next指向头结点
}

//判断循环双链表是否为空
bool Empty(DLinklist L) {
  if (L->next == L)
    return true;
  else
    return false;
}
//判断结点p是否为循环双链表的表尾结点
bool ifTail(DLinklist L, DNode *p) {
  if (p->next == L)
    return true;
  else
    return false;
}