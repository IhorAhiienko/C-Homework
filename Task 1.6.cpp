/*
C program - task 1.6
*/
#include <stdio.h>

int main() {
	double C, F; // 2 variables of real type
	printf("C=");
	scanf_s("%lf",&C); // %lf - specifier of double type

	F = 9 * C / 5 + 32;
	printf("F=%g", F); // %g - shortest possible output
}
