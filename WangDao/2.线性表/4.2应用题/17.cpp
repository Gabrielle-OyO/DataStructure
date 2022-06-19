
int Symmetry(DLinkList L) {
  DNode *p = L->next, *q = L->prior;  //两头工作指针
  while (p != q && q->next != p) {    //循环跳出条件
    if (p->data == q->data) {         //所指结点值相同则继续比较
      p = p->next;
      q = q->next;
    } else
      return 0;  //否则返回0
    return 1;    //比较结束后返回1
  }
}