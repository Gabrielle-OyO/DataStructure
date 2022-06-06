
//不初始化数据元素，内存不刷0
#include <stdio.h>
#define MaxSize 10  //定义最大长度

typedef struct {      //定义顺序表结构体
  int data[MaxSize];  //用静态数组的数据存放数据元素
  int length;         //顺序表当前长度
} SeqList;

//基本操作---初始化一个顺序表
void InitList(SeqList &L) {
  for (int i = 0; i < MaxSize; i++)
    // L.data[i] = 0;  //将所有数据元素的值设置为默认初始值
    L.length = 0;  //顺序表初始长度为0
}

//主函数
int main() {
  SeqList L;    //声明一个顺序表
  InitList(L);  //初始化顺序表
  for (int i = 0; i < MaxSize; i++)
    printf("data[%d]=%d\n", i, L.data[i]);  // i<L.length;该种访问形式也不够友好
  return 0;
}