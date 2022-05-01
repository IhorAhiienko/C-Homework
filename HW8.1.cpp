#include <stdio.h>
#pragma warning(disable : 4996)
//task 7.11

double task7_11a(int n, double x) {
	double t0, t1,t2;
	t0 = 1;
	t1 = x;
	t2 = 2 * x * t1 - t0;
	for (int i = 3; i <= n; i++) {
		t0 = t1;
		t1 = t2;
		t2 = 2 * x * t1 - t0;
	}
	return t2;
}

double task7_11b(int n, double x) {
	double h0, h1, h2;
	h0 = 1;
	h1 = 2*x;
	h2 = 2 * x * h1 - 2*h0;
	for (int i = 3; i <= n; i++) {
		h0 = h1;
		h1 = h2;
		h2 = 2 * x * h1 - 2 * (i-1)*h0;
	}
	return h2;
}

int main1() {
	int d;
	double a;
	printf("n=");
	scanf("%d", &d);
	printf("x = ");
	scanf("%lf", &a);
	printf("task a)=%lf\n", task7_11a(d, a));
	printf("task b)=%lf", task7_11b(d, a));
	return 0;
}