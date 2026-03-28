#include <stdio.h>
int main(){
    double monetaryValue;
    scanf("%lf", &monetaryValue);
    int banknotes100 = 0, banknotes50 = 0, banknotes20 = 0, banknotes10 = 0, banknotes5 = 0, banknotes2 = 0;
    int coins100 = 0, coins50 = 0, coins25 = 0, coins10 = 0, coins5 = 0, coins1 = 0;
    while(monetaryValue >= 100){
        banknotes100++;
        monetaryValue -= 100;
    }
    while (monetaryValue >= 50){
        banknotes50++;
        monetaryValue -=50;        
    }
    while (monetaryValue >= 20){
        banknotes20++;
        monetaryValue -= 20;
    }
    while (monetaryValue >= 10){
        banknotes10++;
        monetaryValue -= 10;
    }
    while (monetaryValue >= 5){
        banknotes5++;
        monetaryValue -= 5;
    }
    while (monetaryValue >= 2){
        banknotes2++;
        monetaryValue -= 2;
    }
    while (monetaryValue >= 1){
        coins100++;
        monetaryValue -= 1;
    }
    while(monetaryValue >= 0.50){
        coins50++;
        monetaryValue -= 0.5;
    }
    while (monetaryValue >= 0.25){
        coins25++;
        monetaryValue -= 0.25;
    }
    while(monetaryValue >= 0.10){
        coins10++;
        monetaryValue -=0.10;
    }
    while (monetaryValue >= 0.05){
        coins5++;
        monetaryValue -= 0.05;
    }
    while (monetaryValue >= 0.01){
        coins1++;
        monetaryValue -= 0.01;
    }
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", banknotes100);
    printf("%d nota(s) de R$ 50.00\n", banknotes50);
    printf("%d nota(s) de R$ 20.00\n", banknotes20);
    printf("%d nota(s) de R$ 10.00\n", banknotes10);
    printf("%d nota(s) de R$ 5.00\n", banknotes5);
    printf("%d nota(s) de R$ 2.00\n", banknotes2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", coins100);
    printf("%d moeda(s) de R$ 0.50\n", coins50);
    printf("%d moeda(s) de R$ 0.25\n", coins25);
    printf("%d moeda(s) de R$ 0.10\n", coins10);
    printf("%d moeda(s) de R$ 0.05\n", coins5);
    printf("%d moeda(s) de R$ 0.01\n", coins1);
    return 0;
}