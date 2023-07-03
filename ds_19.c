// Implement insertion sort.

#include <stdio.h>
#include <math.h>

void display(int arr[], int s)
{
    int i;
    for (i = 0; i < s; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}

void insertSort(int arr[], int s)
{
    int i, key, j;
    for (i = 1; i < s; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    display(arr, s);
}

void main()
{
    int arr[20], i, s;

    printf("Enter the size of the array: ");
    scanf("%d", &s);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < s; i++)
        scanf("%d", &arr[i]);

    printf("Array before sorting: ");
    display(arr, s);

    printf("Array after sorting: ");
    insertSort(arr, s);
    getch();
}