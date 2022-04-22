#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

//task 5.16â

int main() {
	double eps, y, a, x;
	printf("x=");
	scanf("%lf", &x);
	printf("eps=");
	scanf("%lf", &eps);
	y = x;
	a = x;
	for (double i = 3; a > eps; i = i + 2) {
		a *= x * x / (i * (i - 1));
		y += a;
	}
	printf("Sin(%lf)=%lf; Estimated value=%lf", x, sinh(x), y);
}