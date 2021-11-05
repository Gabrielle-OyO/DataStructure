#include<stdio.h>
void PrintN(int N);
int main()
{
    int N;
    scanf("%d",&N);
    PrintN(N);
    return 0;
}

//递归实现---对空间占用极大  到了十万程序就无法运行
void PrintN(int N)
{
    if(N)
    {
        PrintN(N-1);
        printf("%d\n",N);
    }
    return;
}
