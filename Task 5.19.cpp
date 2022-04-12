#include <stdio.h>
#include <math.h>

double eqn(double x) {
	return tan(x) - x;
}

double root(double eps, double a, double b) {
	double mid = (a + b) / 2.0;

	if (b - a < eps) {
		return 0;
	}

	if (fabs(eqn(mid) < eps)) {
		return mid;
	}

	if (eqn(a) * eqn(mid) < 0) {
		//look for root in (a,mid)
		return root(eps,a, mid);
	}
	else {
		//look for root in (mid,b)
		return root(eps,mid,b);
	}
}

void task19() {
	double eps, x;
	
	do {
		printf("eps=");
		scanf_s("%lf", &eps);
		if (eps > 0) break;
		printf("Input epsilon>0 once more");
	} while (1);
	x = root(eps, -1, 0.5);
	printf("tg(%lf)=%lf, as tg(%lf)=%lf", x, x, x, tan(x));
}