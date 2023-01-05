#include <stdio.h>
#define MAXLINE 1000


int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
    int len, max = 0;
    char line[MAXLINE], longest[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        // check if reached \n or EOF
        if (line[len-1] != EOF && line[len-1] != '\n')
        {
            int c;
            // while loop to count len of longer than MAX inputs
            while ((c = getchar()) != EOF && c != '\n')
            {
                ++len;
            }
        }
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
    {
        printf("%s\n", longest);
        printf("%d", max);
    }
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}
