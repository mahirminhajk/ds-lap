/* Merge two sorted array into one sorted array*/

#include <stdio.h>

void display(int a[], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void sort(int a[], int s)
{
    int i, j, temp;
    for (i = 0; i < s - 1; ++i)
    {
        for (j = 0; j < s - i - 1; ++j)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    display(a, s);
}

void main()
{
    int a[20], b[20], m[40], i, as, bs, ms;

    printf("Enter the size of first array: ");
    scanf("%d", &as);
    printf("\nEnter the elements of first array: ");
    for (i = 0; i < as; i++)
    {
        scanf("%d", &a[i]);
        m[i] = a[i];
    }
    ms = as;
    printf("Enter the size of second array: ");
    scanf("%d", &bs);
    printf("\nEnter the elements of second array: ");
    for (i = 0; i < bs; i++)
    {
        scanf("%d", &b[i]);
        m[ms] = b[i];
        ms++;
    }

    printf("\nfirst array after soring: \n");
    sort(a, as);

    printf("\nsecond array after soring: \n");
    sort(b, bs);

    printf("After merging and sorting:\n");
    sort(m, ms);
}