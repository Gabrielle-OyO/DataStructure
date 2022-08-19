

int Btdepth(BiTree T) {
  if (!T) return 0;  //树空 高度为0
  int front = -1, rear = -1;
  int last = 0, level = 0;  // last 指向当前层的最右结点
  BiTree Q[MaxSize];  //设置队列Q 元素是二叉树结点指针且容量足够
  Q[++rear] = T;      //将根结点入队
  BiTree p;
  while (front < rear) {  //队不空 则循环
    p = Q[++front];       //队列元素初读 即正在访问的结点
    if (p->lchild) Q[++rear] = p->lchild;  //左孩子入队
    if (p->rchild) Q[++rear] = p->rchild;  //右孩子入队
    if (front == last) {                   //处理该层的最右结点
      level++;                             //层数增加1
      last = rear;                         // last指向下层
    }
  }
  return level;
}

int Btdepth2(BiTree T) {
  if (T == NULL) return 0;     //空树 高度为0
  ldep = Btdepth2(T->lchild);  //左子树高度
  rdep = Btdepth2(T->rchild);  //右子树高度
  if (ldep > rdep)
    return ldep + 1;  //树的高度为子树最大高度加根结点
  else
    return rdep + 1;
}