#include <stdio.h>

int main(void)
{
    int N;
    double cislo, minimum, maximum;

    scanf("%d", &N);

    scanf("%lf", &cislo);
    minimum = cislo;
    maximum = cislo;

    for (int i = 1; i < N; i++)
    {
        scanf("%lf", &cislo);

        if (cislo < minimum)
            minimum = cislo;

        if (cislo > maximum)
            maximum = cislo;
    }

    printf("Minimum: %.2f\n", minimum);
    printf("Maximum: %.2f\n", maximum);

    return 0;
}

