#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    printf("x = ");
    scanf_s("%lf", &x);
    double res = pow(x, 5) + 5 * pow(x, 4) + 10 * pow(x, 3) + 10 * pow(x, 2) + 5 * x + 1;
    printf("x=%lf", res);
}
