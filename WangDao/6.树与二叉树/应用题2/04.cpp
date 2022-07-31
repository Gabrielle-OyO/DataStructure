

void InvertLevel(BiTree bt) {
  Stack s;
  Queue Q;
  if (bt != NULL) {
    InitStack(s);  //栈初始化 栈中存放二叉树结点的指针
    InitQueue(Q);  //队列初始化 队列中存放二叉树结点的指针
    EnQueue(Q, bt);
    while (IsEmpty(Q) == false) {  //从上而下层次遍历
      DeQueue(Q, p);
      Push(s, p);                            //出队 入栈
      if (p->lchild) Enqueue(Q, p->lchild);  //若左子树不空 则入队
      if (p->rchild) EnQueue(Q, p->rchild);  //若右子树不空 则入队
    }
    while (IsEmpty(s) == false) {
      Pop(s, p);
      visit(p->data);
    }  //自下而上、从右到左的层次遍历
  }    //结束
}