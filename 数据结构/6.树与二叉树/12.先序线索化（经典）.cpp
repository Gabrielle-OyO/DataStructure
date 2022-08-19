

//全局变量pre指向当前访问结点的前驱
ThreadNode *pre = NULL;

//线序线索化二叉树T
void CreatePreThread(Thread T) {
  pre = NULL;
  if (T != NULL) {            //非空二叉树线索化
    PreThread(T);             //线序线索化二叉树
    if (pre->rchild == NULL)  //处理遍历最后一个结点
      pre->rtag = 1;
  }
}

//线索二叉树结点
typedef struct ThreadNode {
  ElemType data;
  struct ThreadNode *lchild, *rchild;
  int ltag, rtag;
} ThreadNode, *ThreadTree;

//先序遍历二叉树 一边遍历一遍线索化
void PreThread(ThreadTree T) {
  if (T != NULL) {
    visit(T);          //先处理根节点
    if (T->ltag == 0)  // lchild不是前驱结点
      PreThread(T->lchild);
    PreThread(T->rchild);
  }
}

//具体线索化
void visit(ThreadNode *q) {
  if (q->lchild == NULL) {
    q->lchild = pre;
    q->ltag = 1;
  }
  if (pre != NULL && pre->rchild == NULL) {
    pre->rchild = q;
    pre->rtag = 1;
  }
  pre = q;
}