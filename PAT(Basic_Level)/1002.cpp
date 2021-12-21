#include <iostream>
#define max 100
using namespace std;
const char* nums[] = {"ling", "yi",  "er", "san", "si",
                      "wu",   "liu", "qi", "ba",  "jiu"};
int main() {
  char n;
  int sum = 0;
  while ((n = getchar()) != '\n') {
    sum += n - '0';
  }

  int i, d[max];
  for (i = 0; i < max && sum != 0; i++) {
    d[i] = sum % 10;
    sum = sum / 10;
  }
  i--;
  for (; i >= 0; i--) {
    if (i == 0) {
      cout << nums[d[i]] << endl;
    } else {
      cout << nums[d[i]] << " ";
    }
  }
  return 0;
}
