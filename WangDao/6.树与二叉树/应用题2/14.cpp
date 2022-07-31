

typedef struct {
  BiTree data[MaxSize];  //保存队列中的结点指针
  int level[MaxSize];    //泊村data中相同下标结点的层次
  int front, rear;
} Qu;
int BTWidth(BiTree b) {
  BiTree p;
  int k, max, i, n;
  Qu.front = Qu.rear = -1;  //队列为空
  Qu.rear++;
  Qu.data[Qu.rear] = b;   //根节点指针入队
  Qu.level[Qu.rear] = 1;  //根节点层次为1
  while (Qu.front < Qu.rear) {
    Qu.front++;               //出队
    p = Qu.data[Qu.front];    //出队结点
    k = Qu.level[Qu.front];   //出队结点的层次
    if (p->lchild != NULL) {  //左孩子进队列
      Qu.rear++;
      Qu.data[Qu.rear] = p->lchild;
      Qu.level[Qu.rear] = k + 1;
    }
    if (p->rchild != NULL) {
      Qu.rear++;
      Qu.data[Qu.rear] = p->rchild;
      Qu.level[Qu.rear] = k + 1;
    }
  }
  max = 0;  // max保存同一层最多节点个数
  i = 0;
  k = 1;                  // k表示从第一层开始查找
  while (i <= Qu.rear) {  // i扫描队中所有元素
    n = 0;                // n统计第k层的结点个数
    while (i <= Qu.rear && Qu.level[i] == k) {
      n++;
      i++;
    }
    k = Qu.level[i];
    if (n > max) max = n;  //保存最大的n
  }
  return max;
}