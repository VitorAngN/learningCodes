/*
nome da equipe: Antonio Pignataro, Joao Victor ,Victor fares
patch 1.1 // 21/11/2022
-Escorpo do trabalho arquitetado
-Função Principal arquitetada
-divisão do trabalho em categorias
-biblioteca adicionada
-Struct contato, endereço e numero adicionadas
-constantes em trabalho
-fuções em trabalho
- função de recerber contato inicial feita
- prototipo de menu feito


patch 1.1 // 22/11/2022
- função para buscar um contato por mês de aniversario, imprimir o cadastro de todas as pessoas que tem aniversario no mesmo mês.



  */
// bibliotecas
#include <stdio.h>
#include <math.h>
#include <string.h>
// protótipos


// constantes
/* struct principal */
/* Structs
Aqui sera as structs com o contato da pessoa contendo
todas as informações necessarias.
*/
/*struct do endereço do contato contendo todas as informações */
typedef struct Endereco{
        char rua[50];
        int numeroC;
        char cep[15];
        char cidade[30];
        char estado[3];
    } TpEndereco;
/*struct do telefone do contato */
typedef struct telefone{
    int ddd;
    long int numero;

} TpNumero;
typedef struct DataNascimento{
    int dia;
    int mes;
    int ano;



} TpDataNascimento;





typedef struct Contato{
    char nome[50];
    char email[50];
    TpEndereco endereco;
    TpNumero numero;
    TpDataNascimento data;
    char observacao[256];

} Tpcontato;





Tpcontato contato[100];

// constantes

// funções
/* função imprimir contato
Para usar use um parametro lop

*/
    imprimirContato(int lop){
        int i;
        i = lop;
printf("______________________________________________________\n");
        printf("|nome: %s", contato[i].nome);
        printf("|E-mail: %s", contato[i].email);
        printf("|Endereco:");
        printf("|Rua: %s", contato[i].endereco.rua);
        printf("|N-%d ", contato[i].endereco.numeroC);
        printf("|Estado: %s ", contato[i].endereco.estado);
        printf("|Cidade: %s", contato[i].endereco.cidade);
        printf("|CEP: %s", contato[i].endereco.cep);
        printf("|TELEFONE:");
        printf("(%d)", contato[i].numero.ddd);
        printf("%d\n", contato[i].numero.numero);
        printf("|nascimento:");
        printf("%d", contato[i].data.dia);
        printf("/%d/", contato[i].data.mes);
        printf("%d\n", contato[i].data.ano);
printf("L_____________________________________________________\n");
printf("______________________________________________________\n");
        printf("Observacao:%s", contato[i].observacao);
printf("L_____________________________________________________\n");
    }
/*  funções ( função para
    buscar um contato por
    mês de aniversario,
    imprimir o cadastro de todas as pessoas
    que tem aniversario no mesmo mês.)
    */


    buscarData(){
    int lop = 0;
    int i = 0;
    int mes = 0;
    printf("digite o mes do aniversario: \n");
    scanf("%d", &mes);
    switch(mes){
    case(1):
    printf("você digitou mes 1 aqui está a lista: \n");
    while(lop < strlen(contato)){
    if(contato[lop].data.mes == mes){
        printf("todos os dados do contato %d\n", mes);
        imprimirContato(lop);
        lop++;
    }else{
        lop++;
    }
    }
        break;
    case(2):
    printf("você digitou mes 2 aqui está a lista: \n");
    while(lop < strlen(contato)){
    if(contato[lop].data.mes == mes){
        printf("todos os dados do contato %d\n", mes);
        imprimirContato(lop);
        lop++;
    }else{
        lop++;
    }
    }
        break;
    case(3):
    printf("você digitou mes 3 aqui está a lista: \n");
    while(lop < strlen(contato)){
    if(contato[lop].data.mes == mes){
        printf("todos os dados do contato %d\n", mes);
        imprimirContato(lop);
        lop++;
    }else{
        lop++;
    }
    }
        break;
    case(4):
    printf("você digitou mes 4 aqui está a lista: \n");
    while(lop < strlen(contato)){
    if(contato[lop].data.mes == mes){
        printf("todos os dados do contato %d\n", mes);
        imprimirContato(lop);
        lop++;
    }else{
        lop++;
    }
    }
        break;
    case(5):
    printf("você digitou mes 5 aqui está a lista: \n");
    while(lop < strlen(contato)){
    if(contato[lop].data.mes == mes){
        printf("todos os dados do contato %d\n", mes);
        imprimirContato(lop);
        lop++;
    }else{
        lop++;
    }
    }
        break;
    case(6):
    printf("você digitou mes 6 aqui está a lista: \n");
    while(lop < strlen(contato)){
    if(contato[lop].data.mes == mes){
        printf("todos os dados do contato %d\n", mes);
        imprimirContato(lop);
        lop++;
    }else{
        lop++;
    }
    }
        break;
    case(7):
    printf("você digitou mes 7 aqui está a lista: \n");
    while(lop < strlen(contato)){
    if(contato[lop].data.mes == mes){
        printf("todos os dados do contato %d\n", mes);
        imprimirContato(lop);
        lop++;
    }else{
        lop++;
    }
    }
        break;
    case(8):
    printf("você digitou mes 8 aqui está a lista: \n");
    while(lop < strlen(contato)){
    if(contato[lop].data.mes == mes){
        printf("todos os dados do contato %d\n", mes);
        imprimirContato(lop);
        lop++;
    }else{
        lop++;
    }
    }
        break;
    case(9):
    printf("você digitou mes 9 aqui está a lista: \n");
    while(lop < strlen(contato)){
    if(contato[lop].data.mes == mes){
        printf("todos os dados do contato %d\n", mes);
        imprimirContato(lop);
        lop++;
    }else{
        lop++;
    }
    }
        break;
    case(10):
    printf("você digitou mes 10 aqui está a lista: \n");
    while(lop < strlen(contato)){
    if(contato[lop].data.mes == mes){
        printf("todos os dados do contato %d\n", mes);
        imprimirContato(lop);
        lop++;
    }else{
        lop++;
    }
    }
        break;
    case(11):
    printf("você digitou mes 11 aqui está a lista: \n");
    while(lop < strlen(contato)){
    if(contato[lop].data.mes == mes){
        printf("todos os dados do contato %d\n", mes);
        imprimirContato(lop);
        lop++;
    }else{
        lop++;
    }
    }
        break;
     case(12):
    printf("você digitou mes 12 aqui está a lista: \n");
    while(lop < strlen(contato)){
    if(contato[lop].data.mes == mes){
        printf("todos os dados do contato %d\n", mes);
        imprimirContato(lop);
        lop++;
    }else{
        lop++;
    }
    }
        break;
     default:
        printf("Mes Invalido \n");
        return buscarData();
     }
    return 0;




     }

int validarEstado(char str[], int i){
    char estado[27][3] = {"AC ", "Al ", "AP", "AM", "BA",
     "CE", "DF", "ES", "GO", "MA", "MT", "MS ","MG", "PA",
      "PB", "PR","PE", "PI", "RJ", "RN", "RS","RO", "RR",
        "SC", "SP", "SE", "TO"};
    int j = 0, k = 0;
        for(; 27 > k ;k++){
        if(strcmp(str, estado[k]) != 1 && strcmp(str, estado[k]) != -1){
            printf("a comparacao correta %d\n", strcmp(str, estado[k]));
    //retorna 1 quando certo
            return 1;
            }
    }
            printf("a comparacao incorreta: %d\n", strcmp(str, estado[k]));
            printf("esta incorreto\n");
            return 0;

}


Tpcontato Recebercontato (int ind) {
    int c = 0;
    int bolean = 331, j = 0;
    c = ind;
    fflush(stdin);
    printf("________________________________________________________\n");
    printf("Digite o nome do contato:                               |\n");
    fgets(contato[c].nome, 50, stdin);
    fflush(stdin);
    printf("Digite o email:                                         |\n");
    fgets(contato[c].email, 50, stdin);
    fflush(stdin);
    printf("Digite a rua:                                           |\n");
    fgets(contato[c].endereco.rua, 50, stdin);
    fflush(stdin);
    printf("Digite o numero da casa:                                |\n");
    scanf("%d", &contato[c].endereco.numeroC);
    fflush(stdin);
    printf("Digite o CEP:                                           |\n");
    fgets(contato[c].endereco.cep, 15, stdin);
    fflush(stdin);
    printf("Digite a cidade:                                        |\n");
    fgets(contato[c].endereco.cidade, 30, stdin);
    fflush(stdin);
    printf("Digite a abreviatura do estado(COM LETRA MAIUSCOLA):    |\n");
    fgets(contato[c].endereco.estado, 3, stdin);
    fflush(stdin);
    bolean = validarEstado(contato[c].endereco.estado, c);
    printf(" bolean atual é 1 incorreto e 0 correto // = %d\n", bolean);
    if (bolean == 0){
        fflush(stdin);
        printf("seu estado está incorreto rescreva o contato:           |\n ");
        bolean = 0;
        return Recebercontato(c);
    }else{
        bolean = 0;
        printf("seu estado foi verificado e esta correto\n");
    }
    fflush(stdin);
    printf("Digite o DDD:                                           |\n");
    scanf("%d", &contato[c].numero.ddd);
    fflush(stdin);
    printf("Digite o telefone:                                      |\n");
    scanf("%ld",&contato[c].numero.numero);
    fflush(stdin);
    printf("Digite o dia do nascimento:                             |\n");
    scanf("%d", &contato[c].data.dia);
    fflush(stdin);
    printf("Digite o mes de nascimento:                             |\n");
    scanf("%d", &contato[c].data.mes);
    fflush(stdin);
    printf("Digite o ano de nascimento:                             |\n");
    scanf("%d", &contato[c].data.ano);
    fflush(stdin);
    printf("L______________________________________________________\n");
    printf(" ______________________________________________________\n");
    printf("|Digite as observacoes sobre o contato                 |:\n");
    fgets(contato[c].observacao,256,stdin);
    fflush(stdin);
    printf("L______________________________________________________\n");

}

void Resumoddd (int ind) {
    int inddd;
    int c;
    c = ind;
    for (inddd = 11; inddd <= 97; inddd++ ) {   // 11 é o menor número de DDD do país e 97 é o maior
        for(c = 0; c < 100; c++) {
            if(contato[c].numero.ddd == inddd) {
                printf("Contatos Salvos com DDD %d\n", contato[c].numero.ddd);
                printf("Nome : %s\n", contato[c].nome);
                printf("Telefone : (%d)%ld\n", contato[c].numero.ddd, contato[c].numero.numero);
                printf("Email : %s\n\n", contato[c].email);
            }
        }


    }
}



    ordemAlfabetica(int ind){
        //usar a struct contato para
        int c = 0, k = 0, i = 0, aux = 0,
            j = 0;
            j = ind-1;
        char nomeAux[50];
            for(; c < j; c++){
                if(strcmp(contato[c].nome, contato[c + 1].nome) < 0){
                    strcpy(nomeAux, contato[c].email);
                    strcpy(contato[k].email, nomeAux);

                    strcpy(nomeAux, contato[c].nome);
                    strcpy(contato[k].nome, nomeAux);

                    strcpy(nomeAux, contato[c].endereco.rua);
                    strcpy(contato[k].endereco.rua, nomeAux);

                    strcpy(nomeAux, contato[c].endereco.estado);
                    strcpy(contato[k].endereco.estado, nomeAux);

                    strcpy(nomeAux, contato[c].endereco.cidade);
                    strcpy(contato[k].endereco.cidade, nomeAux);

                    strcpy(nomeAux, contato[c].observacao);
                    strcpy(contato[k].observacao, nomeAux);

                    aux = contato[c].endereco.numeroC;
                    contato[k].endereco.numeroC = aux;

                    strcpy(nomeAux, contato[c].endereco.cep);
                    strcpy(contato[k].endereco.cep, nomeAux);

                    aux = contato[c].numero.ddd;
                    contato[k].numero.ddd = aux;

                    aux = contato[c].numero.numero;
                    contato[k].numero.numero = aux;

                    aux = contato[c].data.ano;
                    contato[k].data.ano = aux;

                    aux = contato[c].data.dia;
                    contato[k].data.dia = aux;

                    aux = contato[c].data.mes;
                    contato[k].data.mes = aux;

                    if(k == j){
                    }else{
                    k++;
                    }
                }else{
                strcpy(nomeAux, contato[c+1].nome);
                strcpy(contato[c+1].nome, contato[c].nome);
                strcpy(contato[c].nome, nomeAux);

                strcpy(nomeAux, contato[c+1].email);
                strcpy(contato[c+1].email, contato[c].email);
                strcpy(contato[c].email, nomeAux);

                strcpy(nomeAux, contato[c+1].endereco.cep);
                strcpy(contato[c+1].endereco.cep, contato[c].endereco.cep);
                strcpy(contato[c].endereco.cep, nomeAux);

                strcpy(nomeAux, contato[c+1].endereco.cidade);
                strcpy(contato[c+1].endereco.cidade, contato[c].endereco.cidade);
                strcpy(contato[c].endereco.cidade, nomeAux);

                strcpy(nomeAux, contato[c+1].endereco.estado);
                strcpy(contato[c+1].endereco.estado, contato[c].endereco.estado);
                strcpy(contato[c].endereco.estado, nomeAux);

                strcpy(nomeAux, contato[c+1].endereco.rua);
                strcpy(contato[c+1].endereco.rua, contato[c].endereco.rua);
                strcpy(contato[c].endereco.rua, nomeAux);

                strcpy(nomeAux, contato[c+1].observacao);
                strcpy(contato[c+1].observacao, contato[c].observacao);
                strcpy(contato[c].observacao, nomeAux);

                aux = contato[c+1].data.ano;
                contato[c].data.ano = contato[c+1].data.ano;
                contato[c].data.ano = aux;

                aux = contato[c+1].data.dia;
                contato[c].data.dia = contato[c+1].data.dia;
                contato[c].data.dia = aux;

                aux = contato[c+1].data.mes;
                contato[c].data.mes = contato[c+1].data.mes;
                contato[c].data.mes = aux;

                aux = contato[c+1].endereco.numeroC;
                contato[c].endereco.numeroC = contato[c+1].endereco.numeroC;
                contato[c].endereco.numeroC = aux;

                aux = contato[c+1].numero.ddd;
                contato[c].numero.ddd = contato[c+1].numero.ddd;
                contato[c].numero.ddd = aux;

                aux = contato[c+1].numero.numero;
                contato[c].numero.numero = contato[c+1].numero.numero;
                contato[c].numero.numero = aux;

                if(k == j){
                }else{
                }
                k++;

                    }
                }
        k = 0;
        for(k = 0; k <= c; k++){
        printf("nome atual %d : %s\n", k, contato[k].nome);
        }
        return 0;
    }


/* função principal
aqui fica todo o funcionamento da agenda de contatos
*/
int main (void){
  /* mini menu pra testar a função de buscar contato por mes de anivesario  int i = 0;
    printf("digite 1 para procurar por mes e 0 para finalizar o programa");
    scanf("%d", &i);
    if(i == 1){
        buscarContato();
    }else{
    printf("programa finalizado");
    }
  */

    int validade;
    int c = 0;
    int a = 0;
    int b = 0;
    int i = 0;
    int opcao;
    int bolean = 0;
    int lop;
    int ind = 0;
    ind = 4;
    struct Contato contato[100];
    while (1) {
        printf(" ________________________________________________________\n");
        printf("|Escolha a funcao desejada                               |\n");
        printf("|5 : Imprimir contatos em ordem alfabetica               |\n");
        printf("|4 : Imprimir resumo dos contatos ordenados pelo DDD     |\n");
        printf("|3 : Imprimir um contato                                 |\n");
        printf("|2 : Buscar por data                                     |\n");
        printf("|1 : Receber contato                                     |\n");
        printf("|0 : Encerrar programa                                   |\n");
        printf("L________________________________________________________|\n");
        scanf("%d", &opcao);
        fflush(stdin);
        switch(opcao) {
            case 0:
            printf("Programa encerrado");
            return 0;
            break;
            case 1:
                if(ind < 100){
            Recebercontato(ind);
            ind++;
                }
            break;
            case 2:
            buscarData();
            break;
            case 3:
            printf("digite o contato desejado ");
            scanf("%d", &lop);
            fflush(stdin);
            imprimirContato(lop);
            break;
            case 4:
            Resumoddd (c);
            break;
            case 5:
            printf("o indice tá valendo: %d", ind);
            for(a = 0; a < ind-1; a++){
            ordemAlfabetica(ind);

            }
            for(a = 0; a < ind; a++){
            imprimirContato(a);
            }


        }
    }


    return 0;




}
