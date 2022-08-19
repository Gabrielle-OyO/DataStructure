

typedef struct Node {
  char data;
  struct Node *next;
} SNode;

int listlen(SNode *head) {
  int len = 0;
  while (head->next != NULL) {
    len++;
    head = head->next;
  }
  return len;
}

SNode *find_addr(SNode *str1, SNode *str2) {
  int m, n;
  SNode *p, *q;
  m = listlen(str1);
  n = listlen(str2);
  for (p = str1; m > n; m--) p = p->next;
  for (p = str2; m < n; n--) q = q->next;
  while (p->next != NULL && p->next != q->next) {
    p = p->next;
    q = q->next;
  }
  return p = p->next;
}