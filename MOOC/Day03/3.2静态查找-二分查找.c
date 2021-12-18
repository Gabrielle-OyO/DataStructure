//静态查找

//二分查找(Bibary Search)
//先前条件：元素有序存放在数组里

int BinarySearch(List Tbl,ElementType K)
{
    int left,right,mid,NotFound=-1;
    left=1;//左边界
    right=Tbl->Lenght;//右边界
    while(left<=right)
    {
        mid=(left+right)/2;
        if(K<Tbl->Element[mid])
            right=mid-1;
        else if(K>Tbl->Element[mid])
            left=mid+1;
        else return mid;//查找成功，返回数组元素的下标
    }
    return NotFound;//查找不成功 返回-1
}