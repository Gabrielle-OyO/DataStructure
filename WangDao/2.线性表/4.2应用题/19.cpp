

void Del_ALL(LinkList &L) {
  LNode *p, *pre, *minp, *minpre;
  while (L->next != L) {  //表不为空  循环
    p = L->next;
    pre = L;  // p为工作指针 pre指向其前驱
    minp = p;
    minpre = pre;  // minp指向最小值结点
    while (p != L) {
      if (p->data < minp->data) {
        minp = p;  //找到值更小的结点
        minpre = pre;
      }
      pre = p;  //查找下一个结点
      p = p->next;
    }
    printf("%d", minp->data);  //输出最小值结点元素
    minpre->next = minp->nex;  //最小值结点从表中“断”开
    free(minp);                //释放空间
  }
  free(L);  //释放头结点
}