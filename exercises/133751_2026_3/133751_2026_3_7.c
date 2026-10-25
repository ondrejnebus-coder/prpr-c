#include <stdio.h>

void nasobok(double x, int n) {
    for (int i = 1; i <= n; i++) {
        double sucin = 0.0;

        for (int j = 1; j <= i; j++) {
            sucin += x;
        }

        printf("%.2f * %d = %.2f\n", x, i, sucin);
    }
}

int main(void) {
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    nasobok(x, n);

    return 0;
}
