

void InOrder(BiTree T) {
  if (T !-NULL) {
    InOrder(T->lchild);
    visit(T);
    InOrder(T->rchild);
  }
}