#include <stdio.h>
//task 6.11
#pragma warning(disable : 4996)

void task_a() {
	unsigned m, k, a, b;
	printf("m=");
	scanf("%u", &m);
	printf("k=");
	scanf("%u", &k);
	a = m << k;
	b = m >> k;
	printf("%u<<%u=%u\n", m, k, a);
	printf("%u>>%u=%u\n", m, k, b);
 }

void task_b() {
	long long unsigned m, k, a, b;
	printf("m=");
	scanf("%llu", &m);
	printf("k=");
	scanf("%llu", &k);
	a = m << k;
	b = m >> k;
	printf("%llu<<%llu=%llu\n", m, k, a);
	printf("%llu>>%llu=%llu\n", m, k, b);
}

int main() {
	task_a();
	task_b();
	return 0;
}