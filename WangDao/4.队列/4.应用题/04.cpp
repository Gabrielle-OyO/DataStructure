

Queue q;   //过江渡船队列
Queue q1;  //客车队列
Queue q2;  //货车队列
void manager() {
  int i = 0, j = 0;                  // j表示渡船上的总车辆数
  while (j < 10) {                   //不足10辆时
    if (!QueueEmpty(q1) && i < 4) {  //客车队列不空 则未上足4辆
      DeQueue(q1, x);                //从客车队列出队
      EnQueue(q, x);                 //客车上渡船
      i++;                           //客车数量加1
      j++;                           //渡船上总车辆数加1
    } else if (i == 4 && !QueueEmpty(q2)) {  //客车已上足3辆
      Dequeue(q2, x);                        //从货车队列出队
      EnQueue(q, x);                         //每上一辆货车 i重新计数
      j++;                                   //渡船上的总车辆数加1
      i = 0;                                 //每上一辆货车 i重新计数
    } else {  //其他情况客车队列空或货车队列空
      while (j < 10 && i < 4 && !QueueEmpty(q2)) {  //客车队列空
        DeQueue(q2, x);                             //从货车队列出队
        EnQueue(q, x);                              //货车上渡船
        i++;  // i计数 当i>4时 退出循环
        j++;  //渡船上的总车辆数加1
      }
      i = 0;
    }
    if (QueueEmpty(q1) && QueueEmpty(q2))  //若货车和客车加起来不足10辆
      j = 11;
  }
}