
#include <stdio.h>

// Funkcia vymeni ukazovatele, teda adresy, na ktore ukazuju.
void vymen_ukazovatele(int **p_a, int **p_b) {
    int *pomocna = *p_a; // ulozenie adresy prveho ukazovatela
    *p_a = *p_b;         // prvy ukazovatel bude ukazovat na druhy objekt
    *p_b = pomocna;      // druhy ukazovatel bude ukazovat na originalny prvy objekt
}

int main() {
    int a = 10;
    int b = 14;

    int *p_a = &a; // ukazovatel na premennu a
    int *p_b = &b; // ukazovatel na premennu b

    // Vypis stavu pred vymenou.
    printf("p_a: %p %d\n", (void *)p_a, *p_a);
    printf("p_b: %p %d\n", (void *)p_b, *p_b);

    // Volanie funkcie na vymenu ukazovatelov.
    vymen_ukazovatele(&p_a, &p_b);

    // Vypis stavu po vymene.
    printf("p_a: %p %d\n", (void *)p_a, *p_a);
    printf("p_b: %p %d\n", (void *)p_b, *p_b);

    return 0;
}
