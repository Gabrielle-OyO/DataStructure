

typedef int DataType;
void Reverese(DataType A[], int left, int right, int arraySize) {
  if (left >= right || right >= arraySize) return;
  int mid = (left + right) / 2;
  for (int i = 0; i <= mid - left; i++) {
    int temp = A[left + i];
    A[left + i] = A[right - i];
    A[right - i] = temp;
  }
}
void Exchange(DataType A[], int m, int n, int arraySize) {
  Reverese(A, 0, m + n - 1, arraySize);
  Reverese(A, 0, n - 1, arraySize);
  Reverese(A, n, m + n - 1, arraySize);
}