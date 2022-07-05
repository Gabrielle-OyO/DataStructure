

void PreOrder2(BiTree T) {
  InitStack(S);
  BiTree p = T;               //初始化栈S；p是遍历指针
  while (p || !IsEmpty(S)) {  //栈不空或p不空时循环
    if (P) {                  //一路向左
      visit(p)                //访问当前结点
          Push(S, p);         //当前结点入栈
      p = p->lchild;          //左孩子不空 一直向左走
    } else {
      Pop(S, p);      //栈顶元素出栈 并转向出栈结点的右子树
      p = p->rchild;  //向右子树走 p赋值为当前结点的右孩子
    }                 //返回while循环继续进入if-else语句
  }
}