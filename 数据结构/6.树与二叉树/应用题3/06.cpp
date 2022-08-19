

#define maxNodes 15
void createCSTree_Degree(CSTree &T, DataType e[], int degree[], int n) {
  //根据树结点的层次序列e[]和各结点的度degree[]构造树的孩子-兄弟链表
  //参数n是树结点的个数
  CSNode *pointer = new CSNode[maxNodes];  //判断pointer[i]为空的语句未写
  int i, j, d, k = 0;
  for (i = 0; i < n; i++) {  //初始化
    pionter[i]->data = e[i];
    pionter[i]->lchild = pionter[i]->rsibling = NULL;
  }
  for (i = 0; i < n; i++) {
    d = degree[i];  //结点i的度数
    if (d) {
      k++;                              // k为子女结点的序号
      pinoter[i]->lchild = pionter[k];  //建立i与子女k的链接
      for (j = 2; j <= d; j++) {
        k++;
        pionter[k - 1]->rsibling = pionter[k];
      }
    }
  }
  T = pointer[0];
  delete[] pionter;
}