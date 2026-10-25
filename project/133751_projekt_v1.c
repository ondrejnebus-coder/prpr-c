
#include <stdio.h>
#include <string.h>
// Otvorenie suborov
int otvor_subory(FILE **zoznam, FILE **checkin) {
    if (*zoznam == NULL)
        *zoznam = fopen("zoznamCK.txt", "r");
    if (*checkin == NULL)
        *checkin = fopen("checkin1.txt", "r");
    if (*zoznam == NULL || *checkin == NULL) {
        if (*zoznam != NULL) {
            fclose(*zoznam);
            *zoznam = NULL;
        }
        if (*checkin != NULL) {
            fclose(*checkin);
            *checkin = NULL;
        }
        return 0;
    }
    return 1;
}
// Prikaz v 1 - vypis cestujucich
void vypis(FILE **zoznam, FILE **checkin) {
    if (!otvor_subory(zoznam, checkin)) {
        printf("V1: Neotvorene txt subory.\n");
        return;
    }
    rewind(*zoznam);
    char let[20], meno[30], priezvisko[40];
    char datum[20], sedadlo[20];
    int batozina;
    while (fscanf(*zoznam, "%19s", let) == 1) {
        // Preskocenie znaku #
        if (strcmp(let, "#") == 0)
            continue;
        // Nacitanie udajov cestujuceho
        if (fscanf(*zoznam, "%29s %39s %19s %19s %d",
                   meno, priezvisko, datum,
                   sedadlo, &batozina) != 5)
            break;
        // Ziskanie roku narodenia
        int rok = 0;
        int dlzka = (int)strlen(datum);
        if (dlzka >= 4)
            sscanf(datum + dlzka - 4, "%4d", &rok);
        printf("Označenie letu: %s\n", let);
        printf("Meno a Priezvisko [vek]:  %s %s [%d]\n",
               meno, priezvisko, 2026 - rok);
        printf("Označenie sedadla: %s\n\n", sedadlo);
    }
}
// Prikaz v - vyber vypisu
void v(FILE **zoznam, FILE **checkin) {
    char volba;
    if (scanf(" %c", &volba) != 1) {
        printf("V: Nespravna volba vypisu.\n");
        return;
    }
    if (volba == '1') {
        vypis(zoznam, checkin);
    }
    else if (volba == '2') {
        printf("V2: Nenaplnene polia.\n");
    }
    else if (volba == '3') {
        printf("V3: Nenaplneny spajany zoznam.\n");
    }
    else {
        printf("V: Nespravna volba vypisu.\n");
    }
}
// Prikaz h - histogram znakov
void histogram(FILE *zoznam) {
    if (zoznam == NULL) {
        printf("H: Neotvoreny subor.\n");
        return;
    }
    int pocty[128] = {0};
    int znak;
    rewind(zoznam);
    // Spocitanie znakov
    while ((znak = fgetc(zoznam)) != EOF) {
        if (znak >= 0 && znak < 128)
            pocty[znak]++;
    }
    // Velke pismena podla pocetnosti
    for (int i = 0; i < 26; i++) {
        int najlepsie = -1;
        for (int j = 'A'; j <= 'Z'; j++) {
            if (pocty[j] > 0 &&
                (najlepsie == -1 ||
                 pocty[j] > pocty[najlepsie])) {
                najlepsie = j;
            }
        }
        if (najlepsie == -1)
            break;
        printf("%c : %d\n", najlepsie, pocty[najlepsie]);
        pocty[najlepsie] = 0;
    }
    // Male pismena abecedne
    for (int j = 'a'; j <= 'z'; j++) {
        if (pocty[j] > 0)
            printf("%c : %d\n", j, pocty[j]);
    }
    // Cislice podla pocetnosti
    for (int i = 0; i < 10; i++) {
        int najlepsie = -1;
        for (int j = '0'; j <= '9'; j++) {
            if (pocty[j] > 0 &&
                (najlepsie == -1 ||
                 pocty[j] > pocty[najlepsie])) {
                najlepsie = j;
            }
        }
        if (najlepsie == -1)
            break;
        printf("%c : %d\n", najlepsie, pocty[najlepsie]);
        pocty[najlepsie] = 0;
    }
}

int main() {
    FILE *zoznam = NULL;
    FILE *checkin = NULL;
    char prikaz;
    while (scanf(" %c", &prikaz) == 1) {
        if (prikaz == 'v') {
            v(&zoznam, &checkin);
        }
        else if (prikaz == 'h') {
            histogram(zoznam);
        }
        else if (prikaz == 'k') {
            break;
        }
    }
    // Zatvorenie suborov
    if (zoznam != NULL)
        fclose(zoznam);
    if (checkin != NULL)
        fclose(checkin);
    return 0;
}
