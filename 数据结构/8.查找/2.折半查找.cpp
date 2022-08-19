

typedef struct {
  ElemType *elem;
  int TableLen;
} SSTable;

int Binary_Search(SSTable L, ElemType key) {
  int low = 0, high = L.TableLen - 1, mid;
  while (low <= high) {
    mid = (low + high) / 2;
    if (L.elem[mid] == key)  //查找成功 返回所在位置
      return mid;
    else if (L.elem[mid] > key)  //从前半部分查找
      high = mid - 1;
    else  //从后半部分查找
      low = mid + 1;
  }
  return -1;  //查找失败 返回-1
}