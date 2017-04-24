#include <stdio.h>
/**
 * 验证表达式 getchar() != EOF 的值是 0 还是 1
 */
int main() {
    int c;
    while (c = getchar() != EOF) {
        printf("%d\n", c);
    }
    printf("%d\n", c);
    return 0;
}
