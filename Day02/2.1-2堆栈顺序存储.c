//一个数组实现两个堆栈，要求最大利用数组空间，使数组只要有空间入栈操作就可以成功
//两个栈的栈顶指针相遇，两头开始向中间生长

#define MaxSize<存储数据元素的最大个数>
struct DStack
{
    ElementType Data[MaxSize];
    int Top1;//堆栈1的栈顶指针
    int Top2;
}S;

S.Top1=-1;
S.Top2=MaxSize;

void Push(struct DStack *PtrS,ElementType item,int Tag)
{
    if(PtrS->Top2-PtrS->Top1==1)
    {
        printf("堆栈满");
        return;
    }
    if(Tag==-1)
        PtrS->Data[++(PtrS->Top1)]=itme;
    else
        PtrS->Data[--(PtrS->Top2)]=item;
}

ElementType Pop(struct DStack *PtrS,int Tag)
{
    if(Tag==1)
    {
        if(PtrS->Top1==-1)
        {
            printf("堆栈1空");
            return NULL;
        }else return PtrS->Data[(PtrS->Top1)--]
    }else{
        if(PtrS->Top2==MaxSize)
        {
            printf("堆栈2空");
            return NULL;
        }else return PtrS->Data[(PtrS->Top2)++]
    }
}