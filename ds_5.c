/*Reverse a string using pointers*/

#include <stdio.h>
#include <string.h>

void reString(char *str);

void main()
{
    char str[50];

    printf("Enter the string to reverse: ");
    gets(str);

    reString(str);

    printf("Reverse of the string: %s\n", str);
}

void reString(char *str)
{
    int l, i;
    char *begin_ptr, *end_ptr, ch;

    l = strlen(str);
    begin_ptr = str;
    end_ptr = str;

    for (i = 0; i < l - 1; i++)
    { // set end_ptr in to end of the stirng
        end_ptr++;
    }

    for (i = 0; i < l / 2; i++)
    {
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;
        begin_ptr++;
        end_ptr--;
    }
}