// Implement stack using array.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 5

int top = -1;
int stack[MAX];
void push();
void pop();
void display();
void main()
{
    int choice;
    // clrscr();
    while(1)
    {
        printf("\n1 Push\n2 Pop\n3 Display\n4 Quit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1: 
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
        printf("Wrong Choice.\n");
	    }
    }
    getch();
}

void push()
{
    int item;
    if(top == (MAX -1))
        printf("Stack overflow.");
    else
    {
        printf("Enter the item to push: ");
        scanf("%d",&item);
        top = top + 1;
	stack[top]= item;
    }
    return;
}

void pop()
{
    if(top == -1)
    printf("Stack underflow.");
    else
    {
        printf("Popped element is %d.",stack[top]);
        top = top - 1;
    }
    return;
}

void display()
{
    int i;
    if(top == -1)
    printf("Stack is empty.\n");
    else
    {
        printf("Stack elements: \n");
        for(i = top; i >= 0; i--)
            printf("%d\n",stack[i]);
    }
    return;
}