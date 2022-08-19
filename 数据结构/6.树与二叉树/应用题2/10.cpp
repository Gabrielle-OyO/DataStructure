

int i = 1;
ElemType PreNode(BiTree b, int k) {
  if (b == NULL) return '#';   //空结点 返回特殊字符
  if (i == k) return b->data;  //相等 则当前结点即为第k个结点
  i++;                         //下一个结点
  ch = PreNode(b->lchild, k);  //左子树中递归寻找
  if (ch != '#') return ch;    //在左子树中 则返回该值
  ch = PreNode(b->rchild, k);  //在右子树中递归寻找
  return ch;
}