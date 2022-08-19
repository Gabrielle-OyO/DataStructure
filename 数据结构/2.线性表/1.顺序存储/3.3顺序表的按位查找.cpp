

#include <stdlib.h>

#define InitSize 10
typedef struct {
  int *data;
  int MaxSize;
  int length;
} SeqList;

int GetElem(SeqList L, int i) {
  return L.data[i - 1];  //与访问普通数组方法一致
}
//时间复杂度：O(1)  随机存储性

void InitList(SeqList &L) {
  L.data = (int *)malloc(InitSize * sizeof(int));
  L.length = 0;
  L.MaxSize = InitSize;
}

int main() {
  SeqList L;
  InitList(L);
  GetElem(L, 5);
  return 0;
}
