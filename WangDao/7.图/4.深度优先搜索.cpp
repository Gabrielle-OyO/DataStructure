

bool visited[MAX_VERTEX_NUM];     //访问标记数组
void DFSTraverse(Graph G) {       //对图G进行深度优先遍历
  for (v = 0; v < G.vernum; ++v)  //初始化已访问标记数据
    visited[v] = FALSE;
  for (v = 0; v < G.vernum; ++v)
    if (!visited[v])  //对每个连通分量调用一次DFS
      DFS(G, v);
}

void DFS(Graph G, int v) {  //从顶点v出发 深度优先遍历图G
  visit(v);                 //访问顶点v
  visited[v] = TRUE;        //设已访问标记
  for (w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G, v, w))
    if (!visited[w]) {  // w为v的为访问邻接顶点
      DFS(G, w);
    }
}