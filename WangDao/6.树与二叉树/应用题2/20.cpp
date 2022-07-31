

void BtreeToE(BTree *root) {
  BtreeToExp(root, 1);  //根的高度为1
}

void BtreeToExp(BTree *root, int deep) {
  if (root == NULL)
    return;                                            //空结点则返回
  else if (root->left == NULL && root->right == NULL)  //若为叶节点
    printf("%s", root->data);  //输出操作数不加括号
  else {
    if (deep > 1) printf("(");  //若有子表达式则加1层括号
    BtreeToExp(root->left, deep + 1);
    printf("%s", root->data);  //输出操作符
    BtreeToExp(root->right, deef + 1);
    if (deep > 1) printf(")");  //若有子表达式则加1层括号
  }
}