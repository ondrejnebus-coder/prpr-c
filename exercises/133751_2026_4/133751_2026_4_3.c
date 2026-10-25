#include <stdio.h>

long reverzne_cislo(long x)
{
    long rev = 0;

    while (x > 0)
    {
        rev = rev * 10 + x % 10;
        x = x / 10;
    }

    return rev;
}

int main(void)
{
    long x, rev;

    while (scanf("%ld", &x) == 1)
    {
        rev = reverzne_cislo(x);

        printf("%ld\n", rev);

        if (x == rev)
        {
            printf("Cislo %ld je palindrom\n", x);
        }
        else
        {
            printf("Cislo %ld nie je palindrom\n", x);
        }
    }

    return 0;
}