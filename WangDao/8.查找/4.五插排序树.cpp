

// 5插排序树结点定义
struct Node {
  ElemType keys[4];       //最多4个关键字
  struct Node *child[5];  //最多5个孩子
  int num;                //结点中有几个关键字
};