#include <stdio.h>
#include <ctype.h>

/* print a histogram of the frequencies of different characters and numbers*/
int main(void)
{
    int histogram[36];
    for (int i = 0; i < 36; ++i)
    {
        histogram[i] = 0;
    }

    int c;
    while ((c = tolower(getchar())) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            ++histogram[c - 'a'];
        }
        else if (c >= '0' && c <= '9')
        {
            ++histogram[c - 22];
        }
    }
    for (int i = 0; i < 36; ++i)
    {
        // print only characters that appear in input
        if (histogram[i] > 0)
        {
            if (i <= 25)
            {
                printf("%c.", i + 'a');
            }
            else
            {
                printf("%c.", i + 22);
            }
            for (int j = 0; j < histogram[i]; ++j) {
                putchar('#');
            }
            putchar('\n');
        }
    }
    return 0;
}
