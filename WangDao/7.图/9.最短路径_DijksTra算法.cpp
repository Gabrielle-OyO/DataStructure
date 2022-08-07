

final[];
dist[];
path[];

/*
Dijkstra算法步骤：

1.初始化：集合初始化为{0} dist[]初始为：dist[i]=arcs[0][i]
2.从顶点集合V-S中选出vj，满足dist[j]=Min{dist[i]|vi∈V-S},
  vj就是当前求得的一条从v0插法的最短路径的终点，令S=S∪{j}
3.修改从v0出发到集合V-S上任一顶点vk可达的最短路径长度：
  若dist[j]+arcs[j][k]<dist[k]则更新dist[k]=dist[j]+arcs[j][k]
4.重复2-3操作共n-1次 指导所有的顶点都包含在S中

*/