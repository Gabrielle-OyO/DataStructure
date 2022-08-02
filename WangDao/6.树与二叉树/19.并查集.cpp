
//结构定义
#define SIZE 100
int UFSets[SIZE];  //集合元素数组

//初始化操作
void Initial(int S[]) {
  for (int i = 0; i < size; i++)  //每个自成单元素集合
    S[i] = -1;
}

// Find操作 x的元素
int Find(int S[], int x) {
  while (S[x] >= 0)  //循环寻找x的根
    x = S[x];
  return x;  //根的S[]小于0
}

// Union操作
void Union(int S[], int Root1, int Root2) {
  S[Root2] = Root1;  //将根Root2连接到另一根Root1下面
}
