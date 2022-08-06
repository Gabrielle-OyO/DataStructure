

typedef struct {              //图的定义
  int numVertices, numEdges;  //图中实际的顶点数和边数
  char VerticesList[MAXV];    //顶点表 MAXV为已定义常量
  int Edge[MAXV][MAXV];       //邻接矩阵
} MGraph;

int IsExistEL(MGraph G) {
  int degree, i, j, count = 0;
  for (i = 0; i < G.numVertices; i++) {
    degree = 0;
    for (j = 0; j < G.numVertices; j++)
      degree += G.Edge[i][j];      //依次计算各顶点的度
    if (degree % 2 != 0) count++;  //对度数为奇数的顶点数计数
  }
  if (count == 0 || count == 2)
    return 1;  //存在EL路径 返回1
  else
    return 0;  //不存在EL路径 返回0 }
}
