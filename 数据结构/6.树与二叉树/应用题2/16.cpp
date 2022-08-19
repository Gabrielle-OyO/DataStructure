

LinkedList head, pre = NULL;  //全局变量
LinkedList InOrder(BiTree bt) {
  if (bt) {
    InOrder(bt->lchild);                           //中序遍历左子树
    if (bt->lchild == NULL && bt->rchild == NULL)  //叶节点
      if (pre == NULL) {
        head = bt;
        pre = bt;
      } else {  //处理第一个叶节点
        pre->rchild;
        pre = bt;
      }                   //将叶节点连入链表
    InOrder(bt->rchild);  //中序遍历右子树
    pre->rchild = NULL;   //设置链表尾
  }
  return head;
}