
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

/*和DFS一样
若有N个顶点 E条边 时间复杂度是：
    用邻接表存储图 有O(N+E);
    用邻接矩阵存储图 有O(N^2)
*/