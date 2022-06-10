
//顺指针next逐个往下搜索
LNode *GetElem(LinkList L, int i) {
  int j = 1;               //计数
  LNode *p = L->next;      //头结点指针赋值给p
  if (i == 0) return L;    //若i=0，则返回头结点
  if (i < 1) return NULL;  //若i无效，则返回NULL
  while (p && j < i) {     //从第一个结点开始查找第i个结点
    p = p->next;
    j++;
  }
  return p;  //返回第i个结点的指针， 若i大于表长 则返回NULL
}