

LinkList Link(LinkList &h1, LinkList &h2) {
  LNode *p, *q;  //分别指向两个链表的尾结点
  p = h1;
  while (p->next != h1) p = p->next;  //寻找h1的尾结点
  q = h2;
  while (q->next != h2) q = q->next;  //寻找h2的尾结点
  p->next = h2;                       //将h2链接到h1之后
  q->next = h1;                       //令h2的尾结点指向h1
  return h1;
}