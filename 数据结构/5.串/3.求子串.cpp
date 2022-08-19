

#define MAXLEN 255
typedef struct {
  char ch[MAXLEN];
  int length;
} SString;

//用Sub返回串S的第pos个字符起长度为len的子串
bool SubString(SString &Sub, SString S, int pos, int len) {
  //子串范围越界
  if (pos + len - 1 > S.length) return false;
  for (int i = pos; i < pos + len; i++) Sub.ch[i - pos + 1] = S.ch[i];
  Sub.length = len;
  return true;
}