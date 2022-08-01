

int height(CSTree bt) {
  int hc, hs;
  if (bt == NULL)
    return 0;
  else {
    hc = height(bt->firstchild);
    hs = height(bt->nextsibling);
    if (hc + 1 > hs)
      return hc + 1;  //高度取子女高度加一
    else
      return hs;  //兄弟树高
  }
}