#include <stdio.h>

int numeroDeOvelhas[1000005];
int atacadas[1000005];

int main() {
    int numeroDeEstrelas;
    long long int total_ovelhas = 0;
    long long int total_atacadas = 0;

    scanf("%d", &numeroDeEstrelas);

    for (int i = 0; i < numeroDeEstrelas; i++) {
        scanf("%d", &numeroDeOvelhas[i]);
        total_ovelhas += numeroDeOvelhas[i]; 
    }

  
    int j = 0; 

    while (j >= 0 && j < numeroDeEstrelas) {
        
        if (atacadas[j] == 0) {
            atacadas[j] = 1;
            total_atacadas++;
        }
        int ovelhas_aqui = numeroDeOvelhas[j];

        if (numeroDeOvelhas[j] > 0) {
            numeroDeOvelhas[j]--;
            total_ovelhas--;
        }

        if (ovelhas_aqui % 2 != 0) {
            j = j + 1;
        } else {
            j = j - 1;
        }
    }

    printf("%lld %lld\n", total_atacadas, total_ovelhas);

    return 0;
}