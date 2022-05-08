#include <stdio.h>

int Day_In_Month[] = { 31,28,31,30,31,30,31,31, };

typedef struct Date {
	int day;
	int month;
	int year;

}Date;

bool leapYear(int year) {
	return year % 4 == 0;
}

void outputDate(Date x) {
	printf("%d.%d.%d:\n", x.day, x.month, x.year);
}

bool inputDate(Date* x) {
	printf("input day,month,year: ");
	if(scanf_s("%d %d %d", &x->day, &((*x).month), &x->year) != 3) { //1,3 and 2 are the same
		return false;
	}
	if (x->month == 0 || x->month > 12) return false;

	if (x->day > Day_In_Month[x->month - 1]) return false;
}

Date tomorrow(Date d) {
	Date tom = d;

	if (d.day == Day_In_Month[d.month - 1]) {
		if (d.month == 12) {
			tom.day = 1;
			tom.month = 1;
			tom.year++;
		}
		else {
			tom.day++;
		}
		return tom;
	}
}

char* Week_Day[] = {"Sat","Sun","Mon","Tue", };

char* day_of_week(Date d) {
	int days = 0;
	for (int i = 0; i < d.month - 1; i++) {
		days += Day_In_Month[i];
	}
	days = d.day;

	return Week_Day[days % 7];
}

int main() {
	Date d = { 13,4,2022 };
	outputDate(d);
	Date d1;
	if (inputDate(&d1)) {
		printf("once more");
		inputDate(&d1);
	}
	outputDate(d1);

}