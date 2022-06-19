

LinkList DisCreat_1(LinkList &A) {
  i = 0;                                // i记录表A中结点的序号
  B = (LinkLIst)malloc(sizeof(LNode));  //创建B表头
  B->next = NULL;                       // B表的初始化
  LNode *ra = A, *rb = B;  // ra和rb将分别指向将创建A表和B表的尾结点
  p = A->next;             // p为链表工作指针 指向带分解的结点
  A->next = NULL;          //指控新的A表
  while (p != NULL) {
    i++;               //序号加1
    if (1 % 2 == 0) {  //处理序号为偶数的表结点
      rb->next = p;    //在B表尾插入新结点
      rb = p;          // rb指向新的尾结点
    } else {           //处理原序号奇数的结点
      ra->next = p;    //在A表尾插入新结点
      ra = p;
    }
    p = p->next;  //将p恢复为指向新的待处理结点
  }
  ra->next = NULL;
  rb->next = NULL;
  return B;
}