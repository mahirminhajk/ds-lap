// Write a c-program implement stack using linked list.

#include<stdio.h>
#include<malloc.h>
#define NULL0

struct linked_list
{
    int info;
    struct linked_list * link;
};
typedef struct linked_list node;
node * top = NULL;
void push();
void pop();
void display();

void main()
{
    int choice;

    while(1)
    {
        printf(" 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.QUIT\n Enter your choice: ");
        scanf("%d",choice);
        switch (choice)
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
            printf("Wrong choice.\n");
        }
    }
}

void push()
{
    node * temp;
    int pushed_item;
    temp = (node*) malloc(sizeof(node));
    printf("Input new value: \n");
    scanf("%d",&pushed_item);
    temp->info = pushed_item;
    temp->link = top;
    top = temp;
}

void pop()
{
    node * temp;
    if(top == NULL)
    printf("Stack is empty.\n");
    else
    {
        temp = top;
        printf("Popped item in %d", temp->info);
        top = top->link;
        free(temp);
    }
}

void display()
{
    node * ptr;
    ptr = top;
    if(top == NULL)
    printf("Stack is empty.\n");
    else
    {
        printf("Stack elements: \n");
        while(ptr != NULL)
        {
            printf("%d\n", ptr->info);
            ptr=ptr->link;
        }
    }
}