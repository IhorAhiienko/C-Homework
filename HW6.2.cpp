//Task 5.10

#include <stdio.h>
#include <math.h>
const int n = 4;

int input() {
	int res;
	printf("s = ");
	scanf_s("%d", &res);
	if (res > n) {
		printf("'s' must be lower than or equal to %d", n);
		input();
	}
	else {
		return res;
	}
}
int main2() {
	int s;
	double v[n], u[n];
	v[0] = 1;
	v[1] = 1;
	u[0] = 0;
	u[1] = 0;
	s = input();
	for (int i = 2; i < n; i++) {
		v[i] = (u[i - 1] - v[i - 1]) / fabs(u[i - 2] + v[i - 1] + 2);
		u[i] = (u[i - 1] - u[i - 2] * v[i - 1] - v[i - 2]) / (1 + pow(u[i - 1], 2) + pow(v[i - 1], 2));
	}
	printf("v[%d]=%lf", s, v[s]);
	return 0;
}