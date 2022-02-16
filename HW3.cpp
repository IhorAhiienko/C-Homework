#include <stdio.h>
#include <math.h>

int main() {
	double x1, y1, x2, y2, x3, y3, s1, s2, s3, a1, a2, a3;
	printf("Enter first point");
	scanf_s("%lf %lf", &x1, &y1);
	printf("Enter third point");
	scanf_s("%lf %lf", &x2, &y2);
	printf("Enter third point");
	scanf_s("%lf %lf", &x3, &y3);
	s1 = pow((pow(x1 - x2, 2) + pow(y1 - y2, 2)), 1 / 2);
	s2 = pow((pow(x2 - x3, 2) + pow(y2 - y3, 2)), 1 / 2);
	s3 = pow((pow(x3 - x1, 2) + pow(y3 - y1, 2)), 1 / 2);
	a1 = acos((pow(s2, 2) + pow(s3, 2) - pow(s1, 2)) / (2 * s2 * s3));
	a2 = acos((pow(s1, 2) + pow(s3, 2) - pow(s2, 2)) / (2 * s1 * s3));
	a3 = acos((pow(s2, 2) + pow(s1, 2) - pow(s3, 2)) / (2 * s2 * s1));
	printf("the angles are:%lf,%lf and %lf", a1, a2, a3);
}