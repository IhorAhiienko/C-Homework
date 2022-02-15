#include <stdio.h>
#include <stdlib.h>

int numbers(double n)
{
	double n1, nst;
	int new_n, i;
	n1 = n;
	nst = n;
	new_n = (int)n1;
	i = 0;
	while (nst > 0) {
		new_n = (int)n1;
		nst = n1 - new_n;
		n1 = n1 * 10;
		//printf("%d\n", new_n);
		//printf("%lf\n", nst);
	}
	//printf("%d\n", new_n);
	n1 = new_n;
	while (new_n > 0) {
		i++;
		new_n = new_n / 10;
		//printf("%d\n", new_n);
	}
	//printf("%d\n", i);
	return i;
}

void check_a(double a) {
	int num;
	num = numbers(a);
	//printf("%d\n", num);
	if (a >= 100) {
		printf("a must be lower than 100\n");
		printf("a=");
		scanf_s("%lf", &a);
		check_a(a);
	}
	if (num > 5) {
		printf("a must have less than 5 numbers\n");
		printf("a=");
		scanf_s("%lf", &a);
		check_a(a);
	}
	else {
		printf("Good number\n");
	}
}

void check_b(double a) {
	int num;
	num = numbers(a);
	//printf("%d\n", num);
	if (a >= 100) {
		printf("a must be lower than 100\n");
		printf("a=");
		scanf_s("%lf", &a);
		check_a(a);
	}
	if (num != 5) {
		printf("a must have 5 numbers\n");
		printf("a=");
		scanf_s("%lf", &a);
		check_a(a);
	}
	else {
		printf("Good number\n");
	}
}

int main(){
	double a;
	printf("a=");
	scanf_s("%lf", &a);
	check_a(a);
	//check_b(a);
	return 0;
}