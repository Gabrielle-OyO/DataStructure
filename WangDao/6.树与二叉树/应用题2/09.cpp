

void swap(BiTree b) {
  //本算法递归地交换二叉树的左右子树
  if (b) {
    swap(b->lchild);   //递归地交换左子树
    swap(b->rchild);   //递归地交换右子树
    temp = b->lchild;  //交换左右孩子结点
    b->lchild = b->rchild;
    b->rchild = temp;
  }
}