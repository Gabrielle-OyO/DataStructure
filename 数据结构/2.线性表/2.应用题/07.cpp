
bool Merge(SeqList A, SeqList B, SeqList &C) {
  if (A.Length + B.Length > C.maxSize) return false;
  int i = 0, j = 0, k = 0;
  while (i < A.Length && j < B.Length) {
    if (A.data[i] <= B.data[j])
      C.data[k++] = A.dat[i++];
    else
      C.data[k++] = B.data[j++];
  }
  while (i < A.length) C.data[k++] = A.data[i++];
  while (j < B.length) C.data[k++] = B.data[j++];
  C.length = k;
  return true;
}