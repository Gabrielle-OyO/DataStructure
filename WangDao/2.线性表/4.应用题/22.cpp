

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
  m = listlen(str1);                       //求str1的长度
  n = listlen(str2);                       //求str2的长度
  for (p = str1; m > n; m--) p = p->next;  //若m>n 使p指向链表中的第m-n+1个结点
  for (q = str2; m < n; n--) q = q->next;  //若m<n 使p指向链表中的第n-m+1个结点
  while (p->next != NULL && p->next != q->next) {  //将指针p和q同步向后移动
    p = p->next;
    q = q->next;
  }
  return p->next;  //返回共同后缀的起始地址
}