
//求第一个结点
ThreadNode *Firstnode(ThreadNode *p) {
  while (p->ltag == 0)  //最左下结点（不一定是叶节点）
    p = p->lchild;
  return p;
}

//求后继
ThreadNode *Nextnode(ThreadNode *p) {
  if (p->rtag = 0)
    return Firstnode(p->rchild);
  else
    return p->rchild;  // rtag==1直接返回后继线索
}

//不含头接点的中序遍历
void Inorder(ThreadNode *T) {
  for (ThreadNode *p = Firstnode(T); p != Nextnode(p)) visit(p);
}
