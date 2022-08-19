

#define MaxSize 10  //定义队列中元素的最大个数
typedef sruct {
  ElemType data[MaxSize];  //用静态数组存放队列元素
  int front, rear;         //对头指针和队尾指针
  int size;                //方法（2）
  int rear = front = 0;
  int tag;  //方法（3）
}
SqQueue;

void InitQueue(SqQueue &Q) {
  Q.rear = Q.front = 0;  //初始时，对头队尾指针指向0
}

void testqueue() {
  SqQueue Q;
  InitQueue(Q);
}

//判断队列是否为空(1)
bool QueueEmpty(SqQueue Q) {
  if (Q.rear == Q.front)  //对空条件
    return true;
  else
    return false;
}

//判断队列是否为空(2)
bool QueueEmpty(SqQueue Q) {
  if (size == 0)  //队空条件  //size==MaxSize  队满条件
    return true;
  else if {
    EnQueue(x);
    size++;
  } else {
    DeQueue(x);
    size--;
  }
}
//判断队列是否为空(3)
bool QueueEmpty(SqQueue Q) {
  if (Q.front == Q.rear && tag == 1)  //队空条件  //front==rear&&tag==1 队满条件
    return false;
  else if {
    EnQueue(x);
    tag = 1;
  } else {
    DeQueue(x);
    tag = 0;
  }
}
//判断队列是否为空(4)
bool QueueEmpty(SqQueue Q) {
  (Q.rear + 1) % MaxSize == Q.front;  //判空
  (Q.rear + 1) % MaxSize == Q.front;  //判满
}
//入队
bool EnQueue(SqQueue &Q, ElemType x) {
  if ((Q.rear + 1) % MaxSize == Q.front) return false;  //队满报错
  Q.data[Q.rear] = x;                                   //将x插入队尾
  Q.rear = (Q.rear + 1) % MaxSize;                      //队尾指针后移
  return true;
}

//出队
bool DeQueue(SqQueue &Q, ElemType &x) {
  if (Q.rear == Q.front) return false;  //对空则报错
  x = Q.data[Q.front];
  Q.front = (Q.front + 1) % MaxSize;
  return true;
}

//获得对头元素的值，用x返回
bool GetHead(SqQueue Q, ElemType &x) {
  if (Q.rear == Q.front) return false;
  x = Q.data[Q.front];
  return true;
}