

bool visited[MAX_VERTEX_NUM];     //访问标记数组
void BFSTracerse(Graph G) {       //对图G进行广度优先遍历
  for (i = 0; i < G.vexnum; ++i)  //访问标记数组初始化
    visited[i] = FALSE;
  InitQueue(Q);                   //初始化辅助队列Q
  for (i = 0; i < G.vexnum; ++i)  //从0号顶点开始遍历
    if (!visited[i])              //对每个连通分量调用一次BFS
      BFS(G, i);                  // vi未访问过 从vi开始BSF
}
//以上将非连通图纳入考虑范围

void BFS(Graph G, int v) {  //从顶v出发广度优先遍历图
  visit(v);                 //访问初始顶点v
  visited[v] = TURE;        //对v做已访问标记
  Enqueue(Q, v);            //顶点v入队列Q
  while (!isEmpty(Q)) {
    DeQueue(Q, v);  //顶点v出队列
    //检测v所有的邻接点
    for (w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G, v, w))
      if (!visited[w]) {  // w为v的未访问的邻接顶点
        visit(w);
        visited[w] = TURE;  //对w做已访问标记
        EnQueue(Q, w)       //顶点w入队列
      }
  }
}