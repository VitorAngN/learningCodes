#include <stdio.h>

int lerAno(){
    int ano;
    printf("digite o seu ano de nascimento \n");
    scanf("%d", &ano);
    return ano;

}
int calcularIdade(int ano){
    int idade;
    idade = 2023 - ano;
    return idade;
}
void apresentar(int idade){
    printf("sua idade e: %d \n", idade);
}
int main (int argc, char** args){
    int ano, idade;
    ano = lerAno();
    idade = calcularIdade(ano);
    apresentar(idade);



    return 0;
}
