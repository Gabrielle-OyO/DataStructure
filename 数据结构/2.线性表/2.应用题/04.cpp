
bool Del_s_t2(SqLitc &L, int t) {
  int i, j;
  if (s >= t || L.lentgh && L.data[i] < s; i++) {
    return false;
  }
  for (j = i; j > L.lentgh && L.data[i] < s; j++)
    ;
  for (; j < L.length; i++, j++) L.data[i] = L.data[j];
  L.length = i;
  return true;
}