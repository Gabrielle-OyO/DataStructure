

//求中序前驱
void InOrder(BiTree T) {
  if (T != NULL) {
    InOrder(T->lchild);  //递归遍历左子树
    visit(T);            //访问根结点
    InOrder(T->rchild);  //递归遍历右子树
  }
}

//访问结点q
void visit(BiTNode *q) {
  if (q == p)     //访问当前结点刚好是结点p
    final = pre;  //找到p的前驱结点
  else            // pre指向当前访问的结点
    pre = q;
}

//辅助全局变量 用于查找结点p的前驱
BiTNode *p;             // p指向目标结点
BiTNode *pre = NULL;    //指向当前访问结点的前驱
BiTNode *final = NULL;  //用于记录最终结果

///////////////////////////////////////////////////////
//中序找后继
//找到以p为根的子树中 第一个被中序遍历的结点
ThreadNode *Firstnode(ThreadNode *p) {
  //循环找到最左下结点 （不一定是叶节点）
  while (p->ltag == 0) p = p->lchild;
  return p;
}
//中序线索二叉树中找到结点p的后继结点
ThreadNode *Nextnode(ThreadNode *p) {
  //右子树中左下结点
  if (p->rtag == 0)
    return Firstnode(p->rchild);
  else
    return p->rchild;  // rtag==1直接返回后继线索
}

//中序线索二叉树进行中序遍历（利用线索实现的非递归算法）
void InOrder(ThreadNode *T) {
  for (ThreadNode *p = Firstnode(T); p != NULL; p = Nextnode(p)) visit(p);
}
////////////////////////////////////////////////////////////
//找前驱

//找到以p为根的子树中 最后一个 被中序遍历的结点
ThreadNode *Lastnode(ThreadNode *p) {
  //循环找到最右下结点（不一定是叶节点）
  while (p->rtag == 0) p = p->rchild;
  return p;
}

//在中序线索二叉树中找到结点p的前驱结点
ThreadNode *Prenode(ThreadNode *p) {
  //左子树中最右下结点
  if (p->ltag == 0)
    return Lastnode(p->lchild);
  else
    return p->lchild;  // ltag==1直接返回前驱线索
}

//队中去线索二叉树进行逆向中序遍历
void RevInorder(ThreadNode *T) {
  for (ThreadNode *p = Lastnode(T); p = Prenode(p)) visit(p);
}