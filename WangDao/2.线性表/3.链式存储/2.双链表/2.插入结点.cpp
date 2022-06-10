

s->next = p->next;  //将*s结点插入到结点*p之后
p->next->prior = s;
s->prior = p;
p->next = s;