#include<stdio.h>
typedef struct LNode *List;
struct LNode
{
    ElementType Data;
    int Next;
};
struct LNode L;
List PtrL;

//访问下标为i的元素：L.Data[i]  或   PtrL->Data[i]
//线性表的长度：L.Last+1  或  PtrL->Last+1