
//用邻接矩阵表示图

typedef struct GNode *PtrToGNode;
struct GNode
{
    int Nv;//顶点数
    int Ne;//边数
    WeightType G[MaxVertexNum][MaxVertexNum];
    DataType Data[MaxVertexNum];//储存顶点数据
};
typedef PtrToGNode MGraph;//邻接矩阵存储的图类型


//初始化MGraph
typedef int Vertex;
MGraph CreateGraph(int VertexNum)
{
    Vertex V,W;
    MGraph Graph;
    Graph=(MGraph)malloc(sizeof(struct GNode));
    Graph->Nv=VertexNum;
    Graph->Ne=0;

    for(V=0;V<Graph->Nv;V++)
        for(W=0;W<Graph->Nv;W++)
            Graph->G[V][W]=0;
    return Graph;
}

//向MGraph插入边
typedef struct ENode *PtrToENode;
struct ENode
{
    Vertex V1,V2;
    WeightType Weight;
};
typedef PtrToENode Edge;
void InsertEdge(MGraph Graph,Edge E)
{
    //有向图  插入边
    Graph->G[E->V1][E->V2]=E->Weight;
    //无向图还需要插入这两条
    Graph->G[E->V2][E->V1]=E->Weight;
}

//完整建立一个MGraph
MGraph BuildGraph()
{
    MGraph Graph;
    Edge E;
    Vertex V;
    int Nv,i;

    scanf("%d",&Nv);
    Graph=CreateGraph(Nv);
    scanf("%d",&(Graph->Ne));
    if(Graph->Ne!=0)
    {
        E=(Edge)malloc(sizeof(struct ENode));
        for(i=0;i<Graph->Ne;i++)
        {
            scanf("%d %d %d",&E->V1,&E->V2,&E->Weight);
            InsertEdge(Graph,E);
        }
    }
    //如果顶点有数据的话 读入数据
    for(V=0;V<Graph->Nv;V++)
        scanf("%c",&(Graph->Data[V]));
    return Graph;
}

//简化
int G[MAXN][MAXN],Nv,Ne;
void BuildGraph()
{
    int i,j,v1,v2,w;
    scanf("%d",&Nv);
    //CreateGraph
    for(i=0;j<Nv;j++)
    {
        sanf("%d %d %d",&v1,&v2,&w);
        //insertedge
        G[v1][v2]=w;
        G[v2][v1]=w;
    }
}