#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    printf("zadaj polomer\n");
    scanf("%d", &a);
    printf("obsah kruhu je: %.2f\n", 2 * 3.14 * a);
    return 0;
}
