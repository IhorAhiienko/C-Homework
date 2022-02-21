#include <stdio.h>

// Parts v and g



int taskv() {
	double a;
	int n,F2,F1,F0;
	printf("a=");
	scanf_s("%lf", &a);
	F0 = 0;
	F1 = 1;
	F2 = 0;
	n = 1;
	while (F2 < a) {
		F2 = F1 + F0;
		printf("%d=%d+%d\n", F2, F1, F0);
		F0 = F1;
		F1 = F2;
		n++;
	}
	printf("End of taskv\n");
	return n;
}

int taskg() {
	double a;
	int F2, F1, F0, sum;
	F0 = 0;
	F1 = 1;
	F2 = 0;
	sum = 0;
	while (sum < 1000) {
		F2 = F1 + F0;
		sum += F2;
		printf("%d=%d+%d\n", F2, F1, F0);
		printf("sum=%d\n", sum);
		F0 = F1;
		F1 = F2;
	}
	printf("End of taskg\n");
	return sum;
}

int main2() {
	printf("%d\n",taskv());
	printf("%d\n", taskg());
	return 0;
}