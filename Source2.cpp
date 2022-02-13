//task 3.4

#include <stdio.h>
#include <inttypes.h>//int8_t,int16_t
/*
short unsigned dobutok(unsigned char a, unsigned char b) {
	return (unsigned short)a * b;

}

int main() {
	unsigned char a, b;
	scanf("%hhu", &a);//input unsigned cahr - 8 bit on any platform
	scanf("%hhu", &b);
	printf("%hu", dobutok(a, b)); //short is 2 bytes almost everywhere
}*/

uint16_t dobutok(uint8_t a, uint8_t b) {
	return (uint16_t)a * b;

}

int main2() {
	uint8_t a, b;
	scanf_s("%hhu", &a);//i8 bit on any platform
	scanf_s("%hhu", &b);
	printf("%hu", dobutok(a, b)); //16 bit everywhere
	return 0;
}