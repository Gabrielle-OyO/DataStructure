

typedef enum { RED, WHITE, BLUDE } color;  //设置枚举数组、
void Flag_Arrange(color a[], int n) {
  int i = 0, j = 0, k = n - 1;
  while (j <= k) switch (a[j]) {
      case RED:
        swap(a[i], a[j]);
        i++;
        j++;
        break;
      case WHITE:
        j++;
        break;
      case BLUDE:
        swap(a[j], a[k]);
        k--;
        break;
    }
}
