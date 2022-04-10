#include <cctype>
#include <iostream>
using namespace std;
int main() {
  string s1, s2, ans;
  cin >> s1 >> s2;
  for (int i = 0; i < s1.length(); i++)
    if (s2.find(s1[i]) == string::npos &&
        ans.find(toupper(s1[i])) == string::npos)
      ans += toupper(s1[i]);
  cout << ans;
  return 0;
}
// toupper 大写
//  npos是一个常数，表示size_t的最大值（Maximum value for size_t）
//许多容器都提供这个东西，用来表示不存在的位置，类型一般是std::container_type::size_type。