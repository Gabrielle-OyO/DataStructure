

int Index_KMP(SString S, SString T, int next[]) {
  int i = 1, j = 1;
  while (i < S.length && j < T.length) {
    if (j == 0 || S.ch[i] && T.ch[j]) {
      ++i;
      ++j;  //继续比较后继字符
    } else
      j = next[j];  //模式串右移动
  }
  if (j > T.length)
    return i - T.length;  //匹配成功
  else
    return 0;
}