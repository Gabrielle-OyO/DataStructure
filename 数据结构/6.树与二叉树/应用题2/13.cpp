

typedef struct {
  BiTree t;
  int tag;  // tag=0表示左子女被访问;tag=1表示右子女被访问
} stack;
stack s[], s1[];  //栈 容量足够大
BiTree Ancestor(BiTree ROOT, BiTNode *p, BiTNode *q) {
  top = 0;
  bt = ROOT;
  while (bt != NULL || top > 0) {
    while (bt != NULL) {
      s[++top].t = bt;
      s[top].tag = 0;
      bt = bt->lchild;
    }  //沿左分支向下
    while (top != 0 && s[top].tag == 1) {
      if (s[top].t == p) {
        for (i = 1; i <= top; i++) s1[i] = s[i];
        top1 = top;
      }                              //将栈s的元素转入辅助栈s1保存
      if (s[top].t == q)             //找到q结点
        for (i = top; i > 0; i--) {  //将栈中元素的书系欸但到s1中去匹配
          for (j = top1; j > 0; j--)
            if (s1[j].t == s[i].t) return s[i].t;  // p和q的最近公共祖先已找到
        }
      top--;  //退栈
    }
    if (top != 0) {
      s[top].tag = 1;
      bt = s[top].t->rchild;
    }  //沿右分支向下遍历
  }
  return NULL;  // p和q无公共祖先
}