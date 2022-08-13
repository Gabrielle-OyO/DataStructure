

int kth_elem(int a[], int low, int high, int k) {
  int pivot = a[low];
  int low_temp = low;
  int high_temp = high;
  while (low < high) {
    while (low < high && a[high] >= pivot) --high;
    a[low] = a[high];
    while (low < high && a[low] <= pivot) ++low;
    a[high] = a[low];
  }
  a[low] = pivot;

  if (low == k)
    return a[low];
  else if (low > k)  //前半部分寻找递归
    return kth_elem(a, low_temp, low - 1, k);
  else  //后半部分寻找
    return kth_elem(a, low + 1, high_temp, k);
}