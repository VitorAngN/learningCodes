#include <stdio.h>
#include <math.h>
/* Nome..: joão vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 05/09/2022
FIX03_EX08: Faça um programa em Linguagem C que apresente um menu e pergunte ao usuário se ele deseja calcular:
1) a área de um triângulo (base vezes altura dividido por 2)
2) a área de um círculo (pi multiplicado pelo raio ao quadrado)
3) a área de um cubo (6 vezes a área do quadrado)
Depois, solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela.
*/
int main(){
    int base = 0, altura = 0, pi = 3, triangulo = 0, circulo = 0, cubo = 0, termo = 0, raio = 0, quadrado = 0;
    printf("digite um valor de 1 a 3, 1 para calcular a area de um triangulo, 2 para a area de um circulo e 3 para a area de um cubo");
    scanf("%d", &termo);
    switch(termo){
        case 1:
            printf("digite um valor para base e a altura: ");
            scanf("%d %d", &base, &altura);
            triangulo = (base * altura)/2;
            printf("a area do triangulo: %d", triangulo);
            break;
        case 2:
            printf("digite um valor para o raio");
            scanf("%d", &raio);
            circulo = pi * pow(raio, 2);
            printf("A area do circulo: %d", circulo);
            break;
        case 3:
            printf("digite o valor da area do quadrado");
            scanf("%d", &quadrado);
            cubo = 6 * quadrado;
            printf("valor do cubo: %d", cubo);
            break;
        default:
            printf("error, sem opçoes");

    }

return 0;
}
