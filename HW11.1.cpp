#include <stdio.h>
#include <stdlib.h>
//task 9.9(á)
#pragma warning(disable : 4996)

int main1() {
	int n, m, k;
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
	while (true) {
		printf("k=");
		scanf("%d", &k);
		if (k >= m) {
			printf("k must be lower than m=%d", m);
		}
		else if (k <= 0) {
			printf("k must be above 0");
		}
		else {
			break;
		}
	}
	double** arr2 = (double**)malloc(sizeof(double*) * n);
	for (int i = 0; i < n; i++) {
		arr2[i] = (double*)malloc(sizeof(double) * (m + k));
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (m + k); j++) {
			if (j == k) {
				printf("a[%d][%d]= ", i, j);
				scanf("%lf", &arr2[i][j]);
			}
			else if (j < k) {
				arr2[i][j] = arr[i][j];
			}
			else {
				arr2[i][j] = arr[i][j - k];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (m + k); j++) {
			printf("%lf ", arr2[i][j]);
		}
		printf("\n");
	}
	free(arr);
	free(arr2);
	return 0;
}