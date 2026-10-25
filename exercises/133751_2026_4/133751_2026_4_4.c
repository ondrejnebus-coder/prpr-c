#include <stdio.h>

int main(void) {
    double x;
    int i;
    FILE *subor;

    // Načíta reálne číslo a zapíše jeho násobky do súboru
    scanf("%lf", &x);

    subor = fopen("nasobky.txt", "w");
    if (subor == NULL) {
        return 1;
    }

    for (i = 1; i <= 10; i++) {
        fprintf(subor, "%2d * %.2f = %.2f\n", i, x, i * x);
    }

    fclose(subor);
    return 0;
}
