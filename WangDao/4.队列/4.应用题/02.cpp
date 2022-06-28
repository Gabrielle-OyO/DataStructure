

void Train_Arrange(char *train) {
  // train为火车 H硬座 S软座
  char *p = train, *q = train, c;
  stack s;
  InitStack(s);  //初始化栈结构
  while (*p) {
    if (*p == 'H')  //把H存入到栈中
      Push(s, *p);
    else
      *(q++) = *p;  //把S调到前部
    p++;
  }
  while (!StackEmpty(s)) {
    Pop(s, c);
    *(q++) = c;  //把H接在后部
  }
}