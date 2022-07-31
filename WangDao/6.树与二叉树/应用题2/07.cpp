

bool IsComplete(BiTree T) {
  //判断给定二叉树是否为完全二叉树
  InitQueue(Q);
  if (!T) return 1;  //空树为满二叉树
  EnQueue(Q, T);
  while (!IsEmpty(Q)) {
    DeQueue(Q, p);
    if (p) {  //结点非空 将其左右子树入队列
      EnQueue(Q, p->lchild);
      EnQUeue(Q, p->rchild);
    } else
      while (!IsEmpty(Q)) {
        DeQueue(Q, p);  //结点非空 则二叉树为非完全二叉树
        if (p) return 0;
      }
    return 1;
  }
}