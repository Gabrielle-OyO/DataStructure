

int Majority(int A[], int n) {
  int i, c, count = 0;
  c = A[0];
  for (i = 1; i < n; i++)
    if (A[i] == c)
      count++;
    else if (count > 0)
      count--;
    else {
      c = A[i];
      count = 1;
    }
  if (count > 0)
    for (i = count = 0; i < n; i++)
      if (A[i] == c) count++;
  if (count > n / 2)
    return c;
  else
    return -1;
}