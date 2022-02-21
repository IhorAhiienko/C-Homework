#include <stdio.h>
#include <float.h> //DBL_EPSILON

int main1() {
	double n, a, res;
	printf("a=");
	scanf_s("%lf", &a);
	res = 1;
	n = 1;
	while (res <a) {
		n++;
		res +=1/ n;
		//printf("res=%lf\n", res);
		//printf("n=%lf\n", n);
	}
	//printf("#############\n");
	printf("res=%lf\n", res);
	printf("n=%lf\n", n);
	return 0;
}