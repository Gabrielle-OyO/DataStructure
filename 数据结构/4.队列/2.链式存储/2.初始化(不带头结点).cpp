

typedef struct LinkNode {  //链式队列结点
  ElemType data;
  struct LinkNode *next;
} LinkNode;

typedef struct {           //链式队列
  LinkNode *front, *rear;  //队列的队头和队尾指针
} LinkQueue;

//初始化（不带头结点）
void InitQueue(LinkQueue &Q) {
  Q.front = NULL;
  Q.rear = NULL;
}

void testLinkQueue() {
  LinkQueue Q;   //声明一个队列
  InitQueue(Q);  //初始化队列
}

typedef struct {
  LinkNode *front, *rear;
} LinkQueue;

//判断队列是否为空
bool IsEmpty(LinkQueue Q) {
  if (Q.front == NULL)
    return true;
  else
    return false;
}

/ 入队 void EnQueue(LinkNode &Q, ElmType x) {
  LinkNode *s = (LinkNode)malloc(sizeof(LinkNode));
  s->data = x;
  s->next = NULL;
  if (Q.front == NULL) {  //在空队列中插入第一个元素
    Q.front = s;          //修改队头队尾指针
    Q.rear = s;
  } else {
    Q.rear->next = s;  //新结点插入到rear结点之后
    Q.rear = s;        //修改rear指针
  }
}

//出队
bool DeQueue(LinkQueue &Q, ElemType &x) {
  if (Q.front == NULL)  //空队
    return false;
  LinkNode *p = Q.front;  // p指向此次出队的结点
  x = p->data;            //用变量x返回对头元素
  Q.front = p->next;      //修改front指针
  if (Q.rear == p) {      //此次是最后一个结点出队
    Q.front = NULL;       // front指向NULL
    Q.rear = NULL;        // rear指向NULL
  }
  free(p);  //释放结点空间
  return true;
}