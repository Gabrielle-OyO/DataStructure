
//层序遍历
/*

二叉树遍历的核心问题：二维结构的线性化
    从结点访问其左右儿子结点
    访问左儿子后 右儿子结点怎么办
        需要一个存储结构暂时不访问的结点
        存储结构：堆栈、队列

    先根结点入队
    从队列中取出一个元素 访问该元素的所有结点
    若该元素所指结点的左右子结点非空  将其左右孩子指针顺序入队

    父节点入队 访问父节点  将父节点孩子入队 

*/

void LevelOrderTraversal(BinTree BT)
{
    Queue Q;
    BinTree T;
    if(!BT) return;//若是空树则直接返回
    Q=CreatQueue(MaxSize)//创建并初始化队列Q
    AddQ(Q,BT);//根节点放入队列
    while(!IsEmptyQ(Q))
    {
        T=DeleteQ(Q);
        printf("%d\n",T->Data);//访问取出队列的结点
        if(T->Left)     AddQ(Q,T->Left);
        if(T->Right)    AddQ(Q,T->Right);
    }
}