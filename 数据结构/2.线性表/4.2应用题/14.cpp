

void Get_Common(LinkList A, LinkList B) {
  LNode *p = A - next, *q = B->next, *r, *s;
  LinkList C = (LinkList)malloc(sizeof(LNode));  //建立表C
  r = C;                                         // r始终指向C的尾结点
  while (p != NULL && q != NULL) {               //循环跳出条件
    if (p->data < q->data)
      p = p->next;  //若A的当前元素较小 后移指针
    else if (p->data > q->data)
      q = q->next;  //若B的当前元素较小 后移指针
    else {
      s = (LNode *)malloc(sizeof(LNode));  //找到公共元素结点
      s->data = p->data;                   //将*s链接到C上（尾插法）
      r->next = s;
      r = s;
      p = p->next;  //表A和B继续向后扫面描
      q = q->next;
    }
  }
  r->next = NULL;  //置C尾结点指针为空
}