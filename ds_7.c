// Append two array.

#include <stdio.h>

void display(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void main()
{
    int a[10], b[10], c[20], as, bs, i, cs;
    // clrscr();
    
    printf("Enter size of the array: \n");
    scanf("%d", &as);

    printf("Enter the first array %d value\n", as);
    for (i = 0; i < as; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    cs = as;

    printf("Enter size of the array to append: \n");
    scanf("%d", &bs);

    printf("Enter the array %d value\n", bs);
    for (i = 0; i < bs; i++)
    {
        scanf("%d", &b[i]);
        c[cs] = b[i];
        cs++;
    }

    printf("array before append\n");
    display(a, as);

    printf("array after append: \n");
    display(c, cs);
}
