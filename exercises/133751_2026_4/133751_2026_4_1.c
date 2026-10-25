#include <stdio.h>

int zisti_prvocislo(int cislo) {
    int i;

    if (cislo < 2) {
        return -1;
    }

    for (i = 2; i * i <= cislo; i++) {
        if (cislo % i == 0) {
            return -1;
        }
    }

    return 1;
}

int main(void) {
    int a, b;
    int i;
    int najdene = 0;

    scanf("%d %d", &a, &b);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (i = a; i <= b; i++) {
        if (zisti_prvocislo(i) == 1) {
            printf("%d\n", i);
            najdene = 1;
        }
    }

    if (!najdene) {
        printf("Prvocislo neexistuje\n");
    }

    return 0;
}
