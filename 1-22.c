#include <stdio.h>
#include <string.h>

#define FOLDSIZE 10
#define TRUE 1
#define FALSE 0


int main(void)
{
    char line[FOLDSIZE+1];
    int pos = 0;
    int blank = FALSE;
    int blank_pos;
    int c;
    while((c = getchar()) != EOF) {
        // new line, just print line and reset counters
        if (c == '\n') {
            line[pos] = '\0';
            printf("%s\n", line);
            pos = 0;
            blank = FALSE;
            continue;
        }
        // check if blank exist
        if(c == ' ' || c == '\t') {
            blank_pos = pos;
            blank = TRUE;
        }
        line[pos] = c;
        // reached fold size
        if (pos >= FOLDSIZE - 1) {
            // no blank, print, reset
            if (!blank) {
                line[FOLDSIZE] = '\0';
                printf("%s\n", line);
                pos = 0;
                blank = FALSE;
                continue;
            } else {
                // blank found, print and copy remaining characters
                char temp = line[blank_pos + 1];
                line[blank_pos + 1] = '\0';
                printf("%s\n", line);
                pos = FOLDSIZE - 1 - blank_pos;
                line[0] = temp;
                memmove(line + 1, line + blank_pos + 2, pos);
                blank = FALSE;
                continue;
            }
        }
        pos++;
    }
    return 0;
}
