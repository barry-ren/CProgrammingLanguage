#include <stdio.h>
/**
 * cout blanks,tabs,and newlines
 */
int main() {
    int c, blanks = 0,tabs = 0, newlines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blanks;
        }
        if (c == '\t') {
            ++tabs;
        }
        if (c == '\n') {
            ++newlines;
        }
    }
    printf("blanks: %d\ntabs: %d\nnewlines: %d\n", blanks, tabs, newlines); 
}
