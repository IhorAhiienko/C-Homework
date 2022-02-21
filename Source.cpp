#include <stdio.h>
#include <math.h>
//task 4.1
int main1() {
	double x, y;
	unsigned n;
	printf("n=");
	scanf_s("%u", &n);
	printf("x=");
	scanf_s("%lf", &x);
	y = x;
	for (unsigned i = 0; i < n; i++) {
		y = sin(y);
	}
	printf("Y=%lf", y);
	return 0;
}