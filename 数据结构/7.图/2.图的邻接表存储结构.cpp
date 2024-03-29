
#define MaxVertexNum 100  //图中顶点数目的最大值
typedef struct ArcNode {  //边表结点
  int adjvex;             //该弧所指向的顶点的位置
  struct ArcNode *next;   //指向下一条弧的指针
  // Info人Type info;//网的边权值
} ArcNode;

typedef struct VNode {  //顶点表结点
  VertexType data;      //顶点信息
  ArcNode *first;       //指向第一条依附该顶点的弧的指针
} VNode, AdjList[MaxVertexNum];
typedef struct {
  AdjList vertices;    //邻接表
  int vexnum, arcnum;  //图的顶点数和弧数
} ALGraph;             // ALGraph是以邻接表存储的图类型