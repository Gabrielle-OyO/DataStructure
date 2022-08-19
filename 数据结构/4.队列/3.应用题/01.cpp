
/*
队空：Q.front==Q.rear && Q.tag==0;
队满：Q.front==Q.rear && Q.tag==1;
进队：Q.data[Q.rear]=x ;Q.rear=(Q.rear+q)%MaxSize; Q.tag=1;
出队：x=Q.data[Q.front];Q.front=(Q.front+1)%MaxSize; Q.tag=0;
*/
//设“tag”法的循环队列入队算法
int EnQueuel(SqQueue &Q, ElemType x) {
  if (Q.front == Q.rear && Q.tag == 1)  //两个条件都满足时则队满
    return 0;
  Q.data[Q.rear] = x;
  Q.rear = (Q.rear + 1) % MaxSize;
  Q.tag = 1;
  return 1;
}

//设“tag”法的循环队列出队算法
int DeQueuel(SqQueue &Q, ElemType &x) {
  if (Q.front == Q.rear && Q.tag == 0)  //满足两个条件
    return 0;
  x = Q.data[Q.front];
  Q.front = (Q.front + 1) % MaxSize;
  Q.tag = 0;
  return 1;
}
