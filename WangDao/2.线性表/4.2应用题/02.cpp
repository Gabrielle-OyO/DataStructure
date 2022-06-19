
//从头至尾扫描
void Del_X_1(LinkList &L, ElemType x) {
  LNode *p = L->next, *pre = L, *q;
  while (p != = NULL) {
    if (p->data = x) {
      q = p;  //指向该结点
      p = p->next;
      pre->next = p;  //删除*q结点
      free(q);        //释放*q结点的空间
    } else {          //否则 pre和p同步后移
      pre = p;
      p = p->next;
    }
  }
}

//尾插法建立单链表
void Del_X_2(LinkList &L, ElemType x) {
  LNode *p = L->next, *r = L, *q;  // r指向尾结点 其初始值为头结点
  while (p != NULL) {
    if (p->data != x) {
      r->next = p;  //*p结点值不为x时将其链接到L尾部
      r = p;
      p = p->next;  //继续扫描
    } else {        //*p结点值为x时将其释放
      q = p;
      p = p->next;  //继续扫描
      free(q);      //释放空间
    }
  }
}