#include <stdio.h>
#include <ctype.h>

unsigned int htoi(char s[]);

int main(void) {
    printf("%d\n", htoi("0xFFFF"));
    printf("%d\n", htoi("0x002A"));
    return 0;
}

unsigned int htoi(char s[]) {
    unsigned int i, n = 0;
    if (tolower(s[1]) == 'x') {
        i = 2;
    } else {
        i = 0;
    }
    while (isdigit(s[i]) || (tolower(s[i]) >= 'a' && tolower(s[i]) <= 'f')) {
        if (isdigit(s[i])) {
            n = n * 16 + (s[i] - '0');
        } else {
            n = n * 16 + (tolower(s[i]) + 10 - 'a');
        }
        ++i;
    }
    return n;
}
