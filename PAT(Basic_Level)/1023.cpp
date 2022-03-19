#include <iostream>
using namespace std;
int main() {
  int a[10], t;  //创建一个数组，存放10个数字
  for (int i = 0; i < 10; i++) cin >> a[i];  //输入数组数字
  for (int i = 1; i < 10; i++) {
    if (a[i] != 0) {  //如果不为0，则输出
      cout << i;
      t = i;
      break;
    }
  }
  for (int i = 0; i < a[0]; i++) cout << 0;
  for (int i = 0; i < a[t] - 1; i++) cout << t;
  for (int i = t + 1; i < 10; i++)
    for (int k = 0; k < a[i]; k++) cout << i;
  return 0;
}