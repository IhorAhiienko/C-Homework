#include <stdio.h>
#include <math.h>

double derivative_atan(double x) {
	double res;
	res = 1 / (1 + pow(x, 2));
	return res;
}

int main() {
	double n, d;
	printf("n=");
	scanf_s("%lf", &n);
	d = derivative_atan(n);
	printf("Derivative from atan(n)=>\n=>1/(1+n^2)=%lf", d);
}