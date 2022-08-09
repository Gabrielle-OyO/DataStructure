
typedef struct {   //查找表的数据结构（顺序表）
  ElemType *elem;  //动态数组基址
  int TableLen;    //表的长度
} SSTable;

int Search_Seq(SSTable ST, ElemType key) {
  int i;
  for (i = 0; i < ST.TableLen && ST.elem[i] != key; ++i) {
    //从前往后找
    //查找成功 返回元素下标；查找失败 返回-1
  }
  return i == ST.TableLen ? -1 : i;
}

int Search_Seq(SSTable ST, ElemType key) {
  ST.elem[0] = key;  //“哨兵”  循环不必判断数组是否越界 减少判断条件
  int i;
  for (i = ST.TableLen; ST.elem[i] != key; --i) {
    //从后往前找
    //查找成功 返回元素下标；查找失败 返回0
  }
  return i;  //若表中不存在关键字为key的元素 将查找到i为0是退出for循环
}