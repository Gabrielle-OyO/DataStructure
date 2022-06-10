

#define MaxSize 50  //最大长度
typedef struct {    //结构类型定义
  ElemType data;    //存储元素
  int next;         //下一个元素的数组下标
} SLinkList[MaxSize];

//静态链表以next==-1作为结束标志