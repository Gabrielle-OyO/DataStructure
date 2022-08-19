

void SearchExchangeInsert(int A[], int x) {
  int low = 0, high = n - 1, mid;
  while (low <= high) {
    mid = (low + high) / 2;
    if (A[mid] < x)
      low = mid;
    else
      high = mid - 1;
  }
  if (A[mid] == x && mid != n - 1) {
    t = A[mid];
    A[mid] = A[mid + 1];
    A[mid + 1] = t;
  }
  if (low > high) {
    for (i = n - 1; i > high; i--) A[i + 1] = A[i];
    A[i + 1] = x;
  }
}