

//求模式串T的nextval数组
void get_nextval(String T, int nextval[]) {
  int i = 1, j = 0;
  nextval[1] = 0;
  while (i < T.length) {
    if (j == 0 || T.ch[i] == T.ch[j]) {
      ++i;
      ++j;
      if (T.ch[i] != T.ch[j]) {
        nextval[i] = j;
      } else
        nextval[i] = nextval[j];
    }
  }
}

// KMP算法
int Index_KMP(String S, String T) {
  int i = 1, j = 1;
  int nextval[T.length + 1];
  get_nextval(T, nextval);  //求模式串的next数组
  while (i <= S.length && j <= T.length) {
    if (j == 0 || S.ch[i] == T.ch[j]) {
      ++i;
      ++j;  //继续比较后继字符
    } else
      j = nextval[j];  //模式串右移动
  }
  if (j > T.length)
    return i - T.length;  //匹配成功
  else
    return 0;
}