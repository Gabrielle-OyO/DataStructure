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

//求表长
int Length(List PtrL)
{
    List p=PtrL;
    int j=0;
    while(p)
    {
        p=p->Next;
        j++;
    }
    return j;
}
//查找
List FindKth(int K,List PtrL)
{
    List p=PtrL;
    int i=1;
    while(p!=NULL&&i<K)
    {
        p=p->Next;
        i++;
    }
    if(i==K)
        return p;
    else return NULL;
}