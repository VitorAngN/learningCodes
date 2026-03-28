/*

LT05_EX02: Faça um programa em Linguagem C que peça 5 números inteiros e, no final, troque a ordem do primeiro número com a do último número digitado. Apresente os dados originais e os dados alterados na tela.
*/
#include <stdio.h>
int main(){
    int numero[4],
    i = 0;
    for(i = 3; i > -1 ; i--){
        scanf("\n%d", &numero[i]);
    }
    for(i = 0; i < 4; i++){
        printf("\n%d", numero[i]);

    }
return 0;




}
