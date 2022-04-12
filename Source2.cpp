//task7.6
#include <stdio.h>
#include <stdlib.h>

#define N 20

int input_array(double* mas,int n);

void output_array(const double* mas, int n);

int sum_arrays(const double* mas1,const double* mas2, double* res, int n);

double scalar_arrays(const double* mas1,const double* mas2, int n);

int main2() {
	int n;
	printf("n=");
	scanf_s("%d", &n);

	double a1[N], a2[N], a3[N];

	input_array(a1,n);
	input_array(a2,n);

	printf("scal mult =%lf", scalar_arrays(a1, a2, n));

	sum_arrays(a1, a2, a3, n);

	output_array(a3, n);
	return 0;
}

int input_array(double* mas, int n) {
	for (int i = 0; i < n; i++) {
		printf("a[%d]=", i);
		int r = scanf_s("%lf", &mas[i]);
		if (r != 1) return i;
		}
	return n;
	}

void output_array(const double* mas, int n){
	for (int i = 0; i < n; i++) {
		printf("a[%d]=%lf\n", i, mas[i]);
	}
}
int sum_arrays(const double* mas1, const double* mas2, double* res, int n) {
	for (int i = 0; i < n; i++) {
		res[i] = mas1[i] + mas2[i];
	}
	return EXIT_SUCCESS;
}

double scalar_arrays(const double* mas1, const double* mas2, int n) {

	double r = 0;
	for (int i = 0; i < n; i++) {
		r += mas1[i] + mas2[i];
	}
	return r;
}
