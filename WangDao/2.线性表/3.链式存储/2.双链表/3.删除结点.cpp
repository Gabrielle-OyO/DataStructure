
//删除p的后继结点
bool DeleteNextDNode(DNode *p) {
  if (p == NULL) return false;
  DNode *q = p->next;           //找到p的后继结点q
  if (q == NULL) return false;  // p没有后继结点
  p->next = q->next;
  if (q->next != NULL) q->next->prior = p;  // q结点不是最后一个结点
  free(q);                                  //释放结点空间
  return true;
}

//销毁双链表
void DestoryList(DLinklist &L) {
  //循环释放各个数据结点
  while (L->next !NULL) DeleteNextDNode(L);
  free(L);   //释放头结点
  L = NULL;  //头指针指向NULL
}
