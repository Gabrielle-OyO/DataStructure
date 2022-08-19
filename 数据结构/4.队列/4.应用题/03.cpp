

double p(int n, double x) {
  struct stack {
    int no;      //保存n
    double val;  //保存Pn（x）的值
  } st[MaxSize];
  int top = -1, i;              // top为栈st的下标值变量
  double fv1 = 1, fv2 = 2 * x;  // n=0，n=1时的初始值
  for (i = n; i >= 2; i--) {
    top++;
    st[top].no = i;  //入栈
  }
  while (top >= 0) {
    st[top].val = 2 * x * fv2 - 2 * (st[top].no - 1) * fv1;
    fv1 = fv2;
    fv2 = st[top].val;
    top--;  //出栈
  }
  if (n == 0) {
    return fv1;
  }
  return fv2;
}