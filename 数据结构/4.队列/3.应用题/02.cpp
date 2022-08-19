
void Incerser(Stack &S, Queue &Q) {
  //元素逆置
  while (!QueueEmpty(Q)) {
    x = DeQueue(Q);  //队列中全部元素依次出队
    Push(S, x);      //元素依次入栈
  }
  while (!StackEmpty(S)) {
    Pop(S, x);      //栈中元素依次全部出栈
    EnQueue(Q, x);  //再次入队
  }
}
