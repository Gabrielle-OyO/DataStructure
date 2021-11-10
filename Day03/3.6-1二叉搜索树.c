

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