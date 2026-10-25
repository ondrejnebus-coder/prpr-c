#include <stdio.h>
int main() {
    float a, b, c;
    printf("zadaj tri cisla\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("%.3f", a * b * c);
}