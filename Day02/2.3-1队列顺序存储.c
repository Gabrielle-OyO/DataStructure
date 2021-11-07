
//队列
Queue CreateQueue(int MaxSsize)//生成长度为MaxSize的空队列
int IsFullQ(Queue Q,int MaxSize)//判断队列Q是否已满
void AddQ(Queue Q,ElementType item)//将数据元素item插入队列Q中
int IsEmptyQ(Queue Q)//判断队列Q是否为空
ElementType DeleteQ(Queue Q)//将队头数据元素从队列中删除并返回

#define MaxSize<储存数据元素的最大个数>
struct QNode
{
    ElementType Data[MaxSize];
    int rear;
    int front;
};
typedef struct QNode *Queue;

