
/*
Floyd算法：
若 A(k-1)[i][j] > A(k-1)[i][k] + A(k-1)[k][j]
则 A(k-1)[i][j] = A(k-1)[i][k] + A(k-1)[k][j]
   path(k)[i][j]=k;
否则A(k)和path(k)保持原值

*/

//做好准备工作后  初始化矩阵A和path
for (int k = 0; k < n; k++) {    //以vk为中转点
  for (int i = 0; i < n; i++) {  //遍历整个矩阵 i行号 j列号
    for (int j = 0; j < n; j++) {
      if (A[i][j] > A[i][k] + A[k][j]) {  //以vk为中专点的路径更短
        A[i][j] = A[i][k] + A[k][j];      //更新最短路径长度
        path[i][j] = k;                   //中转点
      }
    }
  }
}