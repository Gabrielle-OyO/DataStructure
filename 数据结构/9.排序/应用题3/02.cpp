

void Insert_Sort(ElemType A[], int m, int n) {
  int i, j;
  for (i = m + 1; i <= m + n; i++) {   //依次将A[m+1...m+n]插入有序表中
    A[0] = A[i];                       // m后半部分元素复制为哨兵
    for (j = i - 1; A[j] > A[0]; j--)  //从后往前插入
      A[j + 1] = A[j];                 //后移元素
    A[j + 1] = A[0];                   //插入
  }
}