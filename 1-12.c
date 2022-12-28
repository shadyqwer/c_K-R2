#include <stdio.h>

#define IN 1
#define OUT 0

/* prints one word per line */

int main()
{
    int c, state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\n' && c != '\t')
        {
            state = IN;
            putchar(c);
        }
        else if (state == IN)
        {
            state = OUT;
            putchar('\n');
        }
    }
    return 0;
}
/*
int main()
{
    int c, state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            putchar('\n');
        }
        else if (state == OUT)
        {
            state = IN;
        }
        if (state == IN)
        {
            putchar(c);
        }
    }
    return 0;
}
*/