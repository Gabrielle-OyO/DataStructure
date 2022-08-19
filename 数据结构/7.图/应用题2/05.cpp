

void FindPath(AGraph *G, int u, int v, int path[], int d) {
  int w, i;
  ArcNode *p;                  //结点指针
  d++;                         //路径长度增加1
  path[d] = u;                 //将当前顶点添加到路径中
  visited[u] = 1;              //标记已访问
  if (u == v)                  //找到一条路径则输出
    print(path[]);             //输出路径上的所有节点
  p = G->adjlist[u].firstarc;  // p指向u的第一个相邻点
  while (p != NULL) {
    w = p->adjvex;
    if (visited[w] == 0)  //若顶点 b未访问 递归访问它
      FindPath(G, w, V, path, d);
    p = p->nextarc;
  }
  visited[u] = 0;  //恢复环境 使该顶点可重新使用
}