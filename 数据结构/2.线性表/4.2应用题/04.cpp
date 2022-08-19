

LinkList Delete_Min(LinkList &L) {
  LNode *pre = L, *p = pre->next;  // p为工作指针，pre指向其前驱
  LNode *minpre = pre, *minp = p;  //保存最小值结点及其前驱
  while (p != NULL) {
    if (p->data < minp->data) {
      minp = p;  //找到比之前找的最小值结点更小的结点
      minp = pre;
    }
    pre = p;  //继续扫描下一个结点
    p = p->next;
  }
  minpre->next = minp->next;  //删除最小值结点
  free(minp);
  return L;
}