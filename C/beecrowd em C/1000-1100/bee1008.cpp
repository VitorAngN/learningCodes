#include <stdio.h>
int main() {
	int number, hours;
	double recivPerMonth;
	scanf("%d", &number);
	scanf("%d", &hours);
	scanf("%lf", &recivPerMonth);
	double salary = hours * recivPerMonth;
	printf("NUMBER = %d\n", number);
	printf("SALARY = %.2lf\n", salary);
	return 0;
}