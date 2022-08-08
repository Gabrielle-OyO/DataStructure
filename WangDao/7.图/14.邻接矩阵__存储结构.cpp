

int NextNeighbor(ALGraph &G, int x, int y) {
  if (x != -1) {                       //顶点x存在
    ArcNode *p = G.vertices[x].first;  //对一个边链表第一个边结点
    while (p != NULL && p->data != y)  //寻找邻接点y
      p = p->next;
    if (p != NULLp->next != NULL)  //返回下一个邻接点
      return p->next->data;
  }
  return -1;
}