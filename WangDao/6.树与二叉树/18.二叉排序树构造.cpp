
//按照str[]中的关键字序列建立二叉排序树
// str=[50,66,60,26,21,30,70,68]

void Creat_BST(BSTree &T, int str[], int n) {
  T = NULL;
  int i = 0;
  while (i < n) {
    BST_Insert(T, str[i]);
    i++;
  }
}