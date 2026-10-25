
#include <stdio.h>
#include <math.h>

// Funkcia vypocita korene kvadratickej rovnice ax^2 + bx + c = 0.
// Vracia pocet korenov a zapisuje ich do premennej x1, x2.
int kvadraticka_rovnica(double a, double b, double c,
                        double *x1, double *x2) {
    double d = b * b - 4 * a * c; // diskriminant

    if (d > 0) {
        // Dve realne korene.
        *x1 = (-b + sqrt(d)) / (2 * a);
        *x2 = (-b - sqrt(d)) / (2 * a);
        return 2;
    } else if (d == 0) {
        // Jeden dvojnasobny koren.
        *x1 = -b / (2 * a);
        *x2 = 0;
        return 1;
    } else {
        // Ziadny realny koren.
        *x1 = 0;
        *x2 = 0;
        return 0;
    }
}

int main() {
    double a, b, c, x1, x2;

    // Nacitanie koeficientov a, b, c.
    scanf("%lf %lf %lf", &a, &b, &c);

    // Volanie funkcie na vypocet korenov.
    int pocet = kvadraticka_rovnica(a, b, c, &x1, &x2);

    // Vypis vysledku.
    printf("Pocet korenov kvadratickej rovnice je: %d\n", pocet);
    printf("Prvy koren ma hodnotu: %.5f\n", x1);
    printf("Druhy koren ma hodnotu: %.5f\n", x2);

    return 0;
}
