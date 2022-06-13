

typedef struct node {
  int data;
  struct node *link;
} NODE;
Typedef NODE *PNODE;

void func(PNODE h, int n) {
  PNODE p = h, r;
  int *q, m;
  q = (int *)malloc(sizeof(int) * (n + 1));  //申请n+1个位置的辅助空间
  for (int i = 0; i < n + 1; i++) *(q + i) = 0;  //数组元素初值值0
  while (p->link != NULL) {
    m = p->link->data > 0 ? p->link->data : -p->link->data;
    if (*(q + m) == 0) {  //判断该结点data是否已出现过
      *(q + m) = 1;       //首次出现
      p = p->link;        //保留
    } else {              //重复出现
      r = p->link;        //删除
      p->link = r->link;
      free(r);
    }
  }
  free(q);
}