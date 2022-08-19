

void dc(LinkList L, int n) {
  int i;
  char s[n / 2];  // s是字符栈
  p = L->next;    // p是俩表的工作指针 指向待处理的当前元素
  for (i = 0; i < n / 2; i++) {  //链表前一半元素进栈
    s[i] = p->next;
  }
  i--;             //恢复最后的i值
  if (n % 2 == 1)  //若n是奇数 后移过中心点
    p = p->next;
  while (p != NULL && s[i] == p->data) {  //检测是否中心对称
    i--;                                  // i充当栈顶指针
    p = p->next;
  }
  if (i == -1)  //链表中心对称
    return 1;
  else
    return 0;  //链表中心不对称
}