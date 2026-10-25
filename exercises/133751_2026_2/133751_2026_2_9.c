#include <stdio.h>

int main(void)
{
    int pole[11];
    int spravna = 1;

    for (int i = 0; i < 11; i++)
    {
        scanf("%d", &pole[i]);
    }

    if (pole[0] < 0 || pole[0] > 10)
    {
        spravna = 0;
    }

    for (int i = 1; i < 11; i++)
    {
        if (pole[i] > 2 * pole[i - 1] ||
            pole[i] < pole[i - 1] / 2)
        {
            spravna = 0;
        }
    }

    if (spravna == 1)
        printf("Postupnost je spravna\n");
    else
        printf("Postupnost nie je spravna\n");

    return 0;
}
