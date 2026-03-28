#include <stdio.h>

int main() {
    int a1, a2, a3;
    scanf("%d", &a1);
    scanf("%d", &a2);
    scanf("%d", &a3);
    int tempo1 = (a2 * 2) + (a3 * 4);
    int tempo2 = (a1 * 2) + (a3 * 2);
    int tempo3 = (a1 * 4) + (a2 * 2);
    int menor_tempo = tempo1; 
    if (tempo2 < menor_tempo) {
        menor_tempo = tempo2; 
    }
    if (tempo3 < menor_tempo) {
        menor_tempo = tempo3; 
    }
    printf("%d\n", menor_tempo);

    return 0;
}