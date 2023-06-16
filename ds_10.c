// Implement singly linked list of integers.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node * next;
};

void print_list(struct node * head)
{
    printf("H->");
    while(head)
    {
        printf("%d ->", head -> val);
        head = head -> next;
    }
    printf("|||\n");
}

void insert_front(struct node ** head, int value)
{
    struct node * new_node = NULL;
    new_node = (struct node *) malloc(sizeof (struct node));
    if(new_node == NULL)
    {
        printf("Failed to insert element out of memory.");
    }
    new_node -> val = value;
    new_node -> next = *head;
    *head = new_node;
}

void main()
{
    int count = 0, i, val;
    struct node * head = NULL;

    printf("Enter number of element:");
    scanf("%d",&count);
    for(i=0; i<count; i++)
    {
        printf("Enter %dth elements:",i);
        scanf("%d",&val);
        insert_front(&head,val);
    }
    printf("Linked List:");
    print_list(head);
    getch();
}