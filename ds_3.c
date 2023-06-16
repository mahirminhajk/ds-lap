/*implement sparse matrix*/

#include <stdio.h>

void main()
{
    int a[10][10], r, c, i, j, count = 0;

    printf("Enter the row and column: \n");
    scanf("%d %d", &r, &c);

    printf("Enter element of the matrix: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }

    printf("Elements are:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    if (count > ((r * c) / 2))
    {
        printf("matrix is sparse matrix\n");
    }
    else
    {
        printf("matirx is not sparse matrix\n");
    }
}