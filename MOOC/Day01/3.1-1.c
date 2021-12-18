//最大子列和问题
#include<stdio.h>
int MaxSubseqSum1(int A[],int N)
{
    int i,j,k;
    int ThisSum,MaxSum=0;
    for(i=0;i<N;i++)
    {
        for(j=i;j<N;j++)
        {
            ThisSum=0;
            for(k=i;k<=j;k++)
                ThisSum+=A[k];
            if(ThisSum>MaxSum)
                MaxSum=ThisSum;
        }
    }
    return MaxSum;
}