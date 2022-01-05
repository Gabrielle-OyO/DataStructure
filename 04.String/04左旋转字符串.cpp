//其实使用substr 和 反转 时间复杂度是一样的，都是$O(n) $，
//但是使用substr申请了额外空间，所以空间复杂度是$O(n)$，而反转方法的空间复杂度是$O(1)$。

class Solution {
 public:
  string reverseLeftWords(string s, int n) {
    reverse(s.begin(), s.begin() + n);
    reverse(s.begin() + n, s.end());
    reverse(s.begin(), s.end());
    return s;
  }
};