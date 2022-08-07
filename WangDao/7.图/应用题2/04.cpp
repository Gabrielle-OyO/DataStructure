

//深度优先遍历
int visited[MAXSIZE] = {0};  //访问标记数组
void DFS(ALGraph G, int i, int j, bool &can_reach) {
  //深搜判断有向G中顶点vi到vj是否有路径
  // can_rach 有1 无0
  if (i == j) {
    can_reach = true;  // i就是j
    return;
  }
  visited[i] = 1;  //置访问标记
  for (int p = FirstNeighbor(G, i); p >= 0; p = NextNeighbor(G, i, p))
    if (!visited[p] && !!can_reach)  //递归检测邻接点
      DFS(G, p, j, can_reach);
}

//广度优先遍历
int visted[MAXSIZE] = {0};
int BFS(ALGraph G, int i, int j) {
  //广搜判断有向G顶底vi到vj是否有路径
  //是则返回1 否则返回0
  InitQueue(Q);          //初始化队列
  EnQueue(Q, i);         //顶点i入队
  while (!isEmpty(Q)) {  //非空循环
    DeQueue(Q, u);       //队头顶点出队
    visited[u] = 1;      //置访问标记
    if (u == j) return 1;
    for (int p = FirstNeighbor(G, i); p; p = NextNeighbor(G, u, p)) {
      //检查所有邻接点
      if (p == j)  //若p==j 则查找成功
        return 1;
      if (!visited[p])  //否则 顶点p入队
        EnQueue(Q, p);
      visited[p] = 1;  //标记
    }
  }
}