
#include <stdio.h>
#include <stdlib.h>
#define MaxSize 10
typedef struct {
  int data[MaxSize];
  int length;
} SeqList;

bool ListDelete(SeqList &L, int i, int &e) {
  //如果e前不加&，则被调用的函数中处理的参数数据是复制品

  if (i < 1 || i > L.length)  //判断有效性
    return false;
  e = L.data[i - 1];

  //问题规模n=L.length（表长）
  for (int j = i; j < L.length; j++)  //将第i个位置后的元素前移
    L.data[j - 1] = L.data[j];
  L.length--;  //线性表长度减1
  return true;
}

void InitList(SeqList &L) {
  for (int i = 0; i < MaxSize; i++) L.length = 0;
}

int main() {
  SeqList L;
  InitList(L);
  int e = -1;  //用变量e把删除的元素带回来
  if (ListDelete(L, 3, e))
    printf("已删除第3个元素，删除的值为=%d\n", e);
  else
    printf("位序i不合法，删除失败\n");
  return 0;
}
//时间复杂度
//最好：T(n)=O(1)
//最坏：T(n)=O(n)
//平均：T(n)=O(n/2)=O(n)