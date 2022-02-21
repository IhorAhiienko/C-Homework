#include <stdio.h>
#include <math.h>

double my_exp(double x, int n) {
	double t = 1;
	double y = 1;
	int i = 1;
	while (i <= n) {
		t *= (x / i);
		y += t;
		i++;
	}
	return y;
}

int main() {
	int n;
	double x, y;
	scanf_s("%d", &n);
	scanf_s(" %lf", &x);

	y = my_exp(x, n);
	printf("y=%lf, %lf", y, exp(x));
}