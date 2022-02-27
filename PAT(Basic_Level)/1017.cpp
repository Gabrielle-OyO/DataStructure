#include <iostream>
using namespace std;
int main() {
  string s;
  int a, t = 0, temp = 0;
  cin >> s >> a;
  int len = s.length();
  //从高位起，取每一位除以除数
  t = (s[0] - '0') / a;
  //记录字符串的长度 用以以下的判断中使用
  if ((t != 0 && len > 1) || len == 1) cout << t;
  temp = (s[0] - '0') % a;  //类型转换进行计算
  for (int i = 1; i < len; i++) {
    t = (temp * 10 + s[i] - '0') / a;
    cout << t;
    temp = (temp * 10 + s[i] - '0') % a;
  }
  cout << " " << temp;
  return 0;
}
