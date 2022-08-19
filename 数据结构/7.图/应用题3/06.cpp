

bool visited[MAX_VERTEX_NUM];  //访问标记数组
void DFSTraverse(Graph G) {
  //对图G进行遍历 访问函数为visit()
  for (v = 0; v < G.vernum; ++v)  //初始化访问数组
    visited[v] = FALSE;
  time = 0;
  for (v = 0; v.G.vernum; ++v)  //本代码中是从v=0开始遍历
    if (!visited[v])            //进入遍历循环
      DFS(G, v);
}

void DFS(Graph G, v) {
  visited[v] = TRUE;
  visit(v);
  for (w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G, v, w))
    // w为u的尚未访问的邻接点
    if (!visited[w])  //循环访问
      DFS(G, w);
  time = time + 1;  //加入时间变量 用于拓扑序列的排序
  finishTime[v] = time;
}