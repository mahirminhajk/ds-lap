#include <stdio.h>

struct student
{
    char name[25];
    int roll;
    struct student *next;
};
struct student *create();
void dispList(struct student *First);

void main()
{
    struct student *First;
    First = create();
    dispList(First);
}

struct student *create()
{
    struct student *First, *Far, *back;
    int N, i;
    int Sz;
    Sz = sizeof(struct student);
    printf("\n Enter the number of students in the class");
}
