

BiTree PreInCreat(ElemType A[], ElemType B[], int l1, int l2, int h1, int h2) {
  // l1,h1为先序的第一和最后一个结点下标 l2,h2为中序的第一和最后一个结点下标
  //初始调用时 l1=l2=1,h1=h2=n
  root = (BiTNode *)mallco(sizeof(BiTNode));  //建根结点
  root->data = A[l1];                         //根结点
  for (i = l2; B[i] != root->data; i++) {  //根结点在中序序列中的划分
    llen = i - l2;                         //左子树长度
    rlen = h2 - i;                         //右子树长度
  }
  if (llen)  //左子树为空
    root->lchild = PreInCreat(A, B, l1 + 1, l1 + llen, l2, l2 + llen - 1);
  else
    root->lchild = NULL;
  if (rlen)  //递归建立右子树
    root->rchild = PreInCreat(A, B, h1 - rlen + 1, h1, h2 - rlen + 1, h2);
  else  //右子树为空
    root->rchild = NULL;
  return root;  //返回根结点指针
}