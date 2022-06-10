

LinkList DistCreat_2(LinkList &A) {
  LinkList B = (LinkList)malloc(sizeof(LNode));  //创建B表头
  B->next = NULL;                                // B表的初始化
  LNode *p = A->next, *q;                        // p为工作指针
  LNode *ra = A;                                 // ra始终指向A的尾结点
  while (p != NULL) {
    ra - next = p;  //将*p链接到A的表尾
    ra = p;
    p = p->next;
    if (p != NULL) q = p->next;  //头插后 *p将断链 因此用q记以*p的后继
    p->next = B->next;           //将*p插入到B的前端
    B->next = p;
    p = q;
  }
  ra->next = NULL;  // A尾结点的next域置空
  return B;
}