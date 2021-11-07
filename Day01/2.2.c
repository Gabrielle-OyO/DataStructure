#include<stdio.h>
void PrintN(int N)
{
    if(N)
    {
        PrintN(N-1);
        printf("%d\n",N);
    }
    return;
}