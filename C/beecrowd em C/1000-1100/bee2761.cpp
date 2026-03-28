#include <stdio.h>

int main() {
    int inteiro;
    float real; 
    char caractere;
    char frase[55]; 
    scanf("%d %f %c %[^\n]", &inteiro, &real, &caractere, frase);
    printf("%d%.6f%c%s\n", inteiro, real, caractere, frase);
    printf("%d\t%.6f\t%c\t%s\n", inteiro, real, caractere, frase);
    printf("%10d%10.6f%10c%10s\n", inteiro, real, caractere, frase);
    
    return 0;
}