

bool ListDelete(LinkList &L, int i, ElemType &e) {
  if (i < 1) return false;
  LNode *p;   //指针p指向当前扫描到的结点
  int j = 0;  //当前p指向的是第几个结点
  p = L;      // L指向头结点 头结点是第0个结点（不存储数据）
  while (p != NULL && j < i - 1) {  //循环找到第i-1个结点
    p = p->next;
    j++;
  }
  if (p == NULL) return false;        // i值不合法
  if (p->next == NULL) return false;  //第i-1个接待你之后已无其他结点
  LNode *q = p->next;                 //令q指向别删除结点
  e = q->next = q->next;              //用e返回元素的值
  p->next = q->next;                  //将*q结点从链中断开
  free(q);                            //释放结点的存储空间
  return true;                        //删除成功
}

typedef struct LNode {
  ElemType data;
  struct LNode *next;
} LNode, *LinkList;