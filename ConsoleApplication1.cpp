
//Task 1.8
/*#include <iostream>

int main()
{
    float var1, var2,p,d;
    scanf_s("%f", & var1);
    scanf_s("%f", & var2);
    p = var1 + var2;
    d = var1 * var2;
    printf("p=%f\n", p);
    printf("d=%f", d);

}*/

//Task 1.7

#include <stdio.h>
#include <math.h>
int main()
{
    double num;
    double num_integer, num_decimal;

    printf("Enter a number: ");
    scanf_s("%lf", &num);

    //int num_integer = (int)num;
    //float num_decimal = num - num_integer;

    //printf("Integer part: %d, Decimal part: %f\n", num_integer, num_decimal);

    num_decimal = modf(num, &num_integer);

    printf("Integer part: %lf, Decimal part: %lf\n", num_integer, num_decimal);
}