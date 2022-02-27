#include <cctype>
#include <iostream>
using namespace std;

int main() {
  string a, b, c, d;
  cin >> a >> b >> c >> d;
  char t[2];
  int pos, i = 0, j = 0;

  //对比a，b字符串，取出相同的字母（大写）A-G，存入数组t[0]
  while (i < a.length() && i < b.length()) {
    if (a[i] == b[i] && (a[i] >= 'A' && a[i] <= 'G')) {
      t[0] = a[i];
      break;
    }
    i++;
  }
  i = i + 1;
  //对比a，b字符串，取出相同的字母（大写）A-N，存入数组t[1]
  while (i < a.length() && i < b.length()) {
    if (a[i] == b[i] && (a[i] >= 'A' && a[i] <= 'N') || isdigit(a[i])) {
      t[1] = a[i];  // isdigit  判断一个字符是否是十进制
      break;
    }
    i++;
  }
  while (j < c.length() && j < d.length()) {
    if (c[j] == d[j] && isalpha(a[j])) {  // isalpha  判断一个字符是否是字母
      pos = j;
      break;
    }
    j++;
  }

  string week[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
  int m = isdigit(t[1]) ? t[1] - '0' : t[1] - 'A' + 10;
  cout << week[t[0] - 'A'];
  printf(" %02d:%02d", m, pos);
  return 0;
}