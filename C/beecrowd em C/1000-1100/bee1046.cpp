#include <stdio.h>
#include <stdlib.h>
int main() {
    int startHour, endTime, duration;
    scanf("%d %d", &startHour, &endTime);



    if(startHour == endTime) {
        duration = 24;
    } else {
        for(duration = 0; startHour != endTime; duration++) {
            startHour++;
            if(startHour == 24){
                startHour = 0;
            }
        }   
    }








    printf("O JOGO DUROU %d HORA(S)\n", duration);
    return 0;
}