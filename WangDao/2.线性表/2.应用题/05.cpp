

bool Del_s_t(SeqList &L, int s, int t) {
  int i, k = 0;
  if (L.length == 0 || s > t) return false;
  for (i = 0; i < L.length; i++) {
    if (L.data[i] > s && L.data[i] < t)
      k++;
    else
      L.data[i - k] = L.data[i];
  }
  L.length -= k;
  return true;
}