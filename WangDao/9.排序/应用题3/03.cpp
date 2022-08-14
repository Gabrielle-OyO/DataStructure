
//计数排序算法
void CountSort(RecType A[], RecType B[], int n) {
  //计数排序算法，将A中记录排序存放到B中
  int cnt;                   //计数变量
  for (i = 0; i < n; i++) {  //对每个元素
    for (j = 0, cnt = 0; j < n; j++)
      if (A[j].key < A[i].key)  //统计关键字比他小的元素个数
        cnt++;
    B[cnt] = A[i];  //放入对应的位置
  }
}

//简单排序算法
void CountSort(RecType A[], RecType B[], int n) {
  for (i = 0; i < n; i++)  //各元素增加一个计数域
    A[i].count = 0;
  for (i = 0; i < n; i++)
    for (j = i + 1; j < n; j++) {
      if (A[i].key < A[j].key)
        A[j].count++;
      else
        A[i].count++;
    }
}
