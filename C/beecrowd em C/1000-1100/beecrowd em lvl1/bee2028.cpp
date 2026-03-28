#include <stdio.h>

int main() {
    int n;
    int caso = 1;
    while (scanf("%d", &n) != EOF) {
        
        int totalNumeros = 1 + (n * (n + 1)) / 2;

        if (totalNumeros == 1) {
            printf("Caso %d: %d numero\n", caso, totalNumeros);
        } else {
            printf("Caso %d: %d numeros\n", caso, totalNumeros);
        }
        printf("0"); 
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                printf(" %d", i); 
            }
        }

        printf("\n\n"); 
        
        caso++; 
    }

    return 0;
}