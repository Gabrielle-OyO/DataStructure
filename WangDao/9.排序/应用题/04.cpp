

int Partition2(ElemTyoe A[], int low, int high) {
  int rand_Index = low + rand() % (high - low + 1);  //生成随机枢轴
  swap(A[rand_Index], A[low]);  //将枢轴交换到第一个元素
  ElemType pivot = A[low];      //置当前表中第一个元素作为枢轴
  int i = low;  //使表A[low...i]中所有元素小于pivot，初始为空表
  for (int j = low + 1; j < high; j++)  //从第二个元素开始寻找小于基准的元素
    if (A[j] < pivot)                   //找到后交换
      swap(A[++i], A[j]);
  swap(A[i], A[low]);  //将基准元素插入最终位置
  return i;            //返回基准元素位置
}