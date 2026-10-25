#include <stdio.h>

int main(void) {
    int N;

    scanf("%d", &N);


    if (N < 1 || N > 15) {
        printf("Cislo nie je z daneho intervalu\n");
        return 0;
    }

    for (int i = 1; i <= N; i++) {
        printf("%d: ", i);

        for (int j = N - i + 1; j >= 1; j--) {
            printf("%2d", j);
            if (j > 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}