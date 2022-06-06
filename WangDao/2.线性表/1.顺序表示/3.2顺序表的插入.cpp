

#include <stdlib.h>
#define MaxSize 10
typedef struct {
  int data[MaxSize];
  int length;
} SeqList;

bool ListInsert(SeqList &L, int i, int e) {
  if (i < 1 || i > L.length + 1)  //判断i的范围是否合法
    return false;
  if (L.length > MaxSize)  //当前存储空间已满，不能插入
    return false;

  //问题规模n=L.length（表长）
  for (int j = L.length; j >= i; j--)  //在第i个元素及之后的元素后移
    L.data[j] = L.data[j - 1];
  L.data[i - 1] = e;  //在位置i处放入e       //加强健壮性，此处可以进行判断
  L.length++;  //长度加1
  return true;
}

void InitList(SeqList &L) {
  for (int i = 0; i < MaxSize; i++) L.length = 0;
}

int main() {
  SeqList L;
  InitList(L);
  ListInsert(L, 3, 3);
  return 0;
}
//时间复杂度
//最好：T(n)=O(1)
//最坏：T(n)=O(n)
//平均：T(n)=O(n/2)=O(n)