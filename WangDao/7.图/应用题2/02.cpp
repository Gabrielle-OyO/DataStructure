
bool isTree(Graph &G) {
  for (i = 1; i < G.vexnum; i++)  //访问标记visited[]初始化
    visited[i] = FALSE;
  int Vnum = 0, Enum = 0;  //记录顶点数和边数
  DFS(G, 1, Vnum, Enum, visited);
  if (Vnum == G.vexnum && Enum == 2 * (G.vexnum - 1))  //符合树的条件
    return true;
  else
    return false;  //不符合树的条件
}

void DFS(Graph &G, int v, int &Vnum, int Enum, int visted[]) {
  //深度优先遍历图G 统计访问过的顶点数和边数 通过Vnum和Enum返回
  visited[v] = TRUE;            //访问标记
  Vnum++;                       //顶点计数
  int w = FirstNeighbor(G, v);  //取v的第一个邻接顶点
  while (w != -1) {             //当邻接顶点存在
    Enum++;                     //边存在 边计数
    if (!visited[w])            //当该邻接顶点未访问过
      DFS(G, w, Vnum, Enum, visited);
    w = NextNeighbor(G, v, w);
  }
}