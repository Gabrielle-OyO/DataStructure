

void Insertion_Sort(ElementType A[], int N)
{
    for (P = 1; P < N; P++)
    {
        Tmp = A[P];
        for (i = P; i > 0 && A[i - 1] > Tmp; i--)
            A[i] = A[i - 1];
        A[i] = Tmp;
    }
}

// 最好情况：顺序T=O(N)
// 最坏情况：逆序T=O(N^2)

// 任何仅以交换相邻两元素来排序的算法 其平均时间复杂度为Ω(N^2);