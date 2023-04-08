#include <stdio.h>
#define TRUE 1
#define FALSE 0

/* Write a program to check a C program for rudimentary syntax errors like
 * unbalanced parentheses, brackets and braces.
 * Don't forget about quotes, both single and double, escape sequences,
 * and comments. (This program is hard if you do it in fully generality.) */

int main() {
    int c, prev = '\0', pprev = '\0', line_comment = FALSE, comment = FALSE, string = FALSE, last;
    int braces = 0; brackets = 0; paranthesis = 0;


    while ((c = getchar()) != EOF) {
        if (!comment && !line_comment) {
            // put / if not in comment
            if (!string && prev == '/' && c != '*' && pprev != '*' && c != '/') {
                putchar('/');
            }
            if (string || (c != '/' && (c != '*' || prev != '/'))) {
                putchar(c);
            }
        }
        if (comment && c == '/' && prev == '*') { // end comment
            comment = FALSE;
        } else if (!comment && !string && c == '*' && prev == '/') { // start multi line comment with /*
            comment = TRUE;
        } else if (string && c == last && (prev != '\\' || pprev == '\\')) { // string end
            string = FALSE;
        } else if (!string && !comment && (c == '"' || c == '\'')) { // string start
            string = TRUE;
            last = c;
        }
        if (line_comment && c == '\n'){ // end one line comment with new line
            line_comment = FALSE;
        } else if (!line_comment && !string && c == '/' && prev == '/') { // start one line comment //
            line_comment = TRUE;
        }
        pprev = prev;
        prev = c;
    }
    return 0;
}
