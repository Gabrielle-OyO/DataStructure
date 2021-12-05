
//邻接表存储的图 -DFS

void Visit(Vertex V)
{
    printf("正在访问顶点d\n",V);
}

// Visited[]为全局变量 已经初始化为false

void DFS(LGraph Graph,Vertex V,void (*Visit)(Vertex))
{
    //以v为出发点 对邻接表存储的图Graph进行DFS
    PtrToAdjVNode W;
    Visit(V);
    Visited[V]=true;
    for(W=Graph->G[V].FirstEdge;W;W=W->Next)
        if(!Visited[W->AdjV])
            DFS(Graph,W->AdjV,Visit);//递归访问之
}