#include <stdio.h>

int main(void) {
    int x;
    int faktorial = 1;
    while (1) {
        scanf("%d", &x);


        if (x >= 0) {
            for (int i = 1; i <= x; i++) {
                faktorial *= i;
            }
            printf("%d", x, faktorial);
            return 0;
        }
    }
}