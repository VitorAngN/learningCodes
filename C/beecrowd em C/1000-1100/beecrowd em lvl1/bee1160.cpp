#include <stdio.h>

int main() {
    int T, PA, PB, anos;
    double G1, G2;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        anos = 0;

        while (PA <= PB) {
            // Calcula o crescimento e soma apenas a parte inteira,.forçando o crescimento a ser um número inteiro, como especificado no problema.
            PA += (int)(PA * (G1 / 100.0));
            PB += (int)(PB * (G2 / 100.0));
            anos++;

            if (anos > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if (anos <= 100) {
            printf("%d anos.\n", anos);
        }
    }

    return 0;
}