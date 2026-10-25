#include <stdio.h>

int main(void) {
    char volba;
    int znak;
    FILE *zo_suboru, *do_suboru;

    scanf(" %c", &volba);

    zo_suboru = fopen("znak.txt", "r");
    if (zo_suboru == NULL) {
        return 1;
    }

    if (volba == 's') {
        do_suboru = fopen("novy.txt", "w");
        if (do_suboru == NULL) {
            fclose(zo_suboru);
            return 1;
        }

        while ((znak = fgetc(zo_suboru)) != EOF) {
            fputc(znak, do_suboru);
        }

        fclose(do_suboru);
    } else {
        while ((znak = fgetc(zo_suboru)) != EOF) {
            putchar(znak);
        }
    }

    fclose(zo_suboru);
    return 0;
}
