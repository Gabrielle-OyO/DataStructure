
//定义
#define MaxSize 10  //定义栈中元素的最大个数
typedef struct {
  ElemType data[MaxSize];  //静态数组存放栈中元素
  int top;                 //栈顶指针
} SqStack;

void testStack() {
  SqStack S;  //声明一个顺序栈（分配空间）
  InitStack(S);
}

//初始化方式1
void InitStack(SqStack &S) {
  S.top = -1;  //初始化栈顶指针
}

//初始化方式2
void InitStack(SqStack &S) {
  S.top = 0;  //初始化栈顶指针

  //进栈
  S.data[S.top++] = x;
  //出栈
  x = S.data[--S.top];
  //栈满
  top == Maxsize;
}

//判断栈空
bool StackEmpty(SqStack S) {
  if (S.top == -1)
    return true;  //栈空
  else
    return false;  //不空
}

//进栈
bool Push(SqStack &S, ElemType x) {
  if (S.top == MaxSize - 1)  //栈满，报错
    return false;
  // S.data[++S.top] = x;
  S.top = S.top + 1;  //指针先加1
  S.data[S.top] = x;  //新元素入栈
  return true;
}

//出栈
bool Pop(SqStack &S, ElemType &x) {
  if (S.top == -1)  //空栈，报错
    return false;
  // x = S.data[S.top--];
  x = S.data[S.top];  //栈顶元素先出栈
  S.top = S.top - 1;  //指针再减1
  return true;
}

//读栈顶元素
bool GetTop(SqStack S, ElemType &x) {
  if (S.top == -1)  //栈空，报错
    return false;
  x = S.data[S.top];  // x记录栈顶元素
  return true;
}