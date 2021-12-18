
Stack CreateStack(int MaxSize)//生成空堆栈，其最大长度为MaxSize
int IsFull(Stack S,int MaxSize)//判断堆栈S是否已满
void Push(Stack S,ElementType item)//将元素item压入堆栈
int IsEmpty(Stack S)//判断堆栈S是否为空
ElementType Pop(Stack S)//删除并返回栈顶元素

//站的顺序存储实现
#define MaxSize
typedef struct SNode *Stack;
struct SNode
{
    ElementType Data[MaxSize];
    int Top;
}

//入栈
void Push(Stack PtrS,ElementType item)
{
    if(PtrS->Top==MaxSize-1)
    {
        printf("堆栈满");
        return;
    }else
    {
        PtrS->Data[++(PtrS->Top)]=item;
        return;
    }
}

//出栈
ElementType Pop(Stack PtrS)
{
    if(PtrS->Top==-1)
    {
        printf("堆栈空");
        return ERROR;
    }
    else
    {
        return(PtrS->Data[(PtrS->Top)--]);
    }
}