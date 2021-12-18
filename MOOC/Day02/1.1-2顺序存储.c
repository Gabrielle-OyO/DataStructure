#include<stdio.h>
#define MAXSIZE 100
#define ElementType;

//初始化（建立空的顺序表）
List MakeEmpty()
{
    List PtrL;
    PtrL=(List)malloc(sizeof(struct LNode));
    PtrL->Last=-1;
    return PtrL;
}
//查找
int Find(ElementType X,List PtrL)
{
    int i=0;
    while(i<=PtrL->Last&&PtrL->Data[i]!=X)
        i++;
        if(i>PtrL->Last)
            return -1;
        else return i;
}
//插入
void Insert(ElementType X,int i,List PtrL)
{
    int j;
    if(PtrL->Last==MAXSIZE-1)
    {
        printf("表满");
        return;
    }
    if(i<1||i>PtrL->Last+2)
    {
        printf("位置不合法");
        return;
    }
    for(j=PtrL->Last;j>=i-1;j--)
        PtrL->Data[j+1]=PtrL->Data[j];
    PtrL->Data[i-1]=X;
    PtrL->Last++;
    return;
}
//删除
void Delete(int i,List PtrL)
{
    int j;
    if(i<1||i>PtrL->Last+1
    {
        printf("不存在第%d个元素",i);
        return;
    }
    for(j=i;j<=PtrL->Last;j++)
        PtrL->Data[j-1]=PtrL->Data[j];
    PtrL->Last--;
    return;

}
