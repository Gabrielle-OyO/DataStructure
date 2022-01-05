

//使用库函数
class Solution {
 public:
  void reverseString(vector<char>& s) {
    for (int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--) {
      swap(s[i], s[j]);
    }
  }
};

// swap常用的两种实现

//数值交换
int tmp = s[i];
s[i] = s[j];
s[j] = tmp;

//位运算
s[i] ^= s[j];
s[j] ^= s[i];
s[i] ^= s[j];