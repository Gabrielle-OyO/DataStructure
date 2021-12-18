
void SDS()
{
    for(each V in G)
    {
        count=BFS(V);
        Output(count/N);
    }
}

int BFS(Vertex V)
{
    visited[V]=true;
    count=1;
    Enqueue(V,Q);
    while(!IsEmpty(Q))
    {
        V=Dequeue(Q);
        for(V 的每个邻接点W)
            if(!visited[W])
            {
                visited[W]=true;
                Enqueue(W,Q);
                count++;     
            }
    }
    return count;
}

int BFS(Vertex V)
{
    visited[V]=true;
    count=1;
    level=0;
    last=V;
    Enqueue(V,Q);
    while(!IsEmpty(Q))
    {
        V=Dequeue(Q);
        for(V 的每个邻接点W)
            if(!visited[W])
            {
                visited[W]=true;
                Enqueue(W,Q);
                count++;
                tail=W; 
            }
        if(V==last)
        {
            level++;
            last=tail;
        }
        if(level==6)
            break;
    }
    return count;
}

