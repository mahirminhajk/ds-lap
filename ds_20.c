// Evaluation of postfix expression.

#include <stdio.h>
#include <ctype.h>
#include <math.h>

int stack[50], top;
void push(int);
int pop();
void main()
{
    int i, x, a, b, c;
    char str[50];
    top = -1;
    printf("Enter the postfix expression : ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            printf("\n Enter value for %c = ", str[i]);
            scanf("%d", &x);
            push(x);
        }
        else if (isdigit(str[i]))
        {
            x = str[i] - '0';
            push(x);
        }
        else
        {
            a = pop();
            b = pop();
            switch (str[i])
            {
            case '+':
                c = b + a;
                break;
            case '-':
                c = b - a;
                break;
            case '*':
                c = b * a;
                break;
            case '/':
                c = b / a;
                break;
            case '%':
                c = b % a;
                break;
            case '^':
                c = pow(b, a);
                break;
            }
            push(c);
        }
    }
    printf("The result of the postfix evaluation : %d", stack[top]);
    getch();
}
void push(int x)
{
    top++;
    stack[top] = x;
}
int pop()
{
    int x = stack[top];
    top--;
    return x;
}