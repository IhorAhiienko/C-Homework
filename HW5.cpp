#include <stdio.h>
#include <math.h>

int main() {
	int i, n;
	double x, y;
	printf("x=");
	scanf_s("%lf", &x);
	printf("n=");
	scanf_s("%d", &n);
	y = 0;
	for (i = 1; i <= n; i++) {
		y = y + pow(x, pow(i, 2));
	}
	printf("y=%lf", y);
}