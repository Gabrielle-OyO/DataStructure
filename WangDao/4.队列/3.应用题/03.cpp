

//入队算法
int EnQueue(Stack &S1, Stack &S2, ElemType e) {
  if (!StackOverflow(S1)) {
    Push(S1, e);
    return 1;
  }
  if (StackOverflow(S1) && !StackEmpty(S2)) {
    printf("队列满");
    return 0;
  }
  if (StackOverflow(S1) && StackEmpty(S2)) {
    while (!StackEmpty(S1)) {
      Pop(S1, x);
      Push(S2, x);
    }
  }
  Push(S1, e);
  return 1;
}

//出队算法
void DeQueue(Stack &S1, Stack &S2, ElemTpye &x) {
  if (!StackEmpty(S2)) {
    Pop(S2, x);
  } else if (StackEmpty(S1)) {
    printf("队列为空");
  } else {
    while (!StackEmpty(S2)) {
      Pop(S1, x);
      Push(S2, x);
    }
    Pop(S2, x);
  }
}

//判断队列为空的算法
int QueueEmpty(Stack S1, Stack S2) {
  if (StackEmpty(S1) && StackEmpty(S2))
    return 1;
  else
    return 0;
}