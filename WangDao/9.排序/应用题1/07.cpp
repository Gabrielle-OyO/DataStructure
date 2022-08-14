

//划分算法
int SetPartition(int a[], int n) {
  int pivotkey, low = 0, low0 = 0, high = n - 1, high0 = n - 1;
  int flag = 1, k = n / 2, i;
  while (flag) {
    pivotkey = a[low];    //选择枢轴
    while (low < high) {  //基于枢轴对数据进行划分
      while (low < high && a[low] <= pivotkey) ++low;
      if (low != high) a[high] = a[low];
      while (low < high && a[high] >= pivotkey) --high;
      if (low != high) a[low] = a[high];
    }
    a[low] = pivotkey;
    if (low == k - 1)  //若枢轴使第n/2小元素 划分成功
      flag = 0;
    else {  //判断是否继续划分
      if (low < k - 1) {
        low0 = ++low;
        high = high0;
      } else {
        high0 = --high;
        low = low0;
      }
    }
  }
  for (i = 0; i < k; i++) s1 += a[i];
  for (i = k; i < n; i++) s2 += a[i];
  return s2 - s1;
}