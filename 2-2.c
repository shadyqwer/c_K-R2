#include <stdio.h>
#define MAXLINE 1000
int main(void) {
    int s[MAXLINE + 1];
    int c;

    for (int i = 0; i < MAXLINE - 1 && (c = getchar()) != '\n' && c != EOF; ++i){
        s[i] = c;
    }
/* Write a loop equivalent to the for loop above without using && or || */
    for (int i = 0; i < MAXLINE - 1; ++i){
        c = getchar();
        if (c == '\n') {
            break;
        } else if (c == EOF){
            break;
        } else {
            s[i] = c;
        }
    }
    return 0;
}
