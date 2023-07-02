// Searching for elements in a 2D array.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    int array[25][25], i, j, flag = 0, s, row, col;
    // clrscr();
    printf("Enter the row: ");
    scanf("%d", &row);
    printf("Enter the col: ");
    scanf("%d", &col);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("Enter the element to be searched:\n");
    scanf("%d", &s);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (array[i][j] == s)
            {
                printf("The element is found in the index [%d][%d]", i, j);
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("The element not found!");
    }
    getch();
}