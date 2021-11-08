//静态查找

//顺序查找
int SequentialSearch(List Tb1,ElementType K)
{
    //在Element[1]~Element[n]中查找关键字为K的数据元素
    int i;
    Tb1->Element[0]=K;//建立哨兵
    for(i=Tb1->Length;Tb1->Element[i]!=K;i--);
    return i;
}

typedef struct LNode *List;
struct LNode
{
    ElementType Element[MAXSIZE];
    int Length;
};