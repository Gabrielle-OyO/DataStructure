

// 非递归算法

void Merge_pass(ElementType A[], ElementType TmpA[], int N, int lenght)
{
    for (i = 0; i <= N - 2 * lenght; i += 2 * lenght)
        Mergel(A, TmpA, i, i + lenght, i += 2 * lenght - 1);
    if (i + lenght < N)
        Mergel(A, TmpA, i, i + lenght, N - 1);
    else
        for (j = i; j < N; j++)
            TmpA[j] = A[j];
}

void Merge_sort(ElementType A[], int N)
{
    ElementType *TmpA;
    TmpA = malloc(N * sizeof(ElementType));
    if (TmpA != NULL)
    {
        while (length < N)
        {
            Merge_pass(A, TmpA, N, length);
            length *= 2;
            Merge_pass(TmpA, A, N, length);
            length *= 2;
        }
        free(TmpA);
    }
    else
        Error("空间不足");
}