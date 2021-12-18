//输出二叉树中的叶子结点

//在二叉树遍历算法中增加检测节点的“左右子树是否都为空”

void PreOrderPrintLeaves(BinTree BT)
{
    if(BT)
    {
        if(!BT-Left && Right)
            printf("%d",BT->Data);
        PreOrderPrintLeaves(BT->Left);
        PreOrderPrintLeaves(BT->Right);
    }
}