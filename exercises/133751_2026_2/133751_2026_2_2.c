#include <stdio.h>
int main() {
    double a, b, c;
    printf("napis vahu a vysku: ");
    scanf("%lf %lf", &a, &b);
    a=a/100;
    c=b/(a*a);
    printf("BMI je: %g\n", c);
}
