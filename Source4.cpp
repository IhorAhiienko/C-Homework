//task8.4
#include <stdio.h>
#include <stdlib.h>

#define N 10

int input_matr(int mas[N][N]) {
	for (size_t i = 0; i < N; i++) {
		for (size_t j = 0; j < N; j++) {
			printf("\na[%zu][%zu]=", i, j);
			scanf_s("%d", &mas[i][j]);
		}
	}
	return EXIT_SUCCESS;
}

void transp(int inp_matr[N][N], int out_matr[N][N]) {
	for (size_t i = 0; i < N; i++) {
		for (size_t j = 0; j < N; j++) {
			out_matr[i][j] = inp_matr[j][i];
		}
	}
}

void output(int mas[N][N]) {
	for (size_t i = 0; i < N; i++) {
		printf("\n");
		for (size_t j = 0; j < N; j++) {
			printf("\t a[%zu][%zu]=%d", i, j, mas[i][j]);
		}
	}
}


int main4() {
	int mas[N][N];
	input_matr(mas);
	int mas2[N][N];
	transp(mas, mas2);
	output(mas2);
	return 0;
}