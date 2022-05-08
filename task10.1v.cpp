#include <stdio.h>
#include <stdlib.h>
typedef struct{
	float x, y;
}Vertex;

typedef struct {
	Vertex A;
	Vertex B;
}Rectangle;
int inputRectangle(Rectangle* r) {
	printf("A(x,y):");
	scanf_s("%f %f", &(r->A.x), &(r->A.y));
	printf("B(x,y):");
	scanf_s("%f %f", &(r->B.x), &(r->B.y));
	return EXIT_SUCCESS;
}

void outputRectangle(Rectangle r) {
	printf("A(%g,%g)-B(%g,%g)\n", r.A.x, r.A.y, r.B.x, r.B.y);
}

int main2() {
	Rectangle r;
	inputRectangle(&r);
	outputRectangle(r);
	return 0;
}