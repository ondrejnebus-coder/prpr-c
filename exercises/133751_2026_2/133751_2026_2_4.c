#include<stdio.h>
int main() {
    char a,b;
    printf("zadaj dve male pismena\n");
    scanf(" %c %c", &a, &b);
    a=(int)a-32;
    b=(int)b-32;
    printf("%c %d \n %c %d\n", a,a, b,b);
}