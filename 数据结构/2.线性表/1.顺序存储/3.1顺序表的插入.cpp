
#include <stdlib.h>
#define MaxSize 10
typedef struct {
  int data[MaxSize];
  int length;
} SeqList;

void ListInsert(SeqList &L, int i, int e) {
  for (int j = L.length; j >= i; j--)  //将第i个元素之后的元素后移
    //问题规模n=L.length（表长）
    L.data[j] = L.data[j - 1];  //数组下标以0起始
  L.data[i - 1] = e;            //在位置位序i（下标i-1）处放入e
  L.length++;
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