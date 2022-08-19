

typedef struct BSTNode {
  int key;
  struct BSTNode *lchild, *rchild;
} BSTNode, *BSTree;

//非递归
BSTNode *BST_Search(BSTree T, int key) {
  while (T != NULL && key != T->key) {  //若树空或者等于根结点值 则循环结束
    if (key < T->key)
      T = T->lchild;  //小于 则在左子树上查找
    else
      T = T->rchild;  //大于 则在右子树上查找
  }
  return T;
}

//递归
BSTNode *BSTSearch(BSTree T, int key) {
  if (T == NULL)  //查找失败
    return NULL;
  if (key == T->key)  //查找成功
    return T;
  else if (key < T->key)
    return BSTSearch(T->lchild, key);  //在左子树中查找
  else
    return BSTSearch(T->rchild, key);  //在右子树中查找
}