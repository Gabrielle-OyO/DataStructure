

void BFS_Distance(Graph G, int u) {
  for (i = 0; i < G.vexnum; ++i)  //初始化路径长度
    d[i] =∞;
  visited[u] = TRUE;
  d[u] = 0;
  EnQUeue(Q, u);
  while (!isEmpty(Q)) {
    DeQueue(Q, u);  //队头元素u出队
    for (w = FirstNeighbor(G, u); w >= 0; w = NextNeightbor(G, u, w))
      if (!visited[w]) {    // w为u为访问的邻接顶点
        visited[w] = TRUE;  //设已访问标记
        d[w] = d[u] + 1;    //路径长度加1
        EnQueue(Q, w);      //顶点w入队
      }
  }
}