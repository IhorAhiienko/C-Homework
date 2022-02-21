//task 4.2
#include <stdio.h>

int main2() {
	unsigned n;
	printf("n=");
	scanf_s("%u", &n);
	printf("!%u=1", n);
	for (unsigned i = 2; i <= n; ++i) {
		printf("*%u", i);
	}
	printf("\n");
	printf("!%u=%u", n, n);

	for (unsigned i = n-1; i >= 1; --i) {
		printf("*%u", i);
	}
	return 0;
}