// Implement singly linked list of integers.

#include <stdio.h>
#include <stdlib.h>

struct SL{
    int value;
    struct SL* next;
};
typedef struct SL node;

void insertfront(node** head,int data){
    node* new_node = NULL;
    new_node = (node*)malloc(sizeof(node));
    new_node->value = data;
    new_node->next = *head;
    *head = new_node;
}

void printList(node* head){
    node* current = head;
    if(current == NULL) printf("linked list is empty");
    else {
        printf("Linked List elements are: ");
        while(current){
               printf("%d-> ",current->value);
               current = current -> next;
        }
        printf("|||");
    }
}

void main()
{
    int count = 0, i, val;
    // clrscr();
    struct node *head = NULL;

    printf("Enter number of element: ");
    scanf("%d", &count);
    for (i = 0; i < count; i++)
    {
        printf("Enter %dth elements: \n", i);
        scanf("%d", &val);
        insertfront(&head, val);
    }
    printList(head);
    getch();
}


// struct node
// {
//     int val;
//     struct node *next;
// };

// void print_list(struct node *head)
// {
//     printf("H->");
//     while (head)
//     {
//         printf("%d ->", head->val);
//         head = head->next;
//     }
//     printf("|||\n");
// }

// void insert_front(struct node **head, int value)
// {
//     struct node *new_node = NULL;
//     new_node = (struct node *)malloc(sizeof(struct node));
//     if (new_node == NULL)
//     {
//         printf("Failed to insert element out of memory.");
//     }
//     new_node->val = value;
//     new_node->next = *head;
//     *head = new_node;
// }