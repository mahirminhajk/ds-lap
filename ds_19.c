/*Implement selection sort.*/

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void display(int arr[], int s)
{
    int i;
    for (i = 0; i < s; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}

void selectionSor(int arr[], int s)
{
    int i, j, key;

    for (i = 0; i < s - 1; i++)
    {
        key = i;
        for (j = i + 1; j < s; j++)
            if (arr[j] < arr[key])
                key = j;

        if (key != i)
        {
            swap(&arr[key], &arr[i]);
        }
    }
    display(arr, s);
}

void main()
{
    int arr[20], i, s;
    printf("Enter the size of the array: ");
    scanf("%d", &s);

    printf("enter the elements of the array: ");
    for (i = 0; i < s; i++)
        scanf("%d", &arr[i]);

    printf("Array before sorting: ");
    display(arr, s);

    printf("Array after sorting: ");
    selectionSor(arr, s);
}