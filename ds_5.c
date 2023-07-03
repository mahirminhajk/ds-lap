// Reverse a string using pointers.

#include <stdio.h>
#include <string.h>

void restring(char *str);

void main()
{
    char str[50];
    // clrscr();
    printf("Enter the string to reverse: ");
    gets(str);

    restring(str);

    printf("Reverse of the string: %s\n", str);
}

void restring(char *str){
    int i;
    char *start, *end, temp;
    
    start = str;
    end = str;

    while(*end != '\0') end++;

    end--;

     while(start < end){
        temp = *start;
        *start = *end;
        *end = *start;
        start++;
        end--;
    }
}

// void reString(char *str)
// {
//     int l, i;
//     char *begin_ptr, *end_ptr, temp;

//     l = strlen(str);
//     begin_ptr = str;
//     end_ptr = str;

//     for (i = 0; i < l - 1; i++)
//     { // set end_ptr in to end of the stirng
//         end_ptr++;
//     }

//     for (i = 0; i < l / 2; i++)
//     {
//         temp = *end_ptr;
//         *end_ptr = *begin_ptr;
//         *begin_ptr = temp;
//         begin_ptr++;
//         end_ptr--;
//     }
// }
