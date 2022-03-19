#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct mooncake {
  float num, price, unit;
};

int cmp(mooncake a, mooncake b) { return a.unit > b.unit; }  //从大到小排序
int main() {
  int n, need;
  cin >> n >> need;

  vector<mooncake> a(n);  //创建一个a容器，容器大小为n；
  for (int i = 0; i < n; i++) scanf("%f", &a[i].num);  //输出每种月饼的总库存
  for (int i = 0; i < n; i++)
    scanf("%f", &a[i].price);  //输出每种月饼的总售价，从大到小排序
  for (int i = 0; i < n; i++) a[i].unit = a[i].price / a[i].num;  //月饼单价

  sort(a.begin(), a.end(), cmp);  //对数组a排序，遵从规则cmp

  float result = 0.0;
  for (int i = 0; i < n; i++) {
    if (a[i].num < need) {
      result = result + a[i].price;
    } else {
      result = result + a[i].unit * need;
      break;
    }
    need = need - a[i].num;
  }
  printf("%.2f", result);
  return 0;
}