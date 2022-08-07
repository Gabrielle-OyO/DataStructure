

#define MaxVertexNum 100    //途中顶点数目最大值
typedef struct ArcNode {    //边表结点
  int adjvex;               //该弧指向队顶点的位置
  struct ArcNode *nextarc;  //指向下一条弧的指针
  // InfoType info;//网的边权值
} ArcNode;

typedef struct VNode {  //顶点表结点
  VertexType data;      //顶点信息
  ArcNode *firstarc;    //指向第一条依附该顶点的弧的指针
} VNode, AdjList[MaxVertexNum];

typedef struct {
  AdjList vertice;     //邻接表
  int vexnum, arcnum;  //图的顶点数和弧数
} Graph;               // Graph是以邻接表存储的图类型

bool TopologicalSort(Graph G) {
  InitStack(S);  //初始化栈 存储入度为0的顶点
  for (int i = 0; i < G.vexnum; i++)
    if (indegree[i] == 0)  //将所有入度为0的顶点压入栈中
      Push(S, i);
  int count = 0;         //计数 记录当前已经输出的顶点数
  while (!IsEmpty(S)) {  //栈不空 则存在入度为0的顶点
    Pop(S, i);           //栈顶元素出栈
    print[count++] = i;  //输出顶点i
    for (p = G.vertices[i].firstarc; p; p = p->nextarc) {
      //将所有i指向的顶点的入度减1 并且将入度减为0的顶点压入栈S中
      v = p->adjvex;
      if (!(--indegree[v])) Push(S, v);
    }
  }
  if (count < G.vexnum)  //排序失败 图中有回路
    return false;
  else
    return true;  //拓扑排序成功
}