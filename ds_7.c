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
    int a[10], b[10], c[20], a_s, b_s, i, c_s;
    // clrscr();
    printf("Enter size of the array: \n");
    scanf("%d", &a_s);
    printf("Enter the first array %d value\n", a_s);
    for (i = 0; i < a_s; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    c_s = a_s;

    printf("Enter size of the array to append: \n");
    scanf("%d", &b_s);

    printf("Enter the array %d value\n", b_s);
    for (i = 0; i < b_s; i++)
    {
        scanf("%d", &b[i]);
        c[c_s] = b[i];
        c_s++;
    }

    printf("array before append\n");
    display(a, a_s);

    printf("array after append: \n");
    display(c, c_s);
}
