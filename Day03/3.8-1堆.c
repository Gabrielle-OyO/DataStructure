//最大堆（MaxHeap）

//数据对象集对象：完全二叉树  每个结点的元素不小于其子结点的元素值

MaxHeap Create(int MaxSize)//创建一个空的最大堆
Boolean IsFull(MaxHeap H)//判断最大堆是否已满
Insert(MaxHeap H,ElementType item)//将元素item插入最大堆H
Boolean IsEmoty(MaxHeap H)//判断最大堆H是否为空
ElementType DeleteMax(MaxHeap H)//返回H中最大元素（高优先级）

//创建
typedef struct HeapStruct *MaxHeap;
struct HeapStruct
{
    ElementType *Elements;
    int Size;
    int Capacity;
}

MaxHeap Create(int MaxSize)
{
    MaxHeap H=malloc(sizeof(struct HeapStruct));
    H->Elements=malloc((MaxSize+1)*sizeof(ElementType));
    H->Size=0;
    H->Capacity=MaxSize;
    H->Elements[0]=MaxData;//定义哨兵为大于堆中所有可能元素的值 便于以后更快操作
    return H;
}

//插入
//将新结点插入到从其父结点到根结点的有序序列中

void Insert(MaxHeap H,ElementType item)//H->Elements[0]已经定义为哨兵
{
    int i;
    if(IsFull(H))
    {
        printf("最大堆已满");
        return;
    }
    i=++H->Size;//i指向插入后堆 中最后一个元素的位置
    for( ;H->Elements[i/2]<item;i/=2)
        H->Elements[i]=H->Elements[i/2];//向下过滤结点
    H->Elements[i]=item;//将item插入
}

//删除
ElementType DeleteMax(MaxHeap H)
{
    int Parent,Child;
    ElementType MaxItem,temp;
    if(IsEmpty(H))
    {
        printf("最大堆已空");
        return;
    }
    MaxItem=H->Elements[1];//取出根节点最大值
    temp=H->Elements[H->Size--];
    for(Parent=1;Parent*2<=H->Size;Parent=Child)//判别是否有左儿子
    {
        Child=Parent*2;
        if((Child!=H->Size)&&(H->Elements[Child]<H->Elements[Child+1]))
        Child++;
        if(temp>=H->Elements[Child])
            break;
        else
            H->Elements[Parent]=H->Elements[Child];
    }
    H->Elements[Parent]=temp;
    return MaxItem;
}