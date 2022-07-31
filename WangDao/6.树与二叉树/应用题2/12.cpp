

typedef struct {
  BiTree t;
  int tag;
} stack;  // tag=0 左子女被访问;tag=1 右子女被访问
void Search(BiTree bt, ElemType x) {
  stack s[];  //栈容量足够大
  top = 0;
  while (bt != NULL || top > 0) {
    while (bt != NULL && bt->data != x) {  //结点入栈
      s[++top].t = bt;
      s[top].tag = 0;
      bt = bt->lchild;  //沿左分支向下
    }
    if (bt->data = x) {
      printf("所查结点的所有祖先结点的值为：\n");             //找到x
      for (i = 1; i <= top; i++) printf("%d", s[i].t->data);  //输出祖先值后结束
      exit(1);
    }
    while (top != 0 && s[top].tag == 1) top--;  //退栈（空遍历）
    if (top != 0) {
      s[top].tag = 1;
      bt = s[top].t->rchild;  //沿右分支向下遍历
    }
  }
}