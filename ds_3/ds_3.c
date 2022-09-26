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
    int a[10][10], b[10][10], r = 3, c, x = 0, y = 0, i, j, lr = 1, lc = 1;

    printf("Enter the total non-zero elements: \n");
    scanf("%d", &c);

    printf("Enter the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            b[i][j] = 0;
        }
    }
    printf("matrix entered: \n");
    display(a, r, c);

    // c = total values
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < c; j++)
        {
            x = a[i][j];
            y = a[i + 1][j];
            b[x][y] = a[i + 2][j];
            if (x > lr)
            {
                lr = x;
            }
            if (y > lc)
            {
                lc = y;
            }
        }
    }

    printf("Sparse matrix: \n");
    display(b, lr + 1, lc + 1);
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
