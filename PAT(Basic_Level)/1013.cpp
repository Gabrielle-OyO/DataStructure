#include <iostream>
#include <vector>
using namespace std;

//素数的判断；
bool isprime(int a) {
  for (int i = 2; i * i <= a; i++)
    if (a % i == 0) return false;
  return true;
}

int main() {
  int M, N, num = 2, cnt = 0;
  cin >> M >> N;
  vector<int> v;  //定义一个容器类，储存将要输出的素数

  while (cnt < N) {
    if (isprime(num)) {
      cnt++;
      if (cnt >= M) v.push_back(num);  //输出素数
    }
    num++;
  }

  cnt = 0;
  for (int i = 0; i < v.size(); i++) {
    cnt++;
    if (cnt % 10 != 1) printf(" ");
    printf("%d", v[i]);
    if (cnt % 10 == 0) printf("\n");
  }
  return 0;
}