#include <stdio.h>
#include <math.h>

double derivative_atan(double x) {
	double res;
	res = 1 / (1 + pow(x, 2));
	return res;
}

int main() {
	double n, d,t;
	printf("n=");
	scanf_s("%lf", &n);
	d = derivative_atan(n);
	t=atan(n);
	printf("Atan(n)=%lf\n",t);
	printf("Derivative from atan(n)=>\n=>1/(1+n^2)=%lf", d);
}
