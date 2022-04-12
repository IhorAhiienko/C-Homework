#include <stdio.h>

double fun(double x) {
	return  x * x * x + 4 * x * x + x - 6;
}

double root2(double eps, double a, double b) {
	double un, u0 = (a + b) / 2.0;
	un = u0 + 2 * eps;
	u1 = un;
	while (fabs(un - u0) > eps) {
		un=u0-fun(u0)*(u1-u0)/(fun(u1)-fun())
	}
}

void task20() {
	double eps, x;

	do {
		printf("eps=");
		scanf_s("%lf", &eps);
		if (eps > 0) break;
		printf("Input epsilon>0 once more");
	} while (1);
	x = root2(eps, 0, 2.0);
	printf("tg(%lf)=%lf, as tg(%lf)=%lf", x, x, x, tan(x));
}
int main() {
	task20();
}