#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *prvy, *druhy;
    int c1, c2;
    int rozdielne = 0;
    int dlzka1 = 0, dlzka2 = 0;

    prvy = fopen("prvy.txt", "rb");
    druhy = fopen("druhy.txt", "rb");
    if (prvy == NULL || druhy == NULL) {
        fprintf(stderr, "Nepodarilo sa otvorit subory\n");
        return 1;
    }

    c1 = fgetc(prvy);
    c2 = fgetc(druhy);

    while (c1 != EOF && c2 != EOF) {
        dlzka1++;
        dlzka2++;

        if (c1 != c2) {
            rozdielne++;
        }

        c1 = fgetc(prvy);
        c2 = fgetc(druhy);
    }

    while (c1 != EOF) {
        dlzka1++;
        c1 = fgetc(prvy);
    }

    while (c2 != EOF) {
        dlzka2++;
        c2 = fgetc(druhy);
    }

    fclose(prvy);
    fclose(druhy);

    if (dlzka1 == dlzka2 && rozdielne == 0) {
        printf("Subory su identicke\n");
        return 0;
    }

    printf("Pocet roznych znakov: %d\n", rozdielne);
    if (dlzka1 != dlzka2) {
        printf("Jeden zo suborov je dlhsi o %d znakov\n", abs(dlzka1 - dlzka2));
    }

    return 0;
}
