#include <stdio.h>
#include <math.h>
//task 4.4
int main4() {
	int n;
	double x,res;
	printf("n=");
	scanf_s("%d", &n);
	printf("x=");
	scanf_s("%lf", &x);
	res = 0;
	for (int i=1; i <= n; i++) {
		res += i * pow(x, i);
	}
	printf("res=%lf", res);
}