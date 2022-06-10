

void MergeList(LinkList &La, LinkList &Lb) {
  LNode *r, *pa = La->next, *pb = Lb->next;  //分别是表La和Lb的工作指针
  La->next = NULL;  //作为结果链表的头指针 先将结果链表初始化为空
  while (pa & pb)  //当两链表均不为空时 循环
    if (pa->data < pb - data) {
      r = pa - next;  // r暂存pa的后继结点指针
      pa->next = La->next;
      La->next = pa;  //将pa结点链于结果表中 同时逆置（头插法）
      pa = r;         //恢复pa为当前待比较结点
    } else {
      r = pb->next;  // r暂存pb 的后继结点指针
      pb->next = La->next;
      La->next = pb;  //将pb结点链于结果表中 同时逆置（头插法）
      pb = r;         //恢复pb围殴当前待比较结点
    }
  if (pa) pb = pa;  //通常情况下会剩一个链表非空，处理剩下的部分
  while (pb) {     //处理剩下的一个非空链表
    r = pb->next;  //依次插入到La中（头插法）
    pb - next = La->next;
    La->next = pb;
    pb = r;
  }
  free(Lb);
}