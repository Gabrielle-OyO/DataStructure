

p->next = q->next;
q->next->prior = p;
free(q);