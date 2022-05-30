#include <stdio.h>
#include <locale.h>
int main1a()
{
    setlocale(LC_ALL, "Ukrainian");

    float m1 = 2 + 3.0;
    float m2 = 2 / 3.0;
    printf("Результат дорiвнює = %.f ;%.f ;%.2lf", m1, 4.5 * 56, m2);
    return 1;

}