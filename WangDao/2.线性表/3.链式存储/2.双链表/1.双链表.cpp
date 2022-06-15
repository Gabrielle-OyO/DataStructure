

bool InitDLinkList(DLinklist &L) {
  L = (DNode *)malloc(sizeof(DNode));  //分配一个头结点
  if (L == NULL) return false;         //内存不足分配失败
  L->prior = NULL;                     //头结点prior永远指向NULL
  L->next = NULL;                      //头结点之后暂时还没有结点
  return true;
}

void testDLinkList() {
  DLinklist L;
  InitDLinkList(L);
}

//判断双链表是否为空（带头结点）
bool Empty(DLinklist L) {
  if (L->next == NULL)
    return true;
  else
    return false;
}

typedef struct DNode {         //定义双链表结点类型
  ElemType data;               //数据域
  struct DNode *prior, *next;  //前驱和后继指针
} DNode, *DLinkList;
