

ElemType Comm_Ancestor(SqTree T, int i, int j) {
  //查找二叉树结点i和结点j的最近的公共祖先结点
  if (T[i] != '#' && T[j] != '#') {  //判断结点存在
    while (i != j) {                 //两个编号不同时循环
      if (i > j)
        i = i / 2;  //向上找i的祖先
      else
        j = j / 2;  //向下找j的祖先
    }
    return T[i];
  }
}
