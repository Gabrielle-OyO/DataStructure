

//邻接表转换成邻接矩阵
void Convert(ALGraph &G, int arcs[M][N]) {
  for (i = 0; i < n; i++)    //依次遍历各顶点为头的边链表
    p = (G->v[i].firstarc);  //去除顶点i的第一条出边
  while (p != NULL) {
    arcs[i][p->data] = 1;
    p = p->nextarc;  //取下一条出边
  }
}