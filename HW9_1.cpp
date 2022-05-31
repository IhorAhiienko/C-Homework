#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//task8.20
#pragma warning(disable : 4996)

#define N 2
#define M 2
int main() {
	int n, m, k;
	printf("n=");
	scanf("%d", &n);
	printf("m=");
	scanf("%d", &m);
	int** a = (int**)malloc(sizeof(int*) * n);
	int** b = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		a[i] = (int*)malloc(sizeof(int) * m);
		b[i] = (int*)malloc(sizeof(int) * m);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("a[%d][%d]= ", i, j);
			scanf("%lf", &a[i][j]);
		}
	}
	
	printf("Dont enter k longer or equal than M=%d\n", M);
	printf("Enter the jump length\n");
	scanf("%d", &k);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if ((j + k) >= M) {
				b[i][j] = a[i][M - k + j];
			}
			else {
				b[i][j] = a[i][j + k];
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	free(a);
	free(b);
	return 0;
}
