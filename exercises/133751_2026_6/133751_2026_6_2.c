
#include <stdio.h>

// Funkcia vracia adresu premennej s vacsim cislem.
int *maximum(int *a, int *b) {
    if (*a > *b) {
        return a;  // vrati adresu prveho cisla, ak je vacsie
    } else {
        return b;  // vrati adresu druheho cisla, ak je vacsie
    }
}

int main() {
    int a, b;

    // Nacitanie dvoch celych cisel zo vstupu.
    scanf("%d %d", &a, &b);

    // Zavolanie funkcie maximum a ulozenie adresy vacsieho cisla.
    int *vacsie = maximum(&a, &b);

    // Vypisanie vacsieho cisla.
    printf("Cislo %d je vacsie.\n", *vacsie);

    return 0;
}
