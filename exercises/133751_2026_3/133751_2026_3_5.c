#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    if (N < 1 || N > 15 || N % 2 == 0) {
        printf("Zly vstup\n");
        return 0;
    }

    int stred = N / 2;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == stred || j == stred || abs(i - stred) == abs(j - stred)) {
                printf("*");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}