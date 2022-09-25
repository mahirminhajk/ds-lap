//*implement sparse matrix
// 0   0  9
// 8   0  0
// 0   0  2

// 0   1  2
// 2   0  2
// 9   8  2

#include <stdio.h>

void dispaly(int a[10][10])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int a[10][10], b[10][10], i, j, k = 0, value;

    printf("Enter the total non-zero value in the sparse matrix:");
    scanf("%d", &value);

    printf("Enter matrix Elements: \n");
    for (i = 0; i < value; i++)
    {
        for (j = 0; j < value; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("matrix is :\n");
    dispaly(a);

    for (i = 0; i < value; i++)
    {
        for (j = 0; j < value; j++)
        {
            if (a[i][j] != 0)
            {
                b[0][k] = i;
                b[1][k] = j;
                b[2][k] = a[i][j];
                k++;
            }
        }
    }

    printf("Sparse matrix printing:\n");
    dispaly(b);
}