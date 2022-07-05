

void LevelOrder(BiTree T) {
  IniQueue(Q);  //初始化辅助队列
  BiTree p;
  EnQueue(Q, T);         //根结点入队
  while (!IsEmpty(Q)) {  //队列不空则循环
    DeQueue(Q, p);       //队头结点出队
    visit(p);            //访问出队结点
    if (p->lchild != NULL)
      EnQueue(Q, p->lchild);  //左子树不空 则左子树根节点入队
    if (p->rchild != NULL)
      EnQueue(Q, p->rchild);  //右子树不空 则右子树根节点入队
  }
}