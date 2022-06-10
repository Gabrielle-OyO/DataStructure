

//正向建立单链表
LinkList List_TailInser(LinkList &L) {
  int x;
  L = (LinkList)malloc(sizeof(LNode));  //建立头结点
  LNode *s, *r = L;                     // r为表尾指针
  scanf("%d", &x);                      //输入结点值
  while (x != 999) {
    s = (LNode)malloc(sizeof(LNode));
    s->data = x;
    r->next = s;
    r = s;  //指向新的表尾结点
    scanf("%d", &x);
  }
  r->next = NULL;  //尾结点指针置空
  return L;
}