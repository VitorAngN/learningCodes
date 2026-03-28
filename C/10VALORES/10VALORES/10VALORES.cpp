// 10VALORES.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void receberNumero(int *p,int i) {
	scanf_s("%d", (p+i));
	printf("numero: %d", *(p+i));
}
int main(char* args, char argv){
	int* p[10], i = 0;
	*p = (int*)malloc(10*sizeof(int));
	for (;i < 10; i++) {
		receberNumero(*p,i);

	}
}

/*
void receberNumero(int *p,int i) {
	scanf_s("%d", (p+i));
}
void printar(int *p, int i){
	printf("numero: %d", *(p+10-i));
	return i;
}
int main(char* args, char argv){
	int* p[10], i = 0;
	*p = (int*)malloc(10*sizeof(int));
	for (;i < 10; i++) {
		receberNumero(*p,i);
		printar(*p, i){

	}
}




*/
/*

p = (int*)malloc (10*sizeof(int));
looping scanf's

maior = *p;
for ( i =0 ; i < 9, i++){
	if(*p+1) > maior){
	maior = *(p+i)
	}

}
printf("%d maior ", maior); 


*/