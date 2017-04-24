#include <stdio.h>
/**
 * 将多个空格替换为一个空格
 */
int main() {
    int c, next = 'c';
    while ((c = getchar()) != EOF) {
        if (c != ' ' || next != ' ') {
            putchar(c);
            next = c;
        }
    }
}
