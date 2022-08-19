

void R_Print(LinkList L) {
  if (L->next != NULL) {
    R_Print(L->next);  //递归
  }
  if (L != NULL) print(L->next);  //输出函数
}

void R_Ignore_Head(LinkList L) {
  if (L != NULL) R_Print(L->next);
}