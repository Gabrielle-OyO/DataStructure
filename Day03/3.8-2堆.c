

typedef struct HNode *Heap;
struct HNode
{
    ElementType *Data;
    int Size;
    int Capacity;
};

typedef Heap MaxHeap;
typedef Heap MinHeap;
#define MAXDATA 1000
MaxHeap CreateHeap(int MaxSize)
{
    MaxHeap H=(MaxHeap)malloc(sizeof(struct HNode));
    H->Data=(ElementType *)malloc((MaxSize+1)*sizeof(ElementType));
    H->Size=0;
    H->Capacity=MaxSize;
    H->Data[0]=MAXDATA;
    return H;
}

bool IsFull(MaxHeap H)
{
    int i;
    if(IsFull(H))
    {
        printf("最大堆已满");
        return false;
    }
    i=++H->Size;
    for( ;H->Data[i/2]<X;i/=2)
        H->Data[i]=H->Data[i/2];
        H->Data[i]=X;
        return true;
}

#define ERROR -1
bool IsEmpty(MaxHeap H)
{
    return (H->Size==0);
}

ElementTyoe DeleteMax(MaxHeap H)
{
    int Parent,Child;
    ElementType MaxItem,X;
    if(IsEmpty(H))
    {
        printf("最大堆已为空");
        return ERROR;
    }
    MaxItem=H->Data[1];
    X=H->Data[H->Size--];
    for(Parent=1;Parent*2<=H->Size;Parent=Child)
    {
        Child=Parent*2;
        if((Child!=H->Size)&&(H->Data[Child]<H->Data[Child+1]))
            Child++;
        if(X>=H->Data[Child])   break;
        else    H->Data[Parent]=H->Data[Child];
    }
    H->Data[Parent]=X;
    return MaxItem;
}

void PercDown(MaxHeap H,int p)
{
    int Parent,Child;
    ElementType X;
    X=H->Data[p];
    for(Parent=p;Parent*2<=H->Size;Parent)
    {
        Child=Parent*2;
        if((Child!=H->Size)&&(H->Data[Child]<H->Data[Child+1]))
            Child++;
        if(X>=H->Data[Child])   break;
        else    H->Data[Parent]=H->Data[Child];
    }
    H->Data[Parent]=X;
}

void BuildHeap(MaxHeap H)
{
    int i;
    for(i=H->Size/2;i>0;i--)
        PercDown(H,i);
}
