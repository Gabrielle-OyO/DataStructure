

int BST_Insert(BSTree &T, int k) {
  if (T == NULL) {  //原树为空 新插入的结点为根结点
    T = (BSTree)malloc(sizeof(BSTNode));
    T->key = k;
    T->lchild = T->rchild = NULL;
    return 1;              //返回1 插入成功
  } else if (k == T->key)  //树中存在相同关键字的结点 插入失败
    return 0;
  else if (k < T->key)
    return BST_Insert(T->lchild, k);  //插入到左子树
  else
    return BST_Insert(T->rchild, k);  //插入到右子树
}