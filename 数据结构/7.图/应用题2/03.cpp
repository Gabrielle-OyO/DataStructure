

void DFS_Non_RC(AGraph& G, int v) {
  //从顶点v开始进行深度优先搜索
  //一次遍历一个联通唔靓的所有顶点
  int w;                          //顶点序号
  InitStack(S);                   //初始化栈S
  for (i = 0; i < G.vexnum; i++)  //初始化visited
    visited[i] = FALSE;
  Push(S, v);            //并入栈S
  visited[v] = TRUE;     //置visited[v]
  while (!IsEmpty(S)) {  //进入循环遍历
    k = Pop(S);          //栈中退出一个顶点
    visit(k);            //先访问 再将其子结点入栈
    for (w = FirstNeighbor(G, k); w >= 0; w = NextNeighbor(G, k, w))
      // k所有的邻接结点
      if (!visited[w]) {  //围巾如果栈的顶点进栈
        Push(S, w);
        visited[w] = true;  //做标记 以免再次入栈
      }
  }
}