#include<stdio.h>

#define IN 1
#define OUT 0
#define MAX_WORD 11
#define MAX_HIST 15
/**
 * 打印输入单词长度的直方图
 */
int main() {
    int c, nc, state;
    int length;
    int maxValue;
    int overflow;
    int wl[MAX_WORD];

    overflow = 0;
    nc = 0;
    state = 0;
    for (int i = 0; i < MAX_WORD; ++i) {
        wl[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state == OUT;
            if (nc > 0) {
                if (nc < MAX_WORD) {
                    ++wl[nc];
                } else {
                    ++overflow;
                }
            }
            nc = 0;
        } else if (state == OUT) {
            state = IN;
            nc = 1;
        } else {
            ++nc;
        }
    }

    maxValue = 0;
    for (int i = 1; i < MAX_WORD; ++i) {
        if (wl[i] > maxValue) {
            maxValue = wl[i];
        }
    }
    for (int i = 1; i < MAX_WORD; ++i) {
        printf("%5d - %5d : ", i, wl[i]);
        if (wl[i] > 0) {
            if ((length = wl[i] * MAX_HIST / maxValue) <= 0) {
                length = 1;
            }
        } else {
            length = 0;
        }
        while (length > 0) {
            putchar('*');
            --length;
        }
        putchar('\n');
    }
    if (overflow > 0) {
        printf("There are %d words >= %d\n", overflow, MAX_WORD);
    }
}
