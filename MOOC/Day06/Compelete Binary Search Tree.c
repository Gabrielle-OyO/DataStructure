//完全二叉搜索树

//核心算法
void solve(int ALeft,int ARight,int TRoot)
{
    n=ARight-ALeft+1;
    if(n==0)
        return;
    L=GetLeftLength(n);
    T[TRoot]=A[Aleft+L];
    LeftRoot=TRoot*2+1;
    RightTRoot=LeftRoot+;
    solve(ALeft,Aleft+L-1,LeftRoot);
    solve(ALeft+L+1,ARight,RightRoot);
}

//排序
#include<stdlib.h>
int main()
{
    qsort(A,N,sizeof(int),compare);
}

int compare(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}