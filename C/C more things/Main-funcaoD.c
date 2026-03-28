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
        printf("nome: %s\n", contato[i].nome);
        printf("E-mail: %s\n", contato[i].email);
        printf("Endereço:\n");
        printf("Rua: %s", contato[i].endereco.rua);
        printf("N-%d ", contato[i].endereco.numeroC);
        printf("Estado: %s ", contato[i].endereco.estado);
        printf("Cidade: %s \n", contato[i].endereco.cidade);
        printf("CEP: %s\n", contato[i].endereco.cep);
        printf("TELEFONE: ");
        printf("(%d)", contato[i].numero.ddd);
        printf("%d \n", contato[i].numero.numero);
        printf("nascimento:\n");
        printf("%d", contato[i].data.dia);
        printf("/%d/", contato[i].data.mes);
        printf("%d\n", contato[i].data.ano);
        printf("Observacao:%s", contato[i].observacao);
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


int validarEstado(int c, int j){
    char ac[3] = "AC";
    char al[3] = "AL";
    char ap[3] = "AP";
    char am[3] = "AM";
    char ba[3] = "BA";
    char ce[3] = "CE";
    char df[3] = "DF";
    char es[3] = "ES";
    char go[3] = "GO";
    char ma[3] = "MA";
    char mt[3] = "MT";
    char ms[3] = "MS";
    char mg[3] = "MG";
    char pa[3] = "PA";
    char pb[3] = "PB";
    char pr[3] = "PR";
    char pe[3] = "PE";
    char pi[3] = "PI";
    char rj[3] = "RJ";
    char rn[3] = "RN";
    char rs[3] = "RS";
    char ro[3] = "RO";
    char rr[3] = "RR";
    char sc[3] = "SC";
    char sp[3] = "SP";
    char se[3] = "SE";
    char to[3] = "TO";
    printf("atualmente está: %s\n", contato[c].endereco.estado);

    if(strcmp(contato[c].endereco.estado[j], ac) != 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], al[j]) != 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], ap[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], am[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], ba[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], ce[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], df[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], es[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], go[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], ma[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], mt[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], ms[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], mg[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], pa[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], pb[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], pr[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], pe[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], pi[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], rj[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], rn[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], rs[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], ro[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], rr[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], sc[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], sp[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], se[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    }else if(strcmp(contato[c].endereco.estado[j], to[j])!= 1){
    //retorna 1 quando certo
    return 1, j++;
    } else {
    return 0, j = 0;
    }
    }



Tpcontato Recebercontato (int ind) {
    int c = 0;
    int binario = 0, j = 0;
    c = ind;
    fflush(stdin);
    printf("Digite o nome do contato :\n");
    fgets(contato[c].nome, 50, stdin);
    fflush(stdin);
    printf("Digite o email :\n");
    fgets(contato[c].email, 50, stdin);
    fflush(stdin);
    printf("Digite a rua:\n");
    fgets(contato[c].endereco.rua, 50, stdin);
    fflush(stdin);
    printf("Digite o numero da casa:\n");
    scanf("%d", &contato[c].endereco.numeroC);
    fflush(stdin);
    printf("Digite o CEP :\n");
    fgets(contato[c].endereco.cep, 15, stdin);
    fflush(stdin);
    printf("Digite a cidade :\n");
    fgets(contato[c].endereco.cidade, 30, stdin);
    fflush(stdin);
    printf("Digite a abreviatura do estado :\n");
    fgets(contato[c].endereco.estado, 3, stdin);
    for(; j<3; j++){
    binario = validarEstado(c, j);
    printf("%d\n", binario);
    }
    if(binario == 1){
        fflush(stdin);
        printf("seu estado está incorreto rescreva o contato:\n ");
        binario = 0;
        return Recebercontato(c);
    }else{
        binario = 0;
    }
    fflush(stdin);
    printf("Digite o DDD :\n");
    scanf("%d", &contato[c].numero.ddd);
    fflush(stdin);
    printf("Digite o telefone : \n");
    scanf("%ld", &contato[c].numero.numero);
    fflush(stdin);
    printf("Digite o dia do nascimento :\n");
    scanf("%d", &contato[c].data.dia);
    fflush(stdin);
    printf("Digite o mes de nascimento :\n");
    scanf("%d", &contato[c].data.mes);
    fflush(stdin);
    printf("Digite o ano de nascimento :\n");
    scanf("%d", &contato[c].data.ano);
    fflush(stdin);
    printf("Digite as observacoes sobre o contato :\n");
    fgets(contato[c].observacao,256,stdin);
    fflush(stdin);

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
    int i = 0;
    int opcao;
    int lop;
    int ind = 0;
    struct Contato contato[100];
    while (1) {
        printf("Escolha a funcao desejada :\n");
        printf("3 : Imprimir um contato\n");
        printf("2 : Buscar por data\n");
        printf("1 : Receber contato\n");
        printf("0 : Encerrar programa\n");
        scanf("%d", &opcao);
        fflush(stdin);
        switch(opcao){
            case 0:
            printf("Programa encerrado");
            return 0;
            break;
            case 1:
            Recebercontato(ind);
            ind++;
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
        }
    }


    return 0;




}
