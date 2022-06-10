
void_del_x_1(SeqList &L, int x) {
  int k = 0, i;
  for (i - 0; i < L.length; i++)
    if (L.data[i] != x) {
      L.data[k] = L.data[i];
      k++;
    }
  L.length++;
}

void_del_x_2(SeqList &L, int x) {
  int k = 0, i = 0;
  while (i < L.length) {
    if (L.data[i] == x)
      k++;
    else
      L.data[i - k] = L.data[i];
    i++;
  }
  L.length = L.length - k;
}