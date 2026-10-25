#include <stdio.h>

int main(void) {
    FILE *subor;
    int c;
    int pocet = 0;

    subor = fopen("text.txt", "r");
    if (subor == NULL) {
        return 1;
    }

    while ((c = fgetc(subor)) != EOF) {
        if (c == '*') {
            printf("Koniec\n");
            break;
        }

        if (c == 'X' || c == 'x') {
            printf("Precital som X\n");
        } else if (c == 'Y' || c == 'y') {
            printf("Precital som Y\n");
        } else if (c == '#' || c == '$' || c == '&') {
            printf("Precital som riadiaci znak\n");
        } else if (c == ' ') {
            pocet++;
        }
    }

    printf("Pocet precitanych medzier: %d\n", pocet);
    fclose(subor);
    return 0;
}