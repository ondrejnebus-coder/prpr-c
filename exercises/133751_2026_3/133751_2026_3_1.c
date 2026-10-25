#include <stdio.h>

int main(void) {
    int n, count = 0;
    int x;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &x) != 1) {
            return 1;
        }

        if (x > 0 && x <= 100) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}