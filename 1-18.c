#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void remove_trailing(char line[], int len);

int main(void)
{
    int len;
    char line[MAXLINE], longest[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        remove_trailing(line, len);
        printf("%s", line);
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

void remove_trailing(char line[], int len)
{
    // traverse from end and find first non blank chr
    int i;
    for (i = len - 2; line[i] == ' ' || line[i] == '\t'; --i)
    {
        ;
    }
    // shift end index
    line[i + 1] = '\n';
    line[i + 2] = '\0';
}
