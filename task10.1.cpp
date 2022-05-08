#include <stdio.h>

typedef struct Date {
	int day;
	int month;
	int year;

}Date;

void outputDate(Date x) {
	printf("%d.%d.%d:\n", x.day, x.month, x.year);
}

bool inputDate(Date* x) {
	printf("input day,month,year: ");
	return scanf_s("%d %d %d", &x->day, &((*x).month), &x->year)==3; //1,3 and 2 are the same
}

typedef struct ChessField{
	char vert;
	unsigned char hor;

}ChessField;

void outputCF(ChessField x) {
	printf("%c%hhu:\n", x.vert, x.hor);
}

bool inputCF(ChessField* x) {
	printf("input ChessField: ");
	scanf_s("%c", &x->vert);
	scanf_s("%hhu", &x->hor);
	if (x->vert >= 'a' && x->vert <= 'h' && x->hor >= 1 && x->vert <= 8) {
		return true;
	}
	x->vert = 0;
	x->hor = 0;
	return false;
}

int main() {
	Date d = { 13,4,2022 };
	outputDate(d);
	Date d1;
	if(inputDate(&d1)) {
		printf("once more");
		inputDate(&d1);
	}
	outputDate(d1);

	ChessField cf;
	if (inputCF(&cf)) {
		printf("once more");
		inputCF(&cf);
	}
	outputCF(cf);
	return 0;
}