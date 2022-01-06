#include <iostream>
#include <stack>
using namespace std;
int main() {
  stack<string> v;
  string s;
  while (cin >> s) v.push(s);
  //因为cin在识别字符串的时候，每次遇到空格便停止，故等于将以空格分开的string存到了ss的每个元素中了
  cout << v.top();
  v.pop();
  while (!v.empty()) {
    cout << " " << v.top();
    v.pop();
  }
  return 0;
}
