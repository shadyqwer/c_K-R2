#include <stdio.h>

#define MAXWORDS 127
#define IN 1
#define OUT 0

/* prints a histogram of the lengths of words in its input */
int main(void)
{
    int histogram[MAXWORDS];
    for (int i = 0; i < MAXWORDS; ++i)
    {
        histogram[i] = 0;
    }

    // get words, calculate and store its lengths into array
    int state = OUT;
    int c;
    int curr_len = 0; //  length of current word
    int word_count = 0; // number of words
    int longest = 0; // longest word length, used for vertical histogram
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
            if (curr_len > 0)
            {
                if (curr_len < MAXWORDS)
                {
                    histogram[word_count] = curr_len;
                }
                else
                {
                    histogram[word_count] = MAXWORDS;
                }
                if (histogram[word_count] > longest)
                {
                    longest = histogram[word_count];
                }
                ++word_count;
                curr_len = 0;
            }

        }
        else if (state == OUT)
        {
            state = IN;
            curr_len = 1;
        }
        else
        {
            ++curr_len;
        }
    }
    // print horizontal histogram
    printf("Horizontal histogram\n");
    for (int i = 0; i < word_count; ++i)
    {
        printf("%d.", i+1);
        for (int k = 0; k < histogram[i]; ++k)
        {
            putchar('#');
        }
        putchar('\n');
    }
    // print vertical histogram
    printf("Vertical Histogram\n");
    for (int i = longest; i > 0; --i)
    {
        for (int k = 0; k < word_count; ++k)
        {
            if (histogram[k] >= i)
            {
                printf("# ");
            }
            else
            {
                printf("  ");
            }
        }
        putchar('\n');
    }
    for (int i = 1; i <= word_count; ++i)
    {
        printf("%d.", i);
    }
    return 0;
}
