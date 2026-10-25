#include <stdio.h>

int main() {
    double a, b, c, p;
    printf("napis tri realne cisla: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    p=(a+b+c)/3;
    printf("priemer cisel %g, %g, %g je: %g\n", a, b, c, p);
}
