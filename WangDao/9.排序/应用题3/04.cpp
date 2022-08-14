

int Partition(ElemType K[], int n) {
  //交换序列K[1...n]中的记录 使枢轴到位 并返回其所在的位置
  int i = 1, j = n;       //设置两个交替标量初始值分别为1和n
  ElemType pivot = K[j];  //枢轴
  while (i < j) {         //循环跳出条件
    while (i < j && K[i] <= pivot)  //从前往后找比枢轴大的元素
      i++;
    if (i < j)  //移动到右端
      K[j] = K[i];
    while (i < j && K[j] >= pivot)  //从后往前找比枢轴小的元素
      j--;
    if (i < j) K[i] = K[j];  //移动到左端
  }
  K[i] = pivot;  //枢轴存放在最终的位置
  return i;      //返回存放枢轴的位置
}