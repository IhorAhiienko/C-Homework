#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//task 10.12
#pragma warning(disable : 4996)

typedef struct cost {
	unsigned int grn=0;
	unsigned int cop=0;
}cost;



int main1() {
	int k,sum1,sum2;
	printf("k=");
	scanf("%d", &k);
	sum1 = 0;
	sum2 = 0;
	cost* mas = (cost*)malloc(sizeof(cost) * k);
	for (int i = 0; i < k; i++) {
		printf("Enter grn of %ds product= ",i+1);
		scanf("%ud", &mas[i].grn);
		sum1 += mas[i].grn;
		printf("Enter cop of %ds product=\n ", i+1);
		printf("Must be >=0 and <100 ");
		scanf("%ud", &mas[i].cop);
		sum2 += mas[i].cop;
	}
	cost min;
	min.grn = INT_MAX;
	min.cop = INT_MAX;
	for (int i = 0; i < k; i++) {
		if (mas[i].grn < min.grn) {
			min.grn = mas[i].grn;
			min.cop = mas[i].cop;
		}
		else if (mas[i].grn == min.grn && mas[i].cop < min.cop) {
			min.cop = mas[i].cop;
		}
	}
	printf("Minimal cost of all products is: %d grn %d cop\n", min.grn, min.cop);

	cost max;
	max.grn = 0;
	max.cop = 0;
	for (int i = 0; i < k; i++) {
		if (mas[i].grn > max.grn) {
			max.grn = mas[i].grn;
			max.cop = mas[i].cop;
		}
		else if (mas[i].grn == min.grn && mas[i].cop > min.cop) {
			max.cop = mas[i].cop;
		}
	}
	printf("Maximal cost of all products is: %d grn %d cop\n", max.grn, max.cop);

	cost average;
	average.grn = sum1 / k + sum2 / 100 / k;
	average.cop = sum1 % k + sum2 % 100 / k;
	cost searched;
	for (int i = 0; i < k; i++) {
		if (average.grn - mas[i].grn < 10) {
			searched = mas[i];
		}
	}
	printf("Searched item is worth:%d grn %d cop", searched.grn, searched.cop);
	return 0;
}

