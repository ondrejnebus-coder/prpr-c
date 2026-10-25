#include <stdio.h>

int main(void)
{
    double x;
    int cele, zaokruhlene;
    printf("zadaj realne cislo: ");
    scanf("%lf", &x);

    cele = (int)x;
    zaokruhlene = (int)(x + 0.5);

    printf("%d %d\n", cele, zaokruhlene);

    return 0;
}