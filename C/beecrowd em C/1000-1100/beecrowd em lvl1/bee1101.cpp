#include <stdio.h>

int main() {
    int numbers[2], bigger, smaller, sum = 0;
    scanf("%d %d", &numbers[0], &numbers[1]);
    while(numbers[0] > 0 && numbers[1] > 0){

        if(numbers[0] > numbers[1]) {
            bigger = numbers[0];
            smaller = numbers[1];
        } else {
            bigger = numbers[1];
            smaller = numbers[0];
        }
        sum = 0;
        while(smaller <= bigger) {
            printf("%d ", smaller);
            sum += smaller;
            smaller++;
        }
        printf("Sum=%d\n", sum);
        scanf("%d %d", &numbers[0], &numbers[1]);
    }
    return 0;

}