

int Index(SString S, SString T) {
  int i = 1, n = StrLength(S), m = StrLength(T);
  SString sub;  //用于暂存子串
  while (i <= n - m + 1) {
    SubSting(sub, S, i, m);
    if (StrCompare(sub, T) != 0)
      ++i;
    else
      return i;  //返回子串在主串中的位置
  }
  return 0;  // S中不存在域T相等的子串
}