#include <stdio.h>
#include <math.h>
//task8.20
#pragma warning(disable : 4996)

#define N 2
#define M 2
int main1() {
	int a[N][M] = { {1,2},{2,3} };
	int b[N][M];
	int k;
	printf("Dont enter k longer or equal than M=%d\n", M);
	printf("Enter the jump length\n");
	scanf("%d", &k);
	for (int i=0; i < N; i++) {
		for (int j=0; j < M; j++) {
			if ((j + k) >= M) {
				b[i][j] = a[i][M-k+j];
			}
			else {
				b[i][j] = a[i][j+k];
			}
		}
	}
	for (int i=0; i < N; i++) {
		for (int j=0; j < M; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}