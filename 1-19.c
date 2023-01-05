#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void reverse(char line[], int len);

int main(void)
{
    int len;
    char line[MAXLINE], longest[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        reverse(line, len - 2);
        printf("%s", line);
    }
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != '~' && c != '\n'; ++i)
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

void reverse(char line[], int len)
{
    int temp, i = 0;
    while (i < (len / 2))
    {
        temp = line[i];
        line[i] = line[len - i];
        line[len - i] = temp;
        ++i;
    }
}
