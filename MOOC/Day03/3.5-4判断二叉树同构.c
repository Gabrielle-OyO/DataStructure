//输入给出2棵二叉树信息 判断二叉树是否同构

/*
求解思路
    二叉树表示：链表、数组√  静态链表
    建二叉树
    同构判别
*/

#define MaxTree 10
#define ElementType char
#define Tree int
#define Null -1

struct TreeNode
{
    ElementType Element;
    Tree Left;
    Tree Right;
}T1[MaxTree],T2[MaxTree];

int main()
{
    Tree R1,R2;
    R1=BuildTree(T1);
    R2=BuildTree(T2);
    if(Isomorphic(R1,R2))   printf("Yes\n");
    else    printf("No\n");
    return 0;
}

Tree BuildTree(struct TreeNode T[])
{
    int i,N;
    scanf("%d\n",&N);
    if(N)
    {
        for(i=0;i<N;i++)    check[i]=0;
        for(i=0;i<N;i++)
        {
            scanf("%c %c %c\n",&T[i].Element,&cl,&cr);
            if(cl!='-')
            {
                T[i].Left=cl-'0';
                check[T[i].Left]=1;
            }
            else T[i].Left=NULL;
        }
        for(i=0;i<N;i++)
            if(!check[i]) break;
        Root=i;
    }
    return Root;
}

int Isomorphic(Tree R1,Tree R2)
{
    if((R1==NULL)&&(R2==NULL))//都空
        return 1;
    if(((R1==NULL)&&(R2!=NULL))||((R1!=NULL)&&(R2==NULL)))//其中一个空
        return 0;
    if(T1[R1].Element!=T2[R2].Element)//根不一样
        return 0;
    if((T1[R1].Left==NULL)&&(T2[R2].Left==NULL))//都没有左子树
        return Isomorphic(T1[R1].Right,T2[R2].Right);//判别右子树是否同构
    if(((T1[R1].Left!=NULL)&&(T2[R2].Left!=NULL))&&((T1[T1[R1].Left].Element)==(T2[T2[R2].Left].Element)))//左边都不空 看左边的元素是否都一样
        return(Isomorphic(T1[R1].Left,T2[R2].Left)&&Isomorphic(T1[R1].Right,T2[R2].Right));//左边左边的判别  右边右边的判别
    else//如果Element不一样 可能是左边和右边同构  右边和左边同构  故进行左右判别
        return(Isomorphic(T1[R1].Left,T2[R2].Right)&&Isomorphic(T1[R1].Right,T2[R2].Left));
}