

#include <stdlib.h>

#define InitSize 10
typedef struct {
  int *data;
  int MaxSize;
  int length;
} SeqList;

// 在表中查找第一个元素值等于e的元素，并返回其位序
int LocateElem(SeqList L, int e) {
  for (int i = 0; i < L.length; i++)
    if (L.data[i] == e)  //关注最深层循环语句的执行次数与问题规模n的关系
      return i + 1;  //下标0开始
  return 0;          //推出循环 说明查找失败
}
//问题规模n=L.length(表长)

void InitList(SeqList &L) {
  L.data = (int *)malloc(InitSize * sizeof(int));
  L.length = 0;
  L.MaxSize = InitSize;
}
//时间复杂度：O(1)  随机存储性

int main() {
  SeqList L;
  InitList(L);
  LocateElem(L, 5);
  return 0;
}
//时间复杂度
//最好：T(n)=O(1)
//最坏：T(n)=O(n)
//平均：T(n)=O(n/2)=O(n)