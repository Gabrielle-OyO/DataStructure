
GENERIC_MST(G) {
  T = NULL;
  while (T 未形成一棵树;) {
    do {
      找到一条最小代价边(u, v) 并加入T后不会产生回路;
      T = TU(u, v);
    }
  }