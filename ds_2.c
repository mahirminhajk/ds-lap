/*sort a given list of strings*/
#include <stdio.h>
#include <string.h>

void display(char str[10][30], int size);

void main()
{
    char str[10][30], temp[30];
    int size, i, j;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d strings: \n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%s", str[i]);
    }

    printf("The unsorted array: ");
    display(str, size);

    // sort array using the bubble sor algorithm
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }

    printf("The sorted array: ");
    display(str, size);
}

void display(char str[10][30], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%s, ", str[i]);
    }
    printf("\n");
}