#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//task 10.6(á)
#pragma warning(disable : 4996)


typedef struct time {
	unsigned int h=0;
	unsigned int m = 0;
	unsigned int s = 0;
};

time input_time() {
	time t;
	printf("Enter hours ");
	scanf("%u", &t.h);
	printf("Enter minutes ");
	scanf("%u", &t.m);
	printf("Enter seconds ");
	scanf("%u", &t.s);
	return t;
}

void print_time(time t) {
	printf("Current time is: %u:%u:%u ", t.h, t.m, t.s);
}

int main() {
	time t = input_time();
	print_time(t);
}