#include<stdio.h>
void PrintN(int N);
int main()
{
    int N;
    scanf("%d",&N);
    PrintN(N);
    return 0;
}

//循环实现
void PrintN(int N)
{
    int i;
    for(i=1;i<=N;i++)
    {
        printf("%d\n",i);
    }
    return;
}
