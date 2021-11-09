
//链表存储

typedef struct TreeNode *BinTree;
typedef BinTree Position;
struct TreeNode
{
    ElementType Data;
    BinTree Left;
    BinTree Right;
    BinTree Tag;
}

//先序遍历---根左右  递归遍历
void PreOrderTraversal(BinTree BT)
{
    if(BT)
    {
        printf("%d",BT->Data);
        PreOrderTraversal(BT->Left);
        PreOrderTraversal(BT->Right);
    }
}

//中序遍历---左根右  递归遍历
void InOrderTraversal(BinTree BT)
{
    if(BT)
    {
        InOrderTraversal(BT->Left);
        printf("%d",BT->Data);
        InOrderTraversal(BT->Right);
    }
}

//后序遍历---左右根  递归遍历
void PostOrderTraversal(BinTree BT)
{
    if(BT)
    {
        PostOrderTraversal(BT->Left);
        PostOrderTraversal(BT->Right);
        printf("%d",BT->Data);
    }
}


//中序遍历---左根右  非递归遍历 使用堆栈思想
void InOrderTraversal(BinTree BT)
{
    BinTree T=BT;
    Stack S=CreatStack(MaxSize);//创建并初始化堆栈S
    while(T||!IsEmpty(S))//T有数 或 堆栈不空  就进入循环
    {
        while(T)
        {
            //一直向左并将沿途结点压入堆栈
            Push(S,T);                  //第一次碰到
            T=T->Left;
        }
        if(!IsEmpty(S))//堆栈不空
        {
            T=Pop(S);//结点弹出堆栈     //第二次碰到
            printf("%5d",T->Data);//访问/打印结点
            T=T->Right;//转向右子树 回到大循环
        }
    }
}

//先序遍历---根左右  非递归遍历 使用堆栈思想
void PreOrderTraversal(BinTree BT)
{
    BinTree T=BT;
    Stack S=CreatStack(MaxSize);//创建并初始化堆栈S
    while(T||!IsEmpty(S))//T有数 或 堆栈不空  就进入循环
    {
        while(T)
        {
            //一直向左并将沿途结点压入堆栈
            Push(S,T);                  //第一次碰到
            printf("%5d",T->Data);//访问/打印结点
            T=T->Left;
        }
        if(!IsEmpty(S))//堆栈不空
        {
            T=Pop(S);//结点弹出堆栈     //第二次碰到

            T=T->Right;//转向右子树 回到大循环
        }
    }
}

//后序遍历---左右根  非递归遍历 使用堆栈思想   
//设置tag监测左右节点均遍历出栈入栈次数，左节点入栈出栈 在入栈tag++，当右节点出栈时 左节点出栈tag=2表示右节点已经遍历完毕，则根节点可输出
void PreOrderTraversal(BinTree BT)
{
    BinTree T=BT;
    Stack S=CreatStack(MaxSize);//创建并初始化堆栈S
    while(T||!IsEmpty(S))//T有数 或 堆栈不空  就进入循环
    {
        while(T)
        {
            //一直向左并将沿途结点压入堆栈
            Push(S,T);                  //第一次碰到
            T->Tag=1;//第一次接触根节点 进行标记
            T=T->Left;
        }
        if(!IsEmpty(S))//堆栈不空
        {
            T=Pop(S);//结点弹出堆栈     //第二次碰到
            if(T->Tag==1)
            {
                (T->Tag)++;     //遍历完左子树后第二次回到根节点
                Push(S,T);//第二次入栈
                T=T->Right;//转向右子树 回到大循环
            }else if(T->Tag==2)
            {
                //遍历完左右子树后 第三次来到根节点
                printf("%5d",T->Data);//访问节点
                T=NULL;
            }
        }
    }
}


