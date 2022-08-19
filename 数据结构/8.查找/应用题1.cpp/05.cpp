

typedef struct {
  ElemType *elem;
  int lenght;
} SSTable;

int BinSearchRec(SSTable ST, ElemType key, int low, int high) {
  if (low > high)  //查找结束
    return 0;
  mid = (low + high) / 2;  //取中间位置
  if (key > ST.elem[mid])  //取后半部分查找
    Search(ST, key, mid + 1, high);
  else if (key < ST.elem[mid])  //取前半部分查找
    Search(ST, key, low, mid - 1);
  else  //查找成功
    return mid;
}