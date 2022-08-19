

//求模式串T的next数组

void get_next(String T, int next[]) {
  int i = 1, j = 0;
  next[1] = 0;
  while (i < T.length) {
    if (j == 0 || T.ch[i] == T.ch[j]) {
      ++i;
      ++j;
      //若pi=pj，则next[j+1]=next[j]+1
      next[i] = j;
    } else
      //否则令j=next[j] 循环继续
      j = next[j];
  }
}

// KMP算法
int Index_KMP(String S, String T) {
  int i = 1, j = 1;
  int next[T.length + 1];
  get_next(T, next);  //求模式串的next数组
  while (i <= S.length && j <= T.length) {
    if (j == 0 || S.ch[i] == T.ch[j]) {
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