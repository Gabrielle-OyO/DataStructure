#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
int main() {
  int n;
  long long p;
  scanf("%d%lld", &n, &p);
  //通过容器储存数字
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  //排序 从小到大
  sort(v.begin(), v.end());
  int result = 0, temp = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + result; j < n; j++) {
      if (v[j] <= v[i] * p) {
        temp = j - i + 1;
        if (temp > result) result = temp;
      } else {
        break;
      }
    }
  }
  cout << result;
  return 0;
}