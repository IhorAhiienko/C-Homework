#include <stdio.h>
#include <math.h>
//task 6.13
#pragma warning(disable : 4996)

int main() {
	unsigned long a;
	int t=0;
	printf("Enter number= ");
	scanf("%lu", &a);
	for (int i = 0; i < 33; i++) {
		if (a & pow(2, i) == pow(2, i)) {
			t++;
		}
	}
}