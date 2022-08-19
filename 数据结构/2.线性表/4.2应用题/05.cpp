

LinkList Reverse_1(LinkList L) {
  LNode *p, *r;         // p为工作指针，r为p的后继，以访断链
  p = L->next;          //从第一个元素结点开始
  L->next = NULL;       //先将头结点L的next域设置为NULL
  while (p != NULL) {   //依次将元素结点摘下
    r = p->next;        //暂存p的后继
    p->next = L->next;  //将p结点插入到头结点之后
    L->next = p;
    p = r;
  }
  return L;
}

LinkList Reverse_2(LinkList L) {
  LNode *pre, *p = L->next, *r = p->next;
  p->next = NULL;      //处理第一个结点 设置为NULL
  while (r != NULL) {  //若r为NULL 则说明p为最后一个结点
    pre = p;           //依次继续遍历
    p = r;
    r = r->next;
    p->next = pre;  //指针反转
  }
  L->next = p;  //处理最后一个结点
  return L;
}