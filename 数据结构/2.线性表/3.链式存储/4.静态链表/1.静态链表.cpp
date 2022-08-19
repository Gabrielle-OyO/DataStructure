

#define MaxSize 50  //最大长度
typedef struct {    //结构类型定义
  ElemType data;    //存储数据元素
  int next;         //下一个元素的数组下标
} SLinkList[MaxSize];

//静态链表以next==-1作为结束标志

// SLinkList b  --  相当于定义了一个长度为MaxSize的Node型数组