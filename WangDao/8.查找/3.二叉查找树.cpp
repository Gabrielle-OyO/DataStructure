

BSTNode *BST_Search(BiTree T, ElemType key) {
  while (T != NULL && key != T->data) {
    if (key < T->data)  //小于 在左子树查找
      T = T->lchild;
    else  //大于 在右子树查找
      T = T->rchild;
  }
  return T;
}