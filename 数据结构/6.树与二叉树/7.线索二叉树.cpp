

typedef struct ThreadNode {
  ElemType data;                      //数据元素
  struct TreadNode *lchild, *rchild;  //左右孩子指针
  int ltag, rtag;                     //左右线索标志
} ThreadNode, *ThreadTree;