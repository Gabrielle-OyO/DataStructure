
#define MaxSize 10
typedef struct {
  ElemType data[MaxSize];
  int top0;
  int top1;
} SnStack;

//初始化栈
void InitStack(ShStack &S) {
  S.top = -1;  //初始化栈顶指针
  S.top1 = MaxSize;
}