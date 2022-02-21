#include <stdio.h>//task 4.3
#include <math.h>

float task_a(int n, float x) {
	float y, t;
	t = 1;//x^0
	y = 0;
	for (int i = 0; i < n; i++) {
		t *= x;//t=x^{i+1}
		y += t;
	}
	printf("y=%f", y);
	return y;
}

float task_b(int n, float x) {
	float res, y;
	printf("y=");
	scanf_s("%f", &y);
	res = 1;
	for (int i = 0; i < n; i++) {
		res += pow(x, pow(2, i)) * pow(y, i);
	}
	printf("res=%f", res);
	return res;
}

int main3() {
	int n;
	float x, y, t;
	printf("x,n:");
	scanf_s("%f %d",&x,&n);
	//task_a(x, n);
	task_b(x, n);
	return 0;
	
}