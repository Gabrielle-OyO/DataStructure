

#define MaxVertexNum 100      //顶点数目的最大值
#define INFINITY 最大的int值  //宏定义常量“无穷”
typedef char VertexType;      //顶点的数据类型
typedef int EdgeType;         //带权图中边上权值的数据类型
typedef struct {
  VertexType Vex[MaxVertexNum];               //顶点表
  EdgeType Edge[MaxVertexNum][MaxVertexNum];  //邻接矩阵 边表
  int vernum, arcnum;  //图的当前顶点数呼和弧数
} MGraph;