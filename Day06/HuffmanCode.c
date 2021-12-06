

//核心算法

//计算最优编码长度

MinHeap H=CreateHeap(N);
H=ReadData(N);
HuffmanTree T=Huffman(H);
int CodeLen=WPL(T,0);

int WPL(HuffmanTree T,int Depth)
{
    if(!T->Left && !T->Right)
        return (Depth*T->Weight);
    else
        return(WPL(T->Left,Depth+)+WPL(T->Right,Depth+1));
}