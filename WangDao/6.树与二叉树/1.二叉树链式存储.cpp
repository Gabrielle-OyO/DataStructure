

//二叉树的结点（链式存储）
typedef struct BiTNode {
  ElemType data;                    //数据域
  struct BiTNode *lchild, *rchild;  //左右孩子指针
  struct BiTNode *parent;           //父结点指针
} BiTNode, *BiTree;