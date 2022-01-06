/*
这道题的第三个条件文字不太明白

但是通过给出的输入输出样例中推导出了它的规律是
输出的必须满足这个条件
①包含 P T A  且PT的顺序不能改变
②PT之间有多少个A  则PT中间的A的个数乘与P前面的A的个数为T后面的个数
aTbPc   ===>  a*b=c
*/

#include <iostream>
#include <map>
// https://blog.csdn.net/shuzfan/article/details/53115922   C++ Map常见用法说明

using namespace std;
int main() {
  int n, p = 0, t = 0;
  string s;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    map<char, int> m;
    for (int j = 0; j < s.size(); j++) {
      m[s[j]]++;
      if (s[j] == 'P') p = j;
      if (s[j] == 'T') t = j;
    }
    //通过数组位置来进行条件判断
    if (m['P'] == 1 && m['A'] != 0 && m['T'] == 1 && m.size() == 3 &&
        t - p != 1 && p * (t - p - 1) == s.length() - t - 1)
      printf("YES\n");
    else
      printf("NO\n");
  }
  return 0;
}

//读取字符串  放入数组中
//提取出PT的位次同时获得PT中间的A的个数
//条件判断