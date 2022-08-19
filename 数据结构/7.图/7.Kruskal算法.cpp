

void Kruskal(V, T) {
  T = V;              //初始化树T,仅含顶点
  numS = n;           //连通分量树
  while (numS > 1) {  //若连通分量树大于1
    从E中取出权值最小的边(v, u);
    if (v和u属于T中不同的连通分量) {
      T = T∪{(v, u)};  //将此边加入生成树中
      numS--;          //来南通分量数减1
    }
  }
}