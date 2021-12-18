//堆栈的链式存储实现
typedef struct SNode *Stack;
struct SNode
{
    ElementType Data;
    struct SNode *Next;
};
//初始化
Stack CreateStack()
{
    Stack S;
    S=(Stack)malloc(sizeof(struct SNode));
    S->Next=NULL;
    return S;
}

//判断堆栈S是否为空
int IsEmpty(Stack S)
{
    return(S->Next==NULL);
}

void Push(ElementType item,Stack s)
{
    struct SNode *TmpCell;
    TmpCell=(struc SNode *)malloc(sizeof(struct SNode));
    TmpCell->Element=item;
    TmpCell->Next=S->Next;
    S->Next=TmpCell;
}

ElementType Pop(Stack S)
{
    struct SNode *FirstCell;
    ElementType TopElem;
    if(IsEmpty(S))
    {
        printf("堆栈空");
        return NULL;
    }else{
        FirstCell=S->Next;
        S->Next=FirstCell->Next;
        TopElem=FirstCell->Element;
        free(FirstCell);
        return TopElem;
    }
}