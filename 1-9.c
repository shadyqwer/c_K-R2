#include <stdio.h>

/* replace one or more blanks with single blank */

int main()
{
    int c, lc = 'C';
    while ((c = getchar()) != EOF)
    {
        if ((c != ' ') || (lc != ' '))
        {
            putchar(c);
        }
        lc = c;
    }
    return 0;
}
/*
int main()
{
    int c, blanks = 0;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            putchar(c);
            blanks = 0;
        }
        else if (blanks == 0)
        {
            putchar(c);
            blanks = 1;
        }
    }
    return 0;
}
*/