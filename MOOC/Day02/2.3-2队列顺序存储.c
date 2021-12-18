#define MaxSize<储存数据元素的最大个数>
struct QNode
{
    ElementType Data[MaxSize];
    int rear;
    int front;
};
typedef struct QNode *Queue;

//入队列
void AddQ(Queue PtrQ,ElementType item)
{
    if((PtrQ->rear+1)%MaxSize==PtrQ->from)
    {
        printf("队列满");
        return;
    }
    PtrQ->rear=(PtrQ->rear+1)%MaxSize;
    PtrQ->Data[PtrQ->rear]=item;
}

//出队列
ElementType DeleteQ(Queue PtrQ)
{
    if(PtrQ->front==PtrQ->rear)
    {
        printf("队列空");
        return ERROR;
    }else{
        PtrQ->front=(PtrQ->front+1)%MaxSize;
        return PtrQ->Data[PtrQ->front];
    }
}
