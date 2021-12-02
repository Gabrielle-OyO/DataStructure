//最优二叉树，带权路径长度最小的二叉树，经常应用于数据压缩   WPL最小二叉树

/*
带权路径长度（WPL）  WPL=Sigmund（wl）  n个叶子结点 每个叶子结点带权值w，跟到叶子结点长度l

*/

/*

哈夫曼树特点
    没有度为一的结点
    n个叶子结点的哈夫曼树共有2n-1个结点
        n0：叶节点总数
        n1：只有一个儿子的结点总数
        n2：有两个儿子结点总数
        n2=n0-1
    哈夫曼树任意非叶节点的左右子树交换后仍是哈夫曼树
    对同一组权值  是否产生不同构的哈夫曼树  可能
*/










//整体复杂度 O(NlogN)
typedef struct TreeNode *HuffmanTree;
struct TreeNode
{
    int Weightl
    HuffmanTree Left,Right;
}

HuffmanTree Huffman(MinHeap H)
{
    int i;
    HuffmanTree T;
    BuildMinHeap(H);
    for(i=1;i<H->Size;i++)
    {
        T=malloc(sizeof(struct TreeNode));
        T->Left=DeleteMin(H);
        T->Right=DeleteMin(H);
        T->Weight=T->Left->Weight+T->Right->Weight;
        Insert(H,T);
    }
    T=DeleteMin(H);
    return T;
}

