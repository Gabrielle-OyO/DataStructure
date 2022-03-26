#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int first, n, k, temp;
  cin >> first >> n >> k;  // first链表的开头-n输入个数-k反转的位数
  int data[100005], next[100005], list[100005];
  //节点地址-下一节点的地址-保存该节点的数据

  for (int i = 0; i < n; i++) {
    cin >> temp;  //当前地址
    cin >> data[temp] >> next[temp];
  }

  //不一定所有的输入节点都是有用的，加个计数器
  int sum = 0;
  while (first != -1) {
    //将地址排序，存入list中 sum++进行下一个地址的访问
    list[sum++] = first;
    first = next[first];
  }
  //每一段k，sum减去余下的k，就可以进行反转。
  for (int i = 0; i < (sum - sum % k); i += k)
    reverse(begin(list) + i, begin(list) + i + k);  //反转0-k段内的数据
  //最后一个数据没有下一个地址，故i<sum-1，最后一个数据要单独输出
  for (int i = 0; i < sum - 1; i++)
    printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);

  printf("%05d %d -1", list[sum - 1], data[list[sum - 1]]);
  return 0;
}

/*
输入示例：
00100 6 4
00000 4 99999
00100 1 12309
68237 6 -1
33218 3 00000
99999 5 68237
12309 2 33218
*/