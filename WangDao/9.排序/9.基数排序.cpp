

typedef struct LinkNode {
  ElemType data;
  struct LinkNode *next;
} LinkNode, *LinkList;

typedef struct {           //链式队列
  LinkNode *front, *rear;  //队列的队头和队尾指针
} LinkQueue;

void 收集 {
  p->next = Q[i].front;
  Q[i].front = NULL;
  Q[i].rear = NULL;
}