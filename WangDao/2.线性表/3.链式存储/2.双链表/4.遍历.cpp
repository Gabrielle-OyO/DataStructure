

//向后遍历
while (p != NULL) {
  p = p->next;
}

//向前遍历
while (p != NULL) {
  p = p->prior;
}

//向前遍历，跳过头结点
while (p->prior != NULL) {
  p = p->prior;
}