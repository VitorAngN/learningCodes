/*



LT05_EX01: Faça um programa em Linguagem C que peça 6
números inteiros e, depois,
apresente-os na tela na forma invertida ao que foi digitado.
Exemplo, se foi digitado 1 3 2 4 5 9,
 deve ser apresentado 9 5 4 2 3 1.
*/
#include <stdio.h>
int main(){
    int numero[6],
    i = 0;
    for(;i < 6; i++){
        scanf("\n%d",&numero[i]);
    }
    for(i = 5; i >= 0; i--){
         printf("\n%d", numero[i]);
    }
return 0;




}


