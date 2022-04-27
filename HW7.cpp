#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
//task 5.18

int get_llint_len(long long int value) {
	int l = 1;
	while (value > 9) { l++; value /= 10; }
	return l;
}

int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

void task5_18a() {

	int y, a, k, s;
	printf("k=");
	scanf_s("%d", &k);
	y = 1;
	a = 1;
	s = 1;
	for (int i = 2;k>s; i++) {
		a *= 10;
		y = y * a * 10 + a;
		s += i;
	}
	for (int i = 1; i < (s - k); i++) {
		y = y / 10;
	}
	printf("%d\n", y);
	printf("%d\n", y % 10);
}

void task5_18b() {

	long long int y, a, k, s;
	printf("k=");
	scanf_s("%lld", &k);
	y = 0;
	s = 1;
	for (int i = 1; k >= i; i++) {
		a = i;
		s = 0;
		while (a>0) {
			a = a / 10;
			s++;
		}
		y=y*pow(10,s) + i;
	}
	printf("%lld\n", y);
	for (int i = 1; i <= k; i++) {
		if (y % 10 == 0) {
			y = y / 10;
		}
		else {
			y = y % 10;
		}
	}
	printf("%lld\n", y);
}

void task5_18c() {

	long long int y, a, k, s;
	printf("k=");
	scanf_s("%lld", &k);
	y = 0;
	s = 1;
	for (long long int i = 1; k >= i; i++) {
		a = pow(i,2);
		s = 0;
		while (a > 0) {
			a = a / 10;
			s++;
		}
		y = y * pow(10, s) + pow(i,2);
	}
	printf("%lld\n", y);
	int d = get_llint_len(y);
	for (int i = 1; i <= (d-k); i++) {
		y = y / 10;
	}
	for (int i = 1; i <= k; i++) {
		y = y % 10;
	}
	printf("%lld\n", y);
}

void task5_18d() {

	int y, a, k, s;
	printf("k=");
	scanf_s("%d", &k);
	y = 0;
	s = 1;
	for (int i = 1; k >= i; i++) {
		a = fib(i);
		s = 0;
		while (a > 0) {
			a = a / 10;
			s++;
		}
		y = y * pow(10, s) + fib(i);
		printf("%d\n", y);
	}
	printf("%d\n", y);
	int d = get_llint_len(y);
	for (int i = 1; i <= (d - k); i++) {
		y = y / 10;
	}
	for (int i = 1; i <= k; i++) {
		y = y % 10;
	}
	printf("%d\n", y);
}

int main() {
	//task5_18a();
	//task5_18b();
	//task5_18c();
	task5_18d();
}