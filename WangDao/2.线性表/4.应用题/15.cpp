

LinkList Union(LinkList &la, LinkList &lb) {
  pa = la->next;  //设工作指针分别为pa和pb
  pb = lb->next;
  pc = la;  //结果表中当前合并结点的前驱指针
  while (pa && pb) {
    if (pa->data == pb->data) {  //交集并入结果表中
      pc->next = pa;             // A中结点链接到结果表
      pc = pa;
      pa = pa->next;
      u = pb;  // B中结点释放
      pb = pb->next;
      free(u);
    } else if (pa->data < pb->data) {  //若A中当前结点值小于B中当前结点值
      u = pa;
      pa = pa->next;  //后移指针
      free(u);        //释放A中当前结点
    } else {          //若B中当前结点值小于A中当前结点值
      u = pb;
      pb = pb->next;  //后移指针
      free(u);        //释放B中当前结点
    }
  }
  while (pb) {  // B已遍历完 A未完
    u = pb;
    pb = pb->next;
    free(u);  //释放B中剩余结点
  }
  pc->next = NULL;  //置结果链表尾指针为NULL
  free(lb);         //释放B表的头结点
  return la;
}