#include <stdio.h>

int main() {
    double nc;
    // while (getchar() != EOF) {
    //     /* code */
    //     ++nc;
    // }
    for (nc = 0; getchar() != EOF; ++nc) {
        /* code */
    }
    printf("%.0f\n", nc);
}
