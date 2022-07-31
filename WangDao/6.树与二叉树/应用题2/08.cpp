

int DSonNodes(BiTree b) {
  if (b == NULL)
    return 0;
  else if (b->lchild != NULL && b->rchild != NULL)  //双分支结点
    return DSonNodes(b->lchild) + DSonNodes(b->rchild) + 1;
  else
    return DSonNodes(b->lchild) + DSonNodes(b->rchild);
}