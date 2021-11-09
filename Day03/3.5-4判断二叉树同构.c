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

