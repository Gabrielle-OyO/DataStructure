

void PreOrder(BiTree T{
  if (T != NULL) {
    visit(T);             //访问根节点
    PreOrder(T->lchild);  //递归遍历左子树
    PreOrder(T->rchild);  //递归遍历右子树
  }
}