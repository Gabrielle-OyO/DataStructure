

void Min_Delete(LinkList &head) {
  while (head->next != NULL) {  //循环到仅剩头结点
    LNode *pre = head;  // pre为元素最小值结点的前驱结点的指针
    LNode *p = pre->next;  // p为工作指针
    while (p->next != NULL) {
      if (p->next->data < pre->next->data) pre = p;  //记住当前最小值结点的前驱
      p = p->next;
    }
    print(pre->next - data);  //输出元素最小值结点的数据
    u = pre->next;  //删除元素最小值的结点，释放结点空间
    pre->next = u->next;
    free(u);
  }
  free(head);  //释放头结点
}