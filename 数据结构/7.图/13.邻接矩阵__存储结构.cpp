
int NextNeighbor(MGraph &G, int x, int y) {
  if (x != -1 && y != -1) {
    for (int col = y + 1; col < G.vexnum; col++)
      if (G.Edge[x][col] > 0 && G.Edge[x][col] < maxWeight) {
        // maxWeight代表∞
      }
    return col;
  }
  return -1;
}
