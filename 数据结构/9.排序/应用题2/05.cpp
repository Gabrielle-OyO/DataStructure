

bool IsMinHeap(ElemType A[], int len) {
  if (len % 2 == 0) {         // len为偶数 有一个单分支结点
    if (A[len / 2] > A[len])  //判断单分支结点
      return false;
    for (i = len / 2 - 1; i >= 1; i--)
      if (A[i] > A[2 * i] || A[i] > A[2 * i + 1])  //判断所有双分支结点
        return false;
  } else {  // len为奇数 没有单分支结点
    for (i = len / 2; i >= 1; i--)
      if (A[i] > A[2 * i] || A[2 * i + 1])  //判断所有双分支结点
        return false;
    t
  }
  return true;
}