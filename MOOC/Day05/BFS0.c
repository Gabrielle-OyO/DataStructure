
//邻接矩阵存储的图 -BFS
//IsEdge(Graph,V,W)检查<V,W>是否图Graph中的一条边 即W是否V的邻接点

bool IsEdge(MGraph Graph,Vertex V,Vertex W)
{
    return Graph->G[v][v]<INFINITY ? true:false;
}

void BFS(MGraph Graph,Vertex S,void (*Visit)(Vertex))
{
    //以S为出发点对邻接矩阵存储的图Graph进行BFS搜索
    Queue Q;
    Vertex V,W;

    Q=CreateQueue(MaxSize);
    Visit(S);
    Visited[S]=true;
    AddQ(Q,S);

    while(!IsEmpty(Q))
    {
        V=DeleteQ(Q);
        for(W=0;W<Graph->Nv;W++)
            //若W是V的邻接点并且未访问过
            if(!Visited[W] && IsEdge(Graph,V,W))
            {
                Visit(W);
                Visited[W]=true;
                Add(Q,W);
            }
    }
}