

int SeqSrch(RcdType R[], ElemType k) {
  int i = 0;
  while ((R[i].key != k) && (i < n))  //从前向后顺序查找指定结点
    i++;
  if (i < n && i > 0) {  //若找到 则交换
    temp = R[i];
    R[i] = R[i - 1];
    R[i - 1] = temp;
    return --i;  //交换成功
  } else
    return -1;  //交换失败
}