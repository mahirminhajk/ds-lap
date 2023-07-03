// Implement Queue using array.

#include <stdio.h>
#include <conio.h>

void insert();
void rem();
void display();

int rear = -1, front = 0, q[10], item, size = 10;
void main()
{
    int op;
    // clrscr();
    do
    {
        printf("\nEnter the option: ");
        printf("\n1.Insert 2.Remove 3.Display 4.Exit:\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            insert();
            break;
        case 2:
            rem();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("--END--");
            break;
        default:
            printf("Invalid option\n");
        }
    } while (op != 4);
    getch();
}

void insert()
{
    if (rear == size - 1)
    {
        printf("Queue overflow\n");
        return;
    }
    printf("Enter the item: ");
    scanf("%d", &item);
    rear++;
    q[rear] = item;
}

void rem()
{
    if (front > rear)
    {
        printf("Queue underflow\n");
        return;
    }
    printf("Item deleteed: %d", q[front]);
    front++;
    if (front > rear)
    {
        front = 0;
        rear = -1;
    }
}

void display()
{
    int i;
    if (front > rear)
    {
        printf("Empty queue\n");
        return;
    }
    printf("Queue is: ");
    for (i = front; i <= rear; i++)
        printf("\t%d", q[i]);
}


// // Implement queue using array.

// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 5

// int queue[MAX], rear = -1, front = -1;

// main()
// {
//     int choice;
//     // clrscr();
//     while (1)
//     {
//         printf("\n 1.Insert\n 2.Delete\n 3.Display\n 4.Quit\n Enter the choice: ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             insert();
//             break;
//         case 2:
//             delete ();
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             exit(0);
//         default:
//             printf("Wrong choice.\n");
//         }
//     }
//     getch();
// }

// insert()
// {
//     int item;
//     if (rear == MAX - 1)
//     {
//         printf("Queue overflow.\n");
//     }
//     else
//     {
//         if (front == -1)
//             front = 0;
//         {
//             printf("Put the element for adding queue: ");
//             scanf("%d", &item);
//             rear = rear + 1;
//             queue[rear] = item;
//         }
//     }
//     return;
// }

// delete ()
// {
//     if (front == -1 || front > rear)
//     {
//         printf("Queue underflow.\n");
//         return;
//     }
//     else
//     {
//         printf("Element deleted from queue is %d.\n", queue[front]);
//         front = front + 1;
//         if (front > rear)
//         {
//             front, rear = -1;
//         }
//     }
//     return;
// }

// display()
// {
//     int i;
//     if (front == -1)
//     {
//         printf("Queue is empty.\n");
//     }
//     else
//     {
//         printf("Queue is: ");
//         for (i = front; i <= rear; i++)
//             printf("%d\t", queue[i]);
//     }
//     return;
// }