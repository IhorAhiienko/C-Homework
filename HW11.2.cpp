#include <stdio.h>
#include <stdlib.h>
//task 9.6
#pragma warning(disable : 4996)

double** create_arr() {
	int n, m;
	printf("n=");
	scanf("%d", &n);
	printf("m=");
	scanf("%d", &m);
	double** arr = (double**)malloc(sizeof(double*) * n);
	for (int i = 0; i < n; i++) {
		arr[i] = (double*)malloc(sizeof(double) * m);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%lf", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%lf ", arr[i][j]);
		}
		printf("\n");
	}
	return arr;
}

void clear_arr(double** arr) {
	free(arr);
}


int main() {
	int s;
	printf("s=");
	scanf("%d", &s);
	double*** mas = (double***)malloc(sizeof(double**) * s);
	for (int i = 0; i < s; i++) {
		printf("mas[%d]=\n", i);
		mas[i] = create_arr();
	}
	for (int i = 0; i < s; i++) {
		clear_arr(mas[i]);
	}
}