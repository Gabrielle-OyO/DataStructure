

void Selection_Sort(ElementType A[], int N)
{
    for (i = 0; i < N; i++)
    {
        MinPosition = ScanForMin(A, i, N - 1);
        Swap(A[i], A[MinPosition]);
    }
}

// 无论如何 T=O(N^2)

// 算法一

void Heap_Sort(ElementType A[], int N)
{
    BuildHeap(A); //O(N)
    for (i = 0; i < N; i++)
        TmpA[i] = DeleteMin(A); //O(logN)
    for (i = 0; i < N; i++)     //O(N)
        A[i] = TmpA[i];
}

// 需要额外N（N）空间 并且复制元素需要时间

// 算法二

void Heap_Sort(ElementType A[], int N)
{
    for (i = N / 2 - 1; i >= 0; i--) //BuildHeap
        PercDown(A, i, N);
    for (i = N - 1; i > 0; i--)
    {
        Swap(% A[0], &A[i]); //DeleteMax
        PercDown(A, 0, i);
    }
}

// 定理：
//      堆排序处理N个不同元素的随机排列的平均比较次数2NlogN-O（Nlog logN）

// 虽然堆排序给出最佳平均时间复杂度 但实际效果不如用Sedgewick增量序列的希尔排序
