

KeyType predt = -32767;  // predt为全局变量，保存当前结点中前驱得知 初值为-∞
int JudgeBST(BiTree bt) {
  int b1, b2;
  if (bt == NULL)
    return 1;  //空树
  else {
    b1 = JudgeBST(bt->lchild);  //判断左子树是否是二叉排序树
    if (b1 == 0 || predt >= bt->data)  //若左子树返回值为0或前驱大于等于当前结点
      return 0;                        //则不是二叉排序树
    predt = bt->data;           //保存当前结点的关键字
    b2 = JudgeBST(bt->rchild);  //判断右子树
    return b2;                  //返回右子树的结果
  }
}