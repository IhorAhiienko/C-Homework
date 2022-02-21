#include <stdio.h>


int fact(int n) {
	int i, res;
	i = 1;
	res = 1;
	while (i != n) {
		i++;
		res *= i;
	}
	return res;
}

double task_a5_4(int n) {
	double res;
	int i;
	res = 1;
	i = 1;
	while (i != n) {
		
		res *= (1 + 1.0 / fact(i));
		printf("%lf\n", res);
		i++;
		printf("%d\n", fact(i));
	}
	return res;
}

int main() {
	int x;
	printf("n=");
	scanf_s("%d", &x);
	//printf("%d\n", fact(x));
	printf("%lf\n", task_a5_4(x));
	//printf("%d\n", fact(x));
}