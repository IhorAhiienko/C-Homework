//Task 4.23a

#include <stdio.h>
#include <math.h>
const int n = 2;

int main1() {
	double y[n],z[n];

	for (int i = 0; i < n; i++) {
		printf("y[%d]=", i);
		scanf_s("%lf", &y[i]);
		if (fabs(y[i]) <= 2) {
			z[i] = y[i];
		}
		else {
			z[i] = 0.5;
		}
	}
	for (int i = 0; i < n; i++) {
		printf("z[%d]=%lf\n", i,z[i]);
		}
	return 0;
	}