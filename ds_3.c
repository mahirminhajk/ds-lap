// Implement sparse matrix.

#include <stdio.h>

void main()
{
    int a[10][10], row, col, i, j, count = 0;
    // clrscr();
    printf("Enter the row and column: \n");
    scanf("%d %d", &row, &col);

    printf("Enter element of the matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }

    printf("Elements are:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    if (count > ((row * col) / 2))
    {
        printf("matrix is sparse matrix\n");
    }
    else
    {
        printf("matirx is not sparse matrix\n");
    }
}