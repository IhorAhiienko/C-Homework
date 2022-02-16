#include <stdio.h>
#include <math.h>

double isReLu(double n, double b) {
	double res;
	if (n < 0) {
		res = n / pow((1 + b * pow(n, 2)), 2);
		return res;
	}
	else {
		return n;
	}
}

double isReLu_de(double n, double b) {
	double res;
	if (n < 0) {
		res = n / (pow((1 + b * pow(n, 2)), 2)*(1+b*pow(n,2)));
		return res;
	}
	else {
		return 1;
	}
}
int main() {
	double x, a;
	printf("x=");
	scanf_s("%lf", &x);
	printf("a=");
	scanf_s("%lf", &a);
	printf("isReLu=%lf at: x=%lf and a=%lf", isReLu(x, a), x, a);
	printf("isReLu derivative=%lf at: x=%lf and a=%lf", isReLu_de(x, a), x, a);
}