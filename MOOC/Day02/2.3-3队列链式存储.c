
//队列的链式存储实现
struct Node
{
    ElementType Data;
    struct Node *Next;
};

struct QNode
{
    struct Node *rear;
    struct Node *front;
};
typedef struct QNode *Queue;
Queue PreQ;

//出队
ElementType DeleteQ(Queue PtrQ)
{
    struct Node *FrontCell;
    ElementType FrontElem;
    if(PtrQ->front==NULL)
    {
        printf("队列空");
        return ERROR;
    }
    FrontCell=PtrQ->front;
    if(PtrQ->front==PtrQ->rear)
        PtrQ->front=PtrQ->rear=NULL;
    else
        PtrQ->front=PtrQ->front->Next;
    FrontElem=FrontCell->Data;
    free(FrontCell);
    return FrontElem;
}