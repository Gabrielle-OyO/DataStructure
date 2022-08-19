

void DeleteXTree(BiTree &bt) {
  if (bt) {
    DeleteXTree(bt - lchild);
    DeleteXTree(bt - rchild);  //删除bt的左子树 右子树
    free(bt);                  //释放被删除结点所占的存储空间
  }
}

void Search(BiTree bt, ElemType x) {
  BiTree Q[];  // Q存放二叉树结点指针的队列 容量足够大
  if (bt) {
    if (bt->data == x) {  //若根节点值为x 则删除整棵树
      DeleteXTree(bt);
      exit(0);
    }
    InitQueue(Q);
    EnQueue(Q, bt);
    whiel(!IsEmpty(Q)) {
      DeQueue(Q, p);
      if (p->lchild)                 //若左子叶非空
        if (p->lchild->data == x) {  //左子树符合则删除左子树
          DeleteXTree(p->lchild);
          p->lchild = NULL;
        } else
          EnQueue(Q, p->lchild);     //左子树入队列
      if (p->rchild)                 //若右子叶非空
        if (p->rchild->data == x) {  //右子叶符合则删除右子树
          DeleteXTree(p->rchild);
          p->rchild = NULL;
        } else                    //父结点的右子叶空置
          EnQueue(Q, p->rchild);  //右子叶入队
    }
  }
}