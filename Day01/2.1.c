#include<stdio.h>
#define Swap;
void SelectionSort(int List[],int N)
{
    int i;
    int MinPosition;
    for(i=0;i<N;i++)
    {
        MinPosition=ScanForMin(List,i,N-1);
        Swap(List[i],List[MinPosition]);
    }
}