

/*
C语言中，结构体的比较不能直接用“==”

*/
#include <stdio.h>
#include <stdlib.h>
typedef struct {
  int num;
  int people;
} Customer;

void test() {
  Customer a;
  a.num = 1;
  a.people = 1;

  Customer b;
  b.num = 1;
  b.people = 1;

  if (a == b) {
    printf("相等");
  } else {
    printf("不相等");
  }

  //需要依次对比各个分量来判断两个结构体是否相等
  if (a.num == b.num && a.people == b.people) {
    printf("相等");
  } else {
    printf("不相等");
  }
}
