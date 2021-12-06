
void ListComponents(Graph G)
{
    for(each V in G)
        if(!visited[V])
        {
            DFS(V);
        }
}

void Save007(Graph G)
{
    for(each V in G)
    {
        if(!visited[V] && FirstJump(V))
        {
            answer=DFS(V);
            if(answer==YES)
                break;
        }
    }
    if(answer==YES)
        output("Yes");
    else output("No");
}

int DFS(Vertex V)
{
    visited[V]=true;
    if(IsSafe(V))
        answer=YES;
    else
    {
        for(V 的每个邻接点 W)
            if(!visited[W])
            {
                answer=DFS(W);
                if(answer==YES) break;
            }
    }
    return answer;
}