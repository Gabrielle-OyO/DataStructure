//求二叉树高度
//左右子树最大高度 加一
//前中后序遍历都可以实现

int PostOrderGetHeight(BinTree BT)
{
    int HL,HR,MaxH;
    if(BT)
    {
        HL=PostOrderGetHeight(BT->Left);//求左子树深度
        HR=PostOrderGetHeight(BT->Right);//右子树深度
        MaxH=(HL>HR)?HL:HR;//取左右子树最大深度
        return(MaxH+1);//返回树的深度
    }
    else return 0;//空树深度为0
}