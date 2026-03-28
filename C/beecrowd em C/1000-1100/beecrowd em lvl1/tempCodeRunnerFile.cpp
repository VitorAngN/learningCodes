#include <stdio.h>
int main() {
    int n, x, i, teste, primo;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &x);
        primo = 1;

        if (x <= 1) {
            primo = 0;
        } else {
            for (i = 2; i * i <= x; i++) {
                if (x % i == 0) {
                    primo = 0; 
                    break;   
                }
            }
        }

        if (primo) printf("%d eh primo\n", x);
        else printf("%d nao eh primo\n", x);
    }
    return 0;
}