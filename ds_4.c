//*implement polynomial using arrays

// 2x^3 + x^2 + x

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[10], i, N, power;
    // clrscr();
    printf("Enter the order of the polynomial:\n");
    scanf("%d", &N);

    printf("Enter %d coefficients\n", N + 1);
    for (i = 0; i <= N; i++)
    {
        scanf("%d", &a[i]);
    }

    power = N;

    printf("Given polynomial is: \n");
    for (i = 0; i <= N; i++)
    {
        if (power < 0)
        {
            break;
        }
        if (a[i] > 0 & i != 0)
        {
            printf(" + ");
        }
        else if (a[i] < 0)
        {
            printf(" - ");
        }
        else
        {
            printf(" ");
        }
        printf("%dx^%d  ", abs(a[i]), power--);
    }
}