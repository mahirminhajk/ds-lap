// Write a c-program implement queue using linked list.

#include<stdio.h>
#include<malloc.h>

struct linked_list
{
    int info;
    struct linked_list *link;
};
typedef struct linked_list node;
node * front = NULL;
node * rear = NULL;

void insert();
void del();
void display();

main()
{
    int choice;
    
    while(1)
    {
        printf("\n 1.INSERT\n 2.DELETE\n 3.DISPLAY\n 4.QUIT\n Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
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

void insert()
{
    node * temp;
    int item;
    temp=(node*)malloc(sizeof(node));
    printf("Enter the item: ");
    scanf("%d",&item);
    temp->info=item;
    temp->link=NULL;

    if(front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear -> link = temp;
        rear = temp;
    }
}

void del()
{
    node * temp;
    if(front == NULL)
        printf("Queue underflow.\n");
    else
    {
        temp=front;
        front = temp -> link;
        printf("Deleted item is %d.\n",temp->info);
        free(temp);
    }
}

void display()
{
    node * ptr;
    ptr=front;
    if(front==NULL)
        printf("Queue is empty.\n");
    else
    {
        printf("Queue elements: ");
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->info);
            ptr=ptr->link;
        }
    }
}