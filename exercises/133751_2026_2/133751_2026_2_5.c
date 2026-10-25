#include<stdio.h>
int main() {
    char a;
    float b, c;
    printf("zadaj dve cisla a znak\n");
    scanf("%f %f %c", &b, &c, &a);
    if (a == '+') {
        printf("%g %c %g = %g", b, a, c, b + c);
    } else if (a == '-') {
        printf("%g %c %g = %g", b, a, c, b - c);
    } else if (a == '*') {
        printf("%g %c %g = %g", b, a, c, b * c);
    } else if (a == '/') {
        printf("%g %c %g = %g", b, a, c, b / c);
    } else {
        printf("neplatny znak\n");
    }
}