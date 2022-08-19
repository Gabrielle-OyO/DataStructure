

void SelectSort(ElemType A[], int n) {
  for (i = 0; i < n - 1; i++) {        //共进行n-1趟
    min = i;                           //记录最小元素位置
    for (j = i + 1; j < n; j++)        //在A[i...n-1]中选择最小元素
      if (A[j] < A[min]) min = j;      //更新最小元素位置
    if (min != i) swap(A[i], A[min]);  //封装的swap函数共移动元素3次
  }
}