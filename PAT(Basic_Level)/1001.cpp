#include <ctime>
#include <iostream>

using namespace std;

int main() {
  clock_t start = clock();

  int n = 0;
  int count = 0;
  cin >> n;
  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = (3 * n + 1) / 2;
    }
    count++;
  }
  cout << count;

  clock_t end = clock();
  cout << "花费了" << (double)(end - start) / CLOCKS_PER_SEC << "秒" << endl;
}

#include <iostream>
using namespace std;
int main() {
  int n, count = 0;
  cin >> n;
  while (n != 1) {
    if (n % 2 != 0) n = 3 * n + 1;
    n = n / 2;
    count++;
  }
  cout << count;
  return 0;
}