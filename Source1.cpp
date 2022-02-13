#include <stdio.h> //task 3.3
#include <inttypes.h>
int main1() {
	int a, b, c; //int - 2^31
	printf("a,b,c:\n");
	scanf_s("%d,%d,%d", &a, &b, &c);

	// a)
	int32_t d = a * b * c; //2^10^3=2^30 /int - 4 bytes 2^31
	printf("p=%d\n", d);

	//b)
	int64_t d1 = (unsigned long long)a * b * c;
	printf("p=%" PRId64 "\n", d1);
	return 0;
}
