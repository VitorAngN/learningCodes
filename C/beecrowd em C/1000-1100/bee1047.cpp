#include <stdio.h>

int main() {
    int initialDay, initialHour, initialMinute, initialSecond, finalDay, finalHour, finalMinute, finalSecond, duration;
    scanf("Dia %d\n", &initialDay);
    scanf("%d : %d : %d\n", &initialHour, &initialMinute, &initialSecond);
    scanf("Dia %d\n", &finalDay);
    scanf("%d : %d : %d", &finalHour, &finalMinute, &finalSecond);
    initialDay = initialDay * 24 * 60 * 60;
    finalDay = finalDay * 24 * 60 * 60;
    initialHour = initialHour * 60 * 60;
    finalHour = finalHour * 60 * 60;
    initialMinute = initialMinute * 60;
    finalMinute = finalMinute * 60;
    duration = (finalDay + finalHour + finalMinute + finalSecond) - (initialDay + initialHour + initialMinute + initialSecond);
    int day = duration / (24 * 60 * 60);
    duration = duration % (24 * 60 * 60);
    int hour = duration / (60 * 60);
    duration = duration % (60 * 60);
    int minute = duration / 60;
    duration = duration % 60;
    int second = duration;
    if(second == 60) {
        second = 0;
        minute++;
    }
    if(minute == 60){
        minute = 0;
        hour++;
    }
    if(hour == 24) {
        hour = 0;
        day++;
    }
    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", hour);
    printf("%d minuto(s)\n", minute);
    printf("%d segundo(s)\n", second);



    return 0;
}   
