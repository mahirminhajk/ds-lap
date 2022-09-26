//*implement sparse matrix
// 0   1  2
// 2   0  2
// 9   8  2

// 0   0  9
// 8   0  0
// 0   0  2

#include <stdio.h>

void display(int a[10][10], int r, int c);

void main()
{
    int a[10][10], b[10][10], i, j, k = 0, r, c, x = 0;

    printf("Enter the row and the column:");
    scanf("%d %d", &r, &c);

    printf("Enter matrix Elements: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] != 0)
            {
                x++;
            }
        }
    }

    printf("matrix is :\n");
    display(a, r, c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
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
    display(b, r, x);
}

void display(int a[10][10], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}