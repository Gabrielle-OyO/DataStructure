
typedef struct node {
  int data;
  struct node* next;
} NODE;

void change_list(NODE* h) {
  NODE *p, *q, *r, *s;
  p = q = h;
  while (q->next != NULL) {
    p = p->next;
    q = q->next;
    if (q->next != NULL) q = q->next;
  }
  q = p->next;
  p->next = NULL;
  while (q != NULL) {
    r = q->next;
    q->next = p->next;
    p->next = q;
    q = r;
  }
  s = h->next;
  q = p->next;
  p->next = NULL;
  while (q != NULL) {
    r = q->next;
    q->next = s->next;
    s->next = q;
    s = q->next;
    q = r;
  }
}
