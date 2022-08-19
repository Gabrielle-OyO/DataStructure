

void InOrder2(BiTree T) {
  InitStack(S);
  BiTree p = T;               //初始化栈S；p是遍历指针
  while (p || !IsEmpty(S)) {  //栈不空或p不空时循环
    if (P) {                  //一路向左
      Push(S, p);             //当前结点入栈
      p = p->lchild;          //左孩子不空 一直向左走
    } else {
      Pop(S, p);
      visit(p);       //栈顶元素出栈 访问出栈结点
      p = p->rchild;  //向右子树走 p赋值为当前结点的右孩子
    }                 //返回while循环继续进入if-else语句
  }
}