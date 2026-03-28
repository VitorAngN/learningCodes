#include <stdio.h>
/*
Nome..: joão vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 22 /09/2022
FIX04b_EX07: Construa um programa em Linguagem C que, dado um conjunto de valores inteiros e positivos (recebidos do usuário), determine qual o menor valor do conjunto. O final do conjunto de valores é conhecido através do valor zero, que não deve ser considerado.
*/
int main (){
    int valorP = 0, valorN = 0, valorF = 0;
    do{
        scanf("%d%d", &valorP, &valorN);
        printf("entre o valor %d e %d\n", valorP, valorN);
        if(valorP < valorF){
            printf("O maior valor: %d, ja o menor e: %d", valorP, valorN);
        }else{
         printf("O maior valor: %d, ja o menor e: %d", valorN, valorP);
        }
    }while(valorF == 0);

return 0;
}
