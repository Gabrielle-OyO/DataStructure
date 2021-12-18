//最大子列和问题
#include<stdio.h>
int MaxSubseqSum1(int A[],int N)
{
    int i,j;
    int ThisSum,MaxSum=0;
    for(i=0;i<N;i++)
    {
        ThisSum=0;
        for(j=i;j<N;j++)
        {
            ThisSum+=A[j];
            if(ThisSum>MaxSum)
                MaxSum=ThisSum;
        }
    }
    return MaxSum;
}