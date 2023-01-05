#include <stdio.h>
#define TAB_DIST 8

int main(void)
{
    int c, pos = 0;
    while ((c = getchar())  != EOF)
    {
        if (c == '\t')
        {
            int spaces = TAB_DIST - (pos % TAB_DIST);
            for (int i = 0; i < spaces; ++i)
            {
                putchar(' ');
            }
            pos += spaces;
        }
        else
        {
            putchar(c);
            ++pos;
            if (c == '\n')
            {
                pos = 0;
            }
        }
    }
    return 0;
}
