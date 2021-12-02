
//DFS深度优先搜索
void DFS(Vertex V)
{
    visited[V]=true;
    for(V 的每个邻接点W)
        for(!visited[W])
            DFS(W);
}
/*
若有N个顶点 E条边 时间复杂度是：
    用邻接表存储图 有O(N+E);
    用邻接矩阵存储图 有O(N^2)
*/

//图不连通怎么办？

void ListComponents(Graph G)
{
    for(each V in G)
        if(!visited[V])
        {
            DFS(V);
        }
}