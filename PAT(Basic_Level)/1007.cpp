#include <iostream>
using namespace std;

//判断素数的函数isprime这样写：对于数字a，i从2到根号a，如果a能够被其中一个i整除，说明i不是素数
bool isprime(int a) {
  for (int i = 2; i * i <= a; i++)
    if (a % i == 0) return false;
  return true;
}
int main() {
  int N, cnt = 0;
  cin >> N;
  for (int i = 5; i <= N; i++)
    if (isprime(i - 2) && isprime(i)) cnt++;
  cout << cnt;
  return 0;
}