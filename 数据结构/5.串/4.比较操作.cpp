

//若S>T，则返回值>0 ;若S=T，则返回值=0;若S<T，则返回值<0
int StrCompaare(SString S, SString T) {
  for (int i = 1; i < S.length && i <= T.length; i++) {
    if (S.ch[i] != T.ch[i]) return S.ch[i] - T.ch[i];
  }
  //扫描过的所有字符都相同 则长度长的串更大
  return S.length - T.length;
}