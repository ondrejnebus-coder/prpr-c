#include <stdio.h>

int main(void) {
    int f, g;

    if (scanf("%d %d", &f, &g) != 2) {
        return 1;
    }

    if (f > g) {
        int tmp = f;
        f = g;
        g = tmp;
    }

    int first = 1;

    for (int x = f + 1; x < g; x++) {
        if (x % 3 == 0) {
            if (!first) {
                printf(" ");
            }
            printf("%d", x);
            first = 0;
        }
    }

    printf("\n");
    return 0;
}