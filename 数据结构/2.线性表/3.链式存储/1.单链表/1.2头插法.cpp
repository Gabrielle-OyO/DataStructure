

//逆向建立单链表
LinkList List_HeadInsert(LinkList &L) {
  LNode *s;
  int x;
  L = (LinkList)malloc(sizeof(LNode));  //建立头结点
  L->next = NULL;                       //初始为空表
  scanf("%d", &x);                      //输入结点值
  while (x != 999) {
    s = (LNode *)malloc(sizeof(LNode));  //创建新结点
    s->data = x;
    s->next = L->next;
    L->next = s;  //将新结点插入表中 L为头指针
    scanf("%d", &x);
  }
  return L;
}
