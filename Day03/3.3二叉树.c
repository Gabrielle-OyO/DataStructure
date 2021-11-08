Boolean IsEmpty(BinTree BT);//判别BT是否为空
void Traversal(BinTree BT);//遍历 按某顺序访问每个结点
BinTree CreateBinTree();//创建一个二叉树


//二叉树的遍历方法
void PreOrderTraversal(BinTree BT);//先序遍历---根左右
void InOrderTraversal(BinTree BT);//中序遍历----左根右
void PostOrderTraversal(BinTree BT);//后序遍历--左右根
void LevelOrderTraversal(BinTree BT);//层次遍历-上到下、左到右