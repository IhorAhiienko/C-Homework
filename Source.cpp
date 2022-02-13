// task 3.1

#include <stdio.h>

void print_digits(int n) {
	int a = n / 100;
	int b = (n / 10) % 10;
	int c = n % 10;
	printf("%d %d %d\n", a, b, c);
}

void sum_digits(int n) {
	int a = n / 100;
	int b = (n / 10) % 10;
	int c = n % 10;
	printf("%d\n", a + b + c);
}

void inverted(int n) {
	int a = n / 100;
	int b = (n / 10) % 10;
	int c = n % 10;
	int inv = c * 100 + b * 10 + a;
	printf("%d\n", inv);
}

int main0() {
	int n;
	printf("n=");//100-999
	scanf_s("%d", &n);
	if (n > 99 && n < 1000) {
		print_digits(n);
		sum_digits(n);
		inverted(n);
	}
	else {
		printf("%d is not 3-digit!\n", n);
	}
	return 0;
}