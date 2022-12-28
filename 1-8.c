#include <stdio.h>

/* count blanks, tabs and new lines in input */
int main()
{
    int c, new_lines = 0, blanks = 0, tabs = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++new_lines;
        }
        else if (c == '\t')
        {
            ++tabs;
        }
        else if (c == ' ')
        {
            ++blanks;
        }
    }
    printf("Blanks: %d.\nTabs: %d.\nNew lines: %d.\n", blanks, tabs, new_lines);
    return 0;
}