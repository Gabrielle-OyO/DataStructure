#include <iostream>
using namespace std;
int main() {
  int N, row = 0;
  char c;
  cin >> N >> c;  //输入符号数和符号
                  //查找满足条件的i最小值，i层数
  for (int i = 0; i < N; i++) {
    if ((2 * i * (i + 2) + 1) > N) {
      row = i - 1;
      break;
    }
  }

  for (int i = row; i >= 1; i--) {
    for (int k = row - i; k >= 1; k--) cout << " ";
    for (int j = i * 2 + 1; j >= 1; j--) cout << c;
    cout << endl;
  }
  for (int i = 0; i < row; i++) cout << " ";
  cout << c << endl;
  for (int i = 1; i <= row; i++) {
    for (int k = row - i; k >= 1; k--) cout << " ";
    for (int j = i * 2 + 1; j >= 1; j--) cout << c;
    cout << endl;
  }
  cout << (N - (2 * row * (row + 2) + 1));
  return 0;
}

/*
分析：每个沙漏都是从最中间一行行向上下分别扩展一行，每次扩展行都要比之前一层多2个符号，最
中间一行只有 1 个符号，假设扩展的层数为
i，则扩展出去的上边需要的所有符号个数为3+ 5 + 7 + ...
+ (2i+1) = (3 + 2i + 1) * i / 2 = i * (i
+2)，扩展出去的下边与上边同样多所以乘以2， 加上最重要那一行
1个符号，所以总共需要2 * i * (i + 2) + 1个符号，所以i从0到N， 找满足(2 * i * (i
+ 2) + 1) >N的最小的 i，因为符号不能超过N，所以只能扩展出去 i-1行，
用变量row表示从最中间一行需要扩展出去的行 数，row = i –1，接下来开始输出，
上面的每一行，对于扩展出去的第 i 层需要输出row – i个空格，接着输出i * 2 +
1个符号c和换行符； 对于最中间一行，需要输出row
–1个空格、符号c和换行符；对于下面的每一行，
对于扩展出去的第i层，需要输出row-i个空格，接着输出i * 2 +1个符号c和换行符，
因为 用掉的符号数为2 * row * (row + 2) +1，
所以最后输出剩下没用掉的符号数为N – (2 * row * (row + 2)+ 1)

*/