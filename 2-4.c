#include <stdio.h>
#include <ctype.h>
#include <string.h>

void squeeze(char s1[], char s2[]);

int main(void) {
    char s1[100];
    char s2[100];
    strcpy(s1, "abcabaklmnocacbca");
    strcpy(s2, "abc");
    squeeze(s1, s2);
    printf("%s", s1);
    return 0;
}

void squeeze(char s1[], char s2[]){
    int i, j, k;
    for (i = j = 0; s1[i] != '\0'; i++) {
        k = 0;
        while (s2[k] != s1[i] && s2[k] != '\0') {
            k++;
        }
        if (s2[k] == '\0') {
            s1[j++] = s1[i];
        }
    }
    s1[j] = '\0';
}
