#include <stdio.h>

void task7() {
	int n=0;
	printf("n=");
	//scanf_s("%lf", n);

	double b0=1, b1=0, bk;
	double a0=0, a1=1, ak;
	double S = 2.0 / (a0 + b0);

	if (n == 1) {
		printf("S=%lf", S);
		return;
	}
	S += 4.0 / (a1 + b1);
	if (n == 2) {
		printf("S=%lf", S);
		return;
	}
	double power_of_two = 4.0;
	for (int k = 3; k < n; k++) {
		bk = b1 + a1;
		ak = a1 / k + a0 * bk;
		b0 = b1;
		a0 = a1;
		b1 = bk;
		a1 = ak;
	}
	printf("S=%lf", S);
}

int main7() {
	task7();
	return 0;
}