//task8.2
#include <stdio.h>

#define N 3
#define M 3

bool change(double mas[N][M], size_t i, size_t j, double a) {
	if (i >= N || j >= M) return false;
	mas[i][j] = a;
	return true;
}

void output(double mas[N][M]) {
	for (size_t i = 0; i < N; i++) {
		for (size_t j = 0; j < M; j++) {
			printf("a[%zu][%zu]=%lf", i, j, mas[i][j]);
		}
	}
}

int main3() {
	double mas[N][M] = { {1,2,3},{4,5,6},{7,8,9} };

	size_t i, j;//
	double a;
	printf("i,j,a:");
	scanf_s("%zu %zu %lf", &i, &j, &a);
	change(mas, i, j, a);
	output(mas);
	return 0;

}