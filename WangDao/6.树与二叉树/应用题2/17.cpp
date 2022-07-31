

int similar(BiTree T1, BiTree T2) {
  int leftS, rightS;
  if (T1 == NULL && T2 == NULL)  //两树皆空
    return 1;
  else if (T1 == NULL || T2 == NULL)  //只有一树为空
    return 0;
  else {  //递归判断
    leftS = similar(T1->lchild, T2->rchild);
    rightS = similar(T1->rchild, T2->lchild);
    return leftS && rightS;
  }
}