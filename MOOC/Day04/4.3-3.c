typedef struct
{
    ElementType Data;
    int Parent;
}SetType;

//查找 和运算  用根节点表示
int Find(SetType S[],ElementType X)
{
    int i;
    for(i=0;i<MaxSize &&S[i].Data!=X;i++);
    if(i>=MaxSize)  return -1;
    for( ;S[i].Parent>=0;i=S[i].Parent);
    return i;
}

//并运算
void Union(SetType S[],ElementType X1,ElementType X2)
{
    int Root1,Root2;
    Root1=Find(S,X1);
    Root2=Find(S,X2);
    if(Root1!=Root2)
        S[Root2].Parent=Root1;
}

//为了改善合并后的查找性能 可以采用小的集合合并到相对大的集合中（修改Union的函数）

#define MAXN 1000
typedef int ElementType;
typedef int SetName;
typedef ElementType SetType[MAXN];
void Union(SetType S,SetName Rooot1,SetName Root2)
{
    if(S[Root2]<S[Root1])
    {
        S[Root2]+=S[Root1];
        S[Root1]=Root2;
    }
    else
    {
        S[Root1]+=S[Root2];
        S[Root2]=Root1;
    }
}
SetName Find(SetType S,ElementType X)
{
    if(S[X]<0)//找到集合的根
        return X;
    else
        return S[X]=Find(S,S[X]);//压缩路径
}