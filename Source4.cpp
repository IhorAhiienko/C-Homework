#include <stdio.h>
//task 4.5
int main5() {
	unsigned n;
	printf("n=");
	scanf_s("%u", &n);
	unsigned long long m = 1UL;
	for (unsigned i = n; i >=2; i -= 2) {
		m *= i;
	}
	printf("%u!!=%u", n, m);
	return 0;
}