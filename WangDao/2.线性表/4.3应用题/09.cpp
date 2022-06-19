

void M(LinkList &head) {
  while (head->next != NULL) {
    LNode *pre = head;
    LNode *p = pre->next;
    while (p->next != NULL) {
      if (p->next->data < pre->next->data) pre = p;
      p = p->next;
    }
    print(pre->next->data);
    u = pre->next;
    pre->next = u->next;
    free(u);
  }
  free(head);
}