

void QuickSort(ElemType A[], int low, int high) {
  if (low < high) {  //递归跳出的条件
    // Partition()就是划分操作，将表A[low..high]划分为满足上诉条件的两个子表
    int pivotpos = Partition(A, low, high);  //划分
    QuickSort(A, low, pivotops - 1);  //依次对两个子表进行递归排序
    QuickSort(A, pivotops + 1, high);
  }
}

int Partition(ElemType A[], int low, int high) {  //一趟划分
  ElemType pivot = A[low];  //将当前表中第一个元素设为枢轴 对表进行划分
  while (low < high) {  //循环跳出条件
    while (low < high && A[high] >= pivot) --high;
    A[low] = A[high];  //将比枢轴小的元素移动到左端
    while (low < high && A[low] <= pivot) ++low;
    A[high] = A[low];  //将比枢轴达的元素移动到右端
  }
  A[low] = pivot;  //枢轴元素存放到最终位置
  return low;      //返回存放枢轴的最终位置
}