// Implement queue using array.

#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX];
int rear = -1;
int front = -1;

main(){
    int choice;

    while(1)
    {
        printf("\n 1.Insert\n 2.Delete\n 3.Display\n 4.Quit\n Enter the choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
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
    getch();
}

insert()
{
    int item;
    if(rear==MAX-1)
    {
        printf("Queue overflow.\n");
    }
    else
    {
        if(front==-1)
        front = 0;
        {
            printf("Put the element for adding queue: ");
            scanf("%d", &item);
            rear = rear + 1;
            queue[rear] = item;
        }
    }
    return;
}

delete()
{
    if(front==-1 || front>rear)
    {
        printf("Queue underflow.\n");
        return;
    }
    else
    {
        printf("Element deleted from queue is %d.\n", queue[front]);
        front = front+1;
        if(front>rear)
        {
            front,rear = -1; 
        }
    }
    return;
}

display()
{
    int i;
    if(front==-1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue is: ");
        for(i=front; i<=rear; i++)
        printf("%d\t",queue[i]);
    }
    return;
}

