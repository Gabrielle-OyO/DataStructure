#include <iostream>
using namespace std;
int main() {
  string s;
  cin >> s;
  int a[10] = {0};  //初始化第一个数组为0
  for (int i = 0; i < s.length(); i++) a[s[i] - '0']++;  //记录数字出现的次数
  for (int i = 0; i < 10; i++) {
    if (a[i] != 0) printf("%d:%d\n", i, a[i]);
  }
  return 0;
}