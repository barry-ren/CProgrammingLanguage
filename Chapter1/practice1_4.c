#include <stdio.h>

/**
 * 摄氏度转化为华摄氏度
 * @return
 */
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("celsius fahr\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0 * celsius ) / 5.0 + 32.0;
        printf("%3.0f   %6.1f\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}