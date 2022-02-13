#include <stdio.h>
//task 1.10
int main()
{
    int x1, x2, x3, x4, x5;
    double y1, y2, y3, y4, y5;
    printf("x = ");
    scanf_s("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
    printf("y = ");
    scanf_s("%lf %lf %lf %lf %lf", &y1, &y2, &y3, &y4, &y5);
    printf("x | %d | | %d | | %d | | %d | | %d |\n", x1, x2, x3, x4, x5);
    printf("- | -- | | -- | | -- | | -- | | -- |\n");
    printf("y | %.2f | | %.2f | | %.2f | | %.2f | | %.2f |", y1, y2, y3, y4, y5);
}
