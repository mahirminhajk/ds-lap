/*Implement Pattern matching algorithm*/

#include <stdio.h>
#include <string.h>

int match(char[], char[]);

void main()
{
    char text[100], pattern[100];
    int pos;

    printf("Enter some text:\n");
    gets(text);

    printf("Enter the pattern to find: \n");
    gets(pattern);

    pos = match(text, pattern);

    if (pos != -1)
    {
        printf("Pattern found at location %d\n", pos + 1);
    }
    else
    {
        printf("Pattern not found");
    }
}

int match(char text[], char pattern[])
{
    int i, j, k, tl, pl, pos = -1;

    tl = strlen(text);
    pl = strlen(pattern);

    if (pl > tl)
    {
        return -1;
    }

    for (i = 0; i <= tl - pl; i++)
    {
        pos = k = i;

        for (j = 0; j < pl; j++)
        {
            if (pattern[j] == text[k])
            {
                k++;
            }
            else
            {
                break;
            }
        }
        if (j == pl)
        {
            return pos;
        }
    }
    return -1;
}