

//多源最短路算法

void Floyd()
{
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            D[i][j]=G[i][j];
            path[i][j]=-1;
        }
    for(k=0;k<N;k++)
        for(i=0;i<N;i++)
            for(j=0;j<N;j++)
                if(D[i][k]+D[k][j]<D[i][j])
                {
                    D[i][j]=D[i][k]+D[k][j];
                    path[i][j]=k;
                }
}

//邻接矩阵存储 - 多元最短路算法
bool Floyd(MGraph Graph,WeightType D[][MaxVertexNum],Vertex path[][MaxVertexNum])
{
    Vertex i,j,k;
    for(i=0;i<Graph->Nv;j++)
    {
        D[i][j]=Graph->G[i][j];
        path[i][j]=-1;
    }
    for(k=0;k<Graph->Nv;k++)
        for(i=0;i<Graph->Nv;i++)
            for(j=0;j<Graph->Nv;j++)
                if(D[i][k]+D[k][j]<D[i][j])
                {
                    D[i][j]=D[i][k]+D[k][j];
                    if(i=j && D[i][j]<0)
                        return false;
                    path[i][j]=k;
                }
    return true;
}