

typedef struct node {
  ElemType data;            //数据域
  struct node *fch, *nsib;  //孩子和兄弟域
} * Tree;
int Leaves(Tree t) {        //计算孩子兄弟法储存的森林的叶子数
  if (t == NULL) return 0;  //树空返回0
  if (t->fch == NULL)       //若结点无孩子 则该结点必是叶子
    return 1 + Leaves(t->nsib);  //返回叶子结点和其兄弟子树中的叶子节点数
  else                           //孩子子树和兄弟子树中叶子数之和
    return Leaves(t->fch) + Leaves(t->nsib);
}