

void PostOrder(BiTree T) {
  if (T != NULL) {
    PostOrder(T->lchild);
    PostOrder(T->rchile);
    visit(T);
  }
}