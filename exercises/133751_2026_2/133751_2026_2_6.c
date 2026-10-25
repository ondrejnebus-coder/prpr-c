#include<stdio.h>
int main() {
    char a;
    int b, c;
    printf("zadaj dve cisla a znak\n");
    scanf("%d %d %c", &b, &c, &a);
    switch(a) {
        case '+':
            printf("%g %c %g = %g", b, a, c, b + c);
            break;
        case '-':
            printf("%g %c %g = %g", b, a, c, b - c);
            break;
        case '*':
            printf("%g %c %g = %g", b, a, c, b * c);
            break;
        case '/':
            printf("%g %c %g = %g", b, a, c, b / c);
            break;
        default:
            printf("zle zadana volba\n");
    }
}