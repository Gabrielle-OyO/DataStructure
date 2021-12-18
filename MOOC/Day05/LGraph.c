

//用邻接表表示图

typedef struct GNode *PtrToGNode;
struct GNode
{
    int Nv;
    int Ne;
    AdjList G;//邻接表类型
};
typedef PtrToGNode LGraph;

typedef struct Vnode
{
    PtrToAdjVNode FistEdge;
    DataType Data;
}AdjList[MaxVertexNum];

//以邻接表方式存储的图类型
typedef struct AdjVNode *PtrToAdjVNode;
struct AdjVNode
{
    Vertex AdjV;邻接表下标
    WeightType Weight;//边权重
    PtrToAdjVNode Next;
}
