#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
//task 7.8æ

#define N 2

int get_int_len(int value) {
	int l = 1;
	while (value > 9) { l++; value /= 10; }
	return l;
}

int dec_to_bin(int num) {
	int a, s;
	int res;
	s = 0;
	res = 0;
	while (num>0){
		a = num % 2;
		res = res + a * pow(10, s);
		s++;
		num = num / 2;
	}
	return res;
}

int check(int value) {
	int a, b, c;
	value = value % 1000;
	if (value == 0 and value / 10 == 100) {
		a = 0;
		b = 0;
		c = 0;
	}
	else{
		a = value / 100;
		c = value % 10;
		b = (value & 100) / 10;
	}
	if (a == b == c == 1) {
		return 1;
	}
	return 0;
}

int main() {
	int mas[N],t,bin;
	t = 0;
	for (int i = 0; i < N; i++) {
		printf("a[%d]=", i);
		scanf("%d", &mas[i]);
	}
	for (int i = 0; i < N; i++) {
		printf("a[%d]=%d\n", i,mas[i]);
		bin = dec_to_bin(mas[i]);
		printf("bin(%d)=%d\n", mas[i], dec_to_bin(mas[i]));
		if (get_int_len(bin) > 7) {
			t += check(bin);
		}
		else {
			printf("the number's too short\n");
		}
	}
	printf("Result=%d", t);
}