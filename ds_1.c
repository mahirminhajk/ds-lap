// Searching for elements in a 2D array.

#include <stdio.h>
#include <conio.h>

void main()
{
    int a[3][3], item, i, row, col, j, flag = 0;
    // clrscr();
    printf("Enter the order of the matrix: ");
    scanf("%d%d", &row, &col);
    printf("Enter the elements: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    }
    printf("The matrix is: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("Enter the item: \n");
    scanf("%d", &item);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (a[i][j] == item)
            {
                printf("Item found at the row: %d column: %d \n", i, j);
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
        printf("Item not found");
    getch();
}













// // Searching for elements in a 2D array.

// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>

// void main()
// {
//     int array[25][25], i, j, flag = 0, s, row, col;
//     // clrscr();
//     printf("Enter the row: ");
//     scanf("%d", &row);
//     printf("Enter the col: ");
//     scanf("%d", &col);
//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             scanf("%d", &array[i][j]);
//         }
//     }
//     printf("Enter the element to be searched:\n");
//     scanf("%d", &s);
//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             if (array[i][j] == s)
//             {
//                 printf("The element is found in the index [%d][%d]", i, j);
//                 flag = 1;
//                 break;
//             }
//         }
//     }
//     if (flag == 0)
//     {
//         printf("The element not found!");
//     }
//     getch();
// }