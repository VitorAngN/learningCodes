#include <stdio.h>
int main(){
    char nome, nomeC[12], nomeS[10][10];
    int i = 0;
    scanf(" %c", &nome);
    printf("%c", nome);
    while(nome == 'c'){
        fgets(nomeC, 10, stdin);
        printf(" voce escreveu: %s", nomeC);
        printf("Digite c se deseja continuar ou diferente para sair do lasco: ");
        scanf(" %c", &nome);
    }
    for(i = 0, i<9, i++){
        prinf("digite nome %d", i);
        fgets(nomeS, 8, stdin);
        prinf("nome atual: %S", nomeS[i][0]);


    }








return 0;
}
