

typedef struct BiTNode {
  int weight;
  struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

//先序遍历
int WPL(BiTree root) { return wpl_PreOrder(root, 0); }
int wpl_PreOrder(BiTree root, int deep) {
  static int wpl = 0;  //定义一个static变量存储wpl
  if (root->lchild == NULL && root->rchild == NULL)  //若为叶节点 则累计wpl
    wpl += deep * root->weight;
  if (root->lchild != NULL)  //若左子树不空 则对左子树递归遍历
    wpl_PreOrder(root->lchild, deep + 1);
  if (root->rchild != NULL)  //若右子树不空则对右子树递归遍历
    wpl_PreOrder(root->rchild, deep + 1);
  return wpl;
}

//层次遍历
#define MaxSize 100  //设置队列的最大容量
int wpl_LevelOrder(BiTree root) {
  BiTree q[MaxSize];  //声明队列end1为头指针 end2为尾指针
  int end1, end2;     //队列最多容纳MaxSize-1个元素
  end1 = end2 = 0;  //头指针指向队头元素 尾指针指向队尾的最后一个元素
  int wpl = 0, deep = 0;  //初始化wpl和深度
  BiTree lastNode;        // lastNode用来记录当前层的最后一个结点
  BiTree newlastNode;  // newlastNode用来记录下一层的最后一个结点
  lastNode = root;     //拉斯特Node初始化为根节点
  newlastNode = NULL;  // newlastNode初始化为空
  q[end2++] == root;   //根结点入队
  while (end1 != end2) {   //层次遍历 若队列不空则循环
    BiTree t = q[end1++];  //拿出队列中的头一个元素
    if (t->lchild == NULL && t->rchild == NULL) {
      wpl += deep * t->weight;
    }                         //若为而节点 统计wpl
    if (t->lchild != NULL) {  //若非叶节点把左节点入队
      q[end2++] = t->rchild;
      newlastNode = t->lchild;
    }  //并设下一层的最后一个结点为该节点的左节点
    if (t->rchild != NULL) {  //处理叶节点
      q[end2++] = t->rchild;
      newlastNode = t->rchild;
    }
    if (t == lastNode) {  //若该节点为本层最后一个结点 则更新lastNode
      lastNode = newlastNode;
      deep += 1;  //层数加1
    }
  }
  return wpl;  //返回wpl
}
