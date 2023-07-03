// Implement bubble sort.

#include <stdio.h>
#include <stdlib.h>

void display(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void bubbleSort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - i) - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    display(a, n);
}

void main()
{
    int a[20], n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d item of the array: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("array before sort: ");
    display(a, n);

    printf("array after bubble sort: ");
    bubbleSort(a, n);
}
