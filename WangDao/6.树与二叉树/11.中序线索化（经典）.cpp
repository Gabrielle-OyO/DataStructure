

//全局变量pre指向当前访问结点的前驱
ThreadNode *pre = NULL;

//中序线索化二叉树T
void CreateInThread(Thread T) {
  pre = NULL;                 // pre初始为NULL
  if (T != NULL) {            //非空二叉树才可以线索化
    InThread(T);              //中序线索化二叉树
    if (pre->rchild == NULL)  //遍历录取最后一个结点
      pre->rtag = 1;
  }
}
//线索二叉树结点
typedef struct ThreadNode {
  ElemType data;
  struct ThreadNode *lchild, *rchild;
  int ltag, rtag;  //左右线索标志
} ThreadNode, *ThreadTree;

//中序遍历二叉树 一边遍历一遍线索化
void InThread(ThreadTree T) {
  if (T != NULL) {
    InThread(T->lchild);  //中序遍历左子树
    visit(T);             //访问根结点
    InThread(T->rchild);  //中序遍历右子树
  }
}

//具体线索化
void visit(ThreadNode *q) {
  if (q->lchild == NULL) {  //左子树为空，建立前驱线索
    q->lchild = pre;
    q->ltag = 1;
  }
  if (pre != NULL && pre->rchild == NULL) {
    pre->rchild = q;  //建立前驱结点的后继线索
    pre->rtag = 1;
  }
  pre = q;
}
