#include <stdio.h>
//a
int main6() {
	double b, b_k;
	unsigned n;
	printf("Enter b:");
	scanf_s("%lf", &b);
	printf("Enter n:");
	scanf_s("%lf", &n);

	b_k = b;
	for (unsigned i = 0; i < n; i++)
		b_k = b + 1 / b_k;

	printf("b_%u=%g\n", n, b_k);
	return 0;
}