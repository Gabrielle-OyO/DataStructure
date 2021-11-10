

Position Find(ElementType X,BinTree BST)//查找返回X所在节点位置
Position FindMin(BinTree BST)//查找返回最小元素所在结点位置
Position FindMax(BinTree BST)//查找返回最大元素所在结点位置
BinTree Insert(ElementType X,BinTree BST)
BinTree Delete(ElementType X,BinTree BST)


//尾递归--效率低
Position Find(ElementType X,BinTree BST
{
    if(!BST)    return NULL;//查找失败
    if(X>BST->Data)
        return Find(X,BST->Right);//右子树继续查找
    else if(X,BST->Data)
        return Find(X,BST->Left);//左子树查找
    else
        return BST;//查找成功
}

//循环---效率高
Position IterFind(ElementType X,BinTree BST)
{
    while(BST)
    {
        if(X>BST->Data)
            BST=BST->Right;//右子树移动
        else if(X<BST->Data)
            BST=BST->Left;//左子树移动
        else
            return BST;//查找成功 返回节点地址
    }
    return NULL;//查找失败
}

//查找最小元素的递归函数
Position FindMin(BinTree BST)
{
    if(!BST)    return NULL;//空二叉树
    else if(!BST->Left)
        return BST;//左叶结点
    else 
        return FindMin(BST->Left);//沿左分支继续查找
}

//查找最大元素的迭代函数
Position FindMax(BinTree BST)
{
    if(!BST)
        while(BST->Right)
            BST=BST->Right;
    return BST;
}

//插入
BinTree Insert(ElementType X,BinTree BST)
{
    if(!BST)//树为空 生成并返回一个结点的二叉树
    {
        BST=malloc(sizeof(struct TreeNode));
        BST->Data=X;
        BST->Left=BST->Right=NULL;
    }else{//查找要插入元素的位置
        if(X<BST->Data)
        {
            BST->Left=Insert(X,BST->Left);
        }else if(X>BST->Data)
            BST->Right=Insert(X,BST->Right);
    }
    return BST;
}

//删除
//删除左右结点  右子树最小值、左子树最大值
BinTree Delete(ElementType X,BinTree BST)
{
    Position Tmp;
    if(!BST)    printf("要删除的元素未找到");
    else if(X<BST->Data)
        BST->Left=Delete(X,BST->Left);
    else if(X>BST->Data)
        BST->Right=Delete(X,BST->Right);
    else
        if(BST->Left&&BST->Right)
        {
            Tmp=FindMin(BST->Right);
            BST->Data=Tmp->Data;
            BST->Right=Delete(BST->Data,BST->Right);
        }else{
            Tmp=BST;
            if(!BST->Left)
                BST=BST->Right;
            else if(!BST=BST->Left)
                BST=BST->Left;
            free(Tmp);
        }
    return BST;
}


