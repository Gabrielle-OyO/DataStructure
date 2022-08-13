
void BubleSort(ElemTyoe A[], int n) {
  //双向起泡
  int low = 0, high = n - 1, i;
  bool flag = true;             //一趟冒泡后记录元素是否交换标志
  while (low < high && flag) {  //循环条件跳出 当flag为false说明没有逆序
    flag = false;               //每趟初始置falg为false
    for (i = low; i < high; i++)  //从前向后冒泡
      if (A[i] > A[i + 1]) {      //逆序
        swap(A[i], A[i + 1]);     //交换
        flag = true;              //置flag
      }
    high--;                       //更新上界
    for (i = high; i > low; i--)  //从后向前冒泡
      if (A[i] < A[i - 1]) {      //逆序
        swap(A[i], A[i - 1]);     //交换
        flag = true;              //置flag
      }
    low++;  //更新下界
  }
}

void swap(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}