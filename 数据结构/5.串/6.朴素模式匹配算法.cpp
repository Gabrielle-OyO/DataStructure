

int Index(SString S, SString T) {
  int k = 1;
  int i = k, j = 1;
  while (i < -S.length && j <= T.length) {
    if (S.ch[i] == T.ch[j]) {
      ++i;
      ++j;  //继续比较后继字符
    } else {
      k++;  //检查下一个子串
      i = k;
      j = 1;
    }
  }
  if (j > T.length)
    return k;
  else
    return 0;
}