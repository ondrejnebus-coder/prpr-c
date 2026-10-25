#include <stdio.h>

int main(void)
{
    int cena;
    printf("Zadaj predajnu cenu: ");
    scanf("%d", &cena);

    printf("Cena bez dane: %d\n", cena);
    printf("Predajna cena s danou 20%%: %.1f\n", cena * 1.2);

    return 0;
}