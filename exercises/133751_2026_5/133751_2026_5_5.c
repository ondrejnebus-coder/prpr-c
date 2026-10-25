
#include <stdio.h>

// Funkcia z pola x prekopiruje do pola y vsetky delitele cisla k.
// Vracia pocet nasich delitelov v poli y.
int delitele(int x[], int pocetx, int y[], int k) {
    int pocety = 0; // pocet najdenych delitelov

    // Prejdeme cele pole x.
    for (int i = 0; i < pocetx; i++) {
        // Ak je prvok rozny od nuly a delitelne bez zvyšku, ulozime ho do y.
        if (x[i] != 0 && k % x[i] == 0) {
            y[pocety] = x[i];
            pocety++;
        }
    }

    return pocety;
}

int main() {
    int x[] = {4, 7, 10, 2, 3, 9, 6, 5, 8, 12};
    int y[10];

    int pocetx = 10; // pocet prvkov v poli x
    int pocety = delitele(x, pocetx, y, 24); // volanie funkcie

    // Vypis pocetu delitelov.
    printf("pocety: %d\n", pocety);

    // Vypis pola y.
    printf("y: {");
    for (int i = 0; i < pocety; i++) {
        printf("%d", y[i]);

        if (i < pocety - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    return 0;
}
