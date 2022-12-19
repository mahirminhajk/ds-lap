/*Traverse a binary search tree non recursively in inorder*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return (temp);
}

void printInorder(struct node *temp)
{
    if (temp == NULL)
        return;
    printInorder(temp->left);
    printf("%d ", temp->data);
    printInorder(temp->right);
}

void main()
{
    printf("test");
    struct node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("\nInorder traversal of binary tree is \n");
    printInorder(root);
}