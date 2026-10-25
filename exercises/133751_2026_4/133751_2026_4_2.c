#include <stdio.h>

double tyzdenna_mzda(double h_mzda, double hod)
{
    return h_mzda * hod;
}

int main(void)
{
    int n;
    double h_mzda, hod;
    double spolu;
    double celkova_mzda = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf", &h_mzda, &hod);
        spolu = tyzdenna_mzda(h_mzda, hod);
        printf("Hod. mzda: %.2f Euro/hod, hodin: %.2f, spolu: %.2f Euro\n",
               h_mzda, hod, spolu);
        celkova_mzda += spolu;
    }

    printf("Celkova mzda: %.2f Euro\n", celkova_mzda);

    return 0;
}