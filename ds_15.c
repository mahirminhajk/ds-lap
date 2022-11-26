/*delete an element from a singly linked list*/

#include <stdio.h>
#include <stdlib.h>

struct LL
{
    int data;
    struct LL *next;
};

typedef struct LL Node; // define LL to Node

void push(Node **head_ref, int new_data)
{
    Node *new_node = (Node *)malloc(sizeof(Node)); // create a empty Node memory location
    new_node->data = new_data;                     // put data
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void deleteNode(Node **head_ref)
{
    if (*head_ref == NULL)
    {
        printf("\nLinked List is empty!!\n");
    }
    else
    {
        Node *temp = *head_ref;
        *head_ref = temp->next;
        printf("\n %d is deleted\n", temp->data);
        free(temp);
    }
}

void printList(Node *head)
{
    if (head == NULL)
    {
        printf("\nLinked List is empty!!\n");
    }
    else
    {
        while (head != NULL)
        {
            printf("%d->", head->data);
            head = head->next;
        }
    }
}

void main()
{
    int count = 0, i, value, choice;
    Node *head = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &count);

    for (i = 0; i < count; i++)
    {
        printf("Enter %dth element: ", i);
        scanf("%d", &value);
        push(&head, value);
    }
    while (1)
    {
        printf("\n1-DISPLAY\n2-DELETE NODE\n3-EXIT\nEnter your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printList(head);
            break;

        case 2:
            deleteNode(&head);
            break;

        case 3:
            exit(0);
            break;

        default:
            printf("\nWrong Choice!!!!!\n");
            break;
        }
    }
}
