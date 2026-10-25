#include <stdio.h>

int je_v_poli(int c, char pole[], int pocet) {
    int i;

    for (i = 0; i < pocet; i++) {
        if ((char)c == pole[i]) {
            return 1;
        }
    }

    return 0;
}

int main(void) {
    FILE *subor;
    int c;
    int samohlasky = 0;
    int spoluhlasky = 0;
    int cislice = 0;
    char samohlasky_pole[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char spoluhlasky_pole[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z',
                               'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z'};
    char cislice_pole[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    subor = fopen("vstup.txt", "r");
    if (subor == NULL) {
        return 1;
    }

    while ((c = fgetc(subor)) != EOF) {
        if (je_v_poli(c, samohlasky_pole, 10)) {
            samohlasky++;
        } else if (je_v_poli(c, spoluhlasky_pole, 40)) {
            spoluhlasky++;
        } else if (je_v_poli(c, cislice_pole, 10)) {
            cislice++;
        }
    }

    fclose(subor);
    printf("Pocet samohlask: %d, pocet hlasok: %d, pocet cislic: %d.\n",
           samohlasky, spoluhlasky, cislice);
    return 0;
}
