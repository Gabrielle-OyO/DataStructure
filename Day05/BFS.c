
//BFS广度优先搜索

void BFS(Vertex V)
{
    visited[V]=ture;
    Enqueue(V,Q);
    while(!IsEmpty(Q))
    {
        V=Dequeue(Q);
        for(V 的每个邻接点 W)
            if(!visited(W))
            {
                visited[W]=true;
                Enqueue(W,Q);
            }
    }
}