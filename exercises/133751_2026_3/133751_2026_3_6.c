#include <stdio.h>

void mocnina(double x, int n) {
    double vysledok = 1.0;

    for (int i = 1; i <= n; i++) {
        vysledok *= x;
        printf("%.2f^%d = %.2f\n", x, i, vysledok);
    }
}

int main(void) {
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    mocnina(x, n);

    return 0;
}


