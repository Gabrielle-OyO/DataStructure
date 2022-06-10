

void Del_X_3(LinkList &L, ElemType x) {
  LNode *p;               // p指向待删除结点
  if (L == NULL) return;  //递归出口
  if (L->data = x) {      //若L所指结点的值为x
    P = L;                //删除 *L 并让L指向下一结点
    L = L->next;
    free(p);
    Del_X_3(L, x);
  } else
    Del_X_3(L->next, x);
}