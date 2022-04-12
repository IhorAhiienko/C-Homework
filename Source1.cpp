//task7.5
#include <stdio.h>

#define N 50
//C++: const int N=50

//#define N 40

void odd_even(unsigned arr[],int n,int* od,int* ev){
	int odd = 0;
	int even = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
	}
	printf("odds=%d,even=%d", odd, even);
	*od = odd;
	*ev = even;

}

int main1() {
	int n;
	unsigned a[N];
	//printf("n=");
	//scanf_s("%d", &n);
	for (int i = 0; i < N; i++) {
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
		if (a[i] == 0) {
			n = i;
			break;
		}

	}
	for (int i = 0; i < n; i++) {
		printf("\t a[%d]=%u", i, a[i]);
	}
	int x, y;
	odd_even(a, n, &x, &y);
	printf("\n x=%d,y=%d", x, y);
	return 0;
}