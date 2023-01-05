#include <stdio.h>
#define TAB_DIST 8

int main(void)
{
    int c, pos = 0, spaces = 0;
    while ((c = getchar())  != EOF) {
        if (c == ' ') {
            ++spaces;
            ++pos;
        }
        else {
            while (spaces > 0) {
                if (pos % TAB_DIST == 0 && spaces >= TAB_DIST) {
                    putchar('\t');
                    spaces -= TAB_DIST;
                }
                else {
                    putchar(' ');
                    --spaces;
                }
                ++pos;
            }
            putchar(c);
            ++pos;
            if (c == '\n') {
                pos = 0;
            }
        }
    }
    return 0;
}
