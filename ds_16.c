// Addition of two polynomial.

#include <stdio.h>
#include <stdlib.h>

void poly (int N, int a[])
{
    int pow, i;
    pow=i;
    for(i=0; i<= N; i++)
    {
        if(pow < 0)
        {
            break;
        }
        if(a[i] > 0 && i != 0)
        {
            printf(" + ");
        }
        else if(a[i] < 0 )
        {
            printf(" - ");
        }
        else
        {
            printf(" ");
        }
        printf("%dX^%d", abs(a[i]), pow--);
    }
}

void main()
{
    int a[10], b[10], c[10], i, N1, N2;
    
    printf("\nEnter  the order of first polynomial: ");
    scanf("%d", &N1);

    printf("Enter %d coefficients of first polynomial:\n", N1 + 1);

    for(i=0; i <= N1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter order of the second polynomial: ");
    scanf("%d",&N2);
    printf("Enter %d coefficients of second polynomial:\n", N2 + 1);
    for(i=0; i <= N2; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\nGiven first polynomial is:\n");
    poly(N1, a);
    printf("\nGiven second polynomial is:\n");
    poly(N2, b);
    if(N1 == N2)
    {
        printf("\nThe sum of the two polynomial is:\n");
        for(i=0; i <= N2; i++)
        {
            c[i] = a[i] + b[i];
        }
        poly(N1, c);
    }else{
        printf("\nThe order of the polynomial is not equal.");
    }
    getch();
}