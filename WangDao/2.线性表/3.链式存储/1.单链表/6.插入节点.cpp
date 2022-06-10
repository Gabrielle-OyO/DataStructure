

① p = GetElem(L, i - 1);
② s->next = p->next;
③ p->next = s;

//语句②和③的顺序不能颠倒

//前插操作
s->next = p->next;  //修改指针域，不能颠倒
p->next = s;
temp = p->data;  //交换数据域部分
p->data = s->data;
s->data = temp;