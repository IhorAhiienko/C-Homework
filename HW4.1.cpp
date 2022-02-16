#include <stdio.h>

int task_a(int n) {
	if (n % 2 == 1) {
		return 1;
	}
	return 0;
}

int task_b(int n) {
	if (n % 10 == 5) {
		return 1;
	}
	return 0;
}

int task_v(int n) {
	int m;
	printf("m=");
	scanf_s("%d", &m);
	if (n % m == 0) {
		return 1;
	}
	return 0;
}

int task_g(int n) {
	int m,k;
	printf("k=");
	scanf_s("%d", &k);
	printf("m=");
	scanf_s("%d", &m);
	if ((n % m == 0) and (k%m==0)) {
		return 1;
	}
	return 0;
}

int task_d(int n) {
	int a, b;
	a = n / 10;
	b = n % 10;
	if (n / 10 < 10) {
		if (a + b >= 10) {
			return 1;
		}
	}
	return 0;
}

int task_e(int n) {
	int y;
	printf("y=");
	scanf_s("%d", &y);
	if (n - y > 7) {
		return 1;
	}
	return 0;
}

int task_E(int n) {
	int y,z;
	printf("y=");
	scanf_s("%d", &y);
	printf("z=");
	scanf_s("%d", &z);
	if ((n > 99) or (y > 99) or (z > 99)) {
		return 1;
	}
	return 0;
}

int task_j(int n) {
	int y, z;
	printf("y=");
	scanf_s("%d", &y);
	printf("z=");
	scanf_s("%d", &z);
	if ((n < 1001) xor (y < 1001) xor (z < 1001)) {
		return 1;
	}
	return 0;
}

int main() { //uncomment one at a time
	int x;
	printf("x=");
	scanf_s("%d", &x);
	//printf("%d", task_a(x));
	//printf("%d", task_b(x));
	//printf("%d", task_v(x));
	//printf("%d", task_g(x));
	//printf("%d", task_d(x));
	//printf("%d", task_e(x));
	//printf("%d", task_E(x));
	//printf("%d", task_j(x));
}