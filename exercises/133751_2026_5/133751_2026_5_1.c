
#include <stdio.h>

// Funkcia na nacitanie rozmerov obdĺžnika zo vstupu.
void nacitaj(double *a, double *b) {
    scanf("%lf %lf", a, b);
}

// Funkcia na vypocet obsahu a obvodu obdĺžnika.
void vypocitaj(double a, double b, double *obsah, double *obvod) {
    *obsah = a * b;        // obsah = a * b
    *obvod = 2 * (a + b);  // obvod = 2 * (a + b)
}

int main() {
    double a, b, obsah, obvod;

    // Nacitanie rozmerov obdĺžnika.
    nacitaj(&a, &b);

    // Vypocet obsahu a obvodu.
    vypocitaj(a, b, &obsah, &obvod);

    // Vypisanie vysledku na obrazovku.
    printf("Obsah: %.3f\n", obsah);
    printf("Obvod: %.3f\n", obvod);

    return 0;
}
