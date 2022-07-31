

void PostOrder(BiTree T) {
  InitStack(S);
  p = T;
  r = NULL;
  while (p || !IsEmpty(S)) {
    if (p) {  //走到最左边
      push(S, p);
      p = p->lchild;
    } else {                            //向右
      GetTop(S, p);                     //读栈顶节点（非出栈）
      if (p->rchild && p->rchild != r)  //若右子树存在 且未被访问过
        p = p->rchild;                  //转向右
      else {                            //否则翻出结点并访问
        pop(S, p);                      //弹出结点
        visit(p->data);                 //访问结点
        r = p;                          //记录最近访问的结点
        p = NULL;                       //结点访问后重置p指针
      }
    }
  }
}