#include <stdio.h>
#include <ctype.h>
#pragma warning(disable : 4996)

typedef struct Rect {
	unsigned num;
	double Ax;
	double Ay;
	double Bx;
	double By;
};

int inputRect(Rect* x) {
	printf("n=");
	scanf("%u", &x->num);
	printf("Ax,y=");
	scanf("%lf %lf", &x->Ax, &x->Ay);
	printf("Bx,y=");
	scanf("%lf %lf", &x->Bx, &x->By);
	return 0;
}

void outRect(const Rect* x) {
	printf("%u: (%lf,%lf) - (%lf %lf)", x->Ax, x->Ay, x->Bx, x->By);

}

int writeRects(const char* fname) {
	FILE* fp = fopen(fname, "wb");
	//check file pointer
	Rect r;
	int count = 0;
	do {
		char c;
		do {
			printf("Next rectangle?y/n");
			scanf("%c",&c);
			//char c = (char) getchar();
		} while (tolower(c) != 'n' || tolower(c)!='y');
		if (c == 'n') break;
		if (inputRect(&r) == 0) {
			fwrite(&r, sizeof(r), 1, fp);
			count++;
		}
	} while (1);
	fclose(fp);
	return count;
}
double area(const Rect* r) {
	return (r->Ax - r->Bx) * (r->Ay - r->By);
}

int findMaxRect(const char* fname) {
	FILE* fp = fopen(fname, "rb");
	Rect rect;
	double squareMax = 0;
	Rect rmax;
	while (!feof(fp)) {
		int r = fread(&rect, sizeof(rect), 1, fp);
		if (r != 1) break;
		if (area(&rect)>squareMax) {
			squareMax = area(&rect);
			rmax = rect;
		}
	}
	outRect(&rmax);
	printf(":%g\n", area(&rmax));
	return rmax.num;
}