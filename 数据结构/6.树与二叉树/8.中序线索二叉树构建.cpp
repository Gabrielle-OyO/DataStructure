

void InThread(ThreadTree &p, ThreadTree &pre) {
  if (p != NULL) {
    InThread(p->lchild, pre);  //递归 线索化左子树
    if (p->lchild == NULL) {   //左子树为空 建立前驱线索
      p->lchild = pre;
      p->ltag = 1;
    }
    if (pre != NULL && pre->rchild == NULL) {
      pre->rchild = p;  //家里前驱结点的后继线索
      pre->rtag = 1;
    }
    pre = p;  //标记当前结点成为刚刚访问过的结点
    InThread(p->rchild, pre);  //递归 线索化右子树
  }
}

void CreateInThread(ThreadTree T) {
  ThreadTree pre = NULL;
  if (T != NULL) {       //非空二叉树 线索化
    InThread(T, pre);    //线索化二叉树
    pre->rchild = NULL;  //处理遍历的最后一个结点
    pre->rtag = 1;
  }
}
