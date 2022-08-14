

void SelectSort(LinkedList& L) {
  //对不带头结点的单链表L执行简单的选择排序
  LinkNode *h = L, *p, *q, *r, *s;
  L = NULL;            //创建空链表
  while (h != NULL) {  //持续扫描原链表
    p = s = h;
    q = r = NULL;
    //指针s和r记忆最大结点和其前驱，p为工作指针，q为其前驱
    while (p != NULL)  //扫描原链表寻找最大结点s
    {
      if (p->data > s->data) {  //工作指针p找到了比记忆指针s还大的数据
        s = p;                  //更换s最大值
        r = q;                  //更换前驱
      }
      q = p;  //继续寻找
      p = p->link;
    }
    if (s == h)  //如果最大结点在原链表前端
      h = h->link;
    else  //最大结点在原链表表内
      r->link = s->link;
    s->link = L;  //结点s插入结果链表前端
    L = s;
  }
}