

void Dijkstra(Vertex s)
{
    while(1)
    {
        V=未收录顶点中dist最小值;
        if(这样的V不存在)
            break;
        collected[V]=true;
        for(V 的每个邻接点W)
            if(collected[W]==false)
                if(dist[V]+E<dist[W])
                {
                    dist[W]=dist[V]+E;
                    path[W]=V;
                }
    }
}

//邻接表储存 - 无权图单源最短路算法
// dist[]和path[] 全初始化为-1

void Unweighted(LGraph Graph,int dist[],int path[],Vertex S)
{
    Queue Q;
    Vertex V;
    PtrToAdjVNode V;

    Q=CreateQueue(Graph->Nv);
    dist[S]=0;
    Add(Q,S);

    while(!IsEmpty(Q))
    {
        V=DeleteQ(Q);
        for(W=Graph->G[V].FirstEdge;W;W=W->Next)
            if(dist[W->AdjV]=-1)
            {
                dist[W->AdjV]=dist[V]+1;
                path[W->AdjV]=V;
                AddQ(Q,W->Adjv);
            }
    }
}