#include <stdio.h>

int main() {
    int n, usos;
    while (scanf("%d", &n) != EOF) {
        usos = 0; 

        while (n > 1) {
            n = n / 2;
            usos++;
        }
        printf("%d\n", usos);
    }

    return 0;
}