

void move(ElemType A[], int len) {
  //对A[]表进行奇偶划分
  int i = 0, j = len - 1;
  while (i < j) {
    while (i < j && A[i] % 2 != 0) i++;
    while (i < j && A[i] % 2 != 1) j--;
    if (i < j) {
      swap(A[i], A[j]);
      i++;
      j--;
    }
  }
}

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}